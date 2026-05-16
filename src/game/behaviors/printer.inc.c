#include <PR/ultratypes.h>
#include "sm64.h"
#include "types.h"
#include "object_constants.h"
#include "game/object_helpers.h"
#include "game/ingame_menu.h"
#include "game/level_update.h"
#include "engine/math_util.h"
#include "game/print.h"
#include "game/mario.h"
#include "game/mario_actions_cutscene.h"

char *strings[] = {
    "JUMP",
    "DIE",
    "JUMP DOWN THE ABYSS",
    "YOU SAW TOO MUCH",
    "PLEASE SAVE US",
    "NO HE LOVES RED",
    "YOU SHALL LIVE",
    "FOR HE IS KING",
    "CROWN HER",
    "I WATCH"
};

void bhv_text_on_screen_loop(void) {
    struct Object *obj = gCurrentObject;
    if (obj == NULL) return;
    
    // DONT COMMENT THIS!!!
    obj->oFaceAngleYaw += 0x100;

    u32 bparam = obj->oBehParams;
    s32 distByte = (bparam >> 24) & 0xFF;
     s32 flickerByte = bparam & 0xFF; 

    f32 maxDist = (distByte == 0) ? 1500.0f : (f32)(distByte * 20.0f); 

    // DEBUG!!! only uncomment if you want to check the position relative to mario
     //char dbg[20]; sprintf(dbg, "D %d M %d", (s32)obj->oDistanceToMario, (s32)maxDist); print_text(20, 20, dbg);

    
    if (obj->oDistanceToMario < maxDist) {
        if (flickerByte > 0) {
            if ((random_u16() % 100) < flickerByte) {
                return; 
            }
        }

        s32 strIdx = (bparam >> 16) & 0xFF;
        if (strIdx > 9) strIdx = 0; 

        s32 yPos = (bparam & 0x00FF0000) ? 120 : 40;
        
        print_text_centered(160, yPos, strings[strIdx]);
    }
}

