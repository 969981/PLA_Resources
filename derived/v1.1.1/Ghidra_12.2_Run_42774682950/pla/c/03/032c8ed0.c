/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c8ed0; name: FUN_032c8ed0
 */


undefined1  [16] FUN_032c8ed0(float param_1)

{
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (NAN(SQRT(param_1))) {
    auVar1._0_4_ = sqrtf(param_1);
    auVar1._4_4_ = extraout_var;
    auVar1._8_8_ = extraout_var_00;
    return auVar1;
  }
  return ZEXT416((uint)SQRT(param_1));
}


