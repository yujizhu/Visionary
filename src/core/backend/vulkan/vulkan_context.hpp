#ifndef vulkan_context_hpp
#define vulkan_context_hpp

#include <memory>

#include <vulkan/vulkan.h>

namespace visionary {

class VulkanSharedContext : public std::enable_shared_from_this<VulkanSharedContext> {
  public:
    ~VulkanSharedContext();
    static std::shared_ptr<VulkanSharedContext> fetchSharedContext();
  private:
    VulkanSharedContext();
  
  private:
    VkInstance instance_;
};

class VulkanContext {
  public:


  public:

    std::shared_ptr<VulkanSharedContext> shared_contex_{nullptr};
};

}

#endif