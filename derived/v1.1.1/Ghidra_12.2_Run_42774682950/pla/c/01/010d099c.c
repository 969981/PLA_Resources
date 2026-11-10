/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010d099c; name: FUN_010d099c
 */


void FUN_010d099c(long param_1,long *param_2)

{
  if ((*(long *)(param_1 + 8) != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    (**(code **)(*param_2 + 0x18))(param_2,*(long *)(param_1 + 8),*(undefined8 *)(param_1 + 0x18));
    (**(code **)(*param_2 + 0x18))
              (param_2,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}


