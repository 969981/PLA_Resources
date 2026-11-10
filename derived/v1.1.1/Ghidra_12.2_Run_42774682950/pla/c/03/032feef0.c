/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032feef0; name: FUN_032feef0
 */


undefined8 * FUN_032feef0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 local_50;
  undefined *puStack_48;
  ulong local_40;
  long local_38;
  
  uVar5 = FUN_032e35d8(param_2);
  puVar8 = (undefined8 *)0x0;
  switch(uVar5 & 0x1f) {
  case 0:
  case 1:
    goto switchD_032fef34_caseD_0;
  case 2:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    uVar11 = puVar2[2];
    if ((uVar11 & 1) == 0) {
      FUN_032e0b78(puVar8);
      ppuVar7 = &PTR_LAB_0434e008;
LAB_032ff070:
      *puVar8 = ppuVar7;
      puVar8[2] = local_50;
      puVar8[3] = puStack_48;
      puVar8[4] = uVar11;
      puVar8[5] = lVar9;
      *(undefined4 *)(puVar8 + 1) = 0;
      return puVar8;
    }
    plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar8);
    *puVar8 = &PTR_LAB_0434e008;
    puVar8[2] = local_50;
    puVar8[3] = puStack_48;
    puVar8[4] = uVar11;
    FUN_032e0c28(plVar10);
    plVar1 = plVar10 + 1;
    puVar8[5] = lVar9;
    *(undefined4 *)(puVar8 + 1) = 0;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 3:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    uVar11 = puVar2[2];
    if ((uVar11 & 1) == 0) {
      FUN_032e0b78(puVar8);
      ppuVar7 = &PTR_LAB_0434e070;
      goto LAB_032ff070;
    }
    plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar8);
    *puVar8 = &PTR_LAB_0434e070;
    puVar8[2] = local_50;
    puVar8[3] = puStack_48;
    puVar8[4] = uVar11;
    FUN_032e0c28(plVar10);
    plVar1 = plVar10 + 1;
    puVar8[5] = lVar9;
    *(undefined4 *)(puVar8 + 1) = 0;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 4:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    uVar11 = puVar2[2];
    if ((uVar11 & 1) == 0) {
      FUN_032e0b78(puVar8);
      ppuVar7 = &PTR_LAB_0434e0e0;
      goto LAB_032ff070;
    }
    plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar8);
    *puVar8 = &PTR_LAB_0434e0e0;
    puVar8[2] = local_50;
    puVar8[3] = puStack_48;
    puVar8[4] = uVar11;
    FUN_032e0c28(plVar10);
    plVar1 = plVar10 + 1;
    puVar8[5] = lVar9;
    *(undefined4 *)(puVar8 + 1) = 0;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 5:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    uVar11 = puVar2[2];
    if ((uVar11 & 1) == 0) {
      FUN_032e0b78(puVar8);
      ppuVar7 = &PTR_LAB_0434e148;
      goto LAB_032ff070;
    }
    plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar8);
    *puVar8 = &PTR_LAB_0434e148;
    puVar8[2] = local_50;
    puVar8[3] = puStack_48;
    puVar8[4] = uVar11;
    FUN_032e0c28(plVar10);
    plVar1 = plVar10 + 1;
    puVar8[5] = lVar9;
    *(undefined4 *)(puVar8 + 1) = 0;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 6:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    lVar9 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    uVar11 = puVar2[2];
    if ((uVar11 & 1) == 0) {
      FUN_032e0b78(puVar8);
      ppuVar7 = &PTR_LAB_0434e1b0;
      goto LAB_032ff070;
    }
    plVar10 = (long *)(uVar11 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_032e0b78(puVar8);
    *puVar8 = &PTR_LAB_0434e1b0;
    puVar8[2] = local_50;
    puVar8[3] = puStack_48;
    puVar8[4] = uVar11;
    FUN_032e0c28(plVar10);
    plVar1 = plVar10 + 1;
    puVar8[5] = lVar9;
    *(undefined4 *)(puVar8 + 1) = 0;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 7:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    local_38 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    local_40 = puVar2[2];
    if ((local_40 & 1) == 0) {
      FUN_03304a44(puVar8,&local_50);
      return puVar8;
    }
    plVar10 = (long *)(local_40 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_03304a44(puVar8,&local_50);
    plVar1 = plVar10 + 1;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  case 8:
    puVar8 = (undefined8 *)FUN_032cf5b0(0x30);
    puVar2 = (undefined8 *)*param_1;
    local_38 = param_1[1];
    local_50 = *puVar2;
    puStack_48 = (undefined *)puVar2[1];
    local_40 = puVar2[2];
    if ((local_40 & 1) == 0) {
      FUN_033051cc(puVar8,&local_50);
      return puVar8;
    }
    plVar10 = (long *)(local_40 & 0xfffffffffffffffe);
    FUN_032e0c28(plVar10);
    FUN_033051cc(puVar8,&local_50);
    plVar1 = plVar10 + 1;
    do {
      iVar6 = (int)*plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    break;
  default:
    local_40 = 0;
    local_50 = 0;
    puStack_48 = PTR_DAT_04372528;
    FUN_03320b50(0xfdbd9f9,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",0x1b
                 ,s_Bad_type_visitor_switch_0390397d,&local_50);
    puVar8 = (undefined8 *)0x0;
    goto switchD_032fef34_caseD_0;
  }
  if ((plVar10 != (long *)0x0) && (iVar6 == 1)) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
switchD_032fef34_caseD_0:
  return puVar8;
}


