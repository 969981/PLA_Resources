/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d184a4; name: FUN_00d184a4
 */


void FUN_00d184a4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_00d894e4();
  param_1[0x1d] = 0;
  *param_1 = &PTR_LAB_041ea1c0;
  param_1[9] = &PTR_LAB_041ea230;
  param_1[10] = &PTR_LAB_041ea278;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  param_1[0xf] = param_2;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  FUN_00d18570(&local_50,param_2);
  uVar1 = local_50;
  local_50 = 0;
  lVar2 = param_1[0x1a];
  param_1[0x1a] = uVar1;
  if (lVar2 != 0) {
    FUN_00d1aef8(param_1 + 0x1b);
  }
  param_1[0x1c] = uStack_40;
  param_1[0x1d] = local_38;
  param_1[0x1b] = local_48;
  return;
}


