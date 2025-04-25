int8 game_stage #比赛阶段，0：未开始比赛，1：准备阶段，2：15秒裁判自检阶段，3：5秒倒计时阶段，4：比赛中，5：比赛结算中
int8 gain_area_detected #检测到达增益区
int8 gain_area_status #增益区内状态
int8 supply_area_status #是否在补给区内
int16 stage_time_remain #比赛阶段时间
int16 current_hp #当前血量
int16 rotate_flag #是否开始小陀螺
uint32 STATUS_ATTACKING = 3
uint32 STATUS_RETREATING = 4
uint32 STATUS_DEFENDING = 5
uint32 STATUS_HEALING = 6
