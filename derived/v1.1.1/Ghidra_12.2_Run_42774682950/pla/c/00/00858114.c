/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00858114; name: FUN_00858114
 */


void FUN_00858114(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0xb0) != 4) {
    if (*(int *)(param_1 + 0xb0) != 1) {
      *(undefined4 *)(param_1 + 0xb0) = 0x11;
      FUN_008248e4(param_1 + 0x68);
      if (*(int *)(param_1 + 0xb0) != 1) {
        lVar1 = *(long *)PTR_DAT_043774c8;
        do {
          FUN_00824d50(lVar1 / 10000);
          if (*(int *)(param_1 + 0xb0) == 3) {
            *(undefined4 *)(param_1 + 0xb0) = 0x11;
            FUN_008248e4(param_1 + 0x68);
          }
        } while (*(int *)(param_1 + 0xb0) != 1);
      }
    }
    FUN_00845c78(param_1 + 8);
    if (*(long *)(param_1 + 200) != 0) {
      FUN_00855c6c();
      return;
    }
  }
  return;
}


