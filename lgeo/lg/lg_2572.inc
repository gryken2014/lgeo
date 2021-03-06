/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980508 Lutz Uhlmann                                                       */
/* 20050122 Lars C. Hassing   Corrected clear part (name and added merges)     */
/* 20071127 Lutz Uhlmann fixed stud orientation                                */
/* 20071129 Lutz Uhlmann changed height from 10 to 9 Bricks                    */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_2572 Panel 6 x 6 x 9 with curved Top                                     */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_2572)
#else
#declare lg_2572 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
     }
     torus {
      4*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
     }
     difference {
      cylinder {
       <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
       <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>,
       4*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -4*LG_BRICK_WIDTH>,
        4*LG_BRICK_WIDTH-LG_PLATE_HEIGHT
       }
       cylinder {
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH+LG_E, -4*LG_BRICK_WIDTH>,
        4*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH+LG_E, LG_E>,
      <-3*LG_BRICK_WIDTH-LG_E, 1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <-3*LG_BRICK_WIDTH-LG_E, 3*LG_BRICK_WIDTH+LG_E, -8*LG_BRICK_WIDTH-LG_E>,
      <5*LG_BRICK_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>
     }
    }
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -9*LG_BRICK_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>
   }
   box {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>
   }
   object {
    lg_plate_column
    translate <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_column
    translate <4.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_column
  translate <4.5*LG_BRICK_WIDTH, 0, -9*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 cylinder {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT>
 }
 box {
  <5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   #declare KNOB=-2.5;
   #while (KNOB<3)
    object {
     lg_knob_inner_space
     translate <0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space
     translate <-0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
   #end
  }
 }
 box {
  <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
   <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
   4*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, LG_E>,
    <-3*LG_BRICK_WIDTH-LG_E, -3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <-3*LG_BRICK_WIDTH-LG_E, 3*LG_BRICK_WIDTH, -8*LG_BRICK_WIDTH-LG_E>,
    <5*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>
   }
  }
 }
}

#declare lg_2572_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   cylinder {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   difference {
    union {
     torus {
      4*LG_BRICK_WIDTH-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
     }
     torus {
      4*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE,
      LG_CORNER_SPACE
      translate <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
     }
     difference {
      cylinder {
       <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
       <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>,
       4*LG_BRICK_WIDTH-LG_CORNER_SPACE
      }
      union {
       cylinder {
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH-LG_E, -4*LG_BRICK_WIDTH>,
        4*LG_BRICK_WIDTH-LG_PLATE_HEIGHT
       }
       cylinder {
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
        <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH+LG_E, -4*LG_BRICK_WIDTH>,
        4*LG_BRICK_WIDTH-LG_PLATE_HEIGHT+LG_CORNER_SPACE
       }
      }
     }
    }
    union {
     box {
      <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH+LG_E, LG_E>,
      <-3*LG_BRICK_WIDTH-LG_E, 1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E>
     }
     box {
      <-3*LG_BRICK_WIDTH-LG_E, 3*LG_BRICK_WIDTH+LG_E, -8*LG_BRICK_WIDTH-LG_E>,
      <5*LG_BRICK_WIDTH+LG_E, 1.5*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>
     }
    }
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -9*LG_BRICK_HEIGHT>
   }
   box {
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>
   }
   box {
    <5*LG_BRICK_WIDTH-2*LG_WALL_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_WALL_WIDTH, -4*LG_BRICK_WIDTH>
   }
   object {
    lg_plate_column_clear
    translate <4.5*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_column_clear
    translate <4.5*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH, -9*LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 2.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    scale <1, 1-2*MIR, 1>
    translate <-0.5*LG_BRICK_WIDTH, 0.5*LG_BRICK_WIDTH, 0>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 object {
  lg_plate_column_clear
  translate <4.5*LG_BRICK_WIDTH, 0, -9*LG_BRICK_HEIGHT>
 }
 object {
  lg_plate_cylinder_clear
  translate <0, 0, -LG_PLATE_HEIGHT>
 }
 cylinder {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 box {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT>
 }
 box {
  <5*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>
 }
 box {
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT>
 }
 box {
  <4*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <4*LG_BRICK_WIDTH+LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -9*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
  <4*LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -26*LG_PLATE_HEIGHT>
 }
 difference {
  box {
   <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   #declare KNOB=-2.5;
   #while (KNOB<3)
    object {
     lg_knob_inner_space_clear
     translate <0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    object {
     lg_knob_inner_space_clear
     translate <-0.5*LG_BRICK_WIDTH, KNOB*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
    }
    #declare KNOB = KNOB + 1;
   #end
  }
 }
 box {
  <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
  <LG_BRICK_WIDTH-LG_WALL_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
 }
 difference {
  cylinder {
   <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
   <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH+LG_CORNER_SPACE, -4*LG_BRICK_WIDTH>,
   4*LG_BRICK_WIDTH
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
    <LG_BRICK_WIDTH, -3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>,
    4*LG_BRICK_WIDTH-LG_WALL_WIDTH
   }
   box {
    <LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, LG_E>,
    <-3*LG_BRICK_WIDTH-LG_E, -3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH-LG_E>
   }
   box {
    <-3*LG_BRICK_WIDTH-LG_E, 3*LG_BRICK_WIDTH, -8*LG_BRICK_WIDTH-LG_E>,
    <5*LG_BRICK_WIDTH+LG_E, -3*LG_BRICK_WIDTH, -4*LG_BRICK_WIDTH>
   }
  }
 }
}

#end
