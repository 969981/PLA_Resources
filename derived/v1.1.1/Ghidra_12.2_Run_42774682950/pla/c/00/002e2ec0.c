/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e2ec0; name: FUN_002e2ec0
 */


long * FUN_002e2ec0(code *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
                    /* try { // try from 002e2ed0 to 002e2ed3 has its CatchHandler @ 002e2eec */
  plVar1 = (long *)(*param_1)(param_2 + 0x10);
  plVar2 = plVar1;
  if (plVar1 != (long *)0x0) {
    plVar2 = plVar1 + 2;
    *plVar1 = param_2;
  }
  return plVar2;
}


