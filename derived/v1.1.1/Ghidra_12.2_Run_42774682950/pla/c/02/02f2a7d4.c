/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2a7d4; name: FUN_02f2a7d4
 */


void FUN_02f2a7d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_042ac958;
  if (param_1[2] != 0) {
    (*DAT_0442d158)(5);
    param_1[2] = 0;
  }
  if (param_1[3] != 0) {
    (*DAT_0442d158)(5);
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    (*DAT_0442d158)(5);
    param_1[4] = 0;
  }
  if (param_1[6] != 0) {
    (*DAT_0442d158)(5);
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    (*DAT_0442d158)(5);
  }
  if (param_1[7] != 0) {
    (*DAT_0442d150)(5);
  }
  if (param_1[8] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02f2a898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0442d150)(5);
  return;
}


