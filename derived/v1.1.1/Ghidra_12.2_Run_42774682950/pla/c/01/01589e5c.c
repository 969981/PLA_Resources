/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01589e5c; name: FUN_01589e5c
 */


undefined1  [16] FUN_01589e5c(undefined8 param_1,int param_2)

{
  float *pfVar1;
  undefined1 auStack_50 [4];
  float local_4c;
  float local_48;
  float afStack_44 [5];
  
  FUN_02daafcc(auStack_50);
  if (param_2 == 0) {
    FUN_02daafcc(auStack_50,param_1);
    pfVar1 = &local_48;
  }
  else {
    if (param_2 != 1) {
      local_4c = 0.0;
      goto LAB_01589ea8;
    }
    FUN_02daafcc(auStack_50,param_1);
    pfVar1 = afStack_44;
  }
  local_4c = local_4c + *pfVar1;
LAB_01589ea8:
  return ZEXT416((uint)local_4c) << 0x20;
}


