/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0144dd58; name: FUN_0144dd58
 */


undefined1 FUN_0144dd58(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((*(long *)(param_1 + 0x78) == 0) || (lVar2 = FUN_0144cba0(), lVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(char *)(param_1 + 0xa0) == '\0') {
    iVar1 = *(int *)(*(long *)(param_1 + 0x90) + 0x5c0);
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0x68) = 0;
      FUN_0144d6e0(lVar2,*(undefined8 *)(param_1 + 0x98));
      FUN_0144de00();
      FUN_0144f00c(*(undefined8 *)(param_1 + 0x90));
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(lVar2 + 0x68) = 1;
      FUN_0144f00c(*(undefined8 *)(param_1 + 0x90));
      *(undefined1 *)(param_1 + 0xa0) = 1;
    }
  }
  return *(undefined1 *)(*(long *)(param_1 + 0x90) + 0x5c4);
}


