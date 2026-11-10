/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de5e00; name: FUN_02de5e00
 */


void FUN_02de5e00(long param_1)

{
  int *piVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  bool bVar5;
  short sVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *local_58;
  char *pcStack_50;
  undefined8 local_48;
  long *local_40;
  undefined1 auStack_38 [8];
  
  lVar10 = *(long *)(*(long *)(param_1 + 0x80) + 0x58);
  lVar8 = lVar10 + 0x1a8;
  if (*(char *)(lVar10 + 0x304) != '\0') {
    lVar8 = lVar10 + 0x1f0;
  }
  FUN_00956dac(&local_58,lVar8);
  if (local_58 == (long *)0x0) {
    plVar11 = (long *)0x0;
  }
  else {
    lVar8 = FUN_00a3e9dc(local_58 + 0x1e,auStack_38);
    if (local_58 != (long *)0x0) {
      lVar10 = local_58[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar7 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_58 + 0x20))();
      }
    }
    plVar11 = (long *)0x0;
    if ((lVar8 != 0) && (plVar11 = *(long **)(lVar8 + 0x1f0), plVar11 != (long *)0x0)) {
      plVar9 = plVar11 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar5) {
          *(int *)plVar9 = (int)*plVar9 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  if (((*PTR_DAT_0437a570 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a570), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a728,PTR_DAT_0437a578,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a570);
  }
  plVar9 = (long *)PTR_DAT_0437a578;
  if (plVar11[0x19] != 0) {
    plVar9 = (long *)(plVar11[0x19] + 0x88);
  }
  lVar8 = *plVar9;
  if (lVar8 != 0) {
    piVar1 = (int *)(lVar8 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar9 = *(long **)(param_1 + 400);
  *(long *)(param_1 + 400) = lVar8;
  if (plVar9 != (long *)0x0) {
    plVar2 = plVar9 + 10;
    do {
      iVar7 = (int)*plVar2 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *(int *)plVar2 = iVar7;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar7 == 0) {
      (**(code **)(*plVar9 + 0x10))();
    }
  }
  plVar9 = plVar11 + 10;
  do {
    iVar7 = (int)*plVar9 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar9,0x10);
    if (bVar5) {
      *(int *)plVar9 = iVar7;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar7 == 0) {
    (**(code **)(*plVar11 + 0x10))(plVar11);
  }
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar7 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  lVar8 = *(long *)(param_1 + 400);
  if (*(long *)(param_1 + 0x90) == *(long *)PTR_DAT_0437a0d8) {
    local_58 = (long *)0x94aeaab4737159ef;
    pcStack_50 = "origin";
    local_48 = 6;
    local_40 = (long *)0x0;
    puVar3 = *(undefined8 **)(lVar8 + 0x60);
    for (puVar12 = *(undefined8 **)(lVar8 + 0x58); puVar12 != puVar3; puVar12 = puVar12 + 2) {
      sVar6 = FUN_02b6f370(*puVar12,&local_58);
      if (-1 < sVar6) {
        sVar6 = *(short *)((long)puVar12 + 10) + sVar6;
        goto joined_r0x02de6060;
      }
    }
    sVar6 = -1;
joined_r0x02de6060:
    if (local_40 != (long *)0x0) {
      (**(code **)(*local_40 + 0x20))();
    }
    if (sVar6 < 0) {
      local_58 = (long *)0x55c0d7a581349f0f;
      pcStack_50 = "Origin";
      local_48 = 6;
      local_40 = (long *)0x0;
      puVar3 = *(undefined8 **)(*(long *)(param_1 + 400) + 0x60);
      for (puVar12 = *(undefined8 **)(*(long *)(param_1 + 400) + 0x58); puVar12 != puVar3;
          puVar12 = puVar12 + 2) {
        sVar6 = FUN_02b6f370(*puVar12,&local_58);
        if (-1 < sVar6) {
          sVar6 = *(short *)((long)puVar12 + 10) + sVar6;
          goto joined_r0x02de60a4;
        }
      }
      sVar6 = -1;
joined_r0x02de60a4:
      if (local_40 != (long *)0x0) {
        (**(code **)(*local_40 + 0x20))();
      }
      if (sVar6 < 0) {
        return;
      }
    }
LAB_02de6078:
    *(short *)(param_1 + 0xfc) = sVar6;
    *(undefined1 *)(param_1 + 0x100) = 1;
  }
  else {
    puVar12 = *(undefined8 **)(lVar8 + 0x58);
    puVar3 = *(undefined8 **)(lVar8 + 0x60);
    if (puVar12 != puVar3) {
      do {
        sVar6 = FUN_02b6f370(*puVar12,param_1 + 0x90);
        if (-1 < sVar6) {
          sVar6 = *(short *)((long)puVar12 + 10) + sVar6;
          if (sVar6 < 0) {
            return;
          }
          goto LAB_02de6078;
        }
        puVar12 = puVar12 + 2;
      } while (puVar3 != puVar12);
    }
  }
  return;
}


