/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19980425 Lutz Uhlmann                                                       */
/* 20080115 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_4532: Cupboard 2 x 3 x 2                                                 */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_4532)
#else
#declare lg_4532 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2, -LG_TOP_HEIGHT-0.1>
   }
   box {
    <LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.1>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder
    translate <0, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>
   }
   torus {
    0.06+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -LG_CORNER_SPACE>
   }
   torus {
    0.06+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -10*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_CORNER_SPACE, -10*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 difference {
  union {
   box {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, 0>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -LG_TOP_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -2*LG_BRICK_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, 0>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -LG_TOP_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -2*LG_BRICK_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
  }
 }
 object {
  lg_knob
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 object {
  lg_knob
  translate <-LG_BRICK_WIDTH/2, 0, 0>
 }
}

#declare lg_4532_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_WALL_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT, -LG_CORNER_SPACE>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_E>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2, -LG_TOP_HEIGHT-0.1>
   }
   box {
    <LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_BRICK_HEIGHT+0.1>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-0.2, -LG_BRICK_HEIGHT>
   }
   object {
    lg_plate_cylinder_clear
    translate <0, LG_BRICK_WIDTH/2, -2*LG_BRICK_HEIGHT>
   }
   object {
    lg_knob_clear
    translate <-LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>
   }
   object {
    lg_knob_clear
    translate <LG_BRICK_WIDTH/2, LG_BRICK_WIDTH, 0>
   }
   torus {
    0.06+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -LG_CORNER_SPACE>
   }
   torus {
    0.06+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_TOP_HEIGHT+LG_CORNER_SPACE, -10*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_TOP_HEIGHT-LG_CORNER_SPACE, -10*LG_WALL_WIDTH-LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
  <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
 }
 box {
  <-LG_BRICK_WIDTH+LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
  <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
 }
 box {
  <-LG_BRICK_WIDTH+LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE-LG_E>,
  <-LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 box {
  <LG_BRICK_WIDTH-LG_CORNER_SPACE-LG_E, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_TOP_HEIGHT+LG_CORNER_SPACE>,
  <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>
 }
 difference {
  merge {
   box {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE+LG_E>,
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_CORNER_SPACE>,
    <LG_BRICK_WIDTH, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
   }
   box {
    <LG_BRICK_WIDTH-LG_CORNER_SPACE, 1.5*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_HEIGHT+LG_PLATE_INNER_HEIGHT>,
    <-LG_BRICK_WIDTH+LG_CORNER_SPACE, -1.5*LG_BRICK_WIDTH+LG_CORNER_SPACE, -5*LG_PLATE_HEIGHT>
   }
  }
  union {
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, 0>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -LG_TOP_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -2*LG_BRICK_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, 1.5*LG_BRICK_WIDTH-1.5*LG_TOP_HEIGHT, -LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, 0>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -LG_TOP_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -2*LG_BRICK_HEIGHT-LG_E>,
    0.06
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT+LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -5*LG_PLATE_HEIGHT-LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
   cylinder {
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, LG_E>,
    <LG_BRICK_WIDTH-LG_TOP_HEIGHT, -1.5*LG_BRICK_WIDTH+1.5*LG_TOP_HEIGHT, -LG_CORNER_SPACE>,
    0.06+LG_CORNER_SPACE
   }
  }
 }
 object {
  lg_knob_clear
  translate <LG_BRICK_WIDTH/2, 0, 0>
 }
 object {
  lg_knob_clear
  translate <-LG_BRICK_WIDTH/2, 0, 0>
 }
}

#end