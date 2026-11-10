/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0140cd14; name: FUN_0140cd14
 */


/* WARNING: Removing unreachable block (ram,0x0140e918) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0140cd14(long param_1,uint *param_2)

{
  ulong uVar1;
  uint param4;
  undefined8 *puVar2;
  long *plVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  char cVar6;
  bool bVar7;
  long *plVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  long *plVar21;
  int iVar22;
  char *__format;
  byte bVar23;
  long lVar24;
  code *pcVar25;
  uint uVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  uint uVar31;
  byte *pbVar32;
  long *plVar33;
  int *piVar34;
  byte *pbVar35;
  ulong uVar36;
  int *piVar37;
  long *plVar38;
  long lVar39;
  uint uVar40;
  long *local_38e0;
  long *local_38b8;
  long *local_38b0;
  undefined8 local_38a8;
  long *local_38a0;
  long *local_3898;
  long *local_3890;
  long *local_3888;
  long *local_3880;
  long *local_3878;
  long *local_3870;
  long *local_3868;
  long *local_3860;
  long *local_3858;
  undefined8 local_3850;
  undefined8 uStack_3848;
  undefined4 local_3840;
  undefined1 local_383c [4];
  uint local_3838;
  byte local_3834 [4];
  long *local_3830;
  long *local_3828;
  byte local_3820 [1024];
  uint local_3420 [3300];
  uint local_90 [2];
  undefined1 *local_88;
  byte *pbStack_80;
  size_t local_78;
  long *local_70;
  
  lVar24 = *(long *)(*(long *)(param_1 + 0x68) + 0xb0);
  uVar31 = *(uint *)(lVar24 + 400);
  if (uVar31 != 0) {
    uVar28 = 0;
    piVar34 = (int *)(lVar24 + 0x20);
LAB_0140cd70:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar34 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar34 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_304928236d5bcabe) || (*piVar34 != 10)) goto LAB_0140e70c;
    if (0xf < (uint)uVar28) {
      plVar30 = (long *)0x0;
      goto LAB_0140cda4;
    }
    plVar30 = *(long **)(piVar34 + -2);
    if (plVar30 == (long *)0x0) goto LAB_0140cda4;
    lVar24 = plVar30[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar24 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
        *(undefined8 *)(lVar24 + 0x10) = uVar14;
      }
      piVar34 = (int *)(lVar24 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar34,0x10);
        if (bVar7) {
          *piVar34 = *piVar34 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_0140cda4:
      plVar8 = (long *)plVar30[0xd];
      goto joined_r0x0140cda8;
    }
    goto LAB_0140d124;
  }
LAB_0140e71c:
  plVar30 = (long *)0x0;
  plVar8 = _DAT_00000068;
joined_r0x0140cda8:
  if (plVar8 != (long *)0x0) {
    plVar38 = plVar8 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *(int *)plVar38 = (int)*plVar38 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  if (plVar30 != (long *)0x0) {
    lVar24 = plVar30[0xb];
    piVar34 = (int *)(lVar24 + 0xc);
    do {
      iVar13 = *piVar34;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar7) {
        *piVar34 = iVar13 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar24 + 0x18) = 0;
      (**(code **)(*plVar30 + 0x20))(plVar30);
    }
  }
  plVar30 = *(long **)(param_1 + 0x2c8);
  if (plVar30 != (long *)0x0) {
    plVar38 = plVar30 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
      if (bVar7) {
        *(int *)plVar38 = (int)*plVar38 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar24 = *(long *)(*(long *)(*(long *)(param_1 + 0x5b0) + 0x80) + 8);
  memset(local_3420,0,0x3394);
  uVar31 = *(uint *)(lVar24 + 0x3398);
  uVar28 = (ulong)uVar31;
  if (uVar31 == 0) {
    uVar31 = 0;
    local_90[0] = 0;
  }
  else {
    lVar17 = -0x3390;
    do {
      if (lVar17 == 0) goto LAB_0140ebfc;
      lVar29 = lVar24 + 8 + lVar17;
      *(undefined4 *)((long)local_90 + lVar17) = *(undefined4 *)(lVar29 + 0x3390);
      *(undefined4 *)((long)local_90 + lVar17 + 4) = *(undefined4 *)(lVar29 + 0x3394);
      uVar28 = uVar28 - 1;
      *(undefined4 *)((long)local_90 + lVar17 + 8) = *(undefined4 *)(lVar29 + 0x3398);
      lVar17 = lVar17 + 0xc;
    } while (uVar28 != 0);
    uVar40 = *param_2;
    local_90[0] = uVar31;
    if (uVar40 < uVar31) {
      if (1099 < uVar40) {
LAB_0140ebfc:
                    /* WARNING: Subroutine does not return */
        FUN_013dd720();
      }
      uVar31 = local_3420[(ulong)uVar40 * 3];
    }
    else {
      uVar31 = 0;
    }
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_04379558), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar24 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar24;
  plVar38 = *(long **)(lVar24 + 0x298);
  if (plVar38 != (long *)0x0) {
    lVar24 = plVar38[0xb];
    if (*(undefined8 **)(lVar24 + 0x18) == (undefined8 *)0x0) goto LAB_0140d124;
    if (*(long *)(lVar24 + 0x10) == 0) {
      uVar14 = (**(code **)**(undefined8 **)(lVar24 + 0x18))();
      *(undefined8 *)(lVar24 + 0x10) = uVar14;
    }
    piVar34 = (int *)(lVar24 + 0xc);
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar34,0x10);
      if (bVar7) {
        *piVar34 = *piVar34 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  lVar24 = param_1 + 0x180;
  memset(local_3820,0,0x400);
  if (((int)uVar31 < 0x3d5) && ((*(byte *)((long)plVar38 + (ulong)uVar31 * 0x58 + 0xdc) & 1) != 0))
  {
    local_88 = (undefined1 *)0x198a1bff7c604bac;
    pbStack_80 = (byte *)0x396bc87;
    local_78 = 0x19;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar33 = plVar8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3850 = 0x2e73be528ee82173;
    local_3828 = plVar8;
    FUN_0133fa78(lVar24,&local_88,&local_3828,&local_3850,0,uVar31);
    if (local_3828 != (long *)0x0) {
      plVar33 = local_3828 + 10;
      do {
        iVar13 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar15 = local_3828;
      } while (cVar6 != '\0');
      goto joined_r0x0140e8f4;
    }
  }
  else {
    local_88 = (undefined1 *)0x198a1bff7c604bac;
    pbStack_80 = (byte *)0x396bc87;
    local_78 = 0x19;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      plVar33 = plVar8 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3850 = 0x2e73c0528ee824d9;
    local_3830 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3830,&local_3850,10);
    if (local_3830 != (long *)0x0) {
      plVar33 = local_3830 + 10;
      do {
        iVar13 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar15 = local_3830;
      } while (cVar6 != '\0');
joined_r0x0140e8f4:
      if (iVar13 == 0) {
        (**(code **)(*plVar15 + 0x10))();
      }
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  puVar10 = PTR_DAT_043729f0;
  puVar9 = PTR_DAT_043729e8;
  plVar33 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
  lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
  if ((lVar17 == 0) || (*plVar33 == -0x535ece52ab5f17f6)) {
    plVar15 = plVar33;
  }
  else {
    lVar29 = lVar17 * 0x30;
    plVar16 = plVar33;
    do {
      lVar29 = lVar29 + -0x30;
      if (lVar29 == 0) goto LAB_0140e624;
      plVar21 = plVar16 + 6;
      plVar15 = plVar16 + 6;
      plVar16 = plVar16 + 6;
    } while (*plVar21 != -0x535ece52ab5f17f6);
  }
  if (plVar15 == plVar33 + lVar17 * 6) {
LAB_0140e624:
    plVar33 = (long *)0x0;
  }
  else {
    plVar33 = (long *)plVar15[4];
  }
  if (((*PTR_DAT_043729e8 & 1) == 0) &&
     (iVar13 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar13 != 0)) {
    *(undefined8 *)puVar10 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar33 != (long *)0x0) {
    for (plVar15 = (long *)(**(code **)(*plVar33 + 0x10))(plVar33); plVar15 != (long *)0x0;
        plVar15 = (long *)*plVar15) {
      if (plVar15 == (long *)puVar10) {
        plVar15 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x148);
        lVar17 = *(long *)(*(long *)(param_1 + 0x2c8) + 0x150);
        if ((lVar17 != 0) && (*plVar15 != 0xfe70421d5c24a3c)) {
          lVar29 = lVar17 * 0x30;
          plVar16 = plVar15;
          goto LAB_0140d0bc;
        }
        plVar27 = plVar15;
        goto LAB_0140d0d8;
      }
    }
  }
LAB_0140d124:
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
LAB_0140e70c:
  uVar28 = uVar28 + 1;
  piVar34 = piVar34 + 6;
  if (uVar31 == uVar28) goto LAB_0140e71c;
  goto LAB_0140cd70;
  while( true ) {
    plVar21 = plVar16 + 6;
    plVar27 = plVar16 + 6;
    plVar16 = plVar16 + 6;
    if (*plVar21 == 0xfe70421d5c24a3c) break;
LAB_0140d0bc:
    lVar29 = lVar29 + -0x30;
    if (lVar29 == 0) goto LAB_0140e62c;
  }
LAB_0140d0d8:
  if (plVar27 == plVar15 + lVar17 * 6) {
LAB_0140e62c:
    plVar15 = (long *)0x0;
    bVar23 = *puVar9;
  }
  else {
    plVar15 = (long *)plVar27[4];
    bVar23 = *puVar9;
  }
  if (((bVar23 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_043729e8), iVar13 != 0)) {
    *(undefined8 *)puVar10 = 0;
    __cxa_guard_release(PTR_DAT_043729e8);
  }
  if (plVar15 != (long *)0x0) {
    for (plVar16 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15); plVar16 != (long *)0x0;
        plVar16 = (long *)*plVar16) {
      if (plVar16 == (long *)puVar10) {
        if ((int)uVar31 < 0x3d5) {
          bVar23 = *(byte *)(plVar33 + 0xb);
          if ((*(byte *)((long)plVar38 + (ulong)uVar31 * 0x58 + 0xdc) & 1) != 0) {
            *(byte *)(plVar33 + 0xb) = bVar23 | 1;
            *(byte *)(plVar15 + 0xb) = *(byte *)(plVar15 + 0xb) & 0xfe;
            uVar28 = FUN_013e1f88(uVar31);
            if ((uVar28 & 1) == 0) goto joined_r0x0140e33c;
            FUN_013f7198(*(undefined8 *)(*(long *)(param_1 + 0x5b0) + 0xef8),uVar31,
                         *(undefined8 *)(param_1 + 0x5b8));
            if (**(int **)(param_1 + 0x5b8) != 0) {
              uVar28 = 0;
              uVar40 = 0;
              plVar33 = plVar8 + 10;
              plVar15 = plVar30 + 10;
              pbVar32 = (byte *)((ulong)local_3820 | 1);
              goto LAB_0140d1f0;
            }
            uVar40 = 0;
            goto LAB_0140e290;
          }
        }
        else {
          bVar23 = *(byte *)(plVar33 + 0xb);
        }
        *(byte *)(plVar33 + 0xb) = bVar23 & 0xfe;
        *(byte *)(plVar15 + 0xb) = *(byte *)(plVar15 + 0xb) | 1;
        goto joined_r0x0140e33c;
      }
    }
  }
  goto LAB_0140d124;
