/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00db72dc; name: FUN_00db72dc
 */


void FUN_00db72dc(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  *param_1 = &PTR_LAB_041ee148;
  FUN_00db7334();
  if (param_1[0x12] != 0) {
    FUN_02a43934();
  }
  UNRECOVERED_JUMPTABLE = (code *)param_1[3];
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
                    /* WARNING: Could not recover jumptable at 0x00db7324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1 + 6);
  return;
}


