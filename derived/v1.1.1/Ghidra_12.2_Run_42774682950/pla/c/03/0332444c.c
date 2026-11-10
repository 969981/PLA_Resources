/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332444c; name: FUN_0332444c
 */


long FUN_0332444c(long param_1,char param_2)

{
  char *pcVar1;
  
  pcVar1 = "false";
  if (param_2 != '\0') {
    pcVar1 = "true";
  }
  FUN_033243f0(*(undefined8 *)(param_1 + 8),pcVar1);
  return param_1;
}


