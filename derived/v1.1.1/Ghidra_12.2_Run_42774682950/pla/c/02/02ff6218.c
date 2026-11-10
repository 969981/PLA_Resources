/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff6218; name: FUN_02ff6218
 */


void FUN_02ff6218(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  long *plVar4;
  
  uVar2 = *(undefined1 *)(param_2 + 0x18);
  param_1[2] = 1;
  *param_1 = &PTR_LAB_042b75b0;
  param_1[1] = 0xffffffff;
  param_1[4] = param_3 - (long)(param_1 + 4);
  *(undefined1 *)(param_1 + 3) = uVar2;
  lVar1 = 0;
  if (param_3 - (long)(param_1 + 4) != 0) {
    lVar1 = param_3;
  }
  plVar4 = param_1 + 5;
  *plVar4 = 0;
  FUN_032d645c(lVar1);
  lVar3 = *(long *)(param_2 + 0x28);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + param_2 + 0x28;
  }
  lVar3 = FUN_032cf5b0(0x68);
  FUN_02ff64a8(lVar3,lVar1);
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 - (long)plVar4;
  }
  *plVar4 = lVar1;
  return;
}


