/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0071f450; name: FUN_0071f450
 */


void FUN_0071f450(long *param_1,long param_2)

{
  undefined *puVar1;
  
  param_1[1] = param_2;
  *param_1 = (long)(PTR_DAT_04376600 + 0x10);
  param_1[2] = param_2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = param_2;
  puVar1 = PTR_DAT_04376608;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  if (*(int *)puVar1 != 0) {
                    /* try { // try from 0071f4b8 to 0071f4c3 has its CatchHandler @ 0071f4c8 */
    FUN_0032d2b0(PTR_DAT_04376608);
  }
  param_1[8] = (long)PTR_DAT_043730c0;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}


