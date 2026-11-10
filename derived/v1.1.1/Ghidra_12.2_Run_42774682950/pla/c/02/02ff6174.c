/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff6174; name: FUN_02ff6174
 */


void FUN_02ff6174(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_042b75b0;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  *(undefined1 *)(param_1 + 3) = 2;
  lVar2 = *(long *)(param_2 + 0x40);
  plVar3 = param_1 + 5;
  *plVar3 = 0;
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + param_2 + 0x40;
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 - (long)(param_1 + 4);
  }
  lVar1 = 0;
  if (lVar2 != 0) {
    lVar1 = lVar2 + (long)(param_1 + 4);
  }
  param_1[4] = lVar2;
  FUN_032d645c(lVar1);
  lVar1 = *(long *)(param_2 + 0x98);
  if ((lVar1 == 0) || (lVar1 = lVar1 + param_2 + 0x98, lVar1 == 0)) {
    return;
  }
  *plVar3 = lVar1 - (long)plVar3;
  lVar2 = 0;
  if (lVar1 - (long)plVar3 != 0) {
    lVar2 = lVar1;
  }
  FUN_032d645c(lVar2);
  return;
}


