/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e9ecd8; name: FUN_02e9ecd8
 */


void FUN_02e9ecd8(long *param_1)

{
  if (*(ushort *)(param_1 + 2) - 1 != 0) {
    *(short *)(param_1 + 2) = (short)(*(ushort *)(param_1 + 2) - 1);
    return;
  }
  if (*param_1 != 0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (*DAT_0442d150)(0);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x02e9ed2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(0,param_1);
  return;
}


