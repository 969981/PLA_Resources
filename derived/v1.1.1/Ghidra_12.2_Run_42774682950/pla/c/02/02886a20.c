/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02886a20; name: FUN_02886a20
 */


void FUN_02886a20(undefined8 *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = param_1[0x42];
  *param_1 = &PTR_FUN_04271748;
  param_1[0x42] = 0;
  if (lVar1 != 0) {
    FUN_00d9fa74(param_1 + 0x43);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x33];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x36);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x23];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x26);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[0x13];
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    (*UNRECOVERED_JUMPTABLE)(param_1 + 0x16);
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[3];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x02886ab8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6);
  return;
}


