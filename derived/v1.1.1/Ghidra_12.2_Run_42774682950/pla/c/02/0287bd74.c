/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0287bd74; name: FUN_0287bd74
 */


void FUN_0287bd74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  *param_1 = &PTR_FUN_042714a0;
  uVar4 = *param_2;
  uVar5 = param_2[2];
  param_1[2] = param_2[1];
  param_1[3] = uVar5;
  param_1[1] = uVar4;
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar1 = param_2[6];
  param_1[6] = param_2[5];
  param_1[7] = uVar1;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  uVar4 = *param_2;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[8] = uVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = param_2[2] + param_2[1];
  param_1[0xe] = &PTR_LAB_04271538;
  param_1[0x17] = param_1 + 0xe;
  *(undefined4 *)(param_1 + 0x18) = 0x1000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x1fca056;
  param_1[0x11] = 0;
  param_1[0x12] = 0x1fca056;
  param_1[0x19] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0x1fca056;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x1fca056;
  DAT_043ec1f8 = param_1;
  FUN_02a49930(*(undefined4 *)(param_2 + 5),param_2[6]);
  param_1[0x14] = 0;
  nn::time::Initialize();
  puVar2 = PTR_DAT_0437b160;
  FUN_0287bf00(*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x188));
  local_28 = 1;
  local_38 = *(undefined8 *)(*(long *)PTR_DAT_04387cc0 + 8);
  local_30 = 0x100000;
  FUN_02a6a2a4(&local_38);
  FUN_02a57134(*(undefined8 *)(*(long *)puVar2 + 0x188));
  nn::hid::InitializeNpad();
  local_38 = 0x2000000000;
  nn::hid::SetSupportedNpadIdType((uint *)&local_38,2);
  nn::hid::SetSupportedNpadStyleSet(3);
  FUN_0287bfc8(*(undefined8 *)(*(long *)puVar2 + 0x188));
  lVar6 = *(long *)(*(long *)puVar2 + 0x48);
  uVar3 = FUN_0094cba4(lVar6 + 8);
  if ((uVar3 & 1) == 0) {
    lVar6 = 0;
  }
  FUN_0287c090(lVar6);
  FUN_0287c158(lVar6);
  FUN_0287c220(*(undefined8 *)(*(long *)puVar2 + 0x188));
  FUN_0287c290(*(undefined8 *)(*(long *)puVar2 + 0x188));
  return;
}


