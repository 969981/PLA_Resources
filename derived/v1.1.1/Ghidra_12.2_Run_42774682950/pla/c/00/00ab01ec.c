/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ab01ec; name: FUN_00ab01ec
 */


uint FUN_00ab01ec(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined1 *local_40;
  char *pcStack_38;
  undefined8 local_30;
  long *local_28;
  
  if ((param_3 == 6) || (param_3 == 5)) {
    uVar1 = 0;
    if ((param_1 == 2) && (param_2 == 0)) {
      uVar1 = 1;
      *param_4 = 0x40a00000;
    }
  }
  else if (param_3 == 3) {
    uVar1 = 0;
    if ((param_1 == 2) && (param_2 == 0)) {
      local_40 = &DAT_c48fa98e41e54f54;
      pcStack_38 = "OverrideRimPower";
      local_30 = 0x1f;
      local_28 = (long *)0x0;
      uVar1 = FUN_00af0e70(3,&local_40,param_4);
      if (local_28 != (long *)0x0) {
        (**(code **)(*local_28 + 0x20))();
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}


