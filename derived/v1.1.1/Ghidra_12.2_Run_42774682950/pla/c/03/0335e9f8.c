/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0335e9f8; name: FUN_0335e9f8
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_0335e9f8(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [10];
  undefined1 local_56;
  
  uVar1 = DAT_0388a148;
  uVar4 = DAT_0388a140;
  uVar3 = _DAT_03889a80;
  param_1[1] = _UNK_03889a88;
  *param_1 = uVar3;
  param_1[3] = uVar1;
  param_1[2] = uVar4;
  uVar1 = _UNK_0388a138;
  uVar4 = _DAT_0388a130;
  uVar3 = _DAT_03888d10;
  param_1[5] = _UNK_03888d18;
  param_1[4] = uVar3;
  param_1[7] = uVar1;
  param_1[6] = uVar4;
  if (param_3 < 1) {
    uVar3 = 0x3f800000;
    uVar4 = 0;
  }
  else {
    FUN_001b1d20(auStack_60);
    local_56 = 1;
    FUN_001b1d70(auStack_90);
    FUN_001b2c3c(auStack_90,param_2,param_3,auStack_60);
    auVar2 = FUN_0335eac0(param_1,param_2,param_3,auStack_90);
    uVar4 = auVar2._8_8_;
    uVar3 = auVar2._0_8_;
    FUN_001b1ed4(auStack_90);
  }
  auVar2._8_8_ = uVar4;
  auVar2._0_8_ = uVar3;
  return auVar2;
}


