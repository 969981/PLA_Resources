/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d594f8; name: FUN_00d594f8
 */


void FUN_00d594f8(long param_1)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x6d8) != 2) {
    iVar1 = *(int *)(param_1 + 0x6d8);
  }
  lVar3 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8 + (long)iVar1 * 0x28);
  lVar3 = *(long *)(lVar3 + 0x8b0);
  piVar2 = (int *)(lVar3 + 0x20);
  if (*(int *)(lVar3 + 0x28) != 0) {
    piVar2 = (int *)(lVar3 + 0x24);
  }
  FUN_00d568f8(param_1,*(int *)(lVar3 + 0x14) + *piVar2 * *(int *)(lVar3 + 0x10),
               *(undefined4 *)(param_1 + 0x6d8));
  return;
}