LAB_0140d1f0:
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d",uVar40);
  lVar17 = FUN_01306260(lVar24,local_3820);
  if (uVar28 == 10) {
    FUN_0140f460();
    goto LAB_0140d124;
  }
  lVar29 = *(long *)(param_1 + 0x5b8);
  local_3834[0] = 0;
  local_3838 = 0;
  local_383c[0] = 0;
  local_3840 = 0;
  local_3850 = 0;
  uStack_3848 = 0;
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_T_h_task_00",uVar40);
  piVar34 = (int *)(lVar29 + uVar28 * 0x60 + 8);
  switch(*piVar34) {
  case 1:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    puVar9 = PTR_DAT_04379c88;
    iVar13 = *piVar34;
    uVar4 = *(undefined4 *)(lVar29 + uVar28 * 0x60 + 0x10);
    plVar16 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x1c0);
    if (plVar16 == (long *)0x0) {
      lVar18 = plVar8[0x16];
      if (lVar18 != 0) {
        plVar16 = *(long **)(lVar18 + 0x270);
        if (plVar16 != *(long **)(lVar18 + 0x278)) {
          iVar22 = 0;
          do {
            plVar21 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar21 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar21 == (&DAT_03a7b958)[iVar13]) goto LAB_0140eb60;
            plVar16 = plVar16 + 1;
            iVar22 = iVar22 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar16);
        }
      }
      iVar22 = 0;
