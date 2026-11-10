/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017d446c; name: FUN_017d446c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_017d446c(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  long *local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  long *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  long *local_38;
  
  plVar12 = (long *)(param_1 + 0xa0);
  if ((*plVar12 == 0) || (uVar10 = FUN_02a43a8c(), (uVar10 & 1) != 0)) {
    cVar2 = *(char *)(param_1 + 0xe1);
    goto joined_r0x017d4498;
  }
  iVar8 = FUN_017da8e0(100);
  local_60 = (long *)0xb0bc20d12e286f6;
  pcStack_58 = "buddy_group_talk";
  local_50 = 0x10;
  local_48 = (long *)0x0;
  local_80 = (long *)0xc50ab992549998f0;
  pcStack_78 = "add_pokemon_talker_percent";
  local_70 = 0x1a;
  local_68 = (long *)0x0;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379660), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  uVar11 = *(undefined8 *)PTR_DAT_04379668;
  *(undefined8 *)PTR_DAT_04379670 = uVar11;
  FUN_00d7d9e4(&local_38,uVar11,&local_60);
  if (local_38 == (long *)0x0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_00d78f50(local_38,&local_80);
    if (local_38 != (long *)0x0) {
      plVar15 = local_38 + 10;
      do {
        iVar4 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*local_38 + 0x10))();
      }
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  if (iVar7 < iVar8) {
    local_a0 = (long *)0x0;
    uStack_98 = 0;
    FUN_017db6d4(&local_a0,plVar12);
    FUN_017daa44(param_1,&local_a0,0);
    if (local_a0 != (long *)0x0) {
      plVar15 = local_a0 + 1;
      do {
        iVar8 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar14 = local_a0;
      } while (cVar2 != '\0');
LAB_017d47d8:
      if (iVar8 == 0) {
        plVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_60 = (long *)*plVar14;
        FUN_02a44274(lVar13 + 0xd8,&local_60);
      }
    }
  }
  else {
    local_90 = (long *)0x0;
    uStack_88 = 0;
    FUN_017db6d4(&local_90,plVar12);
    FUN_017daa14(param_1,&local_90);
    if (local_90 != (long *)0x0) {
      plVar15 = local_90 + 1;
      do {
        iVar8 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
        plVar14 = local_90;
      } while (cVar2 != '\0');
      goto LAB_017d47d8;
    }
  }
  plVar15 = (long *)*plVar12;
  *plVar12 = 0;
  if (plVar15 != (long *)0x0) {
    plVar12 = plVar15 + 1;
    do {
      iVar8 = (int)*plVar12 + -1;
      cVar2 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar5) {
        *(int *)plVar12 = iVar8;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 == 0) {
      plVar15[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar13 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar13;
      local_60 = (long *)*plVar15;
      FUN_02a44274(lVar13 + 0xd8,&local_60);
    }
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  cVar2 = *(char *)(param_1 + 0xe1);
joined_r0x017d4498:
  if ((cVar2 != '\0') &&
     (iVar8 = *(int *)(param_1 + 0xe4), *(int *)(param_1 + 0xe4) = iVar8 + -1, iVar8 < 1)) {
    plVar12 = *(long **)(param_1 + 0xd0);
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (plVar12 != (long *)0x0) {
      plVar15 = plVar12 + 1;
      do {
        iVar8 = (int)*plVar15 + -1;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar5) {
          *(int *)plVar15 = iVar8;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 0) {
        plVar12[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_60 = (long *)*plVar12;
        FUN_02a44274(lVar13 + 0xd8,&local_60);
      }
    }
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined2 *)(param_1 + 0xe0) = 0;
    FUN_017d5378(param_1);
  }
  lVar13 = *(long *)(param_1 + 0xf0);
  while( true ) {
    if (param_1 + 0xe8 == lVar13) goto LAB_017d44d4;
    if (*(char *)(lVar13 + 0x10) != '\0') break;
    lVar13 = *(long *)(lVar13 + 8);
  }
  if (*(long *)(param_1 + 0xb0) == 0) {
    local_60 = (long *)0x0;
    lVar9 = *(long *)(lVar13 + 0x18);
  }
  else {
    FUN_017dca7c(&local_60);
    lVar9 = *(long *)(lVar13 + 0x18);
  }
  if (lVar9 == 0) {
    bVar5 = local_60 == (long *)0x0;
    local_80 = (long *)0x0;
    goto joined_r0x017d4978;
  }
  FUN_017dca7c(&local_80);
  bVar5 = local_60 == local_80;
  if (local_80 == (long *)0x0) goto joined_r0x017d4978;
  lVar9 = local_80[0xb];
  piVar1 = (int *)(lVar9 + 0xc);
  do {
    iVar8 = *piVar1;
    cVar2 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar6) {
      *piVar1 = iVar8 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_80 + 0x20))(local_80);
    if (local_60 != (long *)0x0) goto LAB_017d4534;
LAB_017d4550:
    if (*(long *)(param_1 + 0xc0) != 0) goto LAB_017d48c4;
LAB_017d4558:
    local_60 = (long *)0x0;
    if (*(long *)(lVar13 + 0x18) != 0) goto LAB_017d48d4;
LAB_017d4564:
    bVar6 = local_60 == (long *)0x0;
    local_80 = (long *)0x0;
  }
  else {
joined_r0x017d4978:
    if (local_60 == (long *)0x0) goto LAB_017d4550;
LAB_017d4534:
    lVar9 = local_60[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar6) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 != 0) goto LAB_017d4550;
    *(undefined8 *)(lVar9 + 0x18) = 0;
    (**(code **)(*local_60 + 0x20))();
    if (*(long *)(param_1 + 0xc0) == 0) goto LAB_017d4558;
LAB_017d48c4:
    FUN_017dca7c(&local_60);
    if (*(long *)(lVar13 + 0x18) == 0) goto LAB_017d4564;
LAB_017d48d4:
    FUN_017dca7c(&local_80);
    bVar6 = local_60 == local_80;
    if (local_80 != (long *)0x0) {
      lVar9 = local_80[0xb];
      piVar1 = (int *)(lVar9 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 + -1 == 0) {
        *(undefined8 *)(lVar9 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))(local_80);
      }
    }
  }
  if (local_60 != (long *)0x0) {
    lVar9 = local_60[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  FUN_017dab64(param_1 + 0xe8,lVar13);
  FUN_017dad38(param_1);
  if (bVar5) {
    FUN_017d5378(param_1);
    cVar2 = *(char *)(param_1 + 0xe0);
  }
  else if (bVar6) {
    FUN_017db0b0(param_1);
    cVar2 = *(char *)(param_1 + 0xe0);
  }
  else {
LAB_017d44d4:
    cVar2 = *(char *)(param_1 + 0xe0);
  }
  if ((cVar2 == '\0') &&
     (iVar8 = *(int *)(param_1 + 0x6c), iVar7 = iVar8 + -1, *(int *)(param_1 + 0x6c) = iVar7,
     iVar7 == 0 || iVar8 < 1)) {
    FUN_017d5378(param_1);
  }
  iVar8 = *(int *)(param_1 + 0x70);
  iVar7 = iVar8 + -1;
  *(int *)(param_1 + 0x70) = iVar7;
  if (iVar7 == 0 || iVar8 < 1) {
    FUN_017db0b0(param_1);
  }
  return;
}


