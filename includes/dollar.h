class Dollar {
 public:
  int amount;
  Dollar(int amount);
  Dollar times(int multiplier);
  bool operator==(Dollar& other);
};
