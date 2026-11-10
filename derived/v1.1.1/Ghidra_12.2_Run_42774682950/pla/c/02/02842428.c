/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02842428; name: FUN_02842428
 */


void FUN_02842428(long param_1,undefined8 param_2)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  char *pcVar17;
  uint *puVar18;
  int *local_e0;
  long *local_d8;
  long *plStack_d0;
  long local_a0;
  long *local_68;
  
  lVar9 = FUN_00d25b60(&local_e0);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x68) = lVar9;
  FUN_02841748(&local_e0,*(long *)(param_1 + 0x10) + 0x270);
  puVar7 = PTR_DAT_04379ce0;
  puVar6 = PTR_DAT_04379cd8;
  if ((((4 < *(ushort *)((long)local_e0 - (long)*local_e0)) &&
       (uVar13 = (ulong)((ushort *)((long)local_e0 - (long)*local_e0))[2], uVar13 != 0)) &&
      (puVar2 = (uint *)((long)local_e0 + uVar13), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
      puVar2 != (uint *)0x0)) && (*puVar2 != 0)) {
    puVar18 = puVar2 + 1;
    do {
      piVar1 = (int *)((long)puVar18 + (ulong)*puVar18);
      if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
         (uVar13 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar13 == 0)) {
        pcVar17 = &DAT_00000004;
        if (DAT_00000004 == '\0') goto LAB_0284284c;
LAB_02842538:
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar11 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar7 = uVar11;
        FUN_02a47cd8(&local_68,uVar11,pcVar17);
        plVar10 = local_68;
LAB_02842560:
        if (plVar10 != (long *)0x0) goto LAB_02842870;
LAB_02842568:
        plVar16 = local_d8;
        plVar15 = plStack_d0;
        if (local_d8 != plStack_d0) goto LAB_02842570;
LAB_02842588:
        if (plVar10 == (long *)0x0) goto LAB_028425e4;
LAB_0284258c:
        (**(code **)(*plVar10 + 0x20))(plVar10);
        FUN_02c3bc04(*(undefined8 *)(param_1 + 0x68),
                     local_a0 + ((long)plVar16 - (long)local_d8 >> 5) * 0x30);
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      else {
        puVar3 = (uint *)((long)piVar1 + uVar13);
        pcVar17 = (char *)((long)puVar3 + (ulong)*puVar3 + 4);
        if (*pcVar17 != '\0') goto LAB_02842538;
LAB_0284284c:
        plVar10 = (long *)FUN_00938550();
        if (plVar10 == (long *)0x0) goto LAB_02842560;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (plVar10 == (long *)0x0) goto LAB_02842568;
LAB_02842870:
        plVar15 = plStack_d0;
        plVar16 = local_d8;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (plVar16 == plVar15) goto LAB_02842588;
LAB_02842570:
        if (plVar10 == (long *)0x0) {
          plVar12 = (long *)PTR_DAT_04379c88;
        }
        else {
          plVar12 = plVar10 + 0xb;
        }
        if (*plVar12 == *plVar16) goto LAB_02842588;
        do {
          plVar14 = plVar16 + 4;
          plVar16 = plVar15;
          if (plVar15 == plVar14) break;
          plVar16 = plVar14;
        } while (*plVar12 != *plVar14);
        if (plVar10 != (long *)0x0) goto LAB_0284258c;
LAB_028425e4:
        FUN_02c3bc04(*(undefined8 *)(param_1 + 0x68),
                     local_a0 + ((long)plVar16 - (long)local_d8 >> 5) * 0x30);
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar2 + 1 + *puVar2);
  }
  FUN_02c3bc38(*(undefined8 *)(param_1 + 0x68));
  FUN_02841940(&local_e0);
  lVar9 = FUN_00d25b60(&local_e0,param_2);
  if (lVar9 != 0) {
    piVar1 = (int *)(lVar9 + 0x50);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar10 = *(long **)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x70) = 0;
  if (plVar10 != (long *)0x0) {
    plVar16 = plVar10 + 10;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar5) {
        *(int *)plVar16 = iVar8;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar8 == 0) {
      (**(code **)(*plVar10 + 0x10))();
    }
  }
  *(long *)(param_1 + 0x70) = lVar9;
  FUN_02841748(&local_e0,*(long *)(param_1 + 0x40) + 0x270);
  puVar7 = PTR_DAT_04379ce0;
  puVar6 = PTR_DAT_04379cd8;
  if ((((4 < *(ushort *)((long)local_e0 - (long)*local_e0)) &&
       (uVar13 = (ulong)((ushort *)((long)local_e0 - (long)*local_e0))[2], uVar13 != 0)) &&
      (puVar2 = (uint *)((long)local_e0 + uVar13), puVar2 = (uint *)((long)puVar2 + (ulong)*puVar2),
      puVar2 != (uint *)0x0)) && (*puVar2 != 0)) {
    puVar18 = puVar2 + 1;
    do {
      piVar1 = (int *)((long)puVar18 + (ulong)*puVar18);
      puVar3 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      pcVar17 = (char *)((long)puVar3 + (ulong)*puVar3 + 4);
      if (*pcVar17 == '\0') {
        plVar10 = (long *)FUN_00938550();
        if (plVar10 == (long *)0x0) goto LAB_02842720;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (plVar10 != (long *)0x0) goto LAB_028428d0;
LAB_02842728:
        plVar15 = plStack_d0;
        plVar16 = local_d8;
        if (local_d8 == plStack_d0) goto LAB_02842748;
LAB_02842730:
        if (plVar10 == (long *)0x0) {
          plVar12 = (long *)PTR_DAT_04379c88;
        }
        else {
          plVar12 = plVar10 + 0xb;
        }
        if (*plVar12 == *plVar16) goto LAB_02842748;
        do {
          plVar14 = plVar16 + 4;
          plVar16 = plVar15;
          if (plVar15 == plVar14) break;
          plVar16 = plVar14;
        } while (*plVar12 != *plVar14);
        if (plVar10 == (long *)0x0) goto LAB_028427a0;
LAB_0284274c:
        (**(code **)(*plVar10 + 0x20))(plVar10);
        FUN_02c3bc04(*(undefined8 *)(param_1 + 0x70),
                     local_a0 + ((long)plVar16 - (long)local_d8 >> 5) * 0x30);
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
      else {
        if (((*PTR_DAT_04379cd0 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379cd0), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379d08,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379cd0);
        }
        uVar11 = *(undefined8 *)puVar6;
        *(undefined8 *)puVar7 = uVar11;
        FUN_02a47cd8(&local_68,uVar11,pcVar17);
        plVar10 = local_68;
LAB_02842720:
        if (plVar10 == (long *)0x0) goto LAB_02842728;
LAB_028428d0:
        plVar15 = plStack_d0;
        plVar16 = local_d8;
        (**(code **)(*plVar10 + 0x18))(plVar10);
        if (plVar16 != plVar15) goto LAB_02842730;
LAB_02842748:
        if (plVar10 != (long *)0x0) goto LAB_0284274c;
LAB_028427a0:
        FUN_02c3bc04(*(undefined8 *)(param_1 + 0x70),
                     local_a0 + ((long)plVar16 - (long)local_d8 >> 5) * 0x30);
      }
      puVar18 = puVar18 + 1;
    } while (puVar18 != puVar2 + 1 + *puVar2);
  }
  FUN_02c3bc38(*(undefined8 *)(param_1 + 0x70));
  FUN_02841940(&local_e0);
  return;
}


