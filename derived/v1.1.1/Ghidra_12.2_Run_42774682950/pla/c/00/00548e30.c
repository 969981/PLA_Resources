/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00548e30; name: FUN_00548e30
 */


void FUN_00548e30(long *param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04374cd0;
  *param_1 = (long)(PTR_DAT_04374cc8 + 0x10);
  param_1[1] = (long)puVar1;
  param_1[2] = param_3;
  lVar2 = *param_2;
  param_1[4] = param_2[1];
  param_1[3] = lVar2;
  *param_2 = 0;
  param_2[1] = 0;
                    /* try { // try from 00548e68 to 00548e6b has its CatchHandler @ 00548e88 */
  lVar2 = FUN_002fe040();
  param_1[5] = lVar2;
  lVar2 = param_2[2];
  param_2[2] = 0;
  param_1[6] = lVar2;
  return;
}


