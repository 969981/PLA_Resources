/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003bc724; name: FUN_003bc724
 */


void FUN_003bc724(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04373eb8 + 0x10);
                    /* try { // try from 003bc740 to 003bc74b has its CatchHandler @ 003bc76c */
  FUN_003bc790();
  FUN_003a2ec4(param_1 + 1);
  FUN_0032b6e4(param_1 + 9);
  FUN_00326c10(param_1 + 6);
  FUN_00326c10(param_1 + 3);
  return;
}


