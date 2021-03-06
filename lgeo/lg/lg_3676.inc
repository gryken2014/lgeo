/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980319 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3676: Slope Brick 45 2 x 2 Inverted Double Convex                        */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3676)
#else
#declare lg_angle = atan2(LG_BRICK_WIDTH, LG_BRICK_WIDTH);
#declare lg_3676 =
union {
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2+LG_E, 0>,
    <-LG_E, LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH>
    rotate <0, -lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2-0.12, 0>,
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, -LG_BRICK_HEIGHT>
   }
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, -LG_BRICK_WIDTH>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+0.12, -LG_BRICK_WIDTH/2+LG_E, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.12, -LG_CORNER_SPACE-LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  <-LG_BRICK_WIDTH/2+0.12, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_WALL_WIDTH>
   rotate <0, -lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH+LG_E, 0, -LG_BRICK_WIDTH>
   rotate <-lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0.8*LG_WALL_WIDTH>
   rotate <-lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH>
   rotate <0, -lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
 }
 box {
  <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  object {
   lg_knob_inner_space
   translate <0, 0, -LG_TOP_HEIGHT>
  }
 }
 box {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 difference {
  union {
   box {
    <1.5*LG_BRICK_WIDTH-0.12, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+0.12, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   difference {
    union {
     box {
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH-LG_E>, 
      LG_KNOB_INNER_RADIUS 
     }
    }
   }
   difference {
    union {
     box {
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
      LG_KNOB_INNER_RADIUS 
     }
    }
   }
   difference {
    union {
     box {
      <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
      LG_KNOB_INNER_RADIUS 
     }
    }
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
    <0, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH/2>
    rotate <0, -lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2>,
    <-LG_BRICK_WIDTH/2, 0, LG_WALL_WIDTH/2>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_knob
 }
}

#declare lg_3676_clear =
merge {
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 sphere {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE,-1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2+LG_E, 0>,
    <-LG_E, LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, -LG_BRICK_WIDTH>
    rotate <0, -lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH/2-LG_E, LG_BRICK_WIDTH/2-0.12, 0>,
    <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_WALL_WIDTH-LG_E, -LG_BRICK_HEIGHT>
   }
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH/2-LG_E, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, 0, -LG_BRICK_WIDTH>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+0.12, -LG_BRICK_WIDTH/2+LG_E, 0>,
    <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH+LG_E, -1.5*LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
  }
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_WALL_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-0.12, -LG_CORNER_SPACE-LG_E>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
  <-LG_BRICK_WIDTH/2+0.12, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE-LG_E>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.8*LG_WALL_WIDTH>
   rotate <0, -lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH+LG_E, 0, -LG_BRICK_WIDTH>
   rotate <-lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle), 0>,
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0.8*LG_WALL_WIDTH>
   rotate <-lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, 0>,
   <0, -1.5*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH>
   rotate <0, -lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
 }
 box {
  <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
 }
 difference {
  box {
   <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  object {
   lg_knob_inner_space_clear
   translate <0, 0, -LG_TOP_HEIGHT>
  }
 }
 box {
  <1.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_WALL_WIDTH+LG_CORNER_SPACE>
 }
 difference {
  merge {
   box {
    <1.5*LG_BRICK_WIDTH-0.12, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
    <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+0.12, -2*LG_WALL_WIDTH+LG_CORNER_SPACE>
   }
   difference {
    merge {
     box {
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH/2>
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, 0, -LG_BRICK_WIDTH-LG_E>, 
      LG_KNOB_INNER_RADIUS 
     }
    }
   }
   difference {
    merge {
     box {
      <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
      LG_KNOB_INNER_RADIUS 
     }
    }
   }
   difference {
    merge {
     box {
      <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>,
      <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2>
     }
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS
     }
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH>,
      LG_KNOB_RADIUS-LG_CORNER_SPACE
     }
    }
    union {
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT+LG_E>,
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>,
      LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE
     }
     cylinder {
      <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT>,
      <0, -LG_BRICK_WIDTH, -LG_BRICK_WIDTH-LG_E>, 
      LG_KNOB_INNER_RADIUS 
     }
    }
   }
  }
  union {
   box {
    <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2>,
    <0, -1.5*LG_BRICK_WIDTH, LG_WALL_WIDTH/2>
    rotate <0, -lg_angle*180/pi, 0>
    translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <1.5*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2>,
    <-LG_BRICK_WIDTH/2, 0, LG_WALL_WIDTH/2>
    rotate <-lg_angle*180/pi, 0, 0>
    translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, 0, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_INNER_RADIUS+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 torus {
  LG_KNOB_RADIUS-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, -LG_BRICK_WIDTH, LG_KNOB_HEIGHT-LG_CORNER_SPACE>
 }
 object {
  lg_knob_clear
 }
}

#declare lg_3676_slope =
union {
 difference {
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
   <0, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.2*LG_WALL_WIDTH>
   rotate <0, -lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/cos(lg_angle), -LG_CORNER_SPACE*sin(pi/4)*sin(lg_angle)>,
   <1.5*LG_BRICK_WIDTH+LG_E, 0, -LG_BRICK_WIDTH>
   rotate <-lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
 }
 difference {
  box {
   <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/cos(lg_angle), -LG_CORNER_SPACE>,
   <1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0, 0.2*LG_WALL_WIDTH>
   rotate <-lg_angle*180/pi, 0, 0>
   translate <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  box {
   <LG_BRICK_WIDTH/cos(lg_angle), -LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_CORNER_SPACE*sin(pi/4)*sin(lg_angle)>,
   <0, -1.5*LG_BRICK_WIDTH-LG_E, -LG_BRICK_WIDTH>
   rotate <0, -lg_angle*180/pi, 0>
   translate <LG_BRICK_WIDTH/2-LG_CORNER_SPACE, 0, -LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
 }
}

#end
