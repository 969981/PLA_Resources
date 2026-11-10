/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005b6cd4; name: FUN_005b6cd4
 */


void FUN_005b6cd4(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  FUN_002ef750(param_1 + 0x50);
                    /* try { // try from 005b6cf4 to 005b6cfb has its CatchHandler @ 005b6d20 */
  plVar1 = (long *)FUN_0051c524(param_1 + 0x70,param_2);
  *plVar1 = *plVar1 + 1;
                    /* try { // try from 005b6d08 to 005b6d0f has its CatchHandler @ 005b6d1c */
  FUN_002ef790(param_1 + 0x50);
  return;
}


