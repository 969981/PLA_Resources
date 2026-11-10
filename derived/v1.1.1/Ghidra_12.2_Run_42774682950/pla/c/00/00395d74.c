/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395d74; name: FUN_00395d74
 */


void FUN_00395d74(long *param_1,long param_2)

{
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  *param_1 = (long)(PTR_DAT_04373cf0 + 0x10);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
                    /* try { // try from 00395dc0 to 00395dc3 has its CatchHandler @ 00395dd4 */
  FUN_00399008();
  param_1[0xb] = param_2;
  return;
}


