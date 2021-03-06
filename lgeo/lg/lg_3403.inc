/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19970925 Lutz Uhlmann                                                       */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_3403: Turntable 4 x 4 Base                                               */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_3403)
#else
#declare lg_3403 =
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+0.04, -LG_BRICK_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  union {
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    0.56
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, -LG_WALL_WIDTH>,
    0.56-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_WALL_WIDTH>,
    0.4
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_TOP_HEIGHT>,
    0.48
   }
   cone {
    <0, 0, -LG_WALL_WIDTH+LG_E>, 0.48,
    <0, 0, -LG_PLATE_HEIGHT>, 0.4
   }
  }
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 difference {
  cylinder {
   <0, 0, -0.3>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   1.35
  }
  cylinder {
   <0, 0, -0.3+LG_E>,
   <0, 0, -2*LG_PLATE_HEIGHT-2*LG_E>,
   1.35-LG_WALL_WIDTH
  }
 }
}

#declare lg_3403_clear =
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+0.04, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_BRICK_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-0.04, 2*LG_BRICK_WIDTH-0.04, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+0.04, -LG_BRICK_HEIGHT>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04>,
    <2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.04+LG_CORNER_SPACE>,
    <2*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, 0, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_BRICK_HEIGHT>
   }
   #if (ROT = 1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end
 difference {
  merge {
   box {
    <2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT>,
    <-2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_PLATE_HEIGHT-LG_TOP_HEIGHT>
   }
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>,
    0.56
   }
   cylinder {
    <0, 0, -LG_PLATE_HEIGHT>,
    <0, 0, -LG_WALL_WIDTH>,
    0.56-LG_CORNER_SPACE
   }
  }
  union {
   cylinder {
    <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
    <0, 0, -LG_WALL_WIDTH>,
    0.4
   }
   cylinder {
    <0, 0, -3*LG_PLATE_HEIGHT>,
    <0, 0, -2*LG_PLATE_HEIGHT+LG_TOP_HEIGHT>,
    0.48
   }
   cone {
    <0, 0, -LG_WALL_WIDTH+LG_E>, 0.48,
    <0, 0, -LG_PLATE_HEIGHT>, 0.4
   }
  }
 }
 torus {
  0.56-LG_CORNER_SPACE,
  LG_CORNER_SPACE
  rotate <90, 0, 0>
  translate <0, 0, -LG_WALL_WIDTH-LG_CORNER_SPACE>
 }
 difference {
  cylinder {
   <0, 0, -0.3>,
   <0, 0, -2*LG_PLATE_HEIGHT-LG_E>,
   1.35
  }
  cylinder {
   <0, 0, -0.3+LG_E>,
   <0, 0, -2*LG_PLATE_HEIGHT-2*LG_E>,
   1.35-LG_WALL_WIDTH
  }
 }
}

#end
