/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e2ef0; name: FUN_002e2ef0
 */


void FUN_002e2ef0(code *param_1,long param_2)

{
  if (param_2 != 0) {
                    /* try { // try from 002e2f00 to 002e2f03 has its CatchHandler @ 002e2f0c */
    (*param_1)(param_2 + -0x10);
  }
  return;
}


