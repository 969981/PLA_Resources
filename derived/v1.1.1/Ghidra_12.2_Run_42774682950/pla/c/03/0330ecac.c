/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330ecac; name: FUN_0330ecac
 */


void FUN_0330ecac(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  bool bVar8;
  byte *pbVar9;
  byte **ppbVar10;
  ulong uVar11;
  byte *local_200 [42];
  uint local_b0;
  uint local_ac;
  byte *local_a8 [2];
  undefined8 *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long local_50;
  ulong local_48;
  byte *local_38;
  
  ppbVar10 = local_200;
  local_50 = 0;
  local_48 = 0;
  local_58 = 0;
  pbVar9 = (byte *)param_3[1];
  if (pbVar9 != (byte *)0x0) {
    for (; (*pbVar9 & 1) == 0; pbVar9 = *(byte **)(pbVar9 + 8)) {
    }
    if ((*(ulong *)(pbVar9 + 0x10) & 0x1f) == 5) {
      local_58 = *param_3;
      local_50 = param_3[1];
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        piVar2 = (int *)((uVar11 & 0xfffffffffffffffe) + 8);
        do {
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar5) {
            *piVar2 = *piVar2 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        uVar11 = param_3[2];
      }
      local_48 = uVar11;
      if (local_58 != 0) {
        FUN_0330f9a4(param_1,param_2,&local_58);
        goto joined_r0x0330ee28;
      }
    }
  }
  uVar11 = local_48;
  if (DAT_0444ad18 < 2) {
    if (DAT_04350668 != '\0') goto LAB_0330ee64;
  }
  else {
    if (DAT_04350668 == '\0') {
      local_a8[0] = (byte *)0x0;
      local_98 = &DAT_0444acc8;
      uStack_90 = 2;
      local_88 = FUN_032ba19c();
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_200[0] = *(byte **)(param_2 + 8);
      local_38 = (byte *)param_3[1];
      bVar3 = *local_200[0];
      pbVar9 = local_200[0];
      while ((bVar3 & 1) == 0) {
        pbVar9 = *(byte **)(pbVar9 + 8);
        bVar3 = *pbVar9;
      }
      local_ac = *(uint *)(pbVar9 + 0x10) & 0x1f;
      bVar3 = *local_38;
      pbVar9 = local_38;
      while ((bVar3 & 1) == 0) {
        pbVar9 = *(byte **)(pbVar9 + 8);
        bVar3 = *pbVar9;
      }
      local_b0 = *(uint *)(pbVar9 + 0x10) & 0x1f;
      ppbVar10 = local_a8;
      FUN_03326338(local_a8,
                   "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                   ,&DAT_0434f0c8,local_200,&local_38,&local_ac,&local_b0);
      bVar8 = false;
      bVar5 = true;
    }
    else {
LAB_0330ee64:
      FUN_03326a7c(local_200,&DAT_0444acc8,2);
      local_a8[0] = *(byte **)(param_2 + 8);
      local_38 = (byte *)param_3[1];
      bVar3 = *local_a8[0];
      pbVar9 = local_a8[0];
      while ((bVar3 & 1) == 0) {
        pbVar9 = *(byte **)(pbVar9 + 8);
        bVar3 = *pbVar9;
      }
      local_ac = *(uint *)(pbVar9 + 0x10) & 0x1f;
      bVar3 = *local_38;
      pbVar9 = local_38;
      while ((bVar3 & 1) == 0) {
        pbVar9 = *(byte **)(pbVar9 + 8);
        bVar3 = *pbVar9;
      }
      local_b0 = *(uint *)(pbVar9 + 0x10) & 0x1f;
      FUN_03326338(local_200,
                   "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                   ,&DAT_0434f0c8,local_a8,&local_38,&local_ac,&local_b0);
      bVar5 = false;
      bVar8 = true;
    }
    ppbVar10[7] = (byte *)
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    ppbVar10[8] = (byte *)0x14c;
    if (bVar8) {
      FUN_03326adc(local_200);
    }
    if (bVar5) {
      FUN_033266e0(local_a8);
      FUN_032c7b9c(&uStack_80);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
joined_r0x0330ee28:
  if ((uVar11 & 1) != 0) {
    plVar7 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar1 = plVar7 + 1;
    do {
      lVar6 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar6 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar7 != (long *)0x0) && ((int)lVar6 == 1)) {
      (**(code **)(*plVar7 + 8))();
    }
  }
  return;
}


