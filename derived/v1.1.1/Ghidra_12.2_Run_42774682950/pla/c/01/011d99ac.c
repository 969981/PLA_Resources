/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011d99ac; name: FUN_011d99ac
 */


void FUN_011d99ac(long param_1)

{
  if (*(long *)(param_1 + 0x718) != 0) {
    FUN_0115b058(*(long *)(param_1 + 0x718),1);
  }
  if (*(long *)(param_1 + 0x5b0) != 0) {
    FUN_00256608(*(undefined8 *)(param_1 + 0x5d8));
    FUN_00256608(*(undefined8 *)(param_1 + 0x5e0));
  }
  if (*(long *)(param_1 + 0x5f8) != 0) {
    FUN_00256608(*(undefined8 *)(param_1 + 0x620));
    FUN_00256608(*(undefined8 *)(param_1 + 0x628));
  }
  if (*(long *)(param_1 + 0x640) != 0) {
    FUN_00256608(*(undefined8 *)(param_1 + 0x668));
    FUN_00256608(*(undefined8 *)(param_1 + 0x670));
  }
  if (*(long *)(param_1 + 0x688) != 0) {
    FUN_00256608(*(undefined8 *)(param_1 + 0x6b0));
    FUN_00256608(*(undefined8 *)(param_1 + 0x6b8));
  }
  if (*(long *)(param_1 + 0x6d0) != 0) {
    FUN_00256608(*(undefined8 *)(param_1 + 0x6f8));
    FUN_00256608(*(undefined8 *)(param_1 + 0x700));
  }
  if (*(char *)(param_1 + 0x721) != '\0') {
    FUN_011d974c(param_1);
    *(undefined1 *)(param_1 + 0x721) = 0;
  }
  return;
}


