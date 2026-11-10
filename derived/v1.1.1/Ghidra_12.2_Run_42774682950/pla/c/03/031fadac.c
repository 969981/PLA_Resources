/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031fadac; name: FUN_031fadac
 */


void FUN_031fadac(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined *puStack_38;
  undefined4 *local_30;
  undefined4 *puStack_28;
  
  *param_1 = (long)&PTR_LAB_042f11c0;
  plVar7 = (long *)param_1[0x14];
  if ((plVar7 == (long *)0x0) || (plVar7[1] == 0)) {
LAB_031fadf4:
    plVar7 = (long *)param_1[0x13];
    if (plVar7 == (long *)0x0) goto LAB_031fae48;
LAB_031fadfc:
    if (plVar7[1] == 0) goto LAB_031fae48;
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 != 0) goto LAB_031fae48;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x12];
    if (plVar7 != (long *)0x0) goto LAB_031fae50;
LAB_031fae70:
    plVar7 = (long *)param_1[0x11];
  }
  else {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 != 0) goto LAB_031fadf4;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x13];
    if (plVar7 != (long *)0x0) goto LAB_031fadfc;
LAB_031fae48:
    plVar7 = (long *)param_1[0x12];
    if (plVar7 == (long *)0x0) goto LAB_031fae70;
LAB_031fae50:
    if (plVar7[1] == 0) goto LAB_031fae70;
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 != 0) goto LAB_031fae70;
    (**(code **)(*plVar7 + 0x18))();
    plVar7 = (long *)param_1[0x11];
  }
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
      lVar8 = param_1[0xc];
      goto joined_r0x031faea8;
    }
  }
  lVar8 = param_1[0xc];
joined_r0x031faea8:
  if ((lVar8 != 0) && (*(int *)(lVar8 + 4) != -2)) {
    uVar2 = (long)(int)param_1[0xd] + 1;
    lVar5 = tpidr_el0;
    lVar9 = *(long *)(lVar5 + 0x38d490);
    if (lVar9 == 0) {
      lVar9 = FUN_0333d16c(0,1);
      *(long *)(lVar5 + 0x38d490) = lVar9;
    }
    plVar7 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
    local_48 = (undefined4)uVar2;
    uStack_44 = 8;
    if ((uVar2 & 0x1ffffffff0000000) != 0) {
      local_40 = 2;
      puStack_38 = &DAT_0411b3a0;
      local_30 = &uStack_44;
      puStack_28 = &local_48;
      FUN_03320b50(0x39ec3d88,
                   "C:/projects/havok/sdk/hk2020_2_0_r1/Source/Common/Base/Memory/Allocator/hkMemoryAllocator.cpp"
                   ,0x61,"Memory allocation request overflow {}*{}",&local_40);
    }
    (**(code **)(*plVar7 + 0x18))
              (plVar7,lVar8,-(uVar2 >> 0x1c & 1) & 0xffffffff00000000 | (uVar2 & 0x1fffffff) << 3);
    param_1[0xc] = (long)&DAT_03aad864;
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  puVar6 = PTR_PTR_0434a080;
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))
              (puVar6,param_1[10],((ulong)*(uint *)((long)param_1 + 0x5c) & 0x3fffffff) << 4);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < *(int *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6,param_1[6],*(int *)((long)param_1 + 0x3c) << 2);
  }
  plVar7 = (long *)param_1[4];
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  if ((plVar7 != (long *)0x0) && (plVar7[1] != 0)) {
    plVar1 = plVar7 + 2;
    do {
      lVar8 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar7 + 0x18))();
    }
  }
  *param_1 = (long)(PTR_DAT_043723c0 + 0x10);
  return;
}


