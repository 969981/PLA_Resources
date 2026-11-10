/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00847c3c; name: FUN_00847c3c
 */


void FUN_00847c3c(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    iVar1 = *(int *)(param_1 + 0x24);
    lVar2 = *(long *)(param_1 + 0x18) - (long)iVar1;
    do {
      FUN_0084742c(lVar2,0);
      FUN_0084743c(lVar2,0);
      lVar2 = *(long *)(lVar2 + *(int *)(param_1 + 0x24) + 8) - (long)*(int *)(param_1 + 0x24);
    } while (lVar2 != (param_1 + 0x10) - (long)iVar1);
  }
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


