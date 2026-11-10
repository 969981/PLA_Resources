/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02562368; name: FUN_02562368
 */


void FUN_02562368(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long *plVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 *local_a0 [2];
  undefined8 local_90;
  undefined **local_88;
  long local_80;
  undefined4 local_78;
  long *local_70;
  undefined8 local_68;
  
  FUN_009c69bc(&local_70);
  local_88 = &PTR_FUN_04287ca8;
  local_80 = *(long *)(param_1 + 0x1f8) + 0x270;
  local_78 = 0x16;
  if (((*PTR_DAT_0437a648 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a648);
  }
  lVar14 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar14;
  local_90 = *(undefined8 *)(lVar14 + 0x230);
  plVar12 = (long *)FUN_00c60148(local_70 + 0x1e,&local_f8);
  FUN_02bea704(local_a0,plVar12,&local_90);
  puVar4 = local_a0[0];
  puVar9 = PTR_DAT_0437a678;
  puVar8 = PTR_DAT_0437a670;
  puVar7 = PTR_DAT_0437a588;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if ((local_a0[0] != (undefined8 *)0x0) && (*(int *)((long)local_a0[0] + 0xc) != 0)) {
    piVar1 = (int *)((long)local_a0[0] + 0xc);
    iVar10 = *(int *)((long)local_a0[0] + 0xc);
    uVar13 = local_f8;
    do {
      local_f8 = uVar13;
      plVar15 = (long *)puVar4[2];
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*PTR_DAT_0437a598 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a598), iVar11 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar7 = puVar6;
          __cxa_guard_release(PTR_DAT_0437a598);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
        uVar13 = local_f8;
      }
      else {
        uVar13 = local_f8;
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_0256240c;
        local_f8._4_4_ = (undefined4)((ulong)uVar13 >> 0x20);
        if (plVar15 == (long *)puVar9) break;
        plVar15 = (long *)*plVar15;
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
          lVar14 = puVar4[3];
          if (lVar14 != 0) {
            plVar15 = (long *)(lVar14 + -0x50);
            *(undefined4 *)(lVar14 + 0x94) = 0;
            FUN_02bdb08c(plVar15,0xd);
            *(undefined4 *)(lVar14 + 0xac) = 5;
            FUN_02bd6eb4(plVar15,&local_88);
            *(undefined1 *)(lVar14 + 0xa7) = 0;
            if (*(int *)(lVar14 + 0x2c) == 0) {
              *(undefined4 *)(lVar14 + 0x2c) = 1;
            }
            lVar14 = *(long *)(lVar14 + 8);
            piVar1 = (int *)(lVar14 + 0xc);
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
              *(undefined8 *)(lVar14 + 0x18) = 0;
              (**(code **)(*plVar15 + 0x20))(plVar15);
            }
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_0256240c:
  local_a8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_f8 = CONCAT44(local_f8._4_4_,0xf);
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_d8 = 0;
  local_d0 = (undefined8 *)0x0;
  local_e8 = 0;
  local_e0 = (undefined8 *)0x0;
  local_100 = plVar12;
  if (plVar12 != (long *)0x0) {
    lVar14 = plVar12[0xb];
    if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar14 + 0x10) == 0) {
      uVar13 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
      *(undefined8 *)(lVar14 + 0x10) = uVar13;
    }
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  FUN_01e4b6a0(&local_100,&local_f8);
  puVar4 = local_b8;
  if (local_100 != (long *)0x0) {
    lVar14 = local_100[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
      puVar4 = local_b8;
    }
  }
  local_b8 = puVar4;
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
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  puVar4 = local_d0;
  if (local_d0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_d0 + 1);
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
      local_d0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  puVar4 = local_e0;
  if (local_e0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_e0 + 1);
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
      local_e0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  puVar4 = local_f0;
  if (local_f0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_f0 + 1);
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
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_68 = *puVar4;
      FUN_02a44274(lVar14 + 0xd8,&local_68);
    }
  }
  if (local_a0[0] != (undefined8 *)0x0) {
    piVar1 = (int *)(local_a0[0] + 1);
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
      local_a0[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_f8 = *local_a0[0];
      FUN_02a44274(lVar14 + 0xd8,&local_f8);
    }
  }
  if (local_70 != (long *)0x0) {
    lVar14 = local_70[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return;
}


