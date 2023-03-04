#ifndef visionary_clock_hpp
#define visionary_clock_hpp

namespace visionary {

class VClockImpl;
class VClock {
  public:
    VClock();
    ~VClock();

    
    
  private:
    VClockImpl* impl_;
};

};

#endif