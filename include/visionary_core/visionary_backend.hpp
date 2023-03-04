#include <cstdint>

namespace visionary {

class Backend {
  public:
    Backend() = default;
    virtual ~Backend() = default;
    virtual int32_t initialize() = 0;
    virtual void shutdown() = 0;
};

};