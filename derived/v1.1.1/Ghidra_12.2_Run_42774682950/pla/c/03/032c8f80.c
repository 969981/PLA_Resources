/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032c8f80; name: FUN_032c8f80
 */


undefined1  [16] FUN_032c8f80(float param_1)

{
  uint uVar1;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar2 [16];
  
  if (ABS(param_1) < 1.0) {
    auVar2._0_4_ = asinf(param_1);
    auVar2._4_4_ = extraout_var;
    auVar2._8_8_ = extraout_var_00;
    return auVar2;
  }
  uVar1 = 0x3fc90fdb;
  if (param_1 <= 0.0) {
    uVar1 = 0xbfc90fdb;
  }
  return ZEXT416(uVar1);
}


