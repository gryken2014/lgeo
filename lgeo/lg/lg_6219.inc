/*******************************************************************************/
/*                                                                             */
/* LGEO Libray Include File     (C) lgeo@digitalbricks.org (Lutz Uhlmann)      */
/*                                                                             */
/* 19990615 Lutz Uhlmann                                                       */
/* 20080122 Lutz Uhlmann fixed stud orientation                                */
/*                                                                             */
/* This file is in no way related to the LEGO(tm) Group.                       */
/* It is provided for private non-commercial use only.                         */
/*                                                                             */
/* lg_6219: Plate 16 x 14 Shuttle Wing                                         */
/*                                                                             */ 
/*******************************************************************************/
#ifdef(lg_6219)
#else
#declare lg_angle1=atan2(4*LG_BRICK_WIDTH, 4*LG_BRICK_WIDTH);
#declare lg_angle2=atan2(2*LG_BRICK_WIDTH, 8*LG_BRICK_WIDTH);
#declare lg_6219 =
union {
 #declare MIR = 0;
 #while (MIR < 2)
  union {
   sphere {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
    <-6*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_E, -LG_CORNER_SPACE>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-6*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-0.1, 0, -LG_PLATE_HEIGHT>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-0.1, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-3*LG_BRICK_WIDTH, 6.7*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH, 4.9*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.8*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <7*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <7.5*LG_BRICK_WIDTH+0.06, 1.8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <7.5*LG_BRICK_WIDTH-0.06, 2.1*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH+0.06, 1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-0.06, 2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2.5*LG_BRICK_WIDTH+0.06, 1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH-0.06, 2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-5*LG_BRICK_WIDTH+0.06, 1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-5*LG_BRICK_WIDTH-0.06, 6.1*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder
    translate <-5*LG_BRICK_WIDTH, 7*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder
    translate <-2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-6*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <8*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 #declare CYL = -5;
 #while (CYL < 8)
  object {
   lg_plate_cylinder
   translate <CYL*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder
   translate <CYL*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder
   translate <CYL*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL = CYL + 1;
 #end
 #declare HOLE = 0;
 #while (HOLE < 8)
  union {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    union {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_TOP_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_TOP_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   translate <HOLE*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE = HOLE + 1;
 #end
 difference {
  box {
   <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), 5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), -5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 7*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, -7*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   #declare HOLE = 0;
   #while (HOLE < 8)
    cylinder {
     <HOLE*LG_BRICK_WIDTH, 0, 0>,
     <HOLE*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <HOLE*LG_BRICK_WIDTH, 0, LG_E>,
     <HOLE*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    #declare HOLE = HOLE + 1;
   #end
   #declare KX = -7.5;
   #while (KX < 8)
    #declare KY = -5.5;
    #while (KY < 8)
     object {
      lg_knob_inner_space
      translate <KY*LG_BRICK_WIDTH, KX*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     #declare KY = KY + 1;
     #if (abs(KX) = 7.5 & KY = -3.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 6.5 & KY = -2.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 5.5 & KY = -1.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 4.5 & KY = -0.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 3.5 & KY = 0.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 2.5 & KY = 4.5)
      #declare KY = 8;
     #end
    #end
    #declare KX = KX + 1;
   #end
  }
 }
 #declare KX = -7.5;
 #while (KX < 8)
  #declare KY = -5.5;
  #while (KY < 8)
   object {
    lg_knob
    rotate <0, 0, 90>
    translate <KY*LG_BRICK_WIDTH, KX*LG_BRICK_WIDTH, 0>
   }
   #declare KY = KY + 1;
   #if (abs(KX) = 7.5 & KY = -3.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 6.5 & KY = -2.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 5.5 & KY = -1.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 4.5 & KY = -0.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 3.5 & KY = 0.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 2.5 & KY = 4.5)
    #declare KY = 8;
   #end
  #end
  #declare KX = KX + 1;
 #end
}

#declare lg_6219_clear =
merge {
 #declare MIR = 0;
 #while (MIR < 2)
  merge {
   sphere {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   sphere {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   cylinder {
    <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    LG_CORNER_SPACE
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE+LG_E, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>,
    <-6*LG_BRICK_WIDTH, 2*LG_BRICK_WIDTH-LG_E, -LG_CORNER_SPACE>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-6*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
   }
   box {
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 6*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-4*LG_BRICK_WIDTH, 6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <-4*LG_BRICK_WIDTH-LG_WALL_WIDTH, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>
   }
   box {
    <0, 0, -LG_PLATE_HEIGHT>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-0.1, 0, -LG_PLATE_HEIGHT>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-0.1, LG_CORNER_SPACE, -LG_CORNER_SPACE>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2), -LG_WALL_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH-LG_E, 4*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH+LG_E, 4*LG_BRICK_WIDTH-LG_WALL_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-3*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-3*LG_BRICK_WIDTH, 6.7*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-LG_BRICK_WIDTH, 4.9*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <7*LG_BRICK_WIDTH-LG_WALL_WIDTH, 1.8*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
    <7*LG_BRICK_WIDTH, 2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <7.5*LG_BRICK_WIDTH+0.06, 1.8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <7.5*LG_BRICK_WIDTH-0.06, 2.1*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-1.5*LG_BRICK_WIDTH+0.06, 1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-1.5*LG_BRICK_WIDTH-0.06, 2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-2.5*LG_BRICK_WIDTH+0.06, 1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
    <-2.5*LG_BRICK_WIDTH-0.06, 2.2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   box {
    <-5*LG_BRICK_WIDTH+0.06, 1.9*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
    <-5*LG_BRICK_WIDTH-0.06, 6.1*LG_BRICK_WIDTH, -LG_CORNER_SPACE>
   }
   object {
    lg_plate_cylinder_clear
    translate <-5*LG_BRICK_WIDTH, 7*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   object {
    lg_plate_cylinder_clear
    translate <-2*LG_BRICK_WIDTH, 3*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
   } 
   #if (MIR = 1)
    matrix <1, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0>
   #end
  }
  #declare MIR = MIR + 1;
 #end
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 cylinder {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>,
  LG_CORNER_SPACE
 }
 box {
  <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_PLATE_HEIGHT>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <-6*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
  <-6*LG_BRICK_WIDTH+LG_WALL_WIDTH, 2*LG_BRICK_WIDTH-LG_CORNER_SPACE, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 box {
  <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, -2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>,
  <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE+LG_E>
 }
 box {
  <8*LG_BRICK_WIDTH, -2*LG_BRICK_WIDTH, -LG_CORNER_SPACE>,
  <8*LG_BRICK_WIDTH-LG_WALL_WIDTH, 2*LG_BRICK_WIDTH, -LG_PLATE_HEIGHT+LG_CORNER_SPACE>
 }
 #declare CYL = -5;
 #while (CYL < 8)
  object {
   lg_plate_cylinder_clear
   translate <CYL*LG_BRICK_WIDTH, -LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder_clear
   translate <CYL*LG_BRICK_WIDTH, 0, -LG_PLATE_HEIGHT>
  }
  object {
   lg_plate_cylinder_clear
   translate <CYL*LG_BRICK_WIDTH, LG_BRICK_WIDTH, -LG_PLATE_HEIGHT>
  }
  #declare CYL = CYL + 1;
 #end
 #declare HOLE = 0;
 #while (HOLE < 8)
  merge {
   torus {
    LG_KNOB_RADIUS+LG_CORNER_SPACE,
    LG_CORNER_SPACE
    rotate <90, 0, 0>
    translate <0, 0, -LG_CORNER_SPACE>
   }
   #declare ROT = 0;
   #while (ROT < 4)
    merge {
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_TOP_HEIGHT>,
      0.08
     }
     cylinder { 
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE-LG_E>,
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      0.08-LG_CORNER_SPACE
     }
     torus {
      0.08-LG_CORNER_SPACE,
      LG_CORNER_SPACE
      rotate <90, 0, >
      translate <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+0.08, LG_CROSSAXLE_WIDTH/2, -LG_CORNER_SPACE>,
      <LG_KNOB_RADIUS, LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, -LG_TOP_HEIGHT>
     }
     cylinder {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_KNOB_RADIUS, -LG_CORNER_SPACE>,
      LG_CORNER_SPACE
     }
     box {
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE, LG_CROSSAXLE_WIDTH/2+0.08, 0>,
      <LG_KNOB_RADIUS, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     box {
      <LG_CROSSAXLE_WIDTH/2, LG_CROSSAXLE_WIDTH/2+0.08, -LG_CORNER_SPACE>,
      <LG_CROSSAXLE_WIDTH/2+LG_CORNER_SPACE+LG_E, LG_KNOB_RADIUS, -LG_TOP_HEIGHT>
     }
     rotate <0, 0, 90*ROT>
    }
    #declare ROT = ROT + 1;
   #end
   translate <HOLE*LG_BRICK_WIDTH, 0, 0>
  }
  #declare HOLE = HOLE + 1;
 #end
 difference {
  box {
   <8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>,
   <-6*LG_BRICK_WIDTH+LG_CORNER_SPACE, -8*LG_BRICK_WIDTH+LG_CORNER_SPACE, -LG_TOP_HEIGHT>
  }
  union {
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), 5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 8*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <-LG_WALL_WIDTH, 0, LG_E>,
    <4*LG_BRICK_WIDTH/cos(lg_angle1), -5*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle1*180/pi>
    translate <-4*LG_BRICK_WIDTH-LG_CORNER_SPACE, -8*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, 7*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, -lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, 4*LG_BRICK_WIDTH-LG_CORNER_SPACE, 0>
   }
   box {
    <0, 0, LG_E>,
    <8*LG_BRICK_WIDTH/cos(lg_angle2)+LG_E, -7*LG_BRICK_WIDTH, -LG_TOP_HEIGHT-LG_E>
    rotate <0, 0, lg_angle2*180/pi>
    translate <-LG_CORNER_SPACE, -4*LG_BRICK_WIDTH+LG_CORNER_SPACE, 0>
   }
   #declare HOLE = 0;
   #while (HOLE < 8)
    cylinder {
     <HOLE*LG_BRICK_WIDTH, 0, 0>,
     <HOLE*LG_BRICK_WIDTH, 0, -LG_WALL_WIDTH>,
     LG_KNOB_RADIUS
    }
    cylinder {
     <HOLE*LG_BRICK_WIDTH, 0, LG_E>,
     <HOLE*LG_BRICK_WIDTH, 0, -LG_CORNER_SPACE>,
     LG_KNOB_RADIUS+LG_CORNER_SPACE
    }
    #declare HOLE = HOLE + 1;
   #end
   #declare KX = -7.5;
   #while (KX < 8)
    #declare KY = -5.5;
    #while (KY < 8)
     object {
      lg_knob_inner_space_clear
      translate <KY*LG_BRICK_WIDTH, KX*LG_BRICK_WIDTH, -LG_TOP_HEIGHT>
     }
     #declare KY = KY + 1;
     #if (abs(KX) = 7.5 & KY = -3.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 6.5 & KY = -2.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 5.5 & KY = -1.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 4.5 & KY = -0.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 3.5 & KY = 0.5)
      #declare KY = 8;
     #end
     #if (abs(KX) = 2.5 & KY = 4.5)
      #declare KY = 8;
     #end
    #end
    #declare KX = KX + 1;
   #end
  }
 }
 #declare KX = -7.5;
 #while (KX < 8)
  #declare KY = -5.5;
  #while (KY < 8)
   object {
    lg_knob_clear
    rotate <0, 0, 90>
    translate <KY*LG_BRICK_WIDTH, KX*LG_BRICK_WIDTH, 0>
   }
   #declare KY = KY + 1;
   #if (abs(KX) = 7.5 & KY = -3.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 6.5 & KY = -2.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 5.5 & KY = -1.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 4.5 & KY = -0.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 3.5 & KY = 0.5)
    #declare KY = 8;
   #end
   #if (abs(KX) = 2.5 & KY = 4.5)
    #declare KY = 8;
   #end
  #end
  #declare KX = KX + 1;
 #end
}

#end