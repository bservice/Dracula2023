// Here, a define should be made for every lamp on the machine.
// For demonstration, here are some example lamps that are typical
// for different architectures. This section should be deleted
// when implementing a particular machine.

// Delete all these lamp definitions when implementing a particular
// machine. There's a conditional based on architecture here --
// that should be deleted too. It's just here to provide base
// functionality.

// All of Dracula's lamps added here. Numbered from 10 on - does NOT match the numbers on the tech chart (not sure it matters)

#define LAMP_HEAD_SAME_PLAYER_SHOOTS_AGAIN  10
#define LAMP_1ST_PLAYER_UP					11
#define LAMP_2ND_PLAYER_UP					12
#define LAMP_3RD_PLAYER_UP					13
#define LAMP_4TH_PLAYER_UP					14
#define LAMP_BALL_IN_PLAY					15
#define LAMP_BAT_ONE						16
#define LAMP_BAT_TWO						17
#define LAMP_BAT_THREE						18
#define LAMP_BAT_FOUR						19
#define LAMP_BONUS_2K						20
#define LAMP_BONUS_4K						21
#define LAMP_BONUS_6K						22
#define LAMP_BONUS_8K						23
#define LAMP_BONUS_10K						24
#define LAMP_BONUS_20K						25
#define LAMP_BONUS_5X						26
#define LAMP_CAT_ONE						27
#define LAMP_CAT_TWO						28
#define LAMP_CAT_THREE						29
#define LAMP_CAT_FOUR						30
#define LAMP_CENTER_SPECIAL					31
#define LAMP_DOUBLE_BONUS					32
#define LAMP_EXTRA_BALL_INLANE				33
#define LAMP_HEAD_GAME_OVER					34
#define LAMP_HEAD_HIGHEST_SCORE				35
#define LAMP_SPECIAL_INLANE					36
#define LAMP_SPINNER						38
#define LAMP_HEAD_MATCH						39
#define LAMP_HEAD_PLAYER_1					40
#define LAMP_HEAD_PLAYER_2					41
#define LAMP_HEAD_PLAYER_3					42
#define LAMP_HEAD_PLAYER_4					43
#define LAMP_PLUS_4K_TARGETS				44
#define LAMP_PLUS_4K_DROPS					45
#define LAMP_PLUS_DOUBLE_BONUS				46
#define LAMP_SHOOT_AGAIN					47
#define LAMP_STAR_1							48
#define LAMP_STAR_2							49
#define LAMP_STAR_3							50
#define LAMP_TARGET_X						51
#define LAMP_TARGET_Y						52
#define LAMP_TARGET_Z						53
#define LAMP_HEAD_TILT						54




// Delete all these switch definitions when implementing a particular
// machine. There's a conditional based on architecture here --
// that should be deleted too. It's just here to provide base
// functionality.

// All of Dracula's switches added here. Numbered using the numbers on the switch matrix

#define SW_RIGHT_OUTLANE            1
#define SW_RIGHT_INLANE             2
#define SW_LEFT_OUTLANE             3
#define SW_LEFT_INLANE              4
#define SW_1000_ADV_STAR            5
#define SW_CREDIT_BUTTON            6
#define SW_TILT                     7
#define SW_PLUMB_TILT               7
#define SW_ROLL_TILT                7
#define SW_OUTHOLE                  8
#define SW_RIGHT_COIN               9
#define SW_CENTER_COIN              10
#define SW_LEFT_COIN                11
#define SW_4_BANK_DROP_1            12
#define SW_SPINNER                  15
#define SW_SLAM						16
#define SW_ROLLOVER_BUTTON			17
#define SW_1000_ADV_BONUS 			18
#define SW_10_POINTS	 			19
#define SW_4_BANK_DROP_2 			20
#define SW_3_BANK_DROP_2 			21
#define SW_TARGET_Z		 			22
#define SW_TARGET_X		 			23
#define SW_TARGET_Y		 			24
#define SW_4_BANK_DROP_3 			28
#define SW_3_BANK_DROP_1 			29
#define SW_ROLLOVER_BUTTON			32
#define SW_CENTER_POP				33
#define SW_RIGHT_POP				34
#define SW_LEFT_POP					35
#define SW_4_BANK_DROP_4			36
#define SW_3_BANK_DROP_3			37
#define SW_RIGHT_SLING				38
#define SW_LEFT_SLING				39
#define SW_SAUCER					40
#define SW_CREDIT_RESET           	41

// All of Dracula's solenoids, numbered using the coil table numbers

#define SOL_LEFT_POP                7
#define SOL_RIGHT_POP               8
#define SOL_CENTER_POP              9
#define SOL_OUTHOLE			        10
#define SOL_LEFT_SLING              16
#define SOL_RIGHT_SLING             11
#define SOL_SAUCER                  12
#define SOL_KNOCKER                 17
#define SOLCONT_COIN_LOCKOUT        19
#define SOL_3_BANK_RESET	        13
#define SOL_4_BANK_RESET	        15
#define SOL_FLIPPER_ENABLING_RELAY  18





// Machines with a -17, -35, 100, and 200 architecture
// almost always have software based switch-triggered solenoids. 
// For those, you can define an array of solenoids and the switches
// that will trigger them:

#define NUM_SWITCHES_WITH_TRIGGERS          5 // total number of solenoid/switch pairs
#define NUM_PRIORITY_SWITCHES_WITH_TRIGGERS 5 // This number should match the define above

struct PlayfieldAndCabinetSwitch SolenoidAssociatedSwitches[] = {
  { SW_RIGHT_SLING, SOL_RIGHT_SLING, 2},
  { SW_LEFT_SLING, SOL_LEFT_SLING, 2},
  { SW_LEFT_POP, SOL_LEFT_POP, 1},
  { SW_RIGHT_POP, SOL_RIGHT_POP, 1},
  { SW_CENTER_POP, SOL_CENTER_POP, 1},
};
