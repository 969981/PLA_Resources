/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014d5bfc; name: FUN_014d5bfc
 */


ulong FUN_014d5bfc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long **pplVar10;
  undefined4 uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  long lVar15;
  long *local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  long *local_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 *local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  int local_50 [4];
  long *local_38;
  
  pplVar10 = &local_d0;
  if ((*(long *)(param_1 + 0xa8) == 0) || (lVar7 = FUN_014d4b64(), lVar7 == 0)) {
LAB_014d6238:
    uVar12 = 0x900000000;
LAB_014d623c:
    uVar14 = 1;
    goto switchD_014d5c90_caseD_1b;
  }
  FUN_02cbb590(local_50);
  if (local_50[0] != 0) {
    pplVar10 = (long **)local_50;
LAB_014d5c44:
    FUN_02727bb4(&local_98,pplVar10);
    FUN_013b1998(param_1 + 0xe8,&local_98);
    FUN_02727c1c(&local_98);
    uVar12 = 0x800000000;
    goto LAB_014d623c;
  }
  uVar12 = 0x800000000;
  uVar14 = 1;
  switch(*(undefined4 *)(param_1 + 0xa4)) {
  case 0x15:
    uVar12 = FUN_014de744(lVar7,7);
    if ((uVar12 & 1) != 0) {
      uVar11 = 0x16;
      goto LAB_014d61fc;
    }
    break;
  case 0x16:
    uVar12 = FUN_014de850(lVar7,7);
    if ((uVar12 & 1) != 0) {
      uVar11 = 0x17;
      goto LAB_014d61fc;
    }
    break;
  case 0x17:
    uVar14 = 1;
    uVar12 = FUN_014de870(lVar7,1);
    if ((uVar12 & 1) == 0) {
      puVar9 = (undefined8 *)FUN_0120ca1c();
      uVar8 = *puVar9;
      *(undefined8 *)PTR_DAT_0437e8f8 = uVar8;
      local_d0 = (long *)0x0;
      local_80 = (long *)((ulong)*(uint *)(param_1 + 200) << 0x20 | 1);
      local_98 = (undefined8 *)0xa0607a5ef5508ad1;
      pcStack_90 = "TradeMatchmakingConfig";
      local_88 = 0x16;
      if (((*PTR_DAT_04379558 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379558), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379558);
      }
      *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
      FUN_01148cdc(&local_38);
      plVar13 = local_d0;
      local_d0 = (long *)0x0;
      if (plVar13 != (long *)0x0) {
        lVar7 = plVar13[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*plVar13 + 0x20))();
        }
      }
      local_d0 = local_38;
      uVar12 = FUN_027bdcac(uVar8,*(undefined1 *)(param_1 + 0xe0),&local_98,&local_d0);
      if ((uVar12 & 1) != 0) {
        *(undefined4 *)(param_1 + 0xa4) = 0x18;
      }
      if (local_d0 != (long *)0x0) {
        lVar7 = local_d0[0xb];
        piVar1 = (int *)(lVar7 + 0xc);
        do {
          iVar6 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar6 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar6 + -1 == 0) {
          *(undefined8 *)(lVar7 + 0x18) = 0;
          (**(code **)(*local_d0 + 0x20))();
        }
      }
      break;
    }
    goto LAB_014d6204;
  case 0x18:
    puVar9 = (undefined8 *)FUN_0120ca1c();
    uVar8 = *puVar9;
    *(undefined8 *)PTR_DAT_0437e8f8 = uVar8;
    uVar12 = FUN_027bdc94(uVar8);
    if (((uVar12 & 1) != 0) && (uVar12 = FUN_014de870(lVar7,1), (uVar12 & 1) != 0)) {
      FUN_027be890(uVar8);
      FUN_014de744(lVar7,8);
      nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0xd0) = uVar8;
      uVar11 = 0x19;
      goto LAB_014d61fc;
    }
    break;
  case 0x19:
    break;
  case 0x1a:
    FUN_0120bd20(param_1 + 0xd0);
    if (2.0 <= (double)*(long *)(param_1 + 0xd8) / 1000000000.0) {
LAB_014d621c:
      uVar12 = 0;
      goto LAB_014d623c;
    }
    break;
  case 0x1b:
    goto switchD_014d5c90_caseD_1b;
  case 0x1c:
    uVar12 = FUN_014de744(lVar7,10);
    if ((uVar12 & 1) != 0) {
      uVar11 = 0x1d;
      goto LAB_014d61fc;
    }
    break;
  case 0x1d:
    uVar12 = FUN_014de870(lVar7,3);
    if ((uVar12 & 1) != 0) goto LAB_014d621c;
    break;
  case 0x1e:
    puVar9 = (undefined8 *)FUN_0120ca1c();
    *(undefined8 *)PTR_DAT_0437e8f8 = *puVar9;
    FUN_027beb3c(&local_38);
    if ((local_38 == (long *)0x0) || (plVar13 = (long *)*local_38, plVar13 == (long *)0x0))
    goto switchD_014d5c90_default;
    lVar7 = plVar13[0xb];
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) goto switchD_014d5c90_default;
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if ((*(long *)(param_1 + 0x78) == 0) || (lVar7 = FUN_014d472c(), lVar7 == 0))
    goto switchD_014d5c90_default;
    lVar7 = FUN_014db878();
    FUN_01123bb4(plVar13,lVar7 + 4);
    uVar5 = FUN_01123ce8(plVar13);
    *(undefined1 *)(lVar7 + 0x1e) = uVar5;
    uVar5 = FUN_01123cf0(plVar13);
    *(undefined1 *)(lVar7 + 0x1f) = uVar5;
    FUN_02728988(&local_98);
    if ((local_98 == (undefined8 *)0x0) || (uVar12 = FUN_02a43a8c(), (uVar12 & 1) != 0))
    goto switchD_014d5c90_default;
    FUN_014d687c(&local_a0,*(undefined8 *)(*(long *)PTR_DAT_0437b160 + 0x368));
    plVar4 = local_a0;
    local_b0 = (undefined8 *)0x0;
    uStack_a8 = 0;
    FUN_014d70b0(&local_b0,&local_98);
    lVar15 = plVar13[0xb];
    local_b8 = plVar13;
    if (*(undefined8 **)(lVar15 + 0x18) == (undefined8 *)0x0) goto switchD_014d5c90_default;
    if (*(long *)(lVar15 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar15 + 0x18))();
      *(undefined8 *)(lVar15 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    FUN_027d8c2c(plVar4,&local_b0,&local_b8);
    puVar9 = local_b0;
    if (local_b8 != (long *)0x0) {
      lVar15 = local_b8[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_b8 + 0x20))();
        puVar9 = local_b0;
      }
    }
    local_b0 = puVar9;
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_d0 = (long *)*puVar9;
        FUN_02a44274(lVar15 + 0xd8,&local_d0);
      }
    }
    FUN_011fa6d0(lVar7 + 0x20,local_a0);
    *(undefined4 *)(param_1 + 0xa4) = 0x1f;
    puVar9 = local_98;
    if (local_a0 != (long *)0x0) {
      lVar7 = local_a0[0xb];
      piVar1 = (int *)(lVar7 + 0xc);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        *(undefined8 *)(lVar7 + 0x18) = 0;
        (**(code **)(*local_a0 + 0x20))(local_a0);
        puVar9 = local_98;
      }
    }
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
      do {
        iVar6 = *piVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar6 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar6 + -1 == 0) {
        puVar9[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_d0 = (long *)*puVar9;
        FUN_02a44274(lVar7 + 0xd8,&local_d0);
      }
    }
    lVar7 = plVar13[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar13 + 0x20))(plVar13);
    }
    break;
  case 0x1f:
    uVar11 = 0x20;
