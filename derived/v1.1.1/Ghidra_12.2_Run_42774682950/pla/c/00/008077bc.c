/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008077bc; name: FUN_008077bc
 */


undefined8 FUN_008077bc(long param_1)

{
  ulong uVar1;
  undefined1 auStack_20 [16];
  
  if (**(int **)(param_1 + 0x70) == 1) {
    return 5;
  }
  uVar1 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0x68));
  if ((uVar1 & 1) != 0) {
    return 5;
  }
  FUN_007ee578(auStack_20,*(long *)(param_1 + 0x70) + 4);
  if (*(char *)(param_1 + 0x60) == *(char *)(param_1 + 0x61)) {
    return 1;
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04377870;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "NetUpdatePlayerNumJob::RetryUpdatePlayerNum";
  return 0;
}


