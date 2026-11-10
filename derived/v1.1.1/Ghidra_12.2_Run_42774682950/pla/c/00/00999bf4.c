/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00999bf4; name: FUN_00999bf4
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00999bf4(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  double dVar15;
  long *local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  long *local_78;
  long *local_70;
  undefined8 local_68;
  
  if (*(int *)(param_1 + 0x7c8) < 1) {
    FUN_0183a1a0();
  }
  else {
    FUN_0183a190();
  }
  *(undefined4 *)(param_1 + 0x7c8) = 0;
  if (*(char *)(param_1 + 0x570) == '\0') {
    cVar2 = *(char *)(param_1 + 0x571);
  }
  else {
    FUN_0099c8c8(0,0,0x3f800000,param_1,0,0);
    cVar2 = *(char *)(param_1 + 0x571);
  }
  if (cVar2 != '\0') {
    FUN_0099ca70(param_1,0);
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_009630f4(&local_c0,param_1 + 0x510);
  puVar4 = local_c0;
  puVar9 = PTR_DAT_04379fd0;
  puVar8 = PTR_DAT_04379fc8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  plVar13 = (long *)0x0;
  if (local_c0 != (undefined8 *)0x0) {
    if (*(int *)((long)local_c0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_c0 + 0xc);
      iVar10 = *(int *)((long)local_c0 + 0xc);
      do {
        plVar13 = (long *)puVar4[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
            uVar14 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar14;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar13 == (long *)0x0) goto LAB_0099a2bc;
          if (plVar13 == (long *)puVar9) break;
          plVar13 = (long *)*plVar13;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar12 = puVar4[3];
            plVar13 = (long *)0x0;
            puVar4 = local_c0;
            if (lVar12 != 0) {
              plVar13 = (long *)(lVar12 + -0x50);
            }
            goto joined_r0x0099a238;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_0099a2bc:
    plVar13 = (long *)0x0;
    puVar4 = local_c0;
joined_r0x0099a238:
    local_c0 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
  }
  FUN_018fb158(plVar13,1);
  if (((*PTR_DAT_04379578 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379578), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar12 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar12;
  FUN_0098f80c(&local_70,lVar12 + 0xd8);
  if (local_70 != (long *)0x0) {
    FUN_019a00a0(&local_c0);
    if (local_c0 == (undefined8 *)0x0) {
      local_78 = (long *)0x0;
    }
    else {
      FUN_009b8830(&local_78);
      puVar4 = local_c0;
      if (local_c0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c0 + 1);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar12 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar12;
          local_68 = *puVar4;
          FUN_02a44274(lVar12 + 0xd8,&local_68);
        }
      }
    }
    if ((local_78 != (long *)0x0) && (FUN_01f334cc(local_78,1), local_78 != (long *)0x0)) {
      lVar12 = local_78[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (local_70 != (long *)0x0) {
      lVar12 = local_70[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_70 + 0x20))();
      }
    }
  }
  FUN_018f98bc(&local_c0,plVar13);
  if (local_c0 == (undefined8 *)0x0) {
    local_70 = (long *)0x0;
  }
  else {
    FUN_009b8630(&local_70);
    puVar4 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
      }
    }
  }
  FUN_01a4a870(local_70,1);
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_01901488(&local_c0,plVar13 + 0x1c);
  if (local_c0 == (undefined8 *)0x0) {
    local_78 = (long *)0x0;
    plVar5 = local_70;
  }
  else {
    FUN_009ac698(&local_78);
    puVar4 = local_c0;
    plVar5 = local_70;
    if (local_c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0 + 1);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar12 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar12;
        local_68 = *puVar4;
        FUN_02a44274(lVar12 + 0xd8,&local_68);
        plVar5 = local_70;
      }
    }
  }
  local_70 = plVar5;
  if (local_78 != (long *)0x0) {
    FUN_01a4bb30(&local_c0);
    FUN_01a4baf4(plVar5,&local_c0);
    plVar5 = local_70;
    FUN_01a3af98(local_78);
    FUN_01a3afa0(plVar5);
    plVar5 = local_70;
    local_c0 = (undefined8 *)CONCAT44(local_c0._4_4_,(int)local_70[0x1baa]);
    uVar14 = FUN_01a4bcc8(local_78);
    dVar15 = (double)FUN_01a3af98(local_78);
    FUN_01a3a980(uVar14,(float)dVar15,plVar5,&local_c0);
    if ((*(char *)(param_1 + 0x564) != '\0') || (*(char *)(param_1 + 0x563) != '\0')) {
      FUN_01a349fc(local_70);
    }
    FUN_01a4a870(local_78,0);
    local_c8 = (long *)0x0;
    FUN_01a4ad9c(local_78,&local_c8);
    if (local_c8 != (long *)0x0) {
      lVar12 = local_c8[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_c8 + 0x20))();
      }
    }
    FUN_01a168c4(local_78);
    if (local_78 != (long *)0x0) {
      lVar12 = local_78[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
  }
  if (local_70 != (long *)0x0) {
    lVar12 = local_70[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
  }
  return;
}


