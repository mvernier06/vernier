
class character{
  public:
    character();
    void Accelerate();
    void Break();
    inline float speed()const{
      return this->speed_;
    }
    inline float max_speed()const{
      return this->max_speed_;
    }
  private:
    float speed_;
    float max_speed_;
};
