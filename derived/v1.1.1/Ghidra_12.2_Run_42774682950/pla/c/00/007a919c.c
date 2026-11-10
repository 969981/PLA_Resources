/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007a919c; name: FUN_007a919c
 */


void FUN_007a919c(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  puVar1 = PTR_DAT_043770c8;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 7) = 0;
  if (*(int *)PTR_DAT_043770d0 != 0) {
                    /* try { // try from 007a91fc to 007a9207 has its CatchHandler @ 007a920c */
    FUN_0032d2b0(PTR_DAT_043770d0);
  }
  puVar1 = PTR_DAT_043730c0;
  param_1[6] = (long)PTR_DAT_043730c0;
  param_1[5] = (long)puVar1;
  return;
}


