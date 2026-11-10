/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00219ea0; name: FUN_00219ea0
 */


void FUN_00219ea0(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(int *)(param_1 + 0x1734) == 0x10) {
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1730);
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    iVar1 = 0;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1731);
    *(undefined2 *)(param_1 + 0x1730) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x1734) < 8) {
      return;
    }
    lVar2 = *(long *)(param_1 + 0x28);
    *(long *)(param_1 + 0x28) = lVar2 + 1;
    *(undefined1 *)(*(long *)(param_1 + 0x10) + lVar2) = *(undefined1 *)(param_1 + 0x1730);
    *(ushort *)(param_1 + 0x1730) = (ushort)*(byte *)(param_1 + 0x1731);
    iVar1 = *(int *)(param_1 + 0x1734) + -8;
  }
  *(int *)(param_1 + 0x1734) = iVar1;
  return;
}