LAB_0140eb60:
      FUN_02c2e33c(plVar8,iVar22,0);
    }
    else {
      plVar21 = plVar16 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar18 = plVar8[0x16];
      if (lVar18 != 0) {
        plVar27 = *(long **)(lVar18 + 0x270);
        if (plVar27 != *(long **)(lVar18 + 0x278)) {
          iVar22 = 0;
          do {
            plVar3 = (long *)puVar9;
            if (*plVar27 != 0) {
              plVar3 = (long *)(*plVar27 + 0x58);
            }
            if (*plVar3 == (&DAT_03a7b958)[iVar13]) goto LAB_0140dabc;
            plVar27 = plVar27 + 1;
            iVar22 = iVar22 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar27);
        }
      }
      iVar22 = 0;
LAB_0140dabc:
      FUN_02c2e33c(plVar8,iVar22,plVar16);
      do {
        iVar13 = (int)*plVar21 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *(int *)plVar21 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
    plVar16 = *(long **)(*(long *)(param_1 + 0x2c8) + 0x1b8);
    if (plVar16 == (long *)0x0) {
      FUN_010c5d94(0,0,uVar4);
    }
    else {
      lVar18 = plVar16[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0140d124;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar14;
      }
      piVar37 = (int *)(lVar18 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar37,0x10);
        if (bVar7) {
          *piVar37 = *piVar37 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_010c5d94(plVar16,0,uVar4);
      lVar18 = plVar16[0xb];
      piVar37 = (int *)(lVar18 + 0xc);
      do {
        iVar13 = *piVar37;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar37,0x10);
        if (bVar7) {
          *piVar37 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    lVar19 = *(long *)(param_1 + 0x2c8);
    lVar39 = *(long *)(lVar19 + 0x1b8);
    uVar14 = *(undefined8 *)(lVar19 + 0x1c0);
    lVar18 = *(long *)(lVar19 + 0x1c8);
    *(undefined4 *)(lVar39 + 0x124) = 0;
    *(undefined2 *)(lVar39 + 0x128) = 0;
    *(undefined4 *)(lVar39 + 300) = 0;
    *(undefined4 *)(lVar39 + 0x134) = 0;
    FUN_02c33414(lVar39,uVar14);
    if (*(char *)(lVar18 + 0x7c) != '\0') {
      **(undefined2 **)(lVar18 + 0x58) = 0;
      *(undefined2 *)(lVar18 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar39,lVar18,uVar14,0,0);
    FUN_0283ce7c(lVar19,&local_88,*(undefined8 *)(lVar19 + 0x1c8),10);
    if (plVar8 != (long *)0x0) {
      do {
        iVar13 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        lVar18 = *plVar8;
        plVar21 = plVar8;
LAB_0140e664:
        (**(code **)(lVar18 + 0x10))(plVar21);
      }
    }
    break;
  case 2:
    if (plVar30 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
        if (bVar7) {
          *(int *)plVar15 = (int)*plVar15 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 == (long *)0x0) {
      local_38e0 = (long *)0x0;
    }
    else {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      local_38e0 = plVar8;
    }
    puVar9 = PTR_DAT_04379c88;
    iVar13 = *piVar34;
    plVar16 = (long *)plVar30[0x38];
    uVar5 = *(undefined1 *)(lVar29 + uVar28 * 0x60 + 0x14);
    if (plVar16 == (long *)0x0) {
      lVar18 = plVar8[0x16];
      if (lVar18 != 0) {
        plVar16 = *(long **)(lVar18 + 0x270);
        if (plVar16 != *(long **)(lVar18 + 0x278)) {
          iVar22 = 0;
          do {
            plVar21 = (long *)PTR_DAT_04379c88;
            if (*plVar16 != 0) {
              plVar21 = (long *)(*plVar16 + 0x58);
            }
            if (*plVar21 == (&DAT_03a7b958)[iVar13]) goto LAB_0140ebe0;
            plVar16 = plVar16 + 1;
            iVar22 = iVar22 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar16);
        }
      }
      iVar22 = 0;
LAB_0140ebe0:
      FUN_02c2e33c(plVar8,iVar22,0);
      plVar16 = (long *)plVar30[0x37];
joined_r0x0140ebf4:
      if (plVar16 == (long *)0x0) goto LAB_0140e7d8;
LAB_0140e0c8:
      lVar18 = plVar16[0xb];
      if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) goto LAB_0140d124;
      if (*(long *)(lVar18 + 0x10) == 0) {
        uVar14 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
        *(undefined8 *)(lVar18 + 0x10) = uVar14;
      }
      piVar37 = (int *)(lVar18 + 0xc);
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar37,0x10);
        if (bVar7) {
          *piVar37 = *piVar37 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      FUN_010c6d2c(plVar16,0,uVar5);
      lVar18 = plVar16[0xb];
      piVar37 = (int *)(lVar18 + 0xc);
      do {
        iVar13 = *piVar37;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar37,0x10);
        if (bVar7) {
          *piVar37 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar18 + 0x18) = 0;
        (**(code **)(*plVar16 + 0x20))(plVar16);
      }
    }
    else {
      plVar21 = plVar16 + 10;
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *(int *)plVar21 = (int)*plVar21 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      lVar18 = plVar8[0x16];
      if (lVar18 != 0) {
        plVar27 = *(long **)(lVar18 + 0x270);
        if (plVar27 != *(long **)(lVar18 + 0x278)) {
          iVar22 = 0;
          do {
            plVar3 = (long *)puVar9;
            if (*plVar27 != 0) {
              plVar3 = (long *)(*plVar27 + 0x58);
            }
            if (*plVar3 == (&DAT_03a7b958)[iVar13]) goto LAB_0140e0a4;
            plVar27 = plVar27 + 1;
            iVar22 = iVar22 + 1;
          } while (*(long **)(lVar18 + 0x278) != plVar27);
        }
      }
      iVar22 = 0;
LAB_0140e0a4:
      FUN_02c2e33c(plVar8,iVar22,plVar16);
      do {
        iVar13 = (int)*plVar21 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
        if (bVar7) {
          *(int *)plVar21 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        plVar16 = (long *)plVar30[0x37];
        goto joined_r0x0140ebf4;
      }
      plVar16 = (long *)plVar30[0x37];
      if (plVar16 != (long *)0x0) goto LAB_0140e0c8;
LAB_0140e7d8:
      FUN_010c6d2c(0,0,uVar5);
    }
    lVar18 = plVar30[0x38];
    lVar19 = plVar30[0x39];
    lVar39 = plVar30[0x37];
    *(undefined4 *)(lVar39 + 0x124) = 0;
    *(undefined2 *)(lVar39 + 0x128) = 0;
    *(undefined4 *)(lVar39 + 300) = 0;
    *(undefined4 *)(lVar39 + 0x134) = 0;
    FUN_02c33414(lVar39,lVar18);
    if (*(char *)(lVar19 + 0x7c) != '\0') {
      **(undefined2 **)(lVar19 + 0x58) = 0;
      *(undefined2 *)(lVar19 + 0x7a) = 0;
    }
    FUN_02c338a4(lVar39,lVar19,lVar18,0,0);
    FUN_0283ce7c(plVar30,&local_88,plVar30[0x39],10);
    if (plVar8 != (long *)0x0) {
      do {
        iVar13 = (int)*plVar33 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar8 + 0x10))(local_38e0);
      }
    }
    if (local_70 != (long *)0x0) {
      (**(code **)(*local_70 + 0x20))();
    }
    do {
      iVar13 = (int)*plVar15 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      pcVar25 = *(code **)(*plVar30 + 0x10);
      plVar16 = plVar30;
      goto LAB_0140d340;
    }
    goto LAB_0140d344;
  default:
    if (*piVar34 < 0x1c) {
      local_78 = strlen((char *)local_3820);
      local_88 = &DAT_cbf29ce484222645;
      if (local_3820[0] != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar35 = pbVar32;
        bVar23 = local_3820[0];
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
          bVar23 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar23 != 0);
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar7) {
            *(int *)plVar33 = (int)*plVar33 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_3890 = plVar8;
      FUN_011845f4(lVar24,&local_88,&local_3890,&DAT_03a7b958 + *piVar34,10);
      if (local_3890 != (long *)0x0) {
        plVar16 = local_3890 + 10;
        do {
          iVar13 = (int)*plVar16 + -1;
          bVar11 = iVar13 == 0;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *(int *)plVar16 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
          plVar21 = local_3890;
        } while (cVar6 != '\0');
        goto LAB_0140d32c;
      }
      break;
    }
LAB_0140e83c:
    FUN_01130984(plVar38,uVar31,uVar28 & 0xffffffff,local_3834,&local_3838,local_383c);
    goto LAB_0140dedc;
  case 6:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3858 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3858,&DAT_03a7b958 + *piVar34,10);
    if (local_3858 != (long *)0x0) {
      plVar16 = local_3858 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3858;
      } while (cVar6 != '\0');
LAB_0140d32c:
      if (bVar11) {
        lVar18 = *plVar21;
        goto LAB_0140e664;
      }
    }
    break;
  case 7:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3860 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3860,&DAT_03a7b958 + *piVar34,10);
    if (local_3860 != (long *)0x0) {
      plVar16 = local_3860 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3860;
      } while (cVar6 != '\0');
      goto LAB_0140d32c;
    }
    break;
  case 8:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3868 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3868,&DAT_03a7b958 + *piVar34,10);
    if (local_3868 != (long *)0x0) {
      plVar16 = local_3868 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3868;
      } while (cVar6 != '\0');
      goto LAB_0140d32c;
    }
    break;
  case 9:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3870 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3870,&DAT_03a7b958 + *piVar34,10);
    if (local_3870 != (long *)0x0) {
      plVar16 = local_3870 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3870;
      } while (cVar6 != '\0');
      goto LAB_0140d32c;
    }
    break;
  case 10:
    piVar37 = (int *)(lVar29 + uVar28 * 0x60 + 0x18);
    if (4 < *piVar37) goto LAB_0140e83c;
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3878 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3878,&DAT_03a7ba38 + *piVar37,10);
    if (local_3878 != (long *)0x0) {
      plVar16 = local_3878 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3878;
      } while (cVar6 != '\0');
      goto LAB_0140d32c;
    }
    break;
  case 0x1a:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3880 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3880,lVar29 + uVar28 * 0x60 + 0x28,10);
    if (local_3880 != (long *)0x0) {
      plVar16 = local_3880 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3880;
      } while (cVar6 != '\0');
      goto LAB_0140d32c;
    }
    break;
  case 0x1b:
    local_78 = strlen((char *)local_3820);
    local_88 = &DAT_cbf29ce484222645;
    if (local_3820[0] != 0) {
      local_88 = &DAT_cbf29ce484222645;
      pbVar35 = pbVar32;
      bVar23 = local_3820[0];
      do {
        local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
        bVar23 = *pbVar35;
        pbVar35 = pbVar35 + 1;
      } while (bVar23 != 0);
    }
    pbStack_80 = local_3820;
    local_70 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      do {
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
        if (bVar7) {
          *(int *)plVar33 = (int)*plVar33 + 1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
    }
    local_3888 = plVar8;
    FUN_011845f4(lVar24,&local_88,&local_3888,lVar29 + uVar28 * 0x60 + 0x28,10);
    if (local_3888 != (long *)0x0) {
      plVar16 = local_3888 + 10;
      do {
        iVar13 = (int)*plVar16 + -1;
        bVar11 = iVar13 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar7) {
          *(int *)plVar16 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar21 = local_3888;
      } while (cVar6 != '\0');
      goto LAB_0140d32c;
    }
  }
  if (local_70 != (long *)0x0) {
    pcVar25 = *(code **)(*local_70 + 0x20);
    plVar16 = local_70;
LAB_0140d340:
    (*pcVar25)(plVar16);
  }
