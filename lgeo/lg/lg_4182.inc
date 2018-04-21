/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980821 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4182: Train Door 1 x 4 x 5 Right                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4182)
#else
#declare lg_angle=atan2(LG_CORNER_SPACE, LG_BRICK_WIDTH/2-LG_CORNER_SPACE);
#declare lg_4182 =
union {
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  union {
   cylinder {
    <0, 0, 0>,
    <0, 0, -5*LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <0, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH>,
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -5*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 sphere {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
  }
  union {
   box {
    <-0.5, 0, 0.1>,
    <0.5, 0.5, -0.1>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <LG_E, -0.5, 0.1>,
    <0.5, 0.5, -0.1>
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
 }
 sphere {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
  }
  union {
   box {
    <-0.5, 0, 0.1>,
    <0.5, 0.5, -0.1>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <LG_E, -0.5, 0.1>,
    <0.5, 0.5, -0.1>
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -5*LG_BRICK_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  union {
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -5*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   box {
    <0, -2*LG_WALL_WIDTH, LG_WALL_WIDTH>,
    <3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <3*LG_WALL_WIDTH, 0, LG_WALL_WIDTH>,
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <-3.5*LG_BRICK_WIDTH-LG_E, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH, LG_E, LG_E>
   }
   box {
    <-3.5*LG_BRICK_WIDTH-LG_E, -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH, LG_E, -5*LG_BRICK_HEIGHT-LG_E>
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, 0>
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_BRICK_WIDTH/2
  }
  union {
   box {
    <0, -2*LG_WALL_WIDTH, LG_WALL_WIDTH>,
    <3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <-0.5, 0, 0.1>,
    <0.5, 0.5, -5>
    rotate <0, 0, lg_angle*180/pi>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -5*LG_BRICK_HEIGHT-LG_E/10>,
    LG_KNOB_RADIUS
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, 0>
 }
 difference {
  cylinder {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <-3*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-3*LG_BRICK_WIDTH, 0, -4>,
   <-3*LG_BRICK_WIDTH, 0, -5*LG_BRICK_HEIGHT-LG_E/10>,
   LG_KNOB_RADIUS
  }
 }
 box {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>,
  <-3*LG_BRICK_WIDTH, -1.5*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 difference {
  box {
   <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
   <-3*LG_BRICK_WIDTH, 0, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
  }
  union {
   sphere {
    <-LG_BRICK_WIDTH, -0.12, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    0.08
   }
   sphere {
    <-2*LG_BRICK_WIDTH, -0.12, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    0.08
   }
  }
 }
 difference {
  union {
   box {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>
   }
   box {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    <-3*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_WALL_WIDTH/2>
   }
   cylinder {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, 0>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE-LG_E>,
    0.2-LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_WALL_WIDTH>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>,
    0.2
   }
  }
  union {
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, LG_E>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_WALL_WIDTH-LG_E>,
    0.08
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, LG_E>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>,
    0.08+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.08+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>
 }
 torus {
  0.2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <-0.2, -0.1, 0>,
   <0, 0.1, 0.2>
  }
  translate <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <0.2, -0.1, 0>,
   <0, 0.1, 0.2>
  }
  translate <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <-0.2, -0.1, 0>,
   <0, 0.1, -0.2>
  }
  translate <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <0.2, -0.1, 0>,
   <0, 0.1, -0.2>
  }
  translate <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-5*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
  <-5*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <0, -LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
   <-3*LG_BRICK_WIDTH, -1.5*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
    <-3*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH>
   }
  }
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.16, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH>
 }
 box {
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH/2-0.16, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 box {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH>
 }
 box {
  <-2.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE+LG_E, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 object {
  lg_tech_knob_logo
  scale <1, -1, 1>
 }
 matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
}

#declare lg_4182_clear =
merge {
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <0, 0, -LG_CORNER_SPACE>
 }
 torus {
  LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  merge {
   cylinder {
    <0, 0, 0>,
    <0, 0, -5*LG_BRICK_HEIGHT>,
    LG_BRICK_WIDTH/2-LG_CORNER_SPACE
   }
   cylinder {
    <0, 0, -LG_CORNER_SPACE>,
    <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_BRICK_WIDTH/2
   }
  }
  union {
   box {
    <0, -2*LG_WALL_WIDTH, -LG_WALL_WIDTH>,
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
   }
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -5*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
  }
 }
 sphere {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
  }
  union {
   box {
    <-0.5, 0, 0.1>,
    <0.5, 0.5, -0.1>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <LG_E, -0.5, 0.1>,
    <0.5, 0.5, -0.1>
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>
 }
 sphere {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  torus {
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE,
   LG_CORNER_SPACE
   rotate <90,0,0>
  }
  union {
   box {
    <-0.5, 0, 0.1>,
    <0.5, 0.5, -0.1>
    rotate <0, 0, lg_angle*180/pi>
   }
   box {
    <LG_E, -0.5, 0.1>,
    <0.5, 0.5, -0.1>
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
 }
 cylinder {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  cylinder {
   <0, 0, 0>,
   <0, 0, -5*LG_BRICK_HEIGHT>,
   LG_BRICK_WIDTH/2-LG_CORNER_SPACE
  }
  union {
   cylinder {
    <0, 0, -LG_WALL_WIDTH>,
    <0, 0, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    LG_KNOB_RADIUS
   }
   cylinder {
    <0, 0, -5*LG_BRICK_HEIGHT-LG_E>,
    <0, 0, -3*LG_BRICK_HEIGHT>,
    LG_KNOB_RADIUS
   }
   box {
    <0, -2*LG_WALL_WIDTH, LG_WALL_WIDTH>,
    <3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <3*LG_WALL_WIDTH, 0, LG_WALL_WIDTH>,
    <-3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <-3.5*LG_BRICK_WIDTH-LG_E, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH, LG_E, LG_E>
   }
   box {
    <-3.5*LG_BRICK_WIDTH-LG_E, -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH, LG_E, -5*LG_BRICK_HEIGHT-LG_E>
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, 0>
 }
 difference {
  cylinder {
   <0, 0, -LG_CORNER_SPACE>,
   <0, 0, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_BRICK_WIDTH/2
  }
  union {
   box {
    <0, -2*LG_WALL_WIDTH, LG_WALL_WIDTH>,
    <3*LG_WALL_WIDTH, 3*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT-LG_E>
   }
   box {
    <-0.5, 0, 0.1>,
    <0.5, 0.5, -5>
    rotate <0, 0, lg_angle*180/pi>
   }
   cylinder {
    <0, 0, LG_E>,
    <0, 0, -5*LG_BRICK_HEIGHT-LG_E/10>,
    LG_KNOB_RADIUS
   }
  }
  translate <-3*LG_BRICK_WIDTH, 0, 0>
 }
 difference {
  cylinder {
  <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   <-3*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
   LG_CORNER_SPACE
  }
  cylinder {
   <-3*LG_BRICK_WIDTH, 0, -4>,
   <-3*LG_BRICK_WIDTH, 0, -5*LG_BRICK_HEIGHT-LG_E/10>,
   LG_KNOB_RADIUS
  }
 }
 box {
  <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -5*LG_BRICK_HEIGHT>,
  <-3*LG_BRICK_WIDTH, -1.5*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 difference {
  box {
   <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>,
   <-3*LG_BRICK_WIDTH, 0, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>
  }
  union {
   sphere {
    <-LG_BRICK_WIDTH, -0.12, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    0.08
   }
   sphere {
    <-2*LG_BRICK_WIDTH, -0.12, -3*LG_BRICK_HEIGHT+LG_WALL_WIDTH>,
    0.08
   }
  }
 }
 difference {
  merge {
   box {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>
   }
   box {
    <0, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, 0>,
    <-3*LG_BRICK_WIDTH, -LG_CORNER_SPACE, -LG_WALL_WIDTH/2>
   }
   cylinder {
    <0, -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-3*LG_BRICK_WIDTH-(LG_BRICK_WIDTH/2-LG_CORNER_SPACE)*cos(lg_angle), -LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, 0>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE-LG_E>,
    0.2-LG_CORNER_SPACE
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_WALL_WIDTH>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>,
    0.2
   }
  }
  union {
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, LG_E>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_WALL_WIDTH-LG_E>,
    0.08
   }
   cylinder {
    <-1.5*LG_BRICK_WIDTH, -0.12, LG_E>,
    <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>,
    0.08+LG_CORNER_SPACE
   }
  }
 }
 torus {
  0.08+LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>
 }
 torus {
  0.2-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90,0,0>
  translate <-1.5*LG_BRICK_WIDTH, -0.12, -LG_CORNER_SPACE>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <-0.2, -0.1, 0>,
   <0, 0.1, 0.2>
  }
  translate <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <0.2, -0.1, 0>,
   <0, 0.1, 0.2>
  }
  translate <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <-0.2, -0.1, 0>,
   <0, 0.1, -0.2>
  }
  translate <-2.5*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
 }
 intersection {
  torus {
   LG_WALL_WIDTH+LG_CORNER_SPACE,
   LG_CORNER_SPACE
  }
  box {
   <0.2, -0.1, 0>,
   <0, 0.1, -0.2>
  }
  translate <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
 }
 cylinder {
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
  <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-5*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
  <-5*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 difference {
  box {
   <0, -LG_BRICK_WIDTH/2, -LG_CORNER_SPACE>,
   <-3*LG_BRICK_WIDTH, -1.5*LG_WALL_WIDTH, -5*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
  }
  union {
   box {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH-LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
   }
   box {
    <-LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-LG_BRICK_WIDTH/2-LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -LG_PLATE_HEIGHT-LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH+LG_CORNER_SPACE
   }
   cylinder {
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    <-5*LG_BRICK_WIDTH/2+LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -3*LG_BRICK_HEIGHT+3*LG_WALL_WIDTH>,
    LG_WALL_WIDTH
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2-LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
    <-3*LG_BRICK_WIDTH+1.5*LG_WALL_WIDTH, -LG_BRICK_WIDTH/4, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH>
   }
  }
 }
 box {
  <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.16, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH>
 }
 box {
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, -LG_BRICK_WIDTH/2-0.16, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2+LG_E, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 sphere {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 cylinder {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
  LG_CORNER_SPACE
 }
 box {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH>
 }
 box {
  <-2.7*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-0.1, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 box {
  <-2.7*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2, -3*LG_BRICK_HEIGHT+2*LG_WALL_WIDTH+LG_CORNER_SPACE>,
  <-3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_WIDTH/2-0.2+LG_CORNER_SPACE+LG_E, -3*LG_BRICK_HEIGHT+5*LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 object {
  lg_tech_knob_logo_clear
  scale <1, -1, 1>
 }
 matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
}

#end

