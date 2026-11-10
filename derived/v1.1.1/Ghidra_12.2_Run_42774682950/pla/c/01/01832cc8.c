/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01832cc8; name: FUN_01832cc8
 */


undefined1  [16] FUN_01832cc8(uint param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (param_1 == 0xffffffff) {
    return ZEXT816(0x3f800000);
  }
                    /* WARNING: Could not recover jumptable at 0x01832cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(PTR_PTR_0437a4c8 + (ulong)param_1 * 8))();
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}


