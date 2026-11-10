/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ea9578; name: FUN_02ea9578
 */


undefined8 FUN_02ea9578(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_02f0efb8(DAT_0440a150,*(long *)(param_1 + 0x10),param_1);
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return 1;
}


