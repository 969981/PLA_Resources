/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032b7e20; name: FUN_032b7e20
 */


void FUN_032b7e20(undefined8 *param_1)

{
  if (*(int *)(param_1 + 1) != 0) {
    FUN_032cf510(*param_1,(long)*(int *)(param_1 + 1) << 2);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
  return;
}


