/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f2c0c; name: FUN_007f2c0c
 */


void FUN_007f2c0c(long *param_1)

{
  (**(code **)(*param_1 + 0x18))();
  (**(code **)(*param_1 + 0x1c0))(param_1);
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0x1e0))(param_1);
    param_1[3] = 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}


