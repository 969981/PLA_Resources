/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031a72b8; name: FUN_031a72b8
 */


/* WARNING: Removing unreachable block (ram,0x031a75a4) */

void FUN_031a72b8(long param_1,long *param_2)

{
  char *pcVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 uVar6;
  bool bVar7;
  char cVar8;
  long *plVar9;
  void *__dest;
  long *plVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  char cVar17;
  void *__src;
  undefined4 uVar18;
  long *plVar19;
  
  lVar13 = *(long *)(param_1 + 0x210);
  if (lVar13 == 0) {
    uVar18 = 0;
LAB_031a72e8:
    lVar13 = *(long *)(param_1 + 0x228);
  }
  else {
    uVar18 = *(undefined4 *)(lVar13 + 0x1c);
    *(undefined1 *)(lVar13 + 0x20) = 3;
    plVar9 = *(long **)(param_1 + 0x210);
    *(undefined8 *)(param_1 + 0x210) = 0;
    if ((plVar9 == (long *)0x0) || (plVar9[1] == 0)) goto LAB_031a72e8;
    plVar19 = plVar9 + 2;
    do {
      lVar13 = *plVar19;
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar13 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar13 + -1 != 0) goto LAB_031a72e8;
    (**(code **)(*plVar9 + 0x18))();
    lVar13 = *(long *)(param_1 + 0x228);
  }
  if (lVar13 != 0) {
    cVar17 = *(char *)(lVar13 + 100);
    pcVar1 = (char *)(lVar13 + 100);
    do {
      while( true ) {
        while (cVar17 == '\0') {
          cVar17 = *pcVar1;
          if (cVar17 == '\0') {
            cVar8 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
            if (bVar7) {
              *pcVar1 = '\x02';
              cVar8 = ExclusiveMonitorsStatus();
            }
            if (cVar8 == '\0') goto LAB_031a7330;
          }
          else {
            ClearExclusiveLocal();
          }
        }
        if (cVar17 != '\x01') goto LAB_031a7330;
        cVar17 = *pcVar1;
        if (cVar17 == '\x01') break;
        ClearExclusiveLocal();
      }
      cVar8 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(pcVar1,0x10);
      if (bVar7) {
        *pcVar1 = '\x03';
        cVar8 = ExclusiveMonitorsStatus();
      }
    } while (cVar8 != '\0');
    *(undefined1 *)(*(long *)(lVar13 + 0x68) + 0x20) = 3;
    plVar9 = *(long **)(lVar13 + 0x68);
    *(undefined8 *)(lVar13 + 0x68) = 0;
    if ((plVar9 != (long *)0x0) && (plVar9[1] != 0)) {
      plVar19 = plVar9 + 2;
      do {
        lVar13 = *plVar19;
        cVar17 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar7) {
          *plVar19 = lVar13 + -1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      if (lVar13 + -1 == 0) {
        (**(code **)(*plVar9 + 0x18))();
      }
    }
  }
LAB_031a7330:
  lVar13 = tpidr_el0;
  lVar14 = *(long *)(lVar13 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar14;
  }
  plVar9 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x10))(plVar9,0x50,0);
  plVar9[5] = 0;
  plVar9[3] = 0;
  plVar9[4] = 0;
  plVar10 = plVar9 + 6;
  *plVar10 = 0;
  plVar9[1] = 0xffffffff;
  plVar9[8] = 0;
  plVar9[9] = 0;
  plVar19 = plVar9 + 2;
  *plVar19 = 1;
  *plVar9 = (long)&PTR_LAB_0430b410;
  plVar9[7] = -0x8000000000000000;
  lVar14 = *(long *)(param_1 + 0x30);
  plVar9[5] = *(long *)(param_1 + 0x38);
  plVar9[4] = lVar14;
  if ((long *)(param_1 + 0x20) != plVar10) {
    iVar5 = *(int *)(param_1 + 0x28);
    __src = *(void **)(param_1 + 0x20);
    if (iVar5 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar5,0x20,0,0,(long)plVar9 + 0x3c);
      *plVar10 = (long)__dest;
    }
    memcpy(__dest,__src,(long)iVar5 << 5);
    *(int *)(plVar9 + 7) = iVar5;
  }
  lVar14 = *(long *)(lVar13 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar14;
  }
  plVar10 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x110,0);
  *puVar11 = &PTR_LAB_0430b3b0;
  puVar11[1] = 0xffffffff;
  puVar11[2] = 1;
  memcpy(puVar11 + 4,(void *)(param_1 + 0x90),0xa8);
  lVar14 = *(long *)(param_1 + 0x140);
  puVar11[0x1a] = lVar14;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar10 = (long *)(lVar14 + 0x10);
    do {
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  lVar14 = *(long *)(param_1 + 0x148);
  puVar11[0x1b] = lVar14;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar10 = (long *)(lVar14 + 0x10);
    do {
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  lVar14 = *(long *)(param_1 + 0x150);
  puVar11[0x1c] = lVar14;
  if ((lVar14 != 0) && (*(long *)(lVar14 + 8) != 0)) {
    plVar10 = (long *)(lVar14 + 0x10);
    do {
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar7) {
        *plVar10 = *plVar10 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  uVar3 = *(undefined8 *)(param_1 + 0x158);
  uVar4 = *(undefined8 *)(param_1 + 0x160);
  uVar16 = *(undefined8 *)(param_1 + 0x168);
  *(undefined4 *)(puVar11 + 0x20) = *(undefined4 *)(param_1 + 0x170);
  puVar11[0x1d] = uVar3;
  puVar11[0x1e] = uVar4;
  puVar11[0x1f] = uVar16;
  plVar10 = (long *)plVar9[8];
  plVar9[8] = (long)puVar11;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar12 = plVar10 + 2;
    do {
      lVar14 = *plVar12;
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar14 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar14 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))();
    }
  }
  lVar14 = *(long *)(lVar13 + 0x38d490);
  if (lVar14 == 0) {
    lVar14 = FUN_0333d16c(0,1);
    *(long *)(lVar13 + 0x38d490) = lVar14;
  }
  plVar10 = *(long **)(*(long *)(lVar14 + 8) + 0x58);
  puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10,0x58,0);
  uVar6 = *(undefined1 *)(param_1 + 0x240);
  *puVar11 = &PTR_LAB_04301770;
  puVar11[1] = 0xffffffff;
  puVar11[2] = 1;
  *(undefined4 *)((long)puVar11 + 0x1c) = uVar18;
  *(undefined1 *)(puVar11 + 3) = uVar6;
  *(undefined1 *)(puVar11 + 4) = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = param_1;
  puVar11[8] = plVar9;
  if (plVar9[1] != 0) {
    do {
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = *plVar19 + 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  puVar11[9] = 0;
  puVar11[10] = 0x8000000000000000;
  plVar10 = *(long **)(param_1 + 0x210);
  *(undefined8 **)(param_1 + 0x210) = puVar11;
  if ((plVar10 != (long *)0x0) && (plVar10[1] != 0)) {
    plVar12 = plVar10 + 2;
    do {
      lVar13 = *plVar12;
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *plVar12 = lVar13 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar10 + 0x18))(plVar10);
    }
  }
  puVar2 = (ulong *)(param_2 + 4);
  do {
    uVar15 = *puVar2;
    cVar17 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar7) {
      *puVar2 = uVar15 + 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  lVar13 = *param_2;
  uVar15 = -(uVar15 >> 0x1f & 1) & 0xfffffff000000000 | (uVar15 & 0xffffffff) << 4;
  *(undefined8 *)(lVar13 + uVar15) = 0;
  plVar10 = (long *)(lVar13 + uVar15 + 8);
  *plVar10 = 0;
  *(undefined4 *)(lVar13 + uVar15) = *(undefined4 *)(param_1 + 0x23c);
  lVar13 = *(long *)(param_1 + 0x210);
  if (lVar13 != 0) {
    if ((lVar13 == 0) || (*(long *)(lVar13 + 8) == 0)) {
      *plVar10 = lVar13;
    }
    else {
      plVar12 = (long *)(lVar13 + 0x10);
      do {
        cVar17 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar7) {
          *plVar12 = *plVar12 + 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      plVar12 = (long *)*plVar10;
      *plVar10 = *(long *)(param_1 + 0x210);
      if ((plVar12 != (long *)0x0) && (plVar12[1] != 0)) {
        plVar10 = plVar12 + 2;
        do {
          lVar13 = *plVar10;
          cVar17 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar7) {
            *plVar10 = lVar13 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
        if (lVar13 + -1 == 0) {
          (**(code **)(*plVar12 + 0x18))();
          lVar13 = plVar9[1];
          goto joined_r0x031a75f8;
        }
      }
    }
  }
  lVar13 = plVar9[1];
joined_r0x031a75f8:
  if (lVar13 != 0) {
    do {
      lVar13 = *plVar19;
      cVar17 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar7) {
        *plVar19 = lVar13 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if (lVar13 + -1 == 0) {
      (**(code **)(*plVar9 + 0x18))(plVar9);
      return;
    }
  }
  return;
}


