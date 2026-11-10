/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c15204; name: FUN_01c15204
 */


void FUN_01c15204(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  uint extraout_var_00;
  
  *(undefined1 *)(param_1 + 0x280) = 1;
  *(undefined1 *)(param_1 + 0x28c) = 1;
  *(undefined8 *)(param_1 + 0x284) = 0;
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x2d0);
  *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)(param_1 + 0x2d8);
  *(undefined4 *)(param_1 + 0x2a0) = *(undefined4 *)(param_1 + 0x2e0);
  FUN_01c15ebc();
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  *(ulong *)(param_1 + 0x2b8) = (ulong)extraout_var_00;
  *(ulong *)(param_1 + 0x2b0) = CONCAT44(extraout_var,extraout_s0);
  FUN_01c15268(0x3f800000,param_1);
  return;
}


