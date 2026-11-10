/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00fa1c50; name: FUN_00fa1c50
 */


undefined1  [16] FUN_00fa1c50(long *param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 in_q3 [16];
  undefined8 uVar3;
  
  uVar3 = in_q3._8_8_;
  uVar2 = in_q3._0_8_;
  (**(code **)(*param_1 + 0x40))();
  auVar1._8_8_ = uVar3;
  auVar1._0_8_ = uVar2;
  return auVar1;
}


