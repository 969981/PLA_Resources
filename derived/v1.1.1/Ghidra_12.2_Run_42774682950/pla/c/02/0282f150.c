/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282f150; name: FUN_0282f150
 */


void FUN_0282f150(long param_1)

{
  if (*(char *)(param_1 + 0x1b4) == '\0') {
    switch(*(undefined4 *)(param_1 + 0x1b8)) {
    case 0:
      if ((*(float *)(param_1 + 0x1d4) < *(float *)(param_1 + 0x1a0)) ||
         (*(float *)(param_1 + 0x1a4) < *(float *)(param_1 + 0x1d4))) {
        FUN_0282f1f0();
        *(undefined4 *)(param_1 + 0x1b8) = 2;
      }
      break;
    case 1:
      FUN_0282f2bc();
      return;
    case 2:
      FUN_0282f4a0();
      return;
    case 3:
      FUN_0282f55c();
      return;
    case 4:
      FUN_0282f628();
      return;
    }
  }
  return;
}


