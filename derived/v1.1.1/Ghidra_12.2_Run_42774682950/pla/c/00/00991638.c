/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00991638; name: FUN_00991638
 */


void FUN_00991638(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  double dVar15;
  undefined8 uVar16;
  long *local_e0;
  undefined8 *local_d8 [2];
  undefined4 local_c4;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined4 local_8c;
  long *local_80;
  long *local_78;
  undefined8 local_68;
  
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_009630f4(&local_c0,param_1 + 0x510);
  puVar4 = local_c0;
  puVar8 = PTR_DAT_04379fd0;
  puVar7 = PTR_DAT_04379fc8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  plVar14 = (long *)0x0;
  if (local_c0 != (undefined8 *)0x0) {
    if (*(int *)((long)local_c0 + 0xc) != 0) {
      piVar1 = (int *)((long)local_c0 + 0xc);
      iVar11 = *(int *)((long)local_c0 + 0xc);
      do {
        plVar14 = (long *)puVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar7), iVar12 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar5), iVar12 != 0)) {
            uVar16 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar16;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_00991dc4;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = puVar4[3];
            plVar14 = (long *)0x0;
            puVar4 = local_c0;
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x00991d40;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_00991dc4:
    plVar14 = (long *)0x0;
    puVar4 = local_c0;
joined_r0x00991d40:
    local_c0 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
  }
  FUN_018f98bc(&local_c0,plVar14);
  if (local_c0 == (undefined8 *)0x0) {
    local_78 = (long *)0x0;
  }
  else {
    FUN_009b8630(&local_78);
    puVar4 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_01901488(&local_c0,plVar14 + 0x1c);
  if (local_c0 == (undefined8 *)0x0) {
    local_80 = (long *)0x0;
  }
  else {
    FUN_009ac698(&local_80);
    puVar4 = local_c0;
    if (local_c0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_c0 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        local_c0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
  }
  puVar7 = PTR_DAT_04379588;
  puVar6 = PTR_DAT_04379580;
  puVar5 = PTR_DAT_04379578;
  if (local_80 != (long *)0x0) {
    FUN_01a48464(local_78);
    FUN_01a4bb30(&local_c0,local_78);
    local_8c = 1;
    FUN_01a4baf4(local_80,&local_c0);
    plVar9 = local_80;
    FUN_01a3af98(local_78);
    FUN_01a3afa0(plVar9);
    *(int *)(local_80 + 0x1df9) = (int)local_78[0x1baa];
    local_c4 = (undefined4)local_78[0x1baa];
    dVar15 = (double)FUN_01a3af98();
    plVar9 = local_80;
    if ((*(char *)(param_2 + 0x6b) != '\0') || (*(char *)(param_2 + 0x6a) != '\0')) {
      dVar15 = -1.0;
      local_c4 = 0xc;
    }
    uVar16 = FUN_01a4bcc8(local_78);
    FUN_01a3a980(uVar16,(float)dVar15,plVar9,&local_c4);
    plVar9 = local_80;
    if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379578), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379578);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    FUN_0098f80c(&local_e0,lVar13 + 0xd8);
    FUN_0199ce28(local_d8,local_e0);
    FUN_01a3e9b0(plVar9,local_d8);
    if (local_d8[0] != (undefined8 *)0x0) {
      piVar1 = (int *)(local_d8[0] + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        local_d8[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *local_d8[0];
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
    if (local_e0 != (long *)0x0) {
      lVar13 = local_e0[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_e0 + 0x20))();
      }
    }
    FUN_01a14e8c(local_80);
    FUN_01a163a8(local_80,0);
    FUN_01a1654c(local_80,0);
    FUN_01a4a870(local_80,1);
    if (local_80 != (long *)0x0) {
      lVar13 = local_80[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  FUN_01a4a870(local_78,0);
  if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379578), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar13 = *(long *)puVar6;
  *(long *)puVar7 = lVar13;
  FUN_0098f80c(&local_80,lVar13 + 0xd8);
  if (local_80 != (long *)0x0) {
    FUN_019a00a0(&local_c0);
    if (local_c0 == (undefined8 *)0x0) {
      local_e0 = (long *)0x0;
    }
    else {
      FUN_009b8830(&local_e0);
      puVar4 = local_c0;
      if (local_c0 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_c0 + 1);
        do {
          iVar11 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar11 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar11 + -1 == 0) {
          local_c0[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *puVar4;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
    }
    if ((local_e0 != (long *)0x0) && (FUN_01f334cc(local_e0,0), local_e0 != (long *)0x0)) {
      lVar13 = local_e0[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_e0 + 0x20))();
      }
    }
    if (local_80 != (long *)0x0) {
      lVar13 = local_80[0xb];
      piVar1 = (int *)(lVar13 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar13 + 0x18) = 0;
        (**(code **)(*local_80 + 0x20))();
      }
    }
  }
  uVar10 = FUN_01837164();
  *(undefined4 *)(param_1 + 0x7c8) = uVar10;
  *(undefined2 *)(param_1 + 0x570) = 0;
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar14 != (long *)0x0) {
    lVar13 = plVar14[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


