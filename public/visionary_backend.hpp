#include <cstdint>

namespace visionary {

class Backend {
  public:
    Backend() = default;
    virtual ~Backend() = default;
    virtual int32_t initialize() = 0;
    void int32_t shutdown() = 0;
};

};