LAB_014d61fc:
    *(undefined4 *)(param_1 + 0xa4) = uVar11;
    break;
  case 0x20:
    if ((*(long *)(param_1 + 0x78) == 0) || (lVar7 = FUN_014d472c(), lVar7 == 0))
    goto switchD_014d5c90_default;
    lVar7 = FUN_014db878();
    FUN_027d9094(*(undefined8 *)(lVar7 + 0x20));
    uVar12 = FUN_027d9344(*(undefined8 *)(lVar7 + 0x20));
    if ((uVar12 & 1) != 0) {
      uVar11 = 0x21;
      goto LAB_014d61fc;
    }
    break;
  case 0x21:
    uVar12 = FUN_014de744(lVar7,9);
    if ((uVar12 & 1) != 0) {
      local_d0 = (long *)0xeff87a6c57c8c948;
      local_c8 = "PLAY_UI_COMMON_MATCHING";
      uStack_c0 = 0x17;
      FUN_02a4754c(&local_98,&local_d0);
      FUN_028354b0(&local_98);
      if (local_80 != (long *)0x0) {
        (**(code **)(*local_80 + 0x20))();
      }
      *(undefined4 *)(param_1 + 0xa4) = 0x22;
      nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan();
      *(undefined8 *)(param_1 + 0xd0) = uVar8;
    }
    break;
  case 0x22:
    uVar12 = FUN_014de850(lVar7,9);
    if (((uVar12 & 1) != 0) &&
       (FUN_0120bd20(param_1 + 0xd0), 3.0 <= (double)*(long *)(param_1 + 0xd8) / 1000000000.0)) {
      FUN_02cbb590(&local_d0);
      if ((int)local_d0 == 0) {
        if ((*(long *)(param_1 + 0x78) == 0) || (lVar7 = FUN_014d472c(), lVar7 == 0))
        goto switchD_014d5c90_default;
        FUN_014db890();
        goto LAB_014d6238;
      }
      goto LAB_014d5c44;
    }
    break;
  default:
switchD_014d5c90_default:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  uVar14 = 0;
LAB_014d6204:
  uVar12 = 0;
switchD_014d5c90_caseD_1b:
  return uVar12 | uVar14;
}


