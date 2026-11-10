/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f059b0; name: FUN_02f059b0
 */


void FUN_02f059b0(long *param_1)

{
  FUN_02f05a14(param_1,0);
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  FUN_02f05b58(param_1 + 2);
  FUN_02f05c64(param_1 + 8);
  FUN_02f05d5c(param_1 + 0x11);
  FUN_02f05d5c(param_1 + 0x13);
  return;
}


