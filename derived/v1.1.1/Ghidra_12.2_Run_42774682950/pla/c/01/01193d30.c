/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01193d30; name: FUN_01193d30
 */


void FUN_01193d30(long param_1)

{
  uint uVar1;
  ushort uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined4 uVar20;
  undefined1 auStack_f0 [24];
  long *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  
  switch(*(undefined4 *)(param_1 + 0x1d4)) {
  case 0:
    FUN_011a6f20(*(undefined8 *)(param_1 + 0x1b8));
    uVar3 = *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 0x16b2);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar17 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar17;
    plVar13 = *(long **)(lVar17 + 0xd0);
    if (plVar13 != (long *)0x0) {
      plVar19 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = (int)*plVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar19 = (long *)plVar13[0xb];
    if (plVar19 != (long *)0x0) {
      plVar18 = plVar19 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    uVar11 = (**(code **)(*plVar19 + 0x50))(plVar19,uVar3);
    if (plVar19 != (long *)0x0) {
      plVar18 = plVar19 + 10;
      do {
        iVar9 = (int)*plVar18 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar19 + 0x10))(plVar19);
      }
    }
    plVar19 = plVar13 + 10;
    do {
      iVar9 = (int)*plVar19 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar5) {
        *(int *)plVar19 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))(plVar13);
    }
    FUN_011a7284(*(undefined8 *)(param_1 + 0x1b8),0,uVar11,0,0xff);
    *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  case 1:
    uVar12 = FUN_00d73754(*(undefined8 *)(param_1 + 0x1b8));
    if ((uVar12 & 1) == 0) {
      FUN_011a723c(*(undefined8 *)(param_1 + 0x1b8),0,1);
LAB_01193e70:
      iVar9 = *(int *)(param_1 + 0x1d4) + 1;
LAB_01193e78:
      *(int *)(param_1 + 0x1d4) = iVar9;
    }
    break;
  case 2:
    iVar9 = *(int *)(*(long *)(param_1 + 0x1b8) + 0x5ac);
    if (iVar9 == 1) {
      FUN_011a6f60();
      goto LAB_01193e70;
    }
    if (iVar9 != 2) {
      return;
    }
    FUN_00d6802c(*(undefined8 *)(param_1 + 0x1c0),1);
    FUN_011a6f60(*(undefined8 *)(param_1 + 0x1b8));
    iVar9 = 4;
    goto LAB_01193e78;
  case 3:
    uVar12 = FUN_00d73754(*(undefined8 *)(param_1 + 0x1b8));
    if ((uVar12 & 1) != 0) {
      return;
    }
    uVar2 = *(ushort *)(*(long *)(param_1 + 0x1a8) + 0x16b0);
    uVar3 = *(undefined2 *)(*(long *)(param_1 + 0x1a8) + 0x16b2);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379678), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar17 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar17;
    plVar13 = *(long **)(lVar17 + 0xd0);
    if (plVar13 != (long *)0x0) {
      plVar19 = plVar13 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar5) {
          *(int *)plVar19 = (int)*plVar19 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar19 = (long *)plVar13[0xb];
    if (plVar19 != (long *)0x0) {
      plVar18 = plVar19 + 10;
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar5) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    plVar18 = plVar13 + 10;
    do {
      iVar9 = (int)*plVar18 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar13 + 0x10))();
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar19 + 0x50))(plVar19,uVar3);
    puVar15 = puVar14;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (puVar15 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar15 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      puVar15 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar17 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar17;
    plVar13 = *(long **)(lVar17 + 0x280);
    if (plVar13 != (long *)0x0) {
      lVar17 = plVar13[0xb];
      puVar15 = *(undefined8 **)(lVar17 + 0x18);
      if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
        puVar15 = (undefined8 *)(**(code **)*puVar15)();
        *(undefined8 **)(lVar17 + 0x10) = puVar15;
      }
      piVar16 = (int *)(lVar17 + 0xc);
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = *piVar16 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
    iVar9 = *(int *)(*(long *)(param_1 + 0x1a8) + 0x16c4);
    uVar7 = FUN_010dac08(puVar15,iVar9);
    if (iVar9 == 0) {
      plVar18 = plVar13 + 0xd;
joined_r0x01194350:
      if (uVar7 <= uVar2) goto LAB_01194354;
LAB_01194044:
      uVar20 = *(undefined4 *)((long)plVar18 + (ulong)uVar2 * 4);
    }
    else {
      if (iVar9 == 1) {
        plVar18 = (long *)((long)plVar13 + 0xaf4);
        if (uVar2 < uVar7) goto LAB_01194044;
      }
      else if (iVar9 == 2) {
        plVar18 = (long *)((long)plVar13 + 0xc84);
        goto joined_r0x01194350;
      }
LAB_01194354:
      uVar20 = 0;
    }
    if (plVar13 != (long *)0x0) {
      lVar17 = plVar13[0xb];
      piVar16 = (int *)(lVar17 + 0xc);
      do {
        iVar9 = *piVar16;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar16,0x10);
        if (bVar5) {
          *piVar16 = iVar9 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar17 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    uVar8 = FUN_011a8160(*(undefined8 *)(param_1 + 0x1b8),0);
    iVar9 = FUN_02c6b1c0(puVar14[0x13],0);
    iVar10 = FUN_02c6b1c0(puVar14[0x13],1);
    uVar7 = 2;
    if (iVar9 == 0) {
      uVar7 = 1;
    }
    uVar1 = (uint)(iVar9 != 0);
    if (iVar10 != 0) {
      uVar1 = uVar7;
    }
    iVar9 = FUN_02c6b1c0(puVar14[0x13],2);
    if (iVar9 != 0) {
      uVar1 = uVar1 + 1;
    }
    iVar9 = FUN_02c6b1c0(puVar14[0x13],3);
    if (iVar9 != 0) {
      uVar1 = uVar1 + 1;
    }
    if (uVar8 < uVar1) {
      lVar17 = FUN_011945c8(param_1);
      if (lVar17 == 0) {
LAB_01194288:
        local_a8 = (code *)&LAB_01196318;
        uStack_a0 = 0;
        local_d0 = &LAB_011997dc;
        local_c8 = FUN_011997f8;
        local_c0 = &LAB_011997fc;
        puStack_b8 = &LAB_01199810;
        local_b0 = param_1;
        FUN_0119541c(param_1,0xcf39f8ca2348b32d,&local_d0,1,0,0);
        pcVar6 = local_c8;
      }
      else {
        piVar16 = (int *)FUN_0118f90c();
        if (*piVar16 != 0) {
          uVar12 = FUN_0108f43c(plVar19,uVar20,uVar3,uVar8);
          if ((uVar12 & 1) != 0) {
            FUN_0118fb1c(lVar17,uVar20,1,(ulong)uVar2);
            FUN_0118fb50(lVar17,uVar3);
            FUN_0118fb60(lVar17,uVar8);
            FUN_0118fb34(lVar17,1);
            FUN_011a0c80(*(undefined8 *)(param_1 + 0x1a8));
            FUN_00d6802c(*(undefined8 *)(param_1 + 0x1c0),1);
            *(undefined8 *)(param_1 + 0x1d0) = 6;
            goto LAB_01194184;
          }
          goto LAB_01194288;
        }
        uVar12 = FUN_0108fb84(plVar19,uVar20,uVar3,uVar8,0);
        if ((uVar12 & 1) == 0) goto LAB_01194288;
        local_a8 = FUN_01196054;
        uStack_a0 = 0;
        local_d0 = &LAB_011997dc;
        local_c8 = FUN_011997f8;
        local_c0 = &LAB_011997fc;
        puStack_b8 = &LAB_01199810;
        local_b0 = param_1;
        FUN_0119541c(param_1,0xcf366cca23458f72,&local_d0,1,0,0);
        FUN_02a4754c(auStack_f0,&DAT_041f4aa0);
        FUN_028354b0(auStack_f0);
        pcVar6 = local_c8;
        if (local_d8 != (long *)0x0) {
          (**(code **)(*local_d8 + 0x20))();
          pcVar6 = local_c8;
        }
      }
      local_c8 = pcVar6;
      if (pcVar6 != (code *)0x0) {
        puStack_b8 = (undefined1 *)0x0;
        local_c0 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar6)(&local_b0);
      }
    }
    else {
      FUN_00d6802c(*(undefined8 *)(param_1 + 0x1c0),1);
      *(undefined4 *)(param_1 + 0x1d4) = 4;
    }
LAB_01194184:
    plVar13 = plVar19 + 10;
    do {
      iVar9 = (int)*plVar13 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar5) {
        *(int *)plVar13 = iVar9;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar19 + 0x10))(plVar19);
    }
    break;
  case 4:
    if ((*(int *)(*(long *)(*(long *)(param_1 + 0x1c0) + 0x5b0) + 0x80) == 7) &&
       (uVar12 = FUN_00d73754(*(undefined8 *)(param_1 + 0x1b8)), (uVar12 & 1) == 0)) {
      FUN_011a0c80(*(undefined8 *)(param_1 + 0x1a8));
      FUN_011953c8(param_1);
      return;
    }
  }
  return;
}


