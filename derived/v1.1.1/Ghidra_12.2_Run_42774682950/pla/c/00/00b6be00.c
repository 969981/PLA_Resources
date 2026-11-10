/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00b6be00; name: FUN_00b6be00
 */


void FUN_00b6be00(long param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    *(undefined4 *)(param_1 + 0x390) = 2;
    *(undefined8 *)(*(long *)(*(long *)(*(long *)(param_1 + 0x360) + 0x100) + 0x38) + 8) = *param_2;
  }
  return;
}


