/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02866d8c; name: FUN_02866d8c
 */


/* WARNING: Removing unreachable block (ram,0x028673a8) */
/* WARNING: Removing unreachable block (ram,0x028673ac) */
/* WARNING: Removing unreachable block (ram,0x028673b4) */
/* WARNING: Removing unreachable block (ram,0x028673bc) */
/* WARNING: Removing unreachable block (ram,0x028673c4) */
/* WARNING: Removing unreachable block (ram,0x0286776c) */
/* WARNING: Removing unreachable block (ram,0x0286777c) */
/* WARNING: Removing unreachable block (ram,0x028673d0) */
/* WARNING: Removing unreachable block (ram,0x02867080) */
/* WARNING: Removing unreachable block (ram,0x02867084) */
/* WARNING: Removing unreachable block (ram,0x0286708c) */
/* WARNING: Removing unreachable block (ram,0x02867094) */
/* WARNING: Removing unreachable block (ram,0x02867098) */
/* WARNING: Removing unreachable block (ram,0x028676d8) */
/* WARNING: Removing unreachable block (ram,0x028676e8) */
/* WARNING: Removing unreachable block (ram,0x028670a4) */
/* WARNING: Removing unreachable block (ram,0x028670c0) */
/* WARNING: Removing unreachable block (ram,0x028672d0) */
/* WARNING: Removing unreachable block (ram,0x028672d4) */
/* WARNING: Removing unreachable block (ram,0x028672dc) */
/* WARNING: Removing unreachable block (ram,0x028672e4) */
/* WARNING: Removing unreachable block (ram,0x028672e8) */
/* WARNING: Removing unreachable block (ram,0x0286769c) */
/* WARNING: Removing unreachable block (ram,0x028676ac) */
/* WARNING: Removing unreachable block (ram,0x028672f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02866d8c(long param_1,undefined4 param_2,long param_3,undefined8 *param_4,
                 undefined4 param_5)

{
  int *piVar1;
  undefined8 uVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_1 + 0x2d30) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x2d30) + 0xc) != 0) {
      if (*(long *)(param_3 + 8) == 0) {
        return;
      }
      if (*(int *)(*(long *)(param_3 + 8) + 0xc) == 0) {
        return;
      }
      if (*(long *)(param_3 + 8) == 0) {
        return;
      }
      lVar14 = *(long *)(*(long *)(param_3 + 8) + 0x18);
      if (lVar14 == 0) {
        return;
      }
      uVar9 = FUN_0205ca28(lVar14);
      if ((uVar9 & 1) == 0) {
        return;
      }
      if (_DAT_043d4b04 == 0) {
        return;
      }
      FUN_01f61e88(lVar14 + -0x50,1,0);
      return;
    }
    if ((*(long *)(param_1 + 0x2d30) != 0) && (*(int *)(*(long *)(param_1 + 0x2d30) + 0xc) != 0)) {
      return;
    }
  }
  if (*(char *)(param_3 + 0x1b9) != '\0') {
    local_80 = (long *)CONCAT71(local_80._1_7_,3);
    FUN_0280068c(*(undefined8 *)(param_1 + 0xd0),&local_80);
  }
  if (((*PTR_DAT_04379678 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379678), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  puVar5 = PTR_DAT_0437b160;
  plVar16 = *(long **)(*(long *)PTR_DAT_0437b160 + 0x388);
  plVar15 = *(long **)(lVar14 + 200);
  plVar17 = plVar16;
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_02867750;
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    plVar17 = *(long **)(*(long *)puVar5 + 0x388);
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar8 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar8 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (0xf < *(ulong *)(lVar14 + 0x80)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(long **)(lVar14 + *(ulong *)(lVar14 + 0x80) * 8) = plVar17;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + 1;
  plVar11 = (long *)(**(code **)(*plVar17 + 0x10))(plVar17,0x98,8);
  if (plVar11 == (long *)0x0) {
    (**(code **)(*plVar17 + 0xb8))(plVar17);
  }
  FUN_0285e5dc(plVar11,plVar16,param_2,param_3,param_5);
  plVar11[1] = (long)plVar17;
  plVar11[2] = (long)plVar11;
  plVar11[3] = 0x98;
  plVar11[4] = 8;
  *(long *)(lVar14 + 0x80) = *(long *)(lVar14 + 0x80) + -1;
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_02867750:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar10 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar10;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_80 = (long *)0x0;
  local_78 = 0;
  FUN_008802f0(&local_80,plVar11 + 0xb);
  puVar5 = PTR_DAT_04379498;
  local_88 = 0;
  do {
    uVar10 = local_78;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_78,0x10);
    if (bVar4) {
      local_78 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*PTR_DAT_04379498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  uVar12 = *(undefined8 *)PTR_DAT_043794a0;
  *(undefined8 *)PTR_DAT_043794a8 = uVar12;
  FUN_02a44e0c(&local_70,uVar12,uVar10);
  plVar17 = local_80;
  local_80 = (long *)0x0;
  if (plVar17 != (long *)0x0) {
    plVar16 = plVar17 + 1;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      plVar17[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_68 = (long *)*plVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  local_90 = (long *)0x0;
  if (local_70 == (long *)0x0) {
    uVar10 = 0;
  }
  else {
    local_90 = local_70;
    local_70 = (long *)0x0;
  }
  plVar17 = local_70;
  local_88 = uVar10;
  if (local_70 != (long *)0x0) {
    plVar16 = local_70 + 1;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_70[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_68 = (long *)*plVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  plVar17 = local_80;
  if (local_80 != (long *)0x0) {
    plVar16 = local_80 + 1;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_80[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_68 = (long *)*plVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  local_80 = plVar11;
  FUN_00d89c8c(plVar15,&local_80);
  if (plVar11 != (long *)0x0) {
    lVar14 = plVar11[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  do {
    uVar10 = local_88;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_88,0x10);
    if (bVar4) {
      local_88 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  uVar12 = *(undefined8 *)puVar6;
  *(undefined8 *)puVar7 = uVar12;
  FUN_02a44e0c(&local_68,uVar12,uVar10);
  if (local_90 != (long *)0x0) {
    plVar17 = local_90 + 1;
    do {
      iVar8 = (int)*plVar17 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar4) {
        *(int *)plVar17 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_90[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_80 = (long *)*local_90;
      FUN_02a44274(lVar14 + 0xd8,&local_80);
    }
  }
  plVar17 = *(long **)(param_1 + 0x2d30);
  *(undefined8 *)(param_1 + 0x2d30) = 0;
  if (local_68 == (long *)0x0) {
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        lVar14 = *plVar16;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = (int)lVar14 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if ((int)lVar14 == 1) {
        plVar17[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_80 = (long *)*plVar17;
        FUN_02a44274(lVar14 + 0xd8,&local_80);
      }
    }
    uVar10 = 0;
  }
  else {
    plVar16 = local_68;
    if (plVar17 != (long *)0x0) {
      plVar16 = plVar17 + 1;
      do {
        iVar8 = (int)*plVar16 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar4) {
          *(int *)plVar16 = iVar8;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar8 == 0) {
        plVar17[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        local_80 = (long *)*plVar17;
        FUN_02a44274(lVar14 + 0xd8,&local_80);
      }
      plVar16 = local_68;
    }
    local_68 = (long *)0x0;
    *(long **)(param_1 + 0x2d30) = plVar16;
  }
  plVar17 = local_68;
  *(undefined8 *)(param_1 + 0x2d38) = uVar10;
  if (local_68 != (long *)0x0) {
    plVar16 = local_68 + 1;
    do {
      iVar8 = (int)*plVar16 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar4) {
        *(int *)plVar16 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_68[2] = 0;
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      local_80 = (long *)*plVar17;
      FUN_02a44274(lVar14 + 0xd8,&local_80);
    }
  }
  pcVar13 = *(code **)(param_1 + 0x58);
  if (pcVar13 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    (*pcVar13)(param_1 + 0x70);
  }
  if ((code *)param_4[2] != (code *)0x0) {
    (*(code *)param_4[2])(param_4 + 4,param_1 + 0x70);
    uVar10 = *param_4;
    uVar12 = param_4[1];
    uVar2 = param_4[3];
    *(undefined8 *)(param_1 + 0x60) = param_4[2];
    *(undefined8 *)(param_1 + 0x68) = uVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar10;
    *(undefined8 *)(param_1 + 0x58) = uVar12;
  }
  if (plVar15 != (long *)0x0) {
    lVar14 = plVar15[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar15 + 0x20))(plVar15);
    }
  }
  return;
}


