/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfdd58; name: FUN_02dfdd58
 */


void FUN_02dfdd58(float param_1,long param_2,long param_3)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  iVar1 = *(int *)(param_3 + 0x18);
  if (iVar1 == *(int *)(param_2 + 0x270)) {
    return;
  }
  *(int *)(param_2 + 0x270) = iVar1;
  if (2 < iVar1 - 1U) {
    iVar1 = 0;
  }
  plVar3 = (long *)(**(code **)(**(long **)(param_2 + 0x398) + 0x10))();
  uVar2 = (**(code **)(*plVar3 + 0xf8))();
  FUN_02dff1b0(param_2 + 0x280,iVar1,(int)param_1,uVar2);
  return;
}


