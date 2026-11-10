/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02854814; name: FUN_02854814
 */


void FUN_02854814(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x488) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_1 + 0x368;
  }
  else {
    if (*(int *)(param_1 + 0x488) != 2) goto LAB_0285483c;
    uVar1 = *(undefined8 *)(param_1 + 8);
    lVar2 = param_1 + 1000;
  }
  FUN_0283b1e8(uVar1,lVar2);
LAB_0285483c:
  if (*(int *)(param_1 + 0x48c) == 1) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 0x3a8;
  }
  else {
    if (*(int *)(param_1 + 0x48c) != 2) {
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 8);
    param_1 = param_1 + 0x428;
  }
  FUN_0283b1e8(uVar1,param_1);
  return;
}


