/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330696c; name: FUN_0330696c
 */


void FUN_0330696c(undefined8 *param_1)

{
  if ((*(char *)(param_1 + 1) == '\x02') && (param_1[3] != 0)) {
    FUN_032db6f4(param_1[2],*param_1);
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}


