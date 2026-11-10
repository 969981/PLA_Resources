/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00395e0c; name: FUN_00395e0c
 */


void FUN_00395e0c(long *param_1,long param_2,long param_3)

{
  param_1[3] = 0;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_04373cf8 + 0x10);
  param_1[1] = param_3;
  *(undefined2 *)(param_1 + 3) = 1;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  if (param_3 != 0) {
                    /* try { // try from 00395e5c to 00395e67 has its CatchHandler @ 00395e9c */
    FUN_003994b0(param_3,param_1 + 3);
  }
  *param_1 = (long)(PTR_DAT_04373cf0 + 0x10);
  param_1[8] = param_3;
  *(undefined4 *)(param_1 + 9) = 0;
                    /* try { // try from 00395e84 to 00395e87 has its CatchHandler @ 00395eb0 */
  FUN_00399008();
  param_1[0xb] = param_2;
  return;
}


