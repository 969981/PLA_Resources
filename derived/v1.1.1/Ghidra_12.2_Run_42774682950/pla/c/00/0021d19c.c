/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021d19c; name: FUN_0021d19c
 */


void FUN_0021d19c(byte *param_1)

{
  if (-1 < *(int *)(param_1 + 0x2c)) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_008773f0(*(long *)(param_1 + 8) + (long)*(int *)(param_1 + 0x2c) * 0x48);
    }
    param_1[0x2c] = 0xff;
    param_1[0x2d] = 0xff;
    param_1[0x2e] = 0xff;
    param_1[0x2f] = 0xff;
    param_1[0x38] = 0;
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
    param_1[0x3b] = 0;
    param_1[0x3c] = 0;
    param_1[0x3d] = 0;
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
    if ((*param_1 & 1) != 0) {
      **(undefined8 **)(param_1 + 0x40) = 0;
      **(undefined8 **)(param_1 + 0x48) = 0;
      return;
    }
    param_1[0x40] = 0;
    param_1[0x41] = 0;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x45] = 0;
    param_1[0x46] = 0;
    param_1[0x47] = 0;
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4a] = 0;
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
  }
  return;
}


