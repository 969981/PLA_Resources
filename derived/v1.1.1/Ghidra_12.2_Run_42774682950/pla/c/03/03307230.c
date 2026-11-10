/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03307230; name: FUN_03307230
 */


void FUN_03307230(undefined8 *param_1,undefined8 *param_2,long *param_3,undefined8 param_4)

{
  undefined8 local_170 [2];
  undefined8 *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  char *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  
  if (*param_3 != 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    FUN_03307360(*param_2,param_1,param_3,param_4);
    return;
  }
  if (DAT_0444ad18 < 2) {
    if (DAT_04350668 == '\0') goto LAB_033072fc;
  }
  else if (DAT_04350668 == '\0') {
    local_170[0] = 0;
    local_160 = &DAT_0444acc8;
    uStack_158 = 2;
    local_150 = FUN_032ba19c();
    uStack_148 = 0;
    local_140 = 0;
    local_138 = (char *)0x0;
    local_130 = 0;
    uStack_128 = 0;
    FUN_03326338(local_170,"Attempting to clone a null var",PTR_DAT_04372528);
    local_138 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
    local_130 = 0x33d;
    FUN_033266e0(local_170);
    FUN_032c7b9c(&uStack_148);
    goto LAB_033072fc;
  }
  FUN_03326a7c(local_170,&DAT_0444acc8,2);
  FUN_03326338(local_170,"Attempting to clone a null var",PTR_DAT_04372528);
  local_138 = 
  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
  local_130 = 0x33d;
  FUN_03326adc(local_170);
LAB_033072fc:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}


