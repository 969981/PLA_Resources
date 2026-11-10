/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 029091ac; name: FUN_029091ac
 */


void FUN_029091ac(undefined8 param_1,long *param_2,long *param_3)

{
  if ((*param_2 != 0) && (0.0 < *(float *)(*param_3 + 4))) {
    *(bool *)(*param_2 + 0x228) = 0.5 < *(float *)(*param_3 + 8);
  }
  return;
}


