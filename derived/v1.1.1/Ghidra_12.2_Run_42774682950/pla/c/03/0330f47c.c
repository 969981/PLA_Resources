/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330f47c; name: FUN_0330f47c
 */


void FUN_0330f47c(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190 [2];
  undefined8 *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_38 [8];
  
  local_38[0] = 0;
  iVar1 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
                    ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],local_38);
  if (iVar1 < 0) {
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') goto LAB_0330f608;
    }
    else if (DAT_04350668 == '\0') {
      local_190[0] = 0;
      local_180 = &DAT_0444acc8;
      uStack_178 = 2;
      local_170 = FUN_032ba19c();
      uStack_168 = 0;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      FUN_03326338(local_190,"Failed to get value from Var \'{}\'",&DAT_0434ed08,param_2);
      local_158 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_150 = 0x1ed;
      FUN_033266e0(local_190);
      goto LAB_0330f604;
    }
    FUN_03326a7c(local_190,&DAT_0444acc8,2);
    FUN_03326338(local_190,"Failed to get value from Var \'{}\'",&DAT_0434ed08,param_2);
    local_150 = 0x1ed;
  }
  else {
    iVar1 = (**(code **)(*(long *)(param_3[2] & 0xfffffffffffffffe) + 0x30))
                      ((long *)(param_3[2] & 0xfffffffffffffffe),*param_3,param_3[1],local_38[0]);
    if (-1 < iVar1) {
      return;
    }
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') goto LAB_0330f608;
    }
    else if (DAT_04350668 == '\0') {
      local_190[0] = 0;
      local_180 = &DAT_0444acc8;
      uStack_178 = 2;
      local_170 = FUN_032ba19c();
      uStack_168 = 0;
      local_160 = 0;
      local_158 = (char *)0x0;
      local_150 = 0;
      uStack_148 = 0;
      local_198 = param_2[1];
      local_1a0 = param_3[1];
      FUN_03326338(local_190,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                   &DAT_0434ed18,param_2,&local_198,&local_1a0);
      local_158 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_150 = 0x1f2;
      FUN_033266e0(local_190);
LAB_0330f604:
      FUN_032c7b9c(&uStack_168);
      goto LAB_0330f608;
    }
    FUN_03326a7c(local_190,&DAT_0444acc8,2);
    local_1a8 = param_2[1];
    local_1b0 = param_3[1];
    FUN_03326338(local_190,"Failed to set value \'{:*}\' (\'{}\') on Var of type \'{}\'",
                 &DAT_0434ed18,param_2,&local_1a8,&local_1b0);
    local_150 = 0x1f2;
  }
  local_158 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
  FUN_03326adc(local_190);
LAB_0330f608:
  *(undefined4 *)(param_1 + 8) = 0x80040200;
  return;
}


