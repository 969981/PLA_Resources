/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f21628; name: FUN_02f21628
 */


void FUN_02f21628(long *param_1,undefined8 param_2)

{
  if (*param_1 != 0) {
    FUN_02f21680(param_2,param_1 + 10,param_1);
  }
  if (param_1[5] == 0) {
    return;
  }
  FUN_02f21ea0(param_2,param_1 + 0xc);
  return;
}


