#include <ncpp/NotCurses.hh>

void UpdateScore()
{
  scoreplane_->printf(1, ncpp::NCAlign::Left, "level: %02d score: %" PRIu64, level_, score_);
}
