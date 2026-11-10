/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c2190; name: FUN_031c2190
 */


void FUN_031c2190(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long *local_70;
  undefined8 uStack_68;
  int local_58;
  int local_54;
  
  plVar1 = param_1 + 4;
  do {
    if ((char)*plVar1 != '\0') goto LAB_031c23ac;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(char *)plVar1 = '\x01';
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  lVar11 = tpidr_el0;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  plVar6 = *(long **)(*(long *)(lVar9 + 8) + 0x58);
  puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0x10))(plVar6,0x60,0);
  *puVar7 = &PTR_LAB_0430b620;
  puVar7[1] = 0xffffffff;
  puVar7[2] = 1;
  puVar7[3] = 0;
  puVar7[8] = 0xffffffff00000000;
  puVar7[6] = 0x8000000000000000;
  *(undefined4 *)(puVar7 + 9) = 0x7f7fffee;
  *(undefined2 *)((long)puVar7 + 0x4c) = 0;
  puVar7[4] = 0x8000000000000000;
  puVar7[5] = 0;
  puVar7[10] = 0;
  puVar7[0xb] = 0x8000000000000000;
  plVar6 = (long *)param_1[6];
  param_1[6] = (long)puVar7;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar8 = plVar6 + 2;
    do {
      lVar9 = *plVar8;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar4) {
        *plVar8 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  (**(code **)(*param_1 + 0x20))(&local_70,param_1,param_2);
  plVar6 = local_70;
  local_70 = (long *)0x0;
  plVar8 = (long *)param_1[5];
  param_1[5] = (long)plVar6;
  if ((plVar8 != (long *)0x0) && (plVar8[1] != 0)) {
    plVar6 = plVar8 + 2;
    do {
      lVar9 = *plVar6;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
      if (bVar4) {
        *plVar6 = lVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (((lVar9 + -1 == 0) && ((**(code **)(*plVar8 + 0x18))(), local_70 != (long *)0x0)) &&
       (local_70[1] != 0)) {
      plVar6 = local_70 + 2;
      do {
        lVar9 = *plVar6;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar4) {
          *plVar6 = lVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*local_70 + 0x18))();
      }
    }
  }
  lVar12 = (long)DAT_0444b53c;
  lVar9 = *(long *)(lVar11 + 0x38d490);
  if (lVar9 == 0) {
    lVar9 = FUN_0333d16c(0,1);
    *(long *)(lVar11 + 0x38d490) = lVar9;
  }
  if (*(long *)(lVar9 + lVar12 * 8 + 0x18) == 0) {
    lVar11 = param_1[5];
  }
  else {
    FUN_0332a954();
    lVar11 = param_1[5];
  }
  if (lVar11 == 0) {
    lVar11 = param_1[6];
    *(undefined8 *)(lVar11 + 0x40) = 0xffffffff00000000;
    *(undefined1 *)(lVar11 + 0x4c) = 5;
  }
  else {
    lVar9 = *(long *)(lVar11 + 200);
    local_58 = (int)lVar9;
    if (local_58 < 1) {
      local_58 = 0x20000;
    }
    local_54 = (int)((ulong)lVar9 >> 0x20);
    if (local_54 == 0 || lVar9 < 0) {
      local_54 = 0x90200;
    }
    local_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_031b1548(param_4,&local_70,&local_58);
    *(undefined8 *)(lVar11 + 0xe0) = *param_4;
    *(undefined8 *)(lVar11 + 0xe8) = param_4[1];
    lVar9 = *(long *)(lVar11 + 0xd0);
    local_58 = (int)lVar9;
    if (local_58 < 1) {
      local_58 = 0x8000;
    }
    local_54 = (int)((ulong)lVar9 >> 0x20);
    if (local_54 == 0 || lVar9 < 0) {
      local_54 = 0x24200;
    }
    local_70 = (long *)0x0;
    uStack_68 = 0;
    FUN_031b1548(param_5,&local_70,&local_58);
    *(undefined8 *)(lVar11 + 0xf0) = *param_5;
    *(undefined8 *)(lVar11 + 0xf8) = param_5[1];
    *(bool *)(param_1[5] + 0xb1) = param_6 != (undefined8 *)0x0;
    FUN_031b1728(param_2,param_1[5],param_1[6]);
    puVar5 = PTR_PTR_0434a080;
    if (param_6 != (undefined8 *)0x0) {
      lVar11 = param_1[6];
      if ((undefined8 *)(lVar11 + 0x50) != param_6) {
        if (*(int *)((long)param_6 + 0xc) < 0) {
          FUN_032bcf84(PTR_PTR_0434a080,param_6,4);
        }
        if (*(int *)(lVar11 + 0x5c) < 0) {
          FUN_032bcf84(puVar5,(undefined8 *)(lVar11 + 0x50),4);
        }
        uVar10 = *param_6;
        *param_6 = *(undefined8 *)(lVar11 + 0x50);
        *(undefined8 *)(lVar11 + 0x50) = uVar10;
        uVar2 = *(undefined4 *)(param_6 + 1);
        *(undefined4 *)(param_6 + 1) = *(undefined4 *)(lVar11 + 0x58);
        *(undefined4 *)(lVar11 + 0x58) = uVar2;
        uVar2 = *(undefined4 *)((long)param_6 + 0xc);
        *(undefined4 *)((long)param_6 + 0xc) = *(undefined4 *)(lVar11 + 0x5c);
        *(undefined4 *)(lVar11 + 0x5c) = uVar2;
      }
      uVar10 = *(undefined8 *)(param_1[5] + 0x90);
      *(undefined4 *)(param_7 + 1) = *(undefined4 *)(param_1[5] + 0x98);
      *param_7 = uVar10;
    }
  }
  while ((char)*plVar1 == '\x01') {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(char *)plVar1 = '\x02';
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      return;
    }
  }
LAB_031c23ac:
  ClearExclusiveLocal();
  return;
}


