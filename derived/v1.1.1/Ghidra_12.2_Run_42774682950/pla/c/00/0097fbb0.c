/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0097fbb0; name: FUN_0097fbb0
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0097fbb0(undefined8 param_1,undefined8 param_2,uint param_3,char param_4,undefined4 param_5
                 ,int param_6)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  long *plVar13;
  byte bVar14;
  byte bVar15;
  long lVar16;
  long lVar17;
  float fVar18;
  long local_148;
  undefined5 uStack_140;
  undefined3 local_13b;
  undefined5 uStack_138;
  undefined4 local_130;
  long local_128;
  undefined5 uStack_120;
  undefined3 local_11b;
  undefined5 uStack_118;
  undefined4 local_110;
  long local_108;
  undefined5 uStack_100;
  undefined3 local_fb;
  undefined5 uStack_f8;
  undefined4 local_f0;
  long local_e8;
  undefined5 uStack_e0;
  undefined3 local_db;
  undefined5 uStack_d8;
  undefined4 local_d0;
  long local_c8;
  undefined5 uStack_c0;
  undefined3 local_bb;
  undefined5 uStack_b8;
  undefined4 local_b0;
  long local_a8;
  undefined5 uStack_a0;
  undefined3 local_9b;
  undefined5 uStack_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined4 local_80;
  
  puVar8 = PTR_DAT_04379578;
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  plVar13 = (long *)PTR_DAT_04379588;
  puVar9 = PTR_DAT_04379580;
  lVar16 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar16;
  plVar12 = *(long **)(lVar16 + 0xb0);
  if (plVar12 == (long *)0x0) {
    lVar16 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar16 = plVar12[0x1c];
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  lVar16 = FUN_00933eec(*(undefined8 *)(lVar16 + 0xd0),param_3);
  local_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_13b = 0;
  uStack_138 = 0;
  local_110 = 0;
  local_f0 = 0;
  local_d0 = 0;
  local_b0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_11b = 0;
  uStack_118 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_fb = 0;
  uStack_f8 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_db = 0;
  uStack_d8 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_bb = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_9b = 0;
  uStack_98 = 0;
  local_84 = 0x1f;
  local_80 = 0;
  if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar17 = *(long *)puVar9;
  *plVar13 = lVar17;
  plVar12 = *(long **)(lVar17 + 0xb0);
  if (plVar12 == (long *)0x0) {
    lVar17 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar17 = plVar12[0x1c];
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  FUN_0091abfc(*(undefined8 *)(lVar17 + 0x110),&local_148);
  local_84 = (undefined1)param_3;
  local_80 = *(undefined4 *)(lVar16 + 0xac);
  lVar16 = *(long *)(lVar16 + 0x70);
  uVar5 = *(undefined2 *)(lVar16 + 0x70);
  uVar4 = *(undefined1 *)(lVar16 + 0x369);
  bVar14 = *(byte *)(lVar16 + 0x391);
  if ((local_148 == 0) || ((uint)*(byte *)(*(long *)(local_148 + 0x70) + 0x7d) != (param_3 & 0xff)))
  {
    if ((local_128 != 0) &&
       ((uint)*(byte *)(*(long *)(local_128 + 0x70) + 0x7d) == (param_3 & 0xff))) {
      plVar12 = &local_128;
      bVar15 = *puVar8;
      goto joined_r0x009801b8;
    }
    if ((local_108 != 0) &&
       ((uint)*(byte *)(*(long *)(local_108 + 0x70) + 0x7d) == (param_3 & 0xff))) {
      plVar12 = &local_108;
      bVar15 = *puVar8;
      goto joined_r0x009801b8;
    }
    if ((local_e8 != 0) && ((uint)*(byte *)(*(long *)(local_e8 + 0x70) + 0x7d) == (param_3 & 0xff)))
    {
      plVar12 = &local_e8;
      bVar15 = *puVar8;
      goto joined_r0x009801b8;
    }
    if ((local_c8 != 0) && ((uint)*(byte *)(*(long *)(local_c8 + 0x70) + 0x7d) == (param_3 & 0xff)))
    {
      plVar12 = &local_c8;
      bVar15 = *puVar8;
      goto joined_r0x009801b8;
    }
    if ((local_a8 != 0) && ((uint)*(byte *)(*(long *)(local_a8 + 0x70) + 0x7d) == (param_3 & 0xff)))
    {
      plVar12 = &local_a8;
      bVar15 = *puVar8;
      goto joined_r0x009801b8;
    }
  }
  else {
    plVar12 = &local_148;
    bVar15 = *puVar8;
joined_r0x009801b8:
    if (((bVar15 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar16 = *(long *)puVar9;
    *plVar13 = lVar16;
    plVar13 = *(long **)(lVar16 + 0xb0);
    if (plVar13 == (long *)0x0) {
      lVar16 = _DAT_000000e0;
    }
    else {
      plVar1 = plVar13 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar16 = plVar13[0x1c];
      do {
        iVar10 = (int)*plVar1 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar7) {
          *(int *)plVar1 = iVar10;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar10 == 0) {
        (**(code **)(*plVar13 + 0x10))();
      }
    }
    lVar16 = *(long *)(lVar16 + 0x110);
    iVar10 = FUN_00929498(*(undefined8 *)(*(long *)(lVar16 + 0x68) + 0xe0),uVar5,uVar4,param_5,
                          param_6);
    if ((param_6 == 2) && (iVar10 < 0)) {
      iVar11 = FUN_00929498(*(undefined8 *)(*(long *)(lVar16 + 0x68) + 0xe0),uVar5,uVar4,param_5,0);
      bVar15 = bVar14;
      if (3 < bVar14) {
        bVar15 = 4;
      }
      fVar18 = powf(3.0,(float)bVar15);
      iVar10 = (int)(float)(int)((float)iVar10 / fVar18);
      iVar2 = -iVar10;
      if (-1 < iVar10) {
        iVar2 = iVar10;
      }
      iVar3 = -iVar11;
      if (-1 < iVar11) {
        iVar3 = iVar11;
      }
      if (iVar2 < iVar3) {
        iVar10 = iVar11;
      }
    }
    *(int *)(plVar12 + 2) = (int)plVar12[2] + iVar10;
    plVar13 = (long *)PTR_DAT_04379588;
  }
  if ((local_148 == 0) || (*(char *)(*(long *)(local_148 + 0x70) + 0x7d) != param_4)) {
    if ((local_128 == 0) || (*(char *)(*(long *)(local_128 + 0x70) + 0x7d) != param_4)) {
      if ((local_108 == 0) || (*(char *)(*(long *)(local_108 + 0x70) + 0x7d) != param_4)) {
        if ((local_e8 == 0) || (*(char *)(*(long *)(local_e8 + 0x70) + 0x7d) != param_4)) {
          if ((local_c8 == 0) || (*(char *)(*(long *)(local_c8 + 0x70) + 0x7d) != param_4)) {
            if ((local_a8 == 0) || (*(char *)(*(long *)(local_a8 + 0x70) + 0x7d) != param_4))
            goto LAB_0097fef8;
            plVar12 = &local_a8;
            bVar15 = *puVar8;
          }
          else {
            plVar12 = &local_c8;
            bVar15 = *puVar8;
          }
        }
        else {
          plVar12 = &local_e8;
          bVar15 = *puVar8;
        }
      }
      else {
        plVar12 = &local_108;
        bVar15 = *puVar8;
      }
    }
    else {
      plVar12 = &local_128;
      bVar15 = *puVar8;
    }
  }
  else {
    plVar12 = &local_148;
    bVar15 = *puVar8;
  }
  if (((bVar15 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar16 = *(long *)puVar9;
  *plVar13 = lVar16;
  plVar13 = *(long **)(lVar16 + 0xb0);
  if (plVar13 == (long *)0x0) {
    lVar16 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar13 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar16 = plVar13[0x1c];
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  lVar16 = *(long *)(lVar16 + 0x110);
  iVar10 = FUN_00929ec4(*(undefined8 *)(*(long *)(lVar16 + 0x68) + 0xe0),uVar5,uVar4,param_5,param_6
                       );
  if ((param_6 == 2) && (0 < iVar10)) {
    iVar11 = FUN_00929ec4(*(undefined8 *)(*(long *)(lVar16 + 0x68) + 0xe0),uVar5,uVar4,param_5,0);
    if (3 < bVar14) {
      bVar14 = 4;
    }
    fVar18 = powf(3.0,(float)bVar14);
    iVar10 = (int)(float)(int)((float)iVar10 / fVar18);
    iVar2 = -iVar10;
    if (-1 < iVar10) {
      iVar2 = iVar10;
    }
    iVar3 = -iVar11;
    if (-1 < iVar11) {
      iVar3 = iVar11;
    }
    if (iVar2 < iVar3) {
      iVar10 = iVar11;
    }
  }
  *(int *)(plVar12 + 2) = (int)plVar12[2] + iVar10;
  plVar13 = (long *)PTR_DAT_04379588;
LAB_0097fef8:
  if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar16 = *(long *)puVar9;
  *plVar13 = lVar16;
  plVar12 = *(long **)(lVar16 + 0xb0);
  if (plVar12 == (long *)0x0) {
    lVar16 = _DAT_000000e0;
  }
  else {
    plVar1 = plVar12 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar16 = plVar12[0x1c];
    do {
      iVar10 = (int)*plVar1 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar7) {
        *(int *)plVar1 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar12 + 0x10))();
    }
  }
  FUN_0091adf0(*(undefined8 *)(lVar16 + 0x110),&local_148);
  if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar16 = *(long *)puVar9;
  *plVar13 = lVar16;
  plVar13 = *(long **)(lVar16 + 0xb0);
  if (plVar13 == (long *)0x0) {
    lVar16 = _DAT_000000e0;
  }
  else {
    plVar12 = plVar13 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    lVar16 = plVar13[0x1c];
    do {
      iVar10 = (int)*plVar12 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar7) {
        *(int *)plVar12 = iVar10;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar10 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
  }
  FUN_0091b12c(*(undefined8 *)(lVar16 + 0x110),param_2,&local_148);
  return;
}


