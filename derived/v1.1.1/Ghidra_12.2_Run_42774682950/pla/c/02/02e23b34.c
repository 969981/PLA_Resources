/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e23b34; name: FUN_02e23b34
 */


void FUN_02e23b34(long param_1)

{
  if (*(char *)(param_1 + 0xc0) != '\0') {
    FUN_02e24f64(param_1 + 0x18,*(undefined8 *)(param_1 + 0x10));
  }
  if ((*(long *)(param_1 + 0x38) != 0) && (*(long *)(param_1 + 0x40) != 0)) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x18))();
    *(long *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  return;
}


