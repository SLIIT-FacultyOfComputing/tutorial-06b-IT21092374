class Box {
    private:
       int length;
       int width;
       int height;
    public:
      void setWidth(int w);
      int getWidth();
      void setLength(int l);
      int getLength();
      void setHeight(int h);
      int getHeight();
      int calcVolume();
};
