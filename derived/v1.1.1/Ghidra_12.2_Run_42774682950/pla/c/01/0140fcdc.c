/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140fcdc; name: FUN_0140fcdc
 */


void FUN_0140fcdc(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  int iVar24;
  ulong local_4b8;
  long *local_4b0;
  undefined1 *local_4a8;
  char *pcStack_4a0;
  undefined8 local_498;
  long *local_490;
  long *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  long *local_90;
  long *local_78;
  
  plVar21 = *(long **)(param_1 + 0x2c8);
  if (plVar21 != (long *)0x0) {
    plVar22 = plVar21 + 10;
    do {
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar8) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_4a8 = &DAT_304928236d5bcabe;
  pcStack_4a0 = "common/pokedex.dat";
  local_498 = 0x12;
  local_490 = (long *)0x0;
  FUN_00d37bb4(&local_a8,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xb0),&local_4a8,10);
  plVar22 = (long *)local_a8[0xd];
  if (plVar22 != (long *)0x0) {
    plVar23 = plVar22 + 10;
    do {
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
      if (bVar8) {
        *(int *)plVar23 = (int)*plVar23 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  if (local_a8 != (long *)0x0) {
    lVar12 = local_a8[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar24 = *piVar1;
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = iVar24 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar24 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  if (local_490 != (long *)0x0) {
    (**(code **)(*local_490 + 0x20))();
  }
  memset(&local_4a8,0,0x400);
  puVar7 = PTR_DAT_04379560;
  puVar6 = PTR_DAT_04379558;
  lVar12 = 0;
  iVar24 = 0;
  if ((*PTR_DAT_04379558 & 1) != 0) goto LAB_0140fe50;
LAB_014100b0:
  iVar9 = __cxa_guard_acquire(puVar6);
  if (iVar9 != 0) {
    FUN_00100250(PTR_LAB_04379700,puVar7,&PTR_LOOP_0411a000);
    __cxa_guard_release(puVar6);
  }
LAB_0140fe50:
  lVar13 = *(long *)puVar7;
  *(long *)PTR_DAT_04379568 = lVar13;
  if ((lVar13 != 0) && (plVar23 = *(long **)(lVar13 + 0x228), plVar23 != (long *)0x0)) {
    lVar13 = plVar23[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar8) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar16 = ((long *)plVar23[0x37])[1];
    if (uVar16 == 0) goto LAB_01410000;
    uVar14 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
    uVar14 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
    uVar15 = (&DAT_03a7ba60)[lVar12];
    uVar4 = 0;
    if (uVar16 != 0) {
      uVar4 = uVar15 / uVar16;
    }
    uVar14 = (uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar14 < 2) {
      uVar19 = uVar16 - 1 & uVar15;
    }
    else {
      uVar19 = uVar15;
      if (uVar16 <= uVar15) {
        uVar19 = uVar15 - uVar4 * uVar16;
      }
    }
    lVar13 = *(long *)plVar23[0x37];
    plVar17 = *(long **)(lVar13 + uVar19 * 8);
    if ((plVar17 == (long *)0x0) || (plVar17 = (long *)*plVar17, plVar17 == (long *)0x0))
    goto LAB_01410000;
    uVar18 = uVar16 - 1;
    if (1 < uVar14) {
      do {
        uVar20 = plVar17[1];
        if (uVar20 == uVar15) {
          if (plVar17[2] == uVar15) goto LAB_0140ff94;
        }
        else {
          if (uVar16 <= uVar20) {
            uVar5 = 0;
            if (uVar16 != 0) {
              uVar5 = uVar20 / uVar16;
            }
            uVar20 = uVar20 - uVar5 * uVar16;
          }
          if (uVar20 != uVar19) break;
        }
        plVar17 = (long *)*plVar17;
      } while (plVar17 != (long *)0x0);
      goto LAB_01410000;
    }
    do {
      if (plVar17[1] == uVar15) {
        if (plVar17[2] == uVar15) goto LAB_0140ff94;
      }
      else if ((plVar17[1] & uVar18) != uVar19) goto LAB_01410000;
      plVar17 = (long *)*plVar17;
      bVar8 = false;
    } while (plVar17 != (long *)0x0);
    goto LAB_0141004c;
  }
  goto LAB_0140fe14;
LAB_0140ff94:
  if (uVar14 < 2) {
    uVar19 = uVar18 & uVar15;
    plVar17 = *(long **)(lVar13 + uVar19 * 8);
  }
  else {
    uVar19 = uVar15;
    if (uVar16 <= uVar15) {
      uVar19 = uVar15 - uVar4 * uVar16;
    }
    plVar17 = *(long **)(lVar13 + uVar19 * 8);
  }
  if ((plVar17 != (long *)0x0) && (plVar17 = (long *)*plVar17, plVar17 != (long *)0x0)) {
    if (uVar14 < 2) {
      do {
        if (plVar17[1] == uVar15) {
          if (plVar17[2] == uVar15) goto LAB_01410040;
        }
        else if ((plVar17[1] & uVar18) != uVar19) goto LAB_01410000;
        plVar17 = (long *)*plVar17;
        bVar8 = false;
      } while (plVar17 != (long *)0x0);
      goto LAB_0141004c;
    }
    do {
      uVar14 = plVar17[1];
      if (uVar14 == uVar15) {
        if (plVar17[2] == uVar15) goto LAB_01410040;
      }
      else {
        if (uVar16 <= uVar14) {
          uVar4 = 0;
          if (uVar16 != 0) {
            uVar4 = uVar14 / uVar16;
          }
          uVar14 = uVar14 - uVar4 * uVar16;
        }
        if (uVar14 != uVar19) break;
      }
      plVar17 = (long *)*plVar17;
    } while (plVar17 != (long *)0x0);
  }
LAB_01410000:
  bVar8 = false;
LAB_0141004c:
  lVar13 = plVar23[0xb];
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar9 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar9 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar23 + 0x20))(plVar23);
  }
  if (bVar8) {
    iVar24 = iVar24 + 1;
    uVar11 = 0x3f800000;
  }
  else {
LAB_0140fe14:
    uVar11 = 0;
  }
  snprintf((char *)&local_4a8,0x400,"anime_L_btn_poke_%02d_switch",(int)lVar12);
  FUN_00d2e2f0(uVar11,param_1 + 0x180,&local_4a8);
  lVar12 = lVar12 + 1;
  if (lVar12 == 0x1c) {
    local_a8 = (long *)0x9d4ee9ef9906dd96;
    pcStack_a0 = "pane_N_icon_perfect_00_00";
    local_98 = 0x19;
    local_90 = (long *)0x0;
    plVar23 = (long *)FUN_0283ac34(*(undefined8 *)(param_1 + 0x2c8),&local_a8);
    if (((*PTR_DAT_043729e8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar9 != 0)) {
      *(undefined8 *)PTR_DAT_043729f0 = 0;
      __cxa_guard_release(PTR_DAT_043729e8);
    }
    if (plVar23 == (long *)0x0) goto LAB_01410164;
    plVar17 = (long *)(**(code **)(*plVar23 + 0x10))(plVar23);
    goto joined_r0x01410144;
  }
  if ((*puVar6 & 1) == 0) goto LAB_014100b0;
  goto LAB_0140fe50;
LAB_01410040:
  bVar8 = (char)plVar17[3] != '\0';
  goto LAB_0141004c;
joined_r0x01410144:
  if (plVar17 == (long *)0x0) {
    plVar23 = (long *)0x0;
LAB_01410164:
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    *(byte *)(plVar23 + 0xb) = *(byte *)(plVar23 + 0xb) & 0xfe | iVar24 == 0x1c;
    if (plVar21 != (long *)0x0) {
      plVar23 = plVar21 + 10;
      do {
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    local_a8 = (long *)0x7da583d0f7967932;
    pcStack_a0 = "pane_T_p_form_num_00";
    local_98 = 0x14;
    local_90 = (long *)0x0;
    if (plVar22 == (long *)0x0) {
      plVar23 = (long *)0x0;
    }
    else {
      plVar23 = plVar22 + 10;
      do {
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = (int)*plVar23 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar23 = plVar22;
    }
    local_4b8 = 0xb3130f773fca398c;
    local_4b0 = plVar22;
    local_78 = plVar21;
    FUN_01410470(&local_78,&local_a8,&local_4b0,&local_4b8,iVar24);
    if (plVar23 != (long *)0x0) {
      plVar17 = plVar23 + 10;
      do {
        iVar24 = (int)*plVar17 + -1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar8) {
          *(int *)plVar17 = iVar24;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar24 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (local_78 != (long *)0x0) {
      plVar23 = local_78 + 10;
      do {
        iVar24 = (int)*plVar23 + -1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = iVar24;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar24 == 0) {
        (**(code **)(*local_78 + 0x10))();
      }
    }
    uVar10 = FUN_013db45c(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xa0));
    local_a8 = (long *)0xc8e82e87b533acb8;
    pcStack_a0 = "symbol_panel";
    local_4b8 = (ulong)(uVar10 + ((uVar10 & 0xffff) / 10) * -10) & 0xffff |
                (ulong)(uVar10 & 0xffff) / 10 << 0x20;
    local_98 = 0xc;
    local_90 = (long *)0x0;
    lVar12 = thunk_FUN_00d2ec48(param_1 + 0x180,&local_a8);
    if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x20))();
    }
    if (lVar12 != 0) {
      FUN_0280e8d8(lVar12,&local_4b8,1,1);
    }
    FUN_0141068c(param_1,0);
    if (*(int *)(*(long *)(param_1 + 0x630) + 0x70) == 7) {
      FUN_013d9430(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xef0),2);
      FUN_013d9438(*(undefined8 *)(*(long *)(param_1 + 0x630) + 0xef0),0,0,0,0,0,0);
    }
    FUN_013da08c(param_1);
    if (plVar22 != (long *)0x0) {
      plVar23 = plVar22 + 10;
      do {
        iVar24 = (int)*plVar23 + -1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar23,0x10);
        if (bVar8) {
          *(int *)plVar23 = iVar24;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar24 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
    if (plVar21 != (long *)0x0) {
      plVar22 = plVar21 + 10;
      do {
        iVar24 = (int)*plVar22 + -1;
        cVar2 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar8) {
          *(int *)plVar22 = iVar24;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar24 == 0) {
        (**(code **)(*plVar21 + 0x10))(plVar21);
      }
    }
    return;
  }
  if (plVar17 == (long *)PTR_DAT_043729f0) goto LAB_01410164;
  plVar17 = (long *)*plVar17;
  goto joined_r0x01410144;
}


