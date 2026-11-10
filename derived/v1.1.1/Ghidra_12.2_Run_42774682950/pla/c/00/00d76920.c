/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d76920; name: FUN_00d76920
 */


void FUN_00d76920(ShowKeyboardArg *param_1,undefined4 *param_2,long *param_3)

{
  undefined8 uVar1;
  
  nn::swkbd::MakePreset(param_1,0);
  if ((*(long *)(param_2 + 0x18) == 0) || (param_2[0x1a] == 0)) {
    uVar1 = nn::swkbd::GetRequiredWorkBufferSize(false);
  }
  else {
    uVar1 = nn::swkbd::GetRequiredWorkBufferSize(param_2[0x1a]);
  }
  *(undefined8 *)(param_1 + 0x4d8) = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,uVar1,0x1000);
  *(undefined8 *)(param_1 + 0x4d0) = uVar1;
  nn::swkbd::SetUserWordList(param_1,*(UserWord **)(param_2 + 0x18),param_2[0x1a]);
  uVar1 = nn::swkbd::GetRequiredTextCheckWorkBufferSize();
  *(undefined8 *)(param_1 + 0x4e8) = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3,uVar1,0x1000);
  *(undefined8 *)(param_1 + 0x4e0) = uVar1;
  *(undefined4 *)param_1 = *param_2;
  param_1[0x1a] = (ShowKeyboardArg)0x0;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  *(undefined4 *)(param_1 + 0x20) = 1;
  nn::swkbd::SetHeaderText((KeyboardConfig *)param_1,*(wchar16 **)(param_2 + 2));
  nn::swkbd::SetSubText((KeyboardConfig *)param_1,*(wchar16 **)(param_2 + 4));
  *(undefined4 *)(param_1 + 0x3ac) = param_2[6];
  *(undefined4 *)(param_1 + 0x3b0) = param_2[7];
  *(undefined4 *)(param_1 + 0x3b8) = param_2[8];
  *(undefined2 *)(param_1 + 0x3bc) = 0;
  param_1[0x3be] = (ShowKeyboardArg)0x1;
  *(undefined4 *)(param_1 + 0x3e0) = param_2[9];
  *(undefined4 *)(param_1 + 0x3e4) = param_2[10];
  *(undefined4 *)(param_1 + 1000) = param_2[0xb];
  *(undefined4 *)(param_1 + 0x3ec) = param_2[0xc];
  *(undefined4 *)(param_1 + 0x3f0) = param_2[0xd];
  *(undefined4 *)(param_1 + 0x3f4) = param_2[0xe];
  *(undefined4 *)(param_1 + 0x3f8) = param_2[0xf];
  *(undefined4 *)(param_1 + 0x3fc) = param_2[0x10];
  DAT_043acee8 = *(undefined8 *)(param_2 + 0x12);
  DAT_043acef0 = *(undefined8 *)(param_2 + 0x14);
  nn::swkbd::SetTextCheckCallback
            (param_1,(_func_TextCheckResult_void_ptr_ulong_ptr_String_ptr *)&LAB_00d76b50);
  nn::swkbd::SetInitialText(param_1,*(wchar16 **)(param_2 + 0x16));
  return;
}


