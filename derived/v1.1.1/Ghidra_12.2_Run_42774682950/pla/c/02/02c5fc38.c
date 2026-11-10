/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c5fc38; name: FUN_02c5fc38
 */


void FUN_02c5fc38(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_02c66e84(*(undefined8 *)(param_1 + 0x98));
  iVar2 = FUN_02c66b3c(*(undefined8 *)(param_1 + 0x98));
  if ((uint)(iVar2 + param_2) <= uVar1) {
    uVar1 = iVar2 + param_2;
  }
  FUN_02c788b4(*(undefined8 *)(param_1 + 0x98),uVar1);
  return;
}


