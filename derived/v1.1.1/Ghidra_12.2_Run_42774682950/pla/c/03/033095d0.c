/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033095d0; name: FUN_033095d0
 */


void FUN_033095d0(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 local_180 [2];
  undefined8 *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  char *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  
  if ((*param_1 == 0) && (*param_2 == 0)) {
    if (DAT_0444ad18 < 2) {
      if (DAT_04350668 == '\0') {
        return;
      }
    }
    else if (DAT_04350668 == '\0') {
      local_180[0] = 0;
      local_170 = &DAT_0444acc8;
      uStack_168 = 2;
      local_160 = FUN_032ba19c();
      uStack_158 = 0;
      local_150 = 0;
      local_148 = (char *)0x0;
      local_140 = 0;
      uStack_138 = 0;
      FUN_03326338(local_180,"Attempting to clone a null var",PTR_DAT_04372528);
      local_148 = 
      "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
      local_140 = 0x34c;
      FUN_033266e0(local_180);
      FUN_032c7b9c(&uStack_158);
      return;
    }
    FUN_03326a7c(local_180,&DAT_0444acc8,2);
    FUN_03326338(local_180,"Attempting to clone a null var",PTR_DAT_04372528);
    local_148 = 
    "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp";
    local_140 = 0x34c;
    FUN_03326adc(local_180);
  }
  else {
    FUN_03309708(local_180);
    FUN_033099a8(local_180,param_1,param_2,param_3);
    FUN_03309b44(local_180);
  }
  return;
}


