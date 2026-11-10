/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02692f90; name: FUN_02692f90
 */


void FUN_02692f90(long param_1,int *param_2)

{
  int *piVar1;
  long *plVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  long *plVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  long *plVar20;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  puVar8 = PTR_DAT_0437f498;
  puVar3 = PTR_DAT_0437f490;
  lVar17 = *(long *)(param_1 + 0x268);
  if (lVar17 == 0) {
    return;
  }
  if (*(int *)(lVar17 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar17 + 0xc);
  iVar19 = *(int *)(lVar17 + 0xc);
  do {
    plVar20 = *(long **)(lVar17 + 0x10);
    if (((*puVar3 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar3), iVar9 != 0)) {
      uVar10 = FUN_01443f54();
      *(undefined8 *)puVar8 = uVar10;
      __cxa_guard_release(puVar3);
    }
    while( true ) {
      if (plVar20 == (long *)0x0) {
        return;
      }
      if (plVar20 == (long *)puVar8) break;
      plVar20 = (long *)*plVar20;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar19) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar17 = *(long *)(lVar17 + 0x18);
        if (lVar17 == 0) {
          return;
        }
        lVar18 = *(long *)(lVar17 + 0x1a0);
        if ((lVar18 == 0) || (*(int *)(lVar18 + 0xc) == 0)) goto LAB_02693058;
        piVar1 = (int *)(lVar18 + 0xc);
        iVar19 = *(int *)(lVar18 + 0xc);
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar19 = iVar9;
    if (iVar9 == 0) {
      return;
    }
  } while( true );
  do {
    plVar20 = *(long **)(lVar18 + 0x10);
    lVar11 = FUN_01091efc();
    while( true ) {
      if (plVar20 == (long *)0x0) goto LAB_02693058;
      if (plVar20 == (long *)lVar11) break;
      plVar20 = (long *)*plVar20;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar19) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar19 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar18 = *(long *)(lVar18 + 0x18);
        if (lVar18 != 0) {
          plVar20 = (long *)(lVar18 + -0x50);
          if (*param_2 == 1) {
            FUN_0290b66c(plVar20,&DAT_04267650,0);
            goto LAB_02693308;
          }
          if (*param_2 != 2) goto LAB_02693308;
          (**(code **)(*plVar20 + 0xf8))(param_2[3],plVar20,&DAT_04267770,0);
          (**(code **)(*plVar20 + 0xf8))(param_2[3],plVar20,&DAT_04267790,0);
          iVar19 = *(int *)(param_1 + 500);
          local_80 = 0x3199cbc0dc0c99d1;
          pcStack_78 = "react_se_skip_count";
          local_70 = 0x13;
          local_68 = (long *)0x0;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar11 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar11;
          puVar12 = *(undefined1 **)(lVar11 + 0x60);
          if (puVar12 == (undefined1 *)0x0) goto LAB_0269335c;
          uVar13 = (long)puVar12 - ((ulong)puVar12 >> 1 & 0x5555555555555555);
          uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
          uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar13 < 2) {
            puVar14 = (undefined1 *)((ulong)(puVar12 + -1) & 0x471b26c9ac42475c);
          }
          else if (&DAT_471b26c9ac42475c < puVar12) {
            puVar14 = &DAT_471b26c9ac42475c;
          }
          else {
            uVar7 = 0;
            if (puVar12 != (undefined1 *)0x0) {
              uVar7 = 0x471b26c9ac42475c / (ulong)puVar12;
            }
            puVar14 = &DAT_471b26c9ac42475c + -(uVar7 * (long)puVar12);
          }
          plVar15 = *(long **)(*(long *)(lVar11 + 0x58) + (long)puVar14 * 8);
          if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
          goto LAB_0269335c;
          if (1 < uVar13) goto LAB_0269325c;
          goto LAB_026933cc;
        }
        break;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar19 = iVar9;
  } while (iVar9 != 0);
  goto LAB_02693058;
LAB_0269325c:
  do {
    puVar16 = (undefined1 *)plVar15[1];
    if (puVar16 == &DAT_471b26c9ac42475c) {
      if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02693274;
    }
    else {
      if (puVar12 <= puVar16) {
        uVar13 = 0;
        if (puVar12 != (undefined1 *)0x0) {
          uVar13 = (ulong)puVar16 / (ulong)puVar12;
        }
        puVar16 = puVar16 + -(uVar13 * (long)puVar12);
      }
      if (puVar16 != puVar14) break;
    }
    plVar15 = (long *)*plVar15;
  } while (plVar15 != (long *)0x0);
LAB_0269335c:
  iVar9 = 0;
  goto LAB_026932b4;
LAB_02693274:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_0269335c;
  plVar2 = plVar15 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = (int)*plVar2 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  iVar9 = FUN_00d78f50(plVar15,&local_80);
  do {
    iVar6 = (int)*plVar2 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar5) {
      *(int *)plVar2 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar15 + 0x10))(plVar15);
  }
  goto LAB_026932b4;
  while( true ) {
    plVar15 = (long *)*plVar15;
    iVar9 = 0;
    if (plVar15 == (long *)0x0) break;
LAB_026933cc:
    if ((undefined1 *)plVar15[1] == &DAT_471b26c9ac42475c) {
      if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02693274;
    }
    else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar12 + -1)) != puVar14)
    goto LAB_0269335c;
  }
LAB_026932b4:
  iVar6 = 0;
  if (iVar9 != 0) {
    iVar6 = iVar19 / iVar9;
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (iVar19 == iVar6 * iVar9) {
    puVar3 = &DAT_04267690;
    if ((char)param_2[1] != '\0') {
      puVar3 = &DAT_042676d0;
    }
    FUN_0290b66c(plVar20,puVar3,0);
  }
  *(int *)(param_1 + 500) = *(int *)(param_1 + 500) + 1;
LAB_02693308:
  lVar18 = *(long *)(lVar18 + 8);
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*plVar20 + 0x20))(plVar20);
  }
LAB_02693058:
  lVar18 = *(long *)(lVar17 + 8);
  piVar1 = (int *)(lVar18 + 0xc);
  do {
    iVar19 = *piVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar5) {
      *piVar1 = iVar19 + -1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar19 + -1 == 0) {
    *(undefined8 *)(lVar18 + 0x18) = 0;
    (**(code **)(*(long *)(lVar17 + -0x50) + 0x20))((long *)(lVar17 + -0x50));
  }
  return;
}


