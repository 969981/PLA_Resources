/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00da07ec; name: FUN_00da07ec
 */


void FUN_00da07ec(undefined8 *param_1)

{
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *param_1 = &PTR_FUN_041ed708;
  nn::hid::SetSupportedNpadStyleSet(3);
  nn::hid::SetSupportedNpadIdType((uint *)&DAT_03a78640,2);
  nn::hid::SetNpadJoyHoldType(0);
  nn::hid::SetNpadHandheldActivationMode(0);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_03a78640,param_1 + 0x12,0);
  nn::hid::BindNpadStyleSetUpdateEvent(&DAT_03a78644,param_1 + 0x18,0);
  return;
}


