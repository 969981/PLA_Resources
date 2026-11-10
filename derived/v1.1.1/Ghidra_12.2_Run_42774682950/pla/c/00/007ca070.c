/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ca070; name: FUN_007ca070
 */


void FUN_007ca070(undefined8 *param_1,ulong param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 local_a0 [2];
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  plVar9 = param_1 + 0xe1;
  do {
    lVar8 = *plVar9;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar3) {
      *plVar9 = lVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (lVar8 + -1 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x9a);
    uStack_58 = param_1[0x9c];
    local_60 = param_1[0x9b];
    local_50 = param_1[0x9d];
    param_1[0x9d] = 0;
    param_1[0x9c] = 0;
    param_1[0x9b] = 0;
    uStack_40 = param_1[0x9f];
    local_48 = param_1[0x9e];
    local_38 = param_1[0xa0];
    param_1[0xa0] = 0;
    param_1[0x9f] = 0;
    param_1[0x9e] = 0;
    plVar9 = (long *)param_1[8];
    uVar10 = param_1[4];
    local_68[0] = uVar1;
    (**(code **)*param_1)();
                    /* try { // try from 007ca11c to 007ca13b has its CatchHandler @ 007ca260 */
    (**(code **)(**(long **)PTR_DAT_04373140 + 0x120))(*(long **)PTR_DAT_04373140,uVar10);
    uVar7 = uStack_40;
    uVar6 = local_48;
    uVar5 = local_50;
    uVar10 = uStack_58;
    uVar4 = local_60;
    if ((param_2 & 1) == 0) {
      local_60 = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_90 = uVar10;
      local_98 = uVar4;
      local_88 = uVar5;
      local_70 = local_38;
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      uStack_78 = uVar7;
      local_80 = uVar6;
      local_a0[0] = uVar1;
                    /* try { // try from 007ca1b8 to 007ca1c3 has its CatchHandler @ 007ca200 */
      (**(code **)(*plVar9 + 8))(plVar9,local_a0);
      if ((local_80 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_70);
      }
      if ((local_98 & 1) != 0) {
        FUN_002e2ea0(PTR_LAB_04373088,local_88);
      }
    }
    else {
      (**(code **)*plVar9)(plVar9,local_68);
    }
    if ((local_48 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_38);
    }
    if ((local_60 & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_50);
    }
  }
  return;
}


