/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014de950; name: FUN_014de950
 */


void FUN_014de950(long param_1)

{
  long lVar1;
  int iVar2;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x90) != 0) {
    lVar1 = *(long *)(param_1 + 0x90) + 0x5b0;
  }
  if (*(long *)(param_1 + 0x88) == lVar1) {
    iVar2 = FUN_014ddf84();
    if (iVar2 == 3) {
      *(undefined4 *)(param_1 + 0x7c) = 2;
      *(undefined4 *)(param_1 + 0x84) = 1;
    }
    else {
      if (iVar2 != 2) {
        if (iVar2 == 1) {
          *(undefined4 *)(param_1 + 0x7c) = 1;
          return;
        }
        return;
      }
      *(undefined4 *)(param_1 + 0x7c) = 2;
      *(undefined4 *)(param_1 + 0x84) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return;
}


