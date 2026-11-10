/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030ff428; name: FUN_030ff428
 */


void FUN_030ff428(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *(long *)(param_1 + 0x48) = param_2;
  iVar1 = *(int *)(param_2 + 0x15d8);
  if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < iVar1) {
    uVar2 = FUN_030ff728(PTR_PTR_0434a080,iVar1,*(undefined8 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x38));
    *(undefined8 *)(param_1 + 0x30) = uVar2;
  }
  if (*(int *)(param_1 + 0x38) != iVar1) {
    *(int *)(param_1 + 0x38) = iVar1;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 0x48) + 0x15d8);
  if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar1) {
    uVar2 = FUN_030ff87c(PTR_PTR_0434a080,iVar1,*(undefined8 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x20) = uVar2;
  }
  if (*(int *)(param_1 + 0x28) != iVar1) {
    *(int *)(param_1 + 0x28) = iVar1;
  }
  return;
}


