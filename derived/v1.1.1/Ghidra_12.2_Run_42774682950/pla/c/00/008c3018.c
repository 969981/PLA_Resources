/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008c3018; name: FUN_008c3018
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_008c3018(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  int *piVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined1 uVar14;
  int iVar15;
  int iVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long *local_a0;
  long *local_98;
  undefined5 uStack_90;
  undefined3 local_8b;
  undefined5 uStack_88;
  undefined1 local_83;
  undefined8 local_80;
  undefined1 local_78;
  long *local_70;
  long *local_68;
  
  FUN_008c36c8(&local_68,0,param_2,param_4);
  FUN_008c3d74(&local_70,0,param_2,param_4);
  if (local_70 != (long *)0x0) {
    plVar17 = local_70 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (*(char *)(param_2 + 0x354) == '\0') {
    bVar1 = 1 < *(byte *)(local_70 + 0x11);
  }
  else {
    bVar1 = *(byte *)(param_2 + 0x472);
  }
  if (local_70 != (long *)0x0) {
    plVar17 = local_70 + 10;
    do {
      iVar15 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  local_83 = 0;
  local_8b = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_78 = 0;
  if (*(char *)(param_2 + 0x354) == '\0') {
    FUN_0293cdb0();
  }
  else {
    FUN_0293cf30(param_1,local_68,local_70,&uStack_90,(uint)bVar1 << 1,param_4);
  }
  if (local_70 != (long *)0x0) {
    plVar17 = local_70 + 10;
    do {
      iVar15 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_70 + 0x10))(local_70);
    }
  }
  if (local_68 != (long *)0x0) {
    plVar17 = local_68 + 10;
    do {
      iVar15 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  FUN_008c36c8(&local_98,param_1 + 0xe0,param_2,param_4);
  if (local_98 != (long *)0x0) {
    plVar17 = local_98 + 10;
    do {
      iVar15 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_98 + 0x10))();
    }
  }
  FUN_008c3d74(&local_a0,param_1 + 0x3e0,param_2,param_4);
  if (local_a0 != (long *)0x0) {
    plVar17 = local_a0 + 10;
    do {
      iVar15 = (int)*plVar17 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar5) {
        *(int *)plVar17 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*local_a0 + 0x10))();
    }
  }
  uVar14 = FUN_01091730();
  *(undefined1 *)(param_1 + 0x1034) = uVar14;
  *(undefined4 *)(param_1 + 0x1068) = *(undefined4 *)(param_2 + 0x54);
  FUN_00923d00(&uStack_90,param_3);
  plVar17 = *(long **)(param_1 + 0x1018);
  *(undefined8 *)(param_1 + 0x1018) = 0;
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  *(ulong *)(param_1 + 0x1018) = CONCAT35(local_8b,uStack_90);
  FUN_00923d74(&uStack_90,param_3);
  plVar17 = *(long **)(param_1 + 0x1020);
  *(undefined8 *)(param_1 + 0x1020) = 0;
  if (plVar17 != (long *)0x0) {
    lVar20 = plVar17[0xb];
    piVar2 = (int *)(lVar20 + 0xc);
    do {
      iVar15 = *piVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar15 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 + -1 == 0) {
      *(undefined8 *)(lVar20 + 0x18) = 0;
      (**(code **)(*plVar17 + 0x20))();
    }
  }
  *(ulong *)(param_1 + 0x1020) = CONCAT35(local_8b,uStack_90);
  FUN_00923cb8(&uStack_90,param_3);
  plVar17 = *(long **)(param_1 + 0xff0);
  *(undefined8 *)(param_1 + 0xff0) = 0;
  if (plVar17 != (long *)0x0) {
    plVar3 = plVar17 + 10;
    do {
      iVar15 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *(ulong *)(param_1 + 0xff0) = CONCAT35(local_8b,uStack_90);
  FUN_00923cdc(&uStack_90,param_3);
  plVar17 = *(long **)(param_1 + 0xff8);
  *(undefined8 *)(param_1 + 0xff8) = 0;
  if (plVar17 != (long *)0x0) {
    plVar3 = plVar17 + 10;
    do {
      iVar15 = (int)*plVar3 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar5) {
        *(int *)plVar3 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar15 == 0) {
      (**(code **)(*plVar17 + 0x10))();
    }
  }
  *(ulong *)(param_1 + 0xff8) = CONCAT35(local_8b,uStack_90);
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04379578), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  *(undefined8 *)PTR_DAT_04379588 = *(undefined8 *)PTR_DAT_04379580;
  plVar17 = (long *)FUN_00954890();
  puVar13 = PTR_DAT_043796e8;
  puVar12 = PTR_DAT_043796e0;
  puVar11 = PTR_DAT_043794d8;
  puVar10 = PTR_DAT_043794d0;
  lVar20 = *plVar17;
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar2 = (int *)(lVar20 + 0xc);
    iVar15 = *(int *)(lVar20 + 0xc);
    do {
      plVar17 = *(long **)(lVar20 + 0x10);
      if (((*puVar12 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar12), iVar16 != 0)) {
        if (((*puVar10 & 1) == 0) && (iVar16 = __cxa_guard_acquire(puVar10), iVar16 != 0)) {
          uVar19 = FUN_0087f8f0();
          *(undefined8 *)puVar11 = uVar19;
          __cxa_guard_release(puVar10);
        }
        *(undefined **)puVar13 = puVar11;
        __cxa_guard_release(puVar12);
      }
      while( true ) {
        if (plVar17 == (long *)0x0) goto LAB_008c32cc;
        if (plVar17 == (long *)puVar13) break;
        plVar17 = (long *)*plVar17;
      }
      iVar16 = *piVar2;
      if (iVar16 == iVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_008c34cc;
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          plVar17 = (long *)(lVar20 + -0x50);
          FUN_0199edc8(&uStack_90,plVar17);
          lVar20 = *(long *)(lVar20 + 8);
          piVar2 = (int *)(lVar20 + 0xc);
          do {
            iVar15 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 != 0) goto LAB_008c32d8;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
          lVar20 = CONCAT35(local_8b,uStack_90);
          pbVar6 = PTR_DAT_043794d0;
          puVar7 = (undefined8 *)PTR_DAT_043794d8;
          pbVar8 = PTR_DAT_043796f0;
          puVar9 = (undefined8 *)PTR_DAT_043796f8;
          goto joined_r0x008c3550;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_008c34cc:
      iVar15 = iVar16;
    } while (iVar16 != 0);
  }
LAB_008c32cc:
  FUN_0199edc8(&uStack_90,0);
LAB_008c32d8:
  lVar20 = CONCAT35(local_8b,uStack_90);
  pbVar6 = PTR_DAT_043794d0;
  puVar7 = (undefined8 *)PTR_DAT_043794d8;
  pbVar8 = PTR_DAT_043796f0;
  puVar9 = (undefined8 *)PTR_DAT_043796f8;
joined_r0x008c3550:
  PTR_DAT_043794d0 = pbVar6;
  PTR_DAT_043794d8 = (undefined *)puVar7;
  PTR_DAT_043796f0 = pbVar8;
  PTR_DAT_043796f8 = (undefined *)puVar9;
  if ((lVar20 != 0) && (*(int *)(lVar20 + 0xc) != 0)) {
    piVar2 = (int *)(lVar20 + 0xc);
    iVar15 = *(int *)(lVar20 + 0xc);
    do {
      puVar21 = *(undefined8 **)(lVar20 + 0x10);
      if (((*pbVar8 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar8), iVar16 != 0)) {
        if (((*pbVar6 & 1) == 0) && (iVar16 = __cxa_guard_acquire(pbVar6), iVar16 != 0)) {
          uVar19 = FUN_0087f8f0();
          *puVar7 = uVar19;
          __cxa_guard_release(pbVar6);
        }
        *puVar9 = puVar7;
        __cxa_guard_release(pbVar8);
      }
      while( true ) {
        if (puVar21 == (undefined8 *)0x0) goto LAB_008c32e0;
        if (puVar21 == puVar9) break;
        puVar21 = (undefined8 *)*puVar21;
      }
      iVar16 = *piVar2;
      if (iVar16 == iVar15) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar15 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 != '\0') goto LAB_008c35dc;
        lVar20 = *(long *)(lVar20 + 0x18);
        if (lVar20 != 0) {
          plVar17 = (long *)(lVar20 + -0x50);
          uVar18 = FUN_01f26cf4(plVar17,&DAT_03a7d1b0);
          lVar20 = *(long *)(lVar20 + 8);
          piVar2 = (int *)(lVar20 + 0xc);
          do {
            iVar15 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = iVar15 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar15 + -1 != 0) goto joined_r0x008c3650;
          *(undefined8 *)(lVar20 + 0x18) = 0;
          (**(code **)(*plVar17 + 0x20))(plVar17);
          if ((uVar18 & 1) == 0) goto LAB_008c3300;
          goto LAB_008c32f4;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_008c35dc:
      iVar15 = iVar16;
    } while (iVar16 != 0);
  }
LAB_008c32e0:
  uVar18 = FUN_01f26cf4(0,&DAT_03a7d1b0);
joined_r0x008c3650:
  if ((uVar18 & 1) != 0) {
LAB_008c32f4:
    *(ulong *)(param_1 + 0x1040) = *(ulong *)(param_1 + 0x1040) | 0x200;
  }
LAB_008c3300:
  if (CONCAT35(local_8b,uStack_90) != 0) {
    FUN_02a43934();
  }
  if (*(char *)(param_2 + 0x356) == '\0') {
    cVar4 = *(char *)(param_2 + 0x357);
  }
  else {
    *(ulong *)(param_1 + 0x1040) = *(ulong *)(param_1 + 0x1040) | 0x400;
    cVar4 = *(char *)(param_2 + 0x357);
  }
  if (cVar4 == '\0') {
    cVar4 = *(char *)(param_2 + 0x358);
  }
  else {
    *(ulong *)(param_1 + 0x1040) = *(ulong *)(param_1 + 0x1040) | 0x1000;
    cVar4 = *(char *)(param_2 + 0x358);
  }
  if (cVar4 == '\0') {
    cVar4 = *(char *)(param_2 + 0x3d0);
  }
  else {
    *(ulong *)(param_1 + 0x1040) = *(ulong *)(param_1 + 0x1040) | 0x800;
    cVar4 = *(char *)(param_2 + 0x3d0);
  }
  if (cVar4 == '\0') {
    *(ulong *)(param_1 + 0x1040) = *(ulong *)(param_1 + 0x1040) | 0x2000;
  }
  return;
}


