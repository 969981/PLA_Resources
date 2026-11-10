/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330f718; name: FUN_0330f718
 */


void FUN_0330f718(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char *local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_50;
  undefined1 local_48;
  undefined7 uStack_47;
  undefined8 local_38;
  
  local_50 = 0;
  local_48 = 0;
  iVar1 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                    ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],&local_50);
  if (iVar1 < 0) {
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') goto LAB_0330f8b0;
    }
    else if (DAT_04350668 == '\0') {
      local_1a0 = 0;
      local_190 = &DAT_0444acc8;
      uStack_188 = 2;
      local_180 = FUN_032ba19c();
      uStack_178 = 0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      FUN_03326338(&local_1a0,"Failed to get value from Var \'{}\'",&DAT_0434f098,param_2);
      local_168 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_160 = 0x1ed;
      FUN_033266e0(&local_1a0);
      goto LAB_0330f8ac;
    }
    FUN_03326a7c(&local_1a0,&DAT_0444acc8,2);
    FUN_03326338(&local_1a0,"Failed to get value from Var \'{}\'",&DAT_0434f098,param_2);
    local_160 = 0x1ed;
  }
  else {
    uStack_198 = CONCAT71(uStack_47,local_48);
    local_1a0 = local_50;
    iVar1 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
                      ((long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1],&local_1a0);
    if (-1 < iVar1) {
      return;
    }
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') goto LAB_0330f8b0;
    }
    else if (DAT_04350668 == '\0') {
      local_1a0 = 0;
      local_190 = &DAT_0444acc8;
      uStack_188 = 2;
      local_180 = FUN_032ba19c();
      uStack_178 = 0;
      local_170 = 0;
      local_168 = (char *)0x0;
      local_160 = 0;
      uStack_158 = 0;
      local_38 = param_2[1];
      local_1a8 = param_3[1];
      FUN_03326338(&local_1a0,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                   &DAT_0434f0a8,param_2,&local_38,&local_1a8);
      local_168 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_160 = 0x1f2;
      FUN_033266e0(&local_1a0);
LAB_0330f8ac:
      FUN_032c7b9c(&uStack_178);
      goto LAB_0330f8b0;
    }
    FUN_03326a7c(&local_1a0,&DAT_0444acc8,2);
    local_1b0 = param_2[1];
    local_1b8 = param_3[1];
    FUN_03326338(&local_1a0,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                 &DAT_0434f0a8,param_2,&local_1b0,&local_1b8);
    local_160 = 0x1f2;
  }
  local_168 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
  FUN_03326adc(&local_1a0);
LAB_0330f8b0:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}


