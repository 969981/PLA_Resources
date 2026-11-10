/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018172bc; name: FUN_018172bc
 */


void FUN_018172bc(undefined1 *param_1,long param_2)

{
  *param_1 = 0;
  if (*(char *)(param_2 + 0x1f0) == '\0') {
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x208);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x200);
  *param_1 = 1;
  return;
}


