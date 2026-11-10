/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011934cc; name: FUN_011934cc
 */


void FUN_011934cc(undefined1 param_1 [16],undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  int *piVar2;
  ushort uVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  code *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  undefined8 *puVar16;
  char *pcVar17;
  long *plVar18;
  undefined1 *local_c0;
  code *pcStack_b8;
  undefined1 *local_b0;
  long *local_a8;
  undefined8 *puStack_a0;
  undefined1 *local_98;
  undefined8 uStack_90;
  
  switch(*(undefined4 *)((long)param_3 + 0x1d4)) {
  case 0:
    uVar4 = *(undefined2 *)(param_3[0x35] + 0x16b2);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    plVar15 = *(long **)(lVar14 + 0xd0);
    if (plVar15 != (long *)0x0) {
      plVar18 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar18 = (long *)plVar15[0xb];
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    uVar12 = (**(code **)(*plVar18 + 0x50))(plVar18,uVar4);
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    plVar18 = plVar15 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    lVar14 = FUN_011945c8(param_3);
    if (lVar14 != 0) {
      FUN_01190114(&local_c0,lVar14,uVar12,param_3[1]);
      plVar15 = (long *)param_3[0x4d];
      param_3[0x4d] = 0;
      if (plVar15 != (long *)0x0) {
        plVar18 = plVar15 + 10;
        do {
          iVar11 = (int)*plVar18 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *(int *)plVar18 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      param_3[0x4d] = local_c0;
    }
    *(int *)((long)param_3 + 0x1d4) = *(int *)((long)param_3 + 0x1d4) + 1;
  case 1:
    lVar14 = FUN_011945c8(param_3);
    if ((lVar14 != 0) && (uVar13 = FUN_0119043c(), (uVar13 & 1) == 0)) {
      return;
    }
    FUN_00d601a4(param_3[0x35],0);
    FUN_00d4be50(param_3[0x35],0,1);
    uVar9 = FUN_00d5f79c(param_3[0x35],1);
    local_c0 = (undefined1 *)CONCAT44(param_2,uVar9);
    pcStack_b8 = (code *)0x0;
    FUN_02851348(param_3[0x4d],&local_c0,1);
    *(undefined4 *)(param_3 + 0x4e) = 0;
    uVar4 = *(undefined2 *)(param_3[0x35] + 0x16b2);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    plVar15 = *(long **)(lVar14 + 0xd0);
    if (plVar15 != (long *)0x0) {
      plVar18 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar18 = (long *)plVar15[0xb];
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar14 = (**(code **)(*plVar18 + 0x50))(plVar18,uVar4);
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    plVar18 = plVar15 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    iVar11 = FUN_02c6849c(*(undefined8 *)(lVar14 + 0x98));
    switch(iVar11) {
    case 0x1e3:
      pcVar17 = "PLAY_PM_FX_FORMCHANGE_DIALGA";
      local_c0 = (undefined1 *)0x3808ee65c167a194;
      break;
    case 0x1e4:
      pcVar17 = "PLAY_PM_FX_FORMCHANGE_PALKIA";
      local_c0 = (undefined1 *)0xaeedd7c8068ff47a;
      break;
    case 0x1e5:
    case 0x1e6:
    case 0x1e8:
    case 0x1e9:
    case 0x1ea:
    case 0x1eb:
      goto switchD_01193750_caseD_1e5;
    case 0x1e7:
      local_c0 = (undefined1 *)0xc8f13ef9d750c619;
      pcStack_b8 = (code *)0x397480b;
      local_b0 = (undefined1 *)0x1e;
      goto LAB_01193a78;
    case 0x1ec:
      local_c0 = (undefined1 *)0x6e16f23d9532e849;
      pcStack_b8 = (code *)0x397482a;
      local_b0 = (undefined1 *)0x1d;
      goto LAB_01193a78;
    case 0x1ed:
      pcVar17 = "PLAY_PM_FX_FORMCHANGE_ARCEUS";
      local_c0 = (undefined1 *)0xefb83ac5f16d69b9;
      break;
    default:
      if (((iVar11 - 0x281U < 5) && ((1 << (ulong)(iVar11 - 0x281U & 0x1f) & 0x13U) != 0)) ||
         (iVar11 == 0x389)) {
        local_c0 = (undefined1 *)0x426fa16aa7b6d238;
        pcStack_b8 = (code *)0x389b03f;
        local_b0 = (undefined1 *)0x20;
        goto LAB_01193a78;
      }
      goto switchD_01193750_caseD_1e5;
    }
    local_b0 = (undefined1 *)0x1c;
    pcStack_b8 = (code *)pcVar17;
LAB_01193a78:
    local_a8 = (long *)0x0;
    FUN_028354b0(&local_c0);
    if (local_a8 != (long *)0x0) {
      (**(code **)(*local_a8 + 0x20))();
    }
switchD_01193750_caseD_1e5:
    *(int *)((long)param_3 + 0x1d4) = *(int *)((long)param_3 + 0x1d4) + 1;
    break;
  case 2:
    if (*(uint *)(param_3 + 0x4e) < 0x14) {
      *(uint *)(param_3 + 0x4e) = *(uint *)(param_3 + 0x4e) + 1;
      return;
    }
    uVar3 = *(ushort *)(param_3[0x35] + 0x16b0);
    uVar4 = *(undefined2 *)(param_3[0x35] + 0x16b2);
    puVar16 = param_3;
    if (((*PTR_DAT_04379558 & 1) == 0) &&
       (puVar16 = (undefined8 *)__cxa_guard_acquire(PTR_DAT_04379558), (int)puVar16 != 0)) {
      FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
      puVar16 = (undefined8 *)__cxa_guard_release(PTR_DAT_04379558);
    }
    lVar14 = *(long *)PTR_DAT_04379560;
    *(long *)PTR_DAT_04379568 = lVar14;
    plVar15 = *(long **)(lVar14 + 0x280);
    if (plVar15 != (long *)0x0) {
      lVar14 = plVar15[0xb];
      puVar16 = *(undefined8 **)(lVar14 + 0x18);
      if (puVar16 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        puVar16 = (undefined8 *)(**(code **)*puVar16)();
        *(undefined8 **)(lVar14 + 0x10) = puVar16;
      }
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = *piVar2 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    iVar11 = *(int *)(param_3[0x35] + 0x16c4);
    uVar8 = FUN_010dac08(puVar16,iVar11);
    if (iVar11 == 0) {
      plVar18 = plVar15 + 0xd;
joined_r0x01193c1c:
      if (uVar8 <= uVar3) goto LAB_01193c20;
LAB_011938e4:
      uVar9 = *(undefined4 *)((long)plVar18 + (ulong)uVar3 * 4);
    }
    else {
      if (iVar11 == 1) {
        plVar18 = (long *)((long)plVar15 + 0xaf4);
        if (uVar3 < uVar8) goto LAB_011938e4;
      }
      else if (iVar11 == 2) {
        plVar18 = (long *)((long)plVar15 + 0xc84);
        goto joined_r0x01193c1c;
      }
LAB_01193c20:
      uVar9 = 0;
    }
    FUN_011a3bb8(param_3[0x35],uVar4,uVar9);
    *(int *)((long)param_3 + 0x1d4) = *(int *)((long)param_3 + 0x1d4) + 1;
    if (plVar15 != (long *)0x0) {
      lVar14 = plVar15[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar2;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = iVar11 + -1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x01193944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar15 + 0x20))(plVar15);
        return;
      }
    }
    break;
  case 3:
    uVar13 = FUN_028513a4(param_3[0x4d]);
    if ((uVar13 & 1) == 0) {
      return;
    }
    uVar4 = *(undefined2 *)(param_3[0x35] + 0x16b2);
    if (((*PTR_DAT_04379678 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379678), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
    lVar14 = *(long *)PTR_DAT_04379680;
    *(long *)PTR_DAT_04379688 = lVar14;
    plVar15 = *(long **)(lVar14 + 0xd0);
    if (plVar15 != (long *)0x0) {
      plVar18 = plVar15 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
        if (bVar6) {
          *(int *)plVar18 = (int)*plVar18 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    plVar18 = (long *)plVar15[0xb];
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = (int)*plVar1 + 1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
    lVar14 = (**(code **)(*plVar18 + 0x50))(plVar18,uVar4);
    if (plVar18 != (long *)0x0) {
      plVar1 = plVar18 + 10;
      do {
        iVar11 = (int)*plVar1 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar6) {
          *(int *)plVar1 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
    }
    plVar18 = plVar15 + 10;
    do {
      iVar11 = (int)*plVar18 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar6) {
        *(int *)plVar18 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
    uVar9 = FUN_02c6849c(*(undefined8 *)(lVar14 + 0x98));
    uVar10 = FUN_02c6f924(*(undefined8 *)(lVar14 + 0x98));
    uVar9 = FUN_01091160(uVar9,uVar10,0,1);
    *(undefined4 *)((long)param_3 + 0x274) = uVar9;
    goto switchD_01193750_caseD_1e5;
  case 4:
    uVar13 = FUN_01091500(*(undefined4 *)((long)param_3 + 0x274));
    if ((uVar13 & 1) == 0) {
      lVar14 = param_3[0x35];
      local_98 = &LAB_011962b4;
      uStack_90 = 0;
      local_b0 = &LAB_011997fc;
      local_c0 = &LAB_011997dc;
      pcStack_b8 = FUN_011997f8;
      local_a8 = (long *)&LAB_01199810;
      puStack_a0 = param_3;
      FUN_00d59260(lVar14,*(undefined4 *)(lVar14 + 0x16ac),*(undefined2 *)(lVar14 + 0x16b2),0);
      FUN_0119541c(param_3,0x9a798355c714948b,&local_c0,1,0,1);
      plVar15 = (long *)param_3[0x4d];
      param_3[0x4d] = 0;
      if (plVar15 != (long *)0x0) {
        plVar18 = plVar15 + 10;
        do {
          iVar11 = (int)*plVar18 + -1;
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(plVar18,0x10);
          if (bVar6) {
            *(int *)plVar18 = iVar11;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        if (iVar11 == 0) {
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      lVar14 = FUN_011945c8(param_3);
      if (lVar14 != 0) {
        FUN_01190444();
      }
      pcVar7 = pcStack_b8;
      if (pcStack_b8 != (code *)0x0) {
        local_b0 = (undefined1 *)0x0;
        local_a8 = (long *)0x0;
        local_c0 = (undefined1 *)0x0;
        pcStack_b8 = (code *)0x0;
        (*pcVar7)(&puStack_a0);
      }
    }
  }
  return;
}


