/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0023065c; name: FUN_0023065c
 */


long * FUN_0023065c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  undefined1 auStack_68 [40];
  
  plVar1 = (long *)0x0;
  if (param_4 < 0x316e6170) {
    if (param_4 < 0x31646e77) {
      if (param_4 == 0x31636970) {
        plVar1 = (long *)FUN_00232638(0x100,0x10);
        if (plVar1 != (long *)0x0) {
          FUN_00248ec4(plVar1,param_2,param_3,param_5,param_6,param_7);
        }
      }
      else if ((param_4 == 0x31646e62) &&
              (plVar1 = (long *)FUN_00232638(0xe0,0x10), plVar1 != (long *)0x0)) {
        FUN_002324a8(plVar1,param_5,param_6,param_7);
      }
    }
    else if (param_4 == 0x31646e77) {
      plVar1 = (long *)FUN_00232638(0x130,0x10);
      if (plVar1 != (long *)0x0) {
        FUN_002527ec(plVar1,param_2,param_3,param_5,param_6,param_7);
      }
    }
    else if ((param_4 == 0x31696c61) &&
            (plVar1 = (long *)FUN_00232638(0xe0,0x10), plVar1 != (long *)0x0)) {
      FUN_002565a8(plVar1,param_5,param_7);
    }
  }
  else if (param_4 < 0x31747063) {
    if (param_4 == 0x316e6170) {
      plVar1 = (long *)FUN_00232638(0xe0,0x10);
      if (plVar1 != (long *)0x0) {
        FUN_00242014(plVar1,param_2,param_3,param_5,param_7);
      }
    }
    else if ((param_4 == 0x31726373) &&
            (plVar1 = (long *)FUN_00232638(0xe0,0x10), plVar1 != (long *)0x0)) {
      FUN_002593e4(plVar1,param_5,param_7);
    }
  }
  else if (param_4 == 0x31747063) {
    plVar1 = (long *)FUN_00232638(0xe0,0x10);
    if (plVar1 != (long *)0x0) {
      FUN_002315dc(plVar1,param_5,param_6,param_7);
    }
  }
  else if (param_4 == 0x31747270) {
    plVar1 = (long *)FUN_00232638(0xf0,0x10);
    if (plVar1 != (long *)0x0) {
      FUN_00248c58(plVar1,param_5,param_6,param_7);
    }
  }
  else if (param_4 == 0x31747874) {
    plVar1 = (long *)FUN_00232638(0x160,0x10);
    if (plVar1 != (long *)0x0) {
      FUN_0024bc64(plVar1,param_2,param_3,auStack_68,param_5,param_6,param_7);
    }
    (**(code **)(*plVar1 + 0x100))(plVar1,param_2,param_3,param_7,auStack_68);
  }
  return plVar1;
}


