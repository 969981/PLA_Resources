/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d29800; name: FUN_00d29800
 */


void FUN_00d29800(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_28;
  
  lVar2 = *param_2;
  local_28 = param_4;
  if (lVar2 != *param_3) {
    do {
      uVar1 = FUN_00d299f0(&local_28,lVar2 + 0x10);
      if ((uVar1 & 1) != 0) break;
      FUN_00d2987c(param_2);
      lVar2 = *param_2;
    } while (lVar2 != *param_3);
  }
  lVar2 = *param_2;
  lVar3 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = lVar3;
  *param_1 = lVar2;
  return;
}


