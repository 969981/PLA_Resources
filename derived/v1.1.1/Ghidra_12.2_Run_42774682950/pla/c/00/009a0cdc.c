/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009a0cdc; name: FUN_009a0cdc
 */


void FUN_009a0cdc(long *param_1,long param_2,byte param_3)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  undefined8 *puVar18;
  long *local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  long *local_80;
  byte local_74 [4];
  long *local_68;
  
  local_a0 = (long *)0x0;
  pcStack_98 = (char *)0x0;
  local_74[0] = param_3;
  FUN_009630f4(&local_a0,param_2 + 0x510);
  plVar2 = local_a0;
  puVar10 = PTR_DAT_04379fd0;
  puVar9 = PTR_DAT_04379fc8;
  puVar8 = PTR_DAT_043794d8;
  puVar7 = PTR_DAT_043794d0;
  plVar16 = (long *)0x0;
  if (local_a0 != (long *)0x0) {
    if (*(int *)((long)local_a0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_a0 + 0xc);
      iVar12 = *(int *)((long)local_a0 + 0xc);
      do {
        plVar16 = (long *)plVar2[2];
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          if (((*puVar7 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar7), iVar13 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar8 = uVar14;
            __cxa_guard_release(puVar7);
          }
          *(undefined **)puVar10 = puVar8;
          __cxa_guard_release(puVar9);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_009a1290;
          if (plVar16 == (long *)puVar10) break;
          plVar16 = (long *)*plVar16;
        }
        iVar13 = *piVar1;
        if (iVar13 == iVar12) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar6) {
            *piVar1 = iVar12 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            lVar15 = plVar2[3];
            plVar16 = (long *)0x0;
            plVar2 = local_a0;
            if (lVar15 != 0) {
              plVar16 = (long *)(lVar15 + -0x50);
            }
            goto joined_r0x009a120c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = iVar13;
      } while (iVar13 != 0);
    }
LAB_009a1290:
    plVar16 = (long *)0x0;
    plVar2 = local_a0;
joined_r0x009a120c:
    if (plVar2 != (long *)0x0) {
      plVar3 = plVar2 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        plVar2[2] = 0;
        local_a0 = plVar2;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = (long *)*plVar2;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
  }
  local_a0 = (long *)0x0;
  pcStack_98 = (char *)0x0;
  FUN_01901488(&local_a0,plVar16 + 0x1c);
  if (local_a0 == (long *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_80);
    plVar2 = local_a0;
    if (local_a0 != (long *)0x0) {
      plVar3 = local_a0 + 1;
      do {
        iVar12 = (int)*plVar3 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar6) {
          *(int *)plVar3 = iVar12;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar12 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = (long *)*plVar2;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
  }
  if ((local_80 != (long *)0x0) &&
     (FUN_01a153e0(local_80,(ulong)(0x17 < local_74[0] - 6) << 1,2), local_80 != (long *)0x0)) {
    lVar15 = local_80[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  local_a0 = *(long **)(param_2 + 8);
  local_68 = (long *)FUN_009bb918(local_a0,&local_a0,local_74);
  if (local_68 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    lVar15 = local_68[0xb];
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto LAB_009a1168;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    plVar16 = local_68;
  }
  local_a0 = (long *)0xfe7845b268004485;
  pcStack_98 = "bin/effect/battle/sequence/ee630.wbin";
  local_90 = 0x25;
  local_88 = (long *)0x0;
  FUN_00adc9e8(plVar16,&local_a0,*(undefined8 *)(param_2 + 8));
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  lVar15 = FUN_00933eec(*(undefined8 *)(*(long *)(param_2 + 0x330) + 0xd0),local_74[0]);
  if (lVar15 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = FUN_02c5d638(*(undefined8 *)(*(long *)(lVar15 + 0x70) + 0x60));
  }
  (**(code **)(*plVar16 + 0xe0))(plVar16,0,uVar11);
  lVar15 = plVar16[0xb];
  local_a0 = plVar16;
  if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) {
LAB_009a1168:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  if (*(long *)(lVar15 + 0x10) == 0) {
    uVar14 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
    *(undefined8 *)(lVar15 + 0x10) = uVar14;
  }
  plVar16 = local_a0;
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = *piVar1 + 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined4 *)(local_a0 + 0xd) = 1;
  FUN_0099ae98(param_2 + 0x4a0,&local_a0);
  if (((((*(byte *)(param_2 + 0x770) & 0x1f) != 0) || ((*(byte *)(param_2 + 0x768) & 0x1f) != 0)) &&
      (*(int *)(param_2 + 0x7b8) == 1)) && (lVar15 = FUN_0099d310(plVar16 + 10), lVar15 != 0)) {
    uVar11 = *(undefined4 *)(param_2 + 0x7c0);
    *(undefined4 *)(lVar15 + 0xf0) = uVar11;
    plVar3 = *(long **)(lVar15 + 0x80);
    for (plVar2 = *(long **)(lVar15 + 0x78); plVar2 != plVar3; plVar2 = plVar2 + 1) {
      puVar18 = *(undefined8 **)(*plVar2 + 0xe0);
      puVar4 = *(undefined8 **)(*plVar2 + 0xe8);
      if ((puVar18 != puVar4) &&
         ((**(code **)(*(long *)*puVar18 + 0x90))(uVar11), puVar18 + 1 != puVar4)) {
        (**(code **)(*(long *)puVar18[1] + 0x90))(uVar11);
        for (puVar18 = puVar18 + 2; puVar18 != puVar4; puVar18 = puVar18 + 1) {
          (**(code **)(*(long *)*puVar18 + 0x90))(uVar11);
        }
      }
    }
  }
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  lVar15 = FUN_009bb6f0(*(undefined8 *)(param_2 + 8),&local_68);
  if (lVar15 != 0) {
    lVar17 = *(long *)(lVar15 + 0x58);
    if (*(undefined8 **)(lVar17 + 0x18) == (undefined8 *)0x0) goto LAB_009a1168;
    if (*(long *)(lVar17 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar17 + 0x18))();
      *(undefined8 *)(lVar17 + 0x10) = uVar14;
    }
    piVar1 = (int *)(lVar17 + 0xc);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = *piVar1 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  *param_1 = lVar15;
  if (local_68 != (long *)0x0) {
    lVar15 = local_68[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar12 + -1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_68 + 0x20))();
    }
  }
  return;
}


