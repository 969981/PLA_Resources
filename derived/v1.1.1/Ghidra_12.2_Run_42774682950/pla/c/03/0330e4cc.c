/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0330e4cc; name: FUN_0330e4cc
 */


void FUN_0330e4cc(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  long *plVar6;
  bool bVar7;
  byte *pbVar8;
  long lVar9;
  byte **ppbVar10;
  ulong uVar11;
  byte *local_1e8 [42];
  uint local_98;
  uint local_94;
  byte *local_90 [2];
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte *local_38;
  
  pbVar8 = (byte *)param_3[1];
  if (pbVar8 == (byte *)0x0) {
LAB_0330e4f8:
    uVar11 = 0;
  }
  else {
    for (; (*pbVar8 & 1) == 0; pbVar8 = *(byte **)(pbVar8 + 8)) {
    }
    if ((*(ulong *)(pbVar8 + 0x10) & 0x1f) != 1) goto LAB_0330e4f8;
    lVar9 = *param_3;
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
    if (lVar9 != 0) {
      FUN_0330f33c(param_1);
      goto joined_r0x0330e62c;
    }
  }
  if (DAT_0444ad18 < 2) {
    if (DAT_04350668 != '\0') goto LAB_0330e668;
  }
  else {
    if (DAT_04350668 == '\0') {
      local_90[0] = (byte *)0x0;
      local_80 = &DAT_0444acc8;
      uStack_78 = 2;
      local_70 = FUN_032ba19c();
      uStack_68 = 0;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      local_1e8[0] = *(byte **)(param_2 + 8);
      local_38 = (byte *)param_3[1];
      bVar3 = *local_1e8[0];
      pbVar8 = local_1e8[0];
      while ((bVar3 & 1) == 0) {
        pbVar8 = *(byte **)(pbVar8 + 8);
        bVar3 = *pbVar8;
      }
      local_94 = *(uint *)(pbVar8 + 0x10) & 0x1f;
      bVar3 = *local_38;
      pbVar8 = local_38;
      while ((bVar3 & 1) == 0) {
        pbVar8 = *(byte **)(pbVar8 + 8);
        bVar3 = *pbVar8;
      }
      local_98 = *(uint *)(pbVar8 + 0x10) & 0x1f;
      ppbVar10 = local_90;
      FUN_03326338(local_90,
                   "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                   ,&DAT_0434e9d8,local_1e8,&local_38,&local_94,&local_98);
      bVar7 = false;
      bVar5 = true;
    }
    else {
LAB_0330e668:
      FUN_03326a7c(local_1e8,&DAT_0444acc8,2);
      local_90[0] = *(byte **)(param_2 + 8);
      local_38 = (byte *)param_3[1];
      bVar3 = *local_90[0];
      pbVar8 = local_90[0];
      while ((bVar3 & 1) == 0) {
        pbVar8 = *(byte **)(pbVar8 + 8);
        bVar3 = *pbVar8;
      }
      local_94 = *(uint *)(pbVar8 + 0x10) & 0x1f;
      bVar3 = *local_38;
      pbVar8 = local_38;
      while ((bVar3 & 1) == 0) {
        pbVar8 = *(byte **)(pbVar8 + 8);
        bVar3 = *pbVar8;
      }
      local_98 = *(uint *)(pbVar8 + 0x10) & 0x1f;
      ppbVar10 = local_1e8;
      FUN_03326338(local_1e8,
                   "Cannot clone an object of type {} onto an object of type {} (different kinds, {} != {})"
                   ,&DAT_0434e9d8,local_90,&local_38,&local_94,&local_98);
      bVar5 = false;
      bVar7 = true;
    }
    ppbVar10[7] = (byte *)
                  "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Reflect/Util/hkReflectClone.cpp"
    ;
    ppbVar10[8] = (byte *)0x14c;
    if (bVar7) {
      FUN_03326adc(local_1e8);
    }
    if (bVar5) {
      FUN_033266e0(local_90);
      FUN_032c7b9c(&uStack_68);
    }
  }
  *(undefined4 *)(param_1 + 8) = 0x80040200;
joined_r0x0330e62c:
  if ((uVar11 & 1) != 0) {
    plVar6 = (long *)(uVar11 & 0xfffffffffffffffe);
    plVar1 = plVar6 + 1;
    do {
      lVar9 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)lVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if ((plVar6 != (long *)0x0) && ((int)lVar9 == 1)) {
      (**(code **)(*plVar6 + 8))();
    }
  }
  return;
}


