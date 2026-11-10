/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3e7e8; name: FUN_02f3e7e8
 */


undefined8
FUN_02f3e7e8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined4 param_9,undefined4 param_10,undefined4 param_11,long *param_12)

{
  long *plVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar2 = 0x1f;
  }
  else {
    plVar1 = (long *)FUN_02f59e30(0,0x188);
    if (plVar1 != (long *)0x0) {
      FUN_02f3ef20(plVar1,param_2,param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                   param_10,param_11);
      *param_12 = (long)plVar1;
      uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
      if ((int)uVar2 == 1) {
        return uVar2;
      }
      FUN_02e7c354(*param_12);
    }
    uVar2 = 2;
    *param_12 = 0;
  }
  return uVar2;
}


