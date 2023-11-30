#include <functional>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "gps/msg/gps.hpp"


using std::placeholders::_1;


class MainSubscriber : public rclcpp::Node {
  public:
    MainSubscriber() : Node("main_subscriber") {
      subscription_ = this->create_subscription<gps::msg::GPS>("main", 1, std::bind(&MainSubscriber::topic_callback, this, _1));
    }

  private:
    void topic_callback(const gps::msg::GPS& msg) const {
      RCLCPP_INFO(this->get_logger(), "I heard: (%f | %f)", msg.lat, msg.lon);
    }

    rclcpp::Subscription<gps::msg::GPS>::SharedPtr subscription_;
};


int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<MainSubscriber>());
  rclcpp::shutdown();
  return 0;
}
