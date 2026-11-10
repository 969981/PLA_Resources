/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0339a92c; name: FUN_0339a92c
 */


void FUN_0339a92c(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x18) = iVar1;
  if (0x400 < iVar1) {
    FUN_032c4af0(*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x28) + (long)iVar1,
                 *(int *)(param_1 + 0x30) - iVar1);
    lVar2 = (long)*(int *)(param_1 + 0x30) - (long)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      *(int *)(param_1 + 0x30) = (int)lVar2;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - (long)iVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - iVar1;
  }
  return;
}


