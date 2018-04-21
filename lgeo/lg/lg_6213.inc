/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990512 Lutz Uhlmann                                                       */
/* 20080121 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6213: Brick 2 x 6 x 3                                                    */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6213)
#else
#declare LENGTH = 2;
#declare WIDTH = 6;
#declare lg_6213 = 
union {
 #declare ROT = 0;
 #while (ROT < 2)
  union {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT-LG_E>
   }
   #declare KNOB_X=-WIDTH/2+0.5;
   #while (KNOB_X < WIDTH/2)
    object {
     lg_knob_inner_space
     translate <LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -WIDTH/2+0.5;
 #while (KNOB_X < WIDTH/2)
  object {
   lg_knob
   translate <LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob
   translate <-LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_X = KNOB_X +1;
 #end
 #declare CYL_X = -WIDTH/2+1;
 #while (CYL_X < WIDTH/2)
  union {
   difference {
    cylinder {
     <0, 0, -LG_TOP_HEIGHT+LG_E>,
     <0, 0, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
     LG_CYLINDER_RADIUS
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -3*LG_BRICK_HEIGHT>,
     LG_KNOB_RADIUS
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
    LG_CYLINDER_WALL_WIDTH/2
    rotate <90, 0, 0>
    translate <0, 0, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+LG_E, -0.04, -2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.04, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS-LG_E, -0.04, -2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
   }
   translate <0, CYL_X*LG_BRICK_WIDTH,0>
  }
  #declare CYL_X = CYL_X + 1;
 #end
}

#declare lg_6213_clear = 
merge {
 #declare ROT = 0;
 #while (ROT < 2)
  merge {
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   sphere {
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>, LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   #if (ROT=1)
    rotate <0, 0, 180>
   #end
  }
  #declare ROT = ROT + 1;
 #end 
 difference {
  merge {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_CORNER_SPACE, WIDTH/2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -WIDTH/2*LG_BRICK_WIDTH, -3*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
  }
  union {
   box {
    <LENGTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, WIDTH/2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_TOP_HEIGHT>,
    <-LENGTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -WIDTH/2*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_HEIGHT-LG_E>
   }
   #declare KNOB_X=-WIDTH/2+0.5;
   #while (KNOB_X < WIDTH/2)
    object {
     lg_knob_inner_space_clear
     translate <LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB_X = KNOB_X + 1;
   #end
  }
 }
 #declare KNOB_X = -WIDTH/2+0.5;
 #while (KNOB_X < WIDTH/2)
  object {
   lg_knob_clear
   translate <LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, 0>
  }
  object {
   lg_knob_clear
   translate <-LG_BRICK_WIDTH/2, KNOB_X*LG_BRICK_WIDTH, 0>
  }
  #declare KNOB_X = KNOB_X +1;
 #end
 #declare CYL_X = -WIDTH/2+1;
 #while (CYL_X < WIDTH/2)
  merge {
   difference {
    cylinder {
     <0, 0, -LG_TOP_HEIGHT+LG_E>,
     <0, 0, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>,
     LG_CYLINDER_RADIUS
    }
    cylinder {
     <0, 0, 0>,
     <0, 0, -3*LG_BRICK_HEIGHT>,
     LG_KNOB_RADIUS
    }
   }
   torus {
    LG_KNOB_RADIUS+LG_CYLINDER_WALL_WIDTH/2,
    LG_CYLINDER_WALL_WIDTH/2
    rotate <90, 0, 0>
    translate <0, 0, -3*LG_BRICK_HEIGHT+LG_CYLINDER_WALL_WIDTH/2>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 0.04, -LG_CORNER_SPACE>,
    <LG_KNOB_RADIUS+LG_E, -0.04, -2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
   }
   box {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 0.04, -LG_CORNER_SPACE>,
    <-LG_KNOB_RADIUS-LG_E, -0.04, -2*LG_BRICK_HEIGHT-LG_TOP_HEIGHT>
   }
   translate <0, CYL_X*LG_BRICK_WIDTH,0>
  }
  #declare CYL_X = CYL_X + 1;
 #end
}

#end