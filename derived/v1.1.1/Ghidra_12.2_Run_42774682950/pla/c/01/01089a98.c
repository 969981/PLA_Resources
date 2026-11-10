/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01089a98; name: FUN_01089a98
 */


void FUN_01089a98(long *param_1,undefined8 param_2,uint param_3)

{
  FUN_01088130(param_1,param_2,param_3 & 1);
  *param_1 = (long)&PTR_FUN_041ef888;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[9] = (long)&PTR_LAB_041ef8f8;
  param_1[10] = (long)&PTR_LAB_041ef940;
  param_1[0x1c] = 0;
  param_1[0x1f] = param_1[1];
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x20] = 0x7ffffffffffffff;
  param_1[0x21] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = param_1[1];
  param_1[0x27] = 0x7ffffffffffffff;
  param_1[0x28] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  if (param_1[0xe] != param_1[0xd]) {
    if ((char)param_1[0x14] == '\0') {
      FUN_0108b2bc(param_1,param_1 + 0xd,param_1 + 0x1c,param_1 + 0x23);
    }
    else {
      FUN_0108a9f4(param_1);
    }
  }
  if ((ulong)(param_1[0xe] - param_1[0xd] >> 5) < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01089b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}


