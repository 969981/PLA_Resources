/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031530a8; name: FUN_031530a8
 */


void FUN_031530a8(uint *param_1,uint param_2,uint param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_260 [512];
  undefined1 auStack_60 [16];
  
  *param_1 = 0;
  if ((int)param_2 < 0x200) {
    if ((0x1ff < (int)param_3) &&
       (cVar1 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x22441300), cVar1 != '\0')) {
      FUN_0331fefc(auStack_60,auStack_260,0x200);
      FUN_0332448c(auStack_60,"Id value cannot fit in tag.");
      FUN_03320af0(0x22441300,auStack_260,"../..\\Common/Base/Types/Visualize/hkVdbCmdTag.h",0x96);
      (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x22441300,0);
      FUN_0331ff7c(auStack_60);
    }
    if (0x1fe < param_3) {
      param_3 = 0x1ff;
    }
    if ((0x1fff < (int)param_4) &&
       (cVar1 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x22441300), cVar1 != '\0')) {
      FUN_0331fefc(auStack_60,auStack_260,0x200);
      FUN_0332448c(auStack_60,"Id value cannot fit in tag.");
      FUN_03320af0(0x22441300,auStack_260,"../..\\Common/Base/Types/Visualize/hkVdbCmdTag.h",0x96);
      (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x22441300,0);
      FUN_0331ff7c(auStack_60);
    }
    if (0x1ffe < param_4) {
      param_4 = 0x1fff;
    }
    uVar2 = 0x1ff;
    if (-1 < (int)param_2) {
      uVar2 = param_2 & 0x1ff;
    }
    uVar2 = (param_3 & 0x1ff) << 0x16 | uVar2 | (param_4 & 0x1fff) << 9;
  }
  else {
    cVar1 = (**(code **)(*DAT_0444b0d0 + 0x30))(DAT_0444b0d0,0x22441301);
    if (cVar1 == '\0') {
      uVar2 = 0x80000000;
    }
    else {
      FUN_0331fefc(auStack_60,auStack_260,0x200);
      FUN_0332448c(auStack_60,"Id value cannot fit in tag.");
      FUN_03320af0(0x22441301,auStack_260,"../..\\Common/Base/Types/Visualize/hkVdbCmdTag.h",0xa0);
      (**(code **)(*DAT_0444b0d0 + 0x28))(DAT_0444b0d0,0x22441301,0);
      FUN_0331ff7c(auStack_60);
      uVar2 = 0x80000000;
    }
  }
  *param_1 = uVar2;
  return;
}


