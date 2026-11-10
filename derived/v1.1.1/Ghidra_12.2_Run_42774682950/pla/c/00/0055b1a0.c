/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055b1a0; name: FUN_0055b1a0
 */


undefined8
FUN_0055b1a0(undefined8 param_1,long *param_2,undefined8 param_3,int param_4,int param_5,
            long *param_6,ulong param_7)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined7 uStack_88;
  undefined4 local_81;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  undefined4 local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_38;
  long local_30 [2];
  
  local_30[0] = 0;
  local_30[1] = 0;
  plVar6 = param_6;
  if (param_5 == 2) {
    uVar5 = (uint)param_7;
    uVar1 = uVar5;
    if ((int)uVar5 < 1) {
      uVar1 = 1;
    }
    param_7 = (ulong)uVar1;
    plVar6 = local_30;
    if (0 < (int)uVar5) {
      plVar6 = param_6;
    }
    param_4 = 1;
  }
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_81 = 0;
                    /* try { // try from 0055b21c to 0055b22b has its CatchHandler @ 0055b2c4 */
  local_a8 = param_1;
  uVar4 = FUN_0055aedc(&local_a8,param_2,param_3,param_4 == 1,param_5 != 0,plVar6,param_7);
  if (((uVar4 & 1) == 0) || ((param_5 == 2 && (*plVar6 + plVar6[1] != *param_2 + param_2[1])))) {
    uVar7 = 0;
  }
  else {
    uVar7 = 1;
  }
  bVar2 = local_48 != 0;
  local_48 = 0;
  if (bVar2) {
    local_48 = 0;
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar3 = local_58;
  local_58 = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  lVar3 = local_68;
  local_68 = 0;
  if (lVar3 != 0) {
    FUN_002e2ea0(PTR_LAB_04373088);
  }
  return uVar7;
}