LAB_0140d344:
  FUN_01130984(plVar38,uVar31,uVar28 & 0xffffffff,local_3834,&local_3838,local_383c);
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_T_num_task_00",uVar40);
  lVar18 = FUN_01306260(lVar24,local_3820);
  *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
  if (plVar30 != (long *)0x0) {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar7) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
  }
  local_3898 = plVar30;
  local_78 = strlen((char *)local_3820);
  local_88 = &DAT_cbf29ce484222645;
  if (local_3820[0] != 0) {
    local_88 = &DAT_cbf29ce484222645;
    pbVar35 = pbVar32;
    bVar23 = local_3820[0];
    do {
      local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
      bVar23 = *pbVar35;
      pbVar35 = pbVar35 + 1;
    } while (bVar23 != 0);
  }
  pbStack_80 = local_3820;
  local_70 = (long *)0x0;
  if (plVar8 == (long *)0x0) {
    plVar16 = (long *)0x0;
  }
  else {
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
      if (bVar7) {
        *(int *)plVar33 = (int)*plVar33 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    plVar16 = plVar8;
  }
  local_38a8 = 0x2e73bf528ee82326;
  local_38a0 = plVar8;
  FUN_0140ec18(&local_3898,&local_88,&local_38a0,&local_38a8,local_3838);
  if (plVar16 != (long *)0x0) {
    plVar21 = plVar16 + 10;
    do {
      iVar13 = (int)*plVar21 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
      if (bVar7) {
        *(int *)plVar21 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
  }
  if (local_70 != (long *)0x0) {
    (**(code **)(*local_70 + 0x20))();
  }
  if (local_3898 != (long *)0x0) {
    plVar16 = local_3898 + 10;
    do {
      iVar13 = (int)*plVar16 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar7) {
        *(int *)plVar16 = iVar13;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar13 == 0) {
      (**(code **)(*local_3898 + 0x10))();
    }
  }
  uVar12 = *(uint *)(lVar29 + uVar28 * 0x60 + 0x4c);
  if (uVar12 < 5) {
    if (uVar12 != 0) goto LAB_0140d498;
    snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_L_task_piece_%02d",uVar40,0);
    lVar18 = FUN_01306260(lVar24,local_3820);
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
LAB_0140dc24:
    snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_L_task_piece_%02d",uVar40,1);
    lVar18 = FUN_01306260(lVar24,local_3820);
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
LAB_0140dc58:
    snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_L_task_piece_%02d",uVar40,2);
    lVar18 = FUN_01306260(lVar24,local_3820);
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
LAB_0140dc8c:
    snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_L_task_piece_%02d",uVar40,3);
    lVar18 = FUN_01306260(lVar24,local_3820);
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
LAB_0140dcc0:
    snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_L_task_piece_%02d",uVar40,4);
    lVar18 = FUN_01306260(lVar24,local_3820);
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    if (uVar12 != 0) goto LAB_0140d4d0;
  }
  else {
    uVar12 = 5;
LAB_0140d498:
    memcpy(&local_3850,(void *)(lVar29 + uVar28 * 0x60 + 0x38),(ulong)(uVar12 << 2));
    if (uVar12 == 1) goto LAB_0140dc24;
    if (uVar12 < 3) goto LAB_0140dc58;
    if (uVar12 == 3) goto LAB_0140dc8c;
    if (uVar12 < 5) goto LAB_0140dcc0;
LAB_0140d4d0:
    uVar36 = 0;
    do {
      param4 = uVar12 + ~(uint)uVar36;
      snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_L_task_piece_%02d",uVar40,
               param4);
      lVar18 = FUN_01306260(lVar24,local_3820);
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
      snprintf((char *)local_3820,0x400,
               "pane_L_list_task_plate_%02d_L_task_piece_%02d_T_task_piece_00",uVar40,param4);
      if (plVar30 != (long *)0x0) {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar15,0x10);
          if (bVar7) {
            *(int *)plVar15 = (int)*plVar15 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      local_38b0 = plVar30;
      local_78 = strlen((char *)local_3820);
      local_88 = &DAT_cbf29ce484222645;
      if (local_3820[0] != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar35 = pbVar32;
        bVar23 = local_3820[0];
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
          bVar23 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar23 != 0);
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (plVar8 == (long *)0x0) {
        plVar16 = (long *)0x0;
      }
      else {
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar33,0x10);
          if (bVar7) {
            *(int *)plVar33 = (int)*plVar33 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        plVar16 = plVar8;
      }
      local_38a8 = 0x2e73bf528ee82326;
      local_38b8 = plVar8;
      FUN_0140ec18(&local_38b0,&local_88,&local_38b8,&local_38a8,
                   *(undefined4 *)((long)&local_3850 + uVar36 * 4));
      if (plVar16 != (long *)0x0) {
        plVar21 = plVar16 + 10;
        do {
          iVar13 = (int)*plVar21 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar21,0x10);
          if (bVar7) {
            *(int *)plVar21 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      if (local_70 != (long *)0x0) {
        (**(code **)(*local_70 + 0x20))();
      }
      if (local_38b0 != (long *)0x0) {
        plVar16 = local_38b0 + 10;
        do {
          iVar13 = (int)*plVar16 + -1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar7) {
            *(int *)plVar16 = iVar13;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar13 == 0) {
          (**(code **)(*local_38b0 + 0x10))();
        }
      }
      snprintf((char *)local_3820,0x400,"anime_L_list_task_plate_%02d_L_task_piece_%02d_complete",
               uVar40,param4);
      local_78 = strlen((char *)local_3820);
      local_88 = &DAT_cbf29ce484222645;
      if (local_3820[0] != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar35 = pbVar32;
        bVar23 = local_3820[0];
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
          bVar23 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar23 != 0);
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
      }
      snprintf((char *)local_3820,0x400,"anime_L_list_task_plate_%02d_L_task_piece_%02d_in_progress"
               ,uVar40,param4);
      local_78 = strlen((char *)local_3820);
      local_88 = &DAT_cbf29ce484222645;
      if (local_3820[0] != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar35 = pbVar32;
        bVar23 = local_3820[0];
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
          bVar23 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar23 != 0);
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
      }
      snprintf((char *)local_3820,0x400,
               "anime_L_list_task_plate_%02d_L_task_piece_%02d_not_yet_started",uVar40,param4);
      local_78 = strlen((char *)local_3820);
      local_88 = &DAT_cbf29ce484222645;
      if (local_3820[0] != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar35 = pbVar32;
        bVar23 = local_3820[0];
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
          bVar23 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar23 != 0);
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
      }
      snprintf((char *)local_3820,0x400,"anime_L_list_task_plate_%02d_L_task_piece_%02d_new_update",
               uVar40,param4);
      local_78 = strlen((char *)local_3820);
      local_88 = &DAT_cbf29ce484222645;
      if (local_3820[0] != 0) {
        local_88 = &DAT_cbf29ce484222645;
        pbVar35 = pbVar32;
        bVar23 = local_3820[0];
        do {
          local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
          bVar23 = *pbVar35;
          pbVar35 = pbVar35 + 1;
        } while (bVar23 != 0);
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
      }
      uVar1 = uVar36 + 1;
      if (uVar1 < local_3834[0]) {
        if (*(char *)(*(long *)(*(long *)(param_1 + 0x5b0) + 0xa0) + 8) == '\0') {
          __format = "anime_L_list_task_plate_%02d_L_task_piece_%02d_complete";
        }
        else {
          if ((uint)uVar28 < 10) {
            uVar26 = (uint)uVar28 * 3;
            uVar26 = (*(uint *)((long)plVar38 + (ulong)uVar31 * 4 + 0x1e4cc) &
                     7 << (ulong)(uVar26 & 0x1f)) >> ((ulong)uVar26 & 0x3f);
          }
          else {
            uVar26 = 0;
          }
          __format = "anime_L_list_task_plate_%02d_L_task_piece_%02d_complete";
          if ((uint)local_3834[0] - (uVar26 & 0xff) <= uVar1) {
            __format = "anime_L_list_task_plate_%02d_L_task_piece_%02d_new_update";
          }
        }
        snprintf((char *)local_3820,0x400,__format,(ulong)uVar40,(ulong)param4);
        local_78 = strlen((char *)local_3820);
        local_88 = &DAT_cbf29ce484222645;
        if (local_3820[0] != 0) {
          local_88 = &DAT_cbf29ce484222645;
          pbVar35 = pbVar32;
          bVar23 = local_3820[0];
          do {
            local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
            bVar23 = *pbVar35;
            pbVar35 = pbVar35 + 1;
          } while (bVar23 != 0);
        }
      }
      else if (local_3838 < *(uint *)((long)&local_3850 + uVar36 * 4)) {
        snprintf((char *)local_3820,0x400,
                 "anime_L_list_task_plate_%02d_L_task_piece_%02d_not_yet_started",uVar40,param4);
        local_78 = strlen((char *)local_3820);
        local_88 = &DAT_cbf29ce484222645;
        if (local_3820[0] != 0) {
          local_88 = &DAT_cbf29ce484222645;
          pbVar35 = pbVar32;
          bVar23 = local_3820[0];
          do {
            local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
            bVar23 = *pbVar35;
            pbVar35 = pbVar35 + 1;
          } while (bVar23 != 0);
        }
      }
      else {
        snprintf((char *)local_3820,0x400,
                 "anime_L_list_task_plate_%02d_L_task_piece_%02d_in_progress",uVar40,param4);
        local_78 = strlen((char *)local_3820);
        local_88 = &DAT_cbf29ce484222645;
        if (local_3820[0] != 0) {
          local_88 = &DAT_cbf29ce484222645;
          pbVar35 = pbVar32;
          bVar23 = local_3820[0];
          do {
            local_88 = (undefined1 *)(((ulong)local_88 ^ (ulong)bVar23) * 0x100000001b3);
            bVar23 = *pbVar35;
            pbVar35 = pbVar35 + 1;
          } while (bVar23 != 0);
        }
      }
      pbStack_80 = local_3820;
      local_70 = (long *)0x0;
      if (*(long *)(param_1 + 0x2c8) != 0) {
        FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
      }
      uVar36 = uVar1;
    } while (uVar1 < uVar12);
  }
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_N_icon_imp_00",uVar40);
  lVar18 = FUN_01306260(lVar24,local_3820);
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_N_icon_b_00",uVar40);
  lVar19 = FUN_01306260(lVar24,local_3820);
  pbVar35 = (byte *)(lVar18 + 0x58);
  *pbVar35 = *pbVar35 & 0xfe;
  pbVar20 = (byte *)(lVar19 + 0x58);
  bVar23 = *pbVar20;
  *pbVar20 = bVar23 & 0xfe;
  if (*(char *)(lVar29 + uVar28 * 0x60 + 0x58) == '\0') {
    if (0 < *(int *)(lVar29 + uVar28 * 0x60 + 0x54)) {
      pbVar35 = pbVar20;
      goto LAB_0140defc;
    }
  }
  else {
    bVar23 = *pbVar35;
LAB_0140defc:
    *pbVar35 = bVar23 | 1;
  }
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_N_task_00",uVar40);
  lVar18 = FUN_01306260(lVar24,local_3820);
  snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d_N_undecided_00",uVar40);
  lVar19 = FUN_01306260(lVar24,local_3820);
  if (*piVar34 == 0x1b) {
    uVar12 = FUN_01135e5c(plVar38,lVar29 + uVar28 * 0x60 + 0x20);
    if (1 < uVar12) {
      *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
      bVar23 = *(byte *)(lVar19 + 0x58);
      goto LAB_0140de00;
    }
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe;
    bVar23 = *(byte *)(lVar19 + 0x58) | 1;
  }
  else {
    *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) | 1;
    bVar23 = *(byte *)(lVar19 + 0x58);
LAB_0140de00:
    bVar23 = bVar23 & 0xfe;
  }
  *(byte *)(lVar19 + 0x58) = bVar23;
  snprintf((char *)local_3820,0x400,"anime_L_list_task_plate_%02d_active",uVar40);
  local_78 = strlen((char *)local_3820);
  local_88 = &DAT_cbf29ce484222645;
  if (local_3820[0] != 0) {
    uVar36 = (ulong)(uint)local_3820[0];
    local_88 = &DAT_cbf29ce484222645;
    pbVar35 = pbVar32;
    do {
      local_88 = (undefined1 *)(((ulong)local_88 ^ uVar36) * 0x100000001b3);
      bVar23 = *pbVar35;
      uVar36 = (ulong)bVar23;
      pbVar35 = pbVar35 + 1;
    } while (bVar23 != 0);
  }
  pbStack_80 = local_3820;
  local_70 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b430(*(long *)(param_1 + 0x2c8),&local_88);
  }
  bVar23 = local_3820[0];
  local_78 = strlen((char *)local_3820);
  local_88 = &DAT_cbf29ce484222645;
  if (bVar23 != 0) {
    local_88 = &DAT_cbf29ce484222645;
    pbVar35 = pbVar32;
    do {
      uVar36 = (ulong)bVar23;
      bVar23 = *pbVar35;
      local_88 = (undefined1 *)(((ulong)local_88 ^ uVar36) * 0x100000001b3);
      pbVar35 = pbVar35 + 1;
    } while (bVar23 != 0);
  }
  pbStack_80 = local_3820;
  local_70 = (long *)0x0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    FUN_0283b1e8(*(long *)(param_1 + 0x2c8),&local_88);
  }
  uVar40 = uVar40 + 1;
  *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 1;
LAB_0140dedc:
  uVar28 = uVar28 + 1;
  if (**(uint **)(param_1 + 0x5b8) <= uVar28) {
    if (uVar40 < 10) {
LAB_0140e290:
      snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d",uVar40);
      lVar17 = FUN_01306260(lVar24,local_3820);
      *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
      if (uVar40 + 1 != 10) {
        snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d",uVar40 + 1);
        lVar17 = FUN_01306260(lVar24,local_3820);
        *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
        if (uVar40 + 2 != 10) {
          snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d",uVar40 + 2);
          lVar17 = FUN_01306260(lVar24,local_3820);
          *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
          for (iVar13 = uVar40 + 3; iVar13 != 10; iVar13 = iVar13 + 1) {
            snprintf((char *)local_3820,0x400,"pane_L_list_task_plate_%02d",iVar13);
            lVar17 = FUN_01306260(lVar24,local_3820);
            *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
          }
        }
      }
    }
joined_r0x0140e33c:
    if (plVar38 != (long *)0x0) {
      lVar24 = plVar38[0xb];
      piVar34 = (int *)(lVar24 + 0xc);
      do {
        iVar13 = *piVar34;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar34,0x10);
        if (bVar7) {
          *piVar34 = iVar13 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 + -1 == 0) {
        *(undefined8 *)(lVar24 + 0x18) = 0;
        (**(code **)(*plVar38 + 0x20))(plVar38);
      }
    }
    if (plVar30 != (long *)0x0) {
      plVar38 = plVar30 + 10;
      do {
        iVar13 = (int)*plVar38 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar38,0x10);
        if (bVar7) {
          *(int *)plVar38 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar30 + 0x10))(plVar30);
      }
    }
    if (plVar8 != (long *)0x0) {
      plVar30 = plVar8 + 10;
      do {
        iVar13 = (int)*plVar30 + -1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(plVar30,0x10);
        if (bVar7) {
          *(int *)plVar30 = iVar13;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar13 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
    return;
  }
  goto LAB_0140d1f0;
}


