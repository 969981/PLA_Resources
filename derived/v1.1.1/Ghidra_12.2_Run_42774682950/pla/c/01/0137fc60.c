/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0137fc60; name: FUN_0137fc60
 */


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0137fc60(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  long *plVar21;
  ulong uVar22;
  byte *pbVar23;
  long lVar24;
  int iVar25;
  long *plVar26;
  byte *pbVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  undefined8 uVar31;
  long lVar32;
  long lVar33;
  long *local_5b8;
  long *local_5a8;
  int local_55c;
  undefined4 uStack_558;
  undefined4 local_554;
  int local_54c [2];
  undefined2 local_544;
  undefined4 local_540;
  undefined2 local_53c;
  undefined8 local_538;
  long local_530;
  uint local_528;
  undefined2 uStack_524;
  undefined2 uStack_522;
  undefined4 local_520;
  undefined2 local_51c;
  undefined4 local_518;
  undefined2 local_514;
  undefined4 local_510;
  undefined2 local_50c;
  undefined8 local_508;
  long local_500;
  undefined4 local_4f8;
  undefined2 local_4f4;
  undefined2 uStack_4f2;
  undefined4 uStack_4f0;
  undefined2 uStack_4ec;
  undefined4 local_4e8;
  undefined2 local_4e4;
  undefined4 local_4e0;
  undefined2 local_4dc;
  undefined4 local_4d8;
  undefined4 uStack_4d4;
  long local_4d0;
  long local_4c8;
  long *local_4c0;
  undefined8 local_4b8;
  long *local_4b0;
  long *local_4a8;
  undefined8 local_4a0;
  long *local_498;
  undefined1 *local_490;
  byte *pbStack_488;
  size_t local_480;
  long *local_478;
  undefined2 local_470;
  undefined1 local_46e;
  int local_46c;
  byte local_468 [1032];
  
  local_4b8 = param_2;
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar14 = __cxa_guard_acquire(PTR_DAT_04379678), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar19 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar19;
  plVar26 = *(long **)(lVar19 + 0x100);
  if (plVar26 != (long *)0x0) {
    plVar28 = plVar26 + 10;
    do {
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar13) {
        *(int *)plVar28 = (int)*plVar28 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar28 = (long *)plVar26[0x20];
  if (plVar28 != (long *)0x0) {
    plVar15 = plVar28 + 10;
    do {
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar13) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar15 = (long *)plVar28[0xe];
  if (plVar15 != (long *)0x0) {
    plVar29 = plVar15 + 10;
    do {
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar29,0x10);
      if (bVar13) {
        *(int *)plVar29 = (int)*plVar29 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar29 = (long *)plVar15[0xb];
  if (plVar29 != (long *)0x0) {
    plVar1 = plVar29 + 10;
    do {
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar13) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  plVar1 = plVar15 + 10;
  do {
    iVar14 = (int)*plVar1 + -1;
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar13) {
      *(int *)plVar1 = iVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  plVar15 = plVar28 + 10;
  do {
    iVar14 = (int)*plVar15 + -1;
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
    if (bVar13) {
      *(int *)plVar15 = iVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar28 + 0x10))(plVar28);
  }
  plVar28 = plVar26 + 10;
  do {
    iVar14 = (int)*plVar28 + -1;
    cVar7 = '\x01';
    bVar13 = (bool)ExclusiveMonitorPass(plVar28,0x10);
    if (bVar13) {
      *(int *)plVar28 = iVar14;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  if (iVar14 == 0) {
    (**(code **)(*plVar26 + 0x10))(plVar26);
  }
  FUN_016a50f0(&local_4c0,plVar29,&local_4b8,*(undefined8 *)(param_1 + 8));
  if (local_4c0 == (long *)0x0) {
    iVar14 = 0;
    goto LAB_01380968;
  }
  lVar19 = *(long *)(param_1 + 0x30);
  local_54c[1] = 0;
  local_538 = 0xffffffff00000000;
  local_530 = 0;
  local_544 = 0;
  local_540 = 0;
  local_53c = 0;
  local_55c = 0;
  local_54c[0]._0_2_ = 0;
  local_518 = 0;
  local_514 = 0;
  local_510 = 0;
  local_50c = 0;
  local_528 = 0;
  uStack_524 = 0;
  uStack_522 = 0;
  local_520 = 0;
  local_51c = 0;
  local_4e8 = 0;
  local_4e4 = 0;
  local_4e0 = 0;
  local_4dc = 0;
  uStack_4f0 = 0;
  uStack_4ec = 0;
  local_4f8 = 0;
  local_4f4 = 0;
  uStack_4f2 = 0;
  uStack_558 = (undefined4)lVar19;
  uVar11 = uStack_558;
  local_554 = (undefined4)((ulong)lVar19 >> 0x20);
  uVar12 = local_554;
  local_508 = 0xffffffff00000000;
  local_500 = 0;
  local_4d8 = 0;
  uStack_4d4 = 0xffffffff;
  local_4d0 = 0;
  local_4c8 = 0;
  bVar13 = (int)local_4c0[0x2c] == 0xff;
  if (!bVar13) {
    uVar9 = (int)local_4c0[0xf] - 2;
    local_55c = (int)local_4c0[0xf] + -1;
    if (2 < uVar9) {
      local_55c = 0;
    }
    uVar22 = 0;
    if (2 >= uVar9) {
      uVar22 = (ulong)uVar9 + 1;
    }
    lVar24 = local_4c0[0x10];
    uStack_558 = (undefined4)lVar24;
    local_554 = (undefined4)((ulong)lVar24 >> 0x20);
    if (lVar24 != 0) {
      uVar11 = uStack_558;
      uVar12 = local_554;
    }
    local_554 = uVar12;
    uStack_558 = uVar11;
    if (uVar22 != 0) {
      if ((int)local_4c0[0x11] == 0) {
        local_54c[0]._0_2_ = (undefined2)*(undefined4 *)((long)local_4c0 + 0x8c);
      }
      else if ((int)local_4c0[0x11] == 1) {
        local_54c[1] = *(undefined4 *)((long)local_4c0 + 0x8c);
      }
      else {
        local_530 = local_4c0[0x13];
        if (local_4c0[0x13] == 0) {
          local_530 = lVar19;
        }
      }
      local_528 = *(uint *)(local_4c0 + 0x12);
      uStack_524 = (undefined2)*(undefined4 *)((long)local_4c0 + 0x94);
      uStack_522 = (undefined2)((uint)*(undefined4 *)((long)local_4c0 + 0x94) >> 0x10);
      if (1 < uVar22) {
        if ((int)local_4c0[0x14] == 0) {
          local_520 = 0;
          local_51c = (undefined2)*(undefined4 *)((long)local_4c0 + 0xa4);
        }
        else if ((int)local_4c0[0x14] == 1) {
          local_518 = *(undefined4 *)((long)local_4c0 + 0xa4);
          local_520 = 1;
        }
        else {
          local_520 = 2;
          local_500 = local_4c0[0x16];
          if (local_4c0[0x16] == 0) {
            local_500 = lVar19;
          }
        }
        local_4f8 = (undefined4)local_4c0[0x15];
        local_4f4 = (undefined2)*(undefined4 *)((long)local_4c0 + 0xac);
        uStack_4f2 = (undefined2)((uint)*(undefined4 *)((long)local_4c0 + 0xac) >> 0x10);
        if (uVar22 == 3) {
          if ((int)local_4c0[0x17] == 0) {
            uStack_4f0 = 0;
            uStack_4ec = (undefined2)*(undefined4 *)((long)local_4c0 + 0xbc);
          }
          else if ((int)local_4c0[0x17] == 1) {
            uStack_4f0 = 1;
            local_4e8 = *(undefined4 *)((long)local_4c0 + 0xbc);
          }
          else {
            uStack_4f0 = 2;
            local_4d0 = local_4c0[0x19];
            if (local_4c0[0x19] == 0) {
              local_4d0 = lVar19;
            }
          }
          local_4c8 = local_4c0[0x18];
        }
      }
    }
  }
  uVar9 = *(uint *)(*(long *)(param_1 + 0x18) + 400);
  if (uVar9 != 0) {
    uVar22 = 0;
    piVar20 = (int *)(*(long *)(param_1 + 0x18) + 0x20);
LAB_0137fe5c:
    puVar2 = (undefined8 *)PTR_DAT_04379c88;
    if (*(long *)(piVar20 + -4) != 0) {
      puVar2 = (undefined8 *)(*(long *)(piVar20 + -4) + 0x58);
    }
    if (((undefined1 *)*puVar2 != &DAT_61030071dde8d2bb) || (*piVar20 != 10)) goto LAB_01380c94;
    if (0xf < (uint)uVar22) {
      plVar26 = (long *)0x0;
      goto LAB_0137fe90;
    }
    plVar26 = *(long **)(piVar20 + -2);
    if (plVar26 == (long *)0x0) goto LAB_0137fe90;
    lVar19 = plVar26[0xb];
    if (*(undefined8 **)(lVar19 + 0x18) != (undefined8 *)0x0) {
      if (*(long *)(lVar19 + 0x10) == 0) {
        uVar31 = (**(code **)**(undefined8 **)(lVar19 + 0x18))();
        *(undefined8 *)(lVar19 + 0x10) = uVar31;
      }
      piVar20 = (int *)(lVar19 + 0xc);
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
        if (bVar8) {
          *piVar20 = *piVar20 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
LAB_0137fe90:
      plVar28 = (long *)plVar26[0xd];
      goto joined_r0x0137fe94;
    }
    goto LAB_013811e8;
  }
LAB_01380ca4:
  plVar26 = (long *)0x0;
  plVar28 = _DAT_00000068;
joined_r0x0137fe94:
  if (plVar28 != (long *)0x0) {
    plVar15 = plVar28 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  if (plVar26 != (long *)0x0) {
    lVar19 = plVar26[0xb];
    piVar20 = (int *)(lVar19 + 0xc);
    do {
      iVar14 = *piVar20;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = iVar14 + -1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar14 + -1 == 0) {
      *(undefined8 *)(lVar19 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  lVar19 = *(long *)(param_1 + 0x10);
  plVar26 = *(long **)(lVar19 + 0x148);
  if (plVar26 != (long *)0x0) {
    plVar15 = plVar26 + 10;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar8) {
        *(int *)plVar15 = (int)*plVar15 + 1;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    lVar19 = *(long *)(param_1 + 0x10);
  }
  lVar24 = *(long *)(lVar19 + 0x328);
  memset(local_468,0,0x400);
  local_46c = 0;
  snprintf((char *)local_468,0x400,"pane_%s_N_complete_00",*(char **)(param_1 + 0x20));
  lVar19 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_468);
  if (bVar13) {
    iVar14 = 0;
    iVar25 = 0;
    if (lVar19 == 0) goto LAB_01380928;
    *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    iVar25 = 0;
    if (plVar26 != (long *)0x0) goto LAB_01380930;
LAB_01380948:
    iVar14 = local_46c + iVar14;
  }
  else {
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
    }
    local_46e = 0;
    local_470 = 0;
    if (local_55c == 1) {
      lVar19 = 1;
LAB_01380aa4:
      local_46e = 1;
    }
    else {
      if (local_55c == 3) {
        lVar19 = 3;
        local_470 = 1;
LAB_01380d50:
        local_470 = CONCAT11(1,(undefined1)local_470);
        goto LAB_01380aa4;
      }
      if (local_55c == 2) {
        lVar19 = 2;
        goto LAB_01380d50;
      }
      lVar19 = 0;
    }
    lVar32 = 0;
    pbVar27 = (byte *)((ulong)local_468 | 1);
    do {
      snprintf((char *)local_468,0x400,"pane_%s_%s",*(char **)(param_1 + 0x20),
               (&PTR_s_T_content_03_04207e58)[lVar32]);
      if (local_468[0] != 0) {
        local_490 = &DAT_cbf29ce484222645;
        pbVar23 = pbVar27;
        bVar5 = local_468[0];
        do {
          local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar23;
          pbVar23 = pbVar23 + 1;
        } while (bVar5 != 0);
        local_480 = 0x3ff;
        local_478 = (long *)0x0;
        pbStack_488 = local_468;
        lVar16 = FUN_00d47110(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x148),&local_490);
        if (local_478 != (long *)0x0) {
          (**(code **)(*local_478 + 0x20))();
        }
        if (lVar16 != 0) {
          bVar5 = *(byte *)(lVar16 + 0x58);
          bVar6 = bVar5 | 1;
          *(byte *)(lVar16 + 0x58) = bVar6;
          if (lVar32 == lVar19) {
            *(byte *)(lVar16 + 0x58) = bVar6;
            if (*(short *)(CONCAT44(local_554,uStack_558) + 0x7a) != 0) {
              FUN_010c4a60(*(undefined8 *)(CONCAT44(local_554,uStack_558) + 0x58),lVar16,10,
                           &local_46c);
            }
            local_480 = strlen((char *)local_468);
            local_490 = &DAT_cbf29ce484222645;
            if (local_468[0] != 0) {
              local_490 = &DAT_cbf29ce484222645;
              pbVar23 = pbVar27;
              bVar5 = local_468[0];
              do {
                local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
                bVar5 = *pbVar23;
                pbVar23 = pbVar23 + 1;
              } while (bVar5 != 0);
            }
            local_478 = (long *)0x0;
            pbStack_488 = local_468;
            FUN_0283ce7c(plVar26,&local_490,CONCAT44(local_554,uStack_558),10);
            if (local_478 != (long *)0x0) {
              (**(code **)(*local_478 + 0x20))();
            }
          }
          else {
            *(byte *)(lVar16 + 0x58) = bVar5 & 0xfe;
          }
        }
      }
      lVar32 = lVar32 + 1;
    } while (lVar32 != 4);
    lVar19 = 0;
    iVar25 = 0;
    pbVar27 = (byte *)((ulong)local_468 | 1);
    do {
      iVar14 = (int)lVar19;
      snprintf((char *)local_468,0x400,"pane_%s_N_content_%02d",*(char **)(param_1 + 0x20),iVar14);
      lVar32 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_468);
      bVar5 = local_468[lVar19 + -8];
      *(byte *)(lVar32 + 0x58) = *(byte *)(lVar32 + 0x58) & 0xfe | bVar5;
      if (bVar5 != 0) {
        plVar15 = plVar28 + 10;
        snprintf((char *)local_468,0x400,"pane_%s_T_content_%02d",*(char **)(param_1 + 0x20),iVar14)
        ;
        lVar32 = (long)iVar25;
        iVar18 = local_54c[(long)iVar25 * 0xc + -1];
        if (iVar18 == 0) {
          uVar31 = *(undefined8 *)(param_1 + 0x10);
          local_480 = strlen((char *)local_468);
          local_490 = &DAT_cbf29ce484222645;
          if (local_468[0] != 0) {
            local_490 = &DAT_cbf29ce484222645;
            pbVar23 = pbVar27;
            bVar5 = local_468[0];
            do {
              local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar5 != 0);
          }
          pbStack_488 = local_468;
          local_498 = plVar28;
          local_478 = (long *)0x0;
          if (plVar28 != (long *)0x0) {
            do {
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar13) {
                *(int *)plVar15 = (int)*plVar15 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          local_4a0 = 0x7a46ecd7a0f8fe20;
          FUN_01381200(uVar31,&local_490,&local_498,&local_4a0,0,
                       *(undefined2 *)(local_54c + lVar32 * 0xc),1);
          if (local_498 != (long *)0x0) {
            plVar1 = local_498 + 10;
            do {
              iVar18 = (int)*plVar1 + -1;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar13) {
                *(int *)plVar1 = iVar18;
                cVar7 = ExclusiveMonitorsStatus();
              }
              plVar30 = local_498;
            } while (cVar7 != '\0');
LAB_01380aac:
            if (iVar18 == 0) {
              (**(code **)(*plVar30 + 0x10))();
            }
          }
        }
        else if (iVar18 == 1) {
          uVar31 = *(undefined8 *)(param_1 + 0x10);
          local_480 = strlen((char *)local_468);
          local_490 = &DAT_cbf29ce484222645;
          if (local_468[0] != 0) {
            local_490 = &DAT_cbf29ce484222645;
            pbVar23 = pbVar27;
            bVar5 = local_468[0];
            do {
              local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar5 != 0);
          }
          pbStack_488 = local_468;
          local_4a8 = plVar28;
          local_478 = (long *)0x0;
          if (plVar28 != (long *)0x0) {
            do {
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
              if (bVar13) {
                *(int *)plVar15 = (int)*plVar15 + 1;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
          }
          local_4a0 = 0x36b08561e4f254ee;
          FUN_0133fa78(uVar31,&local_490,&local_4a8,&local_4a0,0,local_54c[lVar32 * 0xc + 1]);
          if (local_4a8 != (long *)0x0) {
            plVar1 = local_4a8 + 10;
            do {
              iVar18 = (int)*plVar1 + -1;
              cVar7 = '\x01';
              bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar13) {
                *(int *)plVar1 = iVar18;
                cVar7 = ExclusiveMonitorsStatus();
              }
              plVar30 = local_4a8;
            } while (cVar7 != '\0');
            goto LAB_01380aac;
          }
        }
        else {
          local_480 = strlen((char *)local_468);
          local_490 = &DAT_cbf29ce484222645;
          if (local_468[0] != 0) {
            local_490 = &DAT_cbf29ce484222645;
            pbVar23 = pbVar27;
            bVar5 = local_468[0];
            do {
              local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
              bVar5 = *pbVar23;
              pbVar23 = pbVar23 + 1;
            } while (bVar5 != 0);
          }
          pbStack_488 = local_468;
          local_478 = (long *)0x0;
          FUN_0283ce7c(plVar26,&local_490,(&local_530)[lVar32 * 6],10);
        }
        if (local_478 != (long *)0x0) {
          (**(code **)(*local_478 + 0x20))();
        }
        plVar1 = plVar26 + 10;
        snprintf((char *)local_468,0x400,"pane_%s_T_count_a_%02d",*(char **)(param_1 + 0x20),iVar14)
        ;
        if (plVar26 != (long *)0x0) {
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        local_480 = strlen((char *)local_468);
        puVar10 = PTR_DAT_04379c88;
        local_490 = &DAT_cbf29ce484222645;
        if (local_468[0] != 0) {
          local_490 = &DAT_cbf29ce484222645;
          pbVar23 = pbVar27;
          bVar5 = local_468[0];
          do {
            local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar5 != 0);
        }
        pbStack_488 = local_468;
        local_478 = (long *)0x0;
        if (plVar28 == (long *)0x0) {
          local_5a8 = (long *)0x0;
        }
        else {
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar13) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          local_5a8 = plVar28;
        }
        uVar9 = *(uint *)(&uStack_524 + lVar32 * 0x18);
        plVar30 = (long *)plVar26[0x38];
        if (plVar30 == (long *)0x0) {
          lVar16 = plVar28[0x16];
          if (lVar16 != 0) {
            plVar30 = *(long **)(lVar16 + 0x270);
            if (plVar30 != *(long **)(lVar16 + 0x278)) {
              iVar18 = 0;
              do {
                plVar4 = (long *)PTR_DAT_04379c88;
                if (*plVar30 != 0) {
                  plVar4 = (long *)(*plVar30 + 0x58);
                }
                if (*plVar4 == -0x6c0ffb6e00c6adbf) goto LAB_0138114c;
                plVar30 = plVar30 + 1;
                iVar18 = iVar18 + 1;
              } while (*(long **)(lVar16 + 0x278) != plVar30);
            }
          }
          iVar18 = 0;
LAB_0138114c:
          FUN_02c2e33c(plVar28,iVar18,0);
          plVar30 = (long *)plVar26[0x37];
joined_r0x01381160:
          if (plVar30 != (long *)0x0) goto LAB_013803d4;
LAB_01380d9c:
          FUN_02c395d0(0,0,uVar9,3,1,1);
        }
        else {
          plVar4 = plVar30 + 10;
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar13) {
              *(int *)plVar4 = (int)*plVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = plVar28[0x16];
          if (lVar16 != 0) {
            plVar21 = *(long **)(lVar16 + 0x270);
            if (plVar21 != *(long **)(lVar16 + 0x278)) {
              iVar18 = 0;
              do {
                plVar3 = (long *)puVar10;
                if (*plVar21 != 0) {
                  plVar3 = (long *)(*plVar21 + 0x58);
                }
                if (*plVar3 == -0x6c0ffb6e00c6adbf) goto LAB_013803ac;
                plVar21 = plVar21 + 1;
                iVar18 = iVar18 + 1;
              } while (*(long **)(lVar16 + 0x278) != plVar21);
            }
          }
          iVar18 = 0;
LAB_013803ac:
          FUN_02c2e33c(plVar28,iVar18,plVar30);
          do {
            iVar18 = (int)*plVar4 + -1;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar13) {
              *(int *)plVar4 = iVar18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            plVar30 = (long *)plVar26[0x37];
            goto joined_r0x01381160;
          }
          plVar30 = (long *)plVar26[0x37];
          if (plVar30 == (long *)0x0) goto LAB_01380d9c;
LAB_013803d4:
          lVar16 = plVar30[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) {
LAB_013811e8:
                    /* WARNING: Subroutine does not return */
            nn::diag::detail::AbortImpl("","","",0);
          }
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar31 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar31;
          }
          piVar20 = (int *)(lVar16 + 0xc);
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar13) {
              *piVar20 = *piVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          FUN_02c395d0(plVar30,0,uVar9,3,1,1);
          lVar16 = plVar30[0xb];
          piVar20 = (int *)(lVar16 + 0xc);
          do {
            iVar18 = *piVar20;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar13) {
              *piVar20 = iVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar30 + 0x20))(plVar30);
          }
        }
        lVar16 = plVar26[0x38];
        lVar17 = plVar26[0x39];
        lVar33 = plVar26[0x37];
        *(undefined4 *)(lVar33 + 0x124) = 0;
        *(undefined2 *)(lVar33 + 0x128) = 0;
        *(undefined4 *)(lVar33 + 300) = 0;
        *(undefined4 *)(lVar33 + 0x134) = 0;
        FUN_02c33414(lVar33,lVar16);
        if (*(char *)(lVar17 + 0x7c) != '\0') {
          **(undefined2 **)(lVar17 + 0x58) = 0;
          *(undefined2 *)(lVar17 + 0x7a) = 0;
        }
        FUN_02c338a4(lVar33,lVar17,lVar16,0,0);
        FUN_0283ce7c(plVar26,&local_490,plVar26[0x39],10);
        if (plVar28 != (long *)0x0) {
          do {
            iVar18 = (int)*plVar15 + -1;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar13) {
              *(int *)plVar15 = iVar18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*plVar28 + 0x10))(local_5a8);
          }
        }
        if (local_478 != (long *)0x0) {
          (**(code **)(*local_478 + 0x20))();
        }
        do {
          iVar18 = (int)*plVar1 + -1;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = iVar18;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar26 + 0x10))();
        }
        snprintf((char *)local_468,0x400,"pane_%s_T_count_b_%02d",*(char **)(param_1 + 0x20),iVar14)
        ;
        uVar31 = *(undefined8 *)(param_1 + 0x10);
        local_480 = strlen((char *)local_468);
        local_490 = &DAT_cbf29ce484222645;
        if (local_468[0] != 0) {
          local_490 = &DAT_cbf29ce484222645;
          pbVar23 = pbVar27;
          bVar5 = local_468[0];
          do {
            local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar5 != 0);
        }
        local_478 = (long *)0x0;
        if (plVar28 != (long *)0x0) {
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar13) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        local_4a0 = 0x93f00391ff39508e;
        local_4b0 = plVar28;
        pbStack_488 = local_468;
        FUN_011845f4(uVar31,&local_490,&local_4b0,&local_4a0,10);
        if (local_4b0 != (long *)0x0) {
          plVar30 = local_4b0 + 10;
          do {
            iVar18 = (int)*plVar30 + -1;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar30,0x10);
            if (bVar13) {
              *(int *)plVar30 = iVar18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*local_4b0 + 0x10))();
          }
        }
        if (local_478 != (long *)0x0) {
          (**(code **)(*local_478 + 0x20))();
        }
        snprintf((char *)local_468,0x400,"pane_%s_T_count_c_%02d",*(char **)(param_1 + 0x20),iVar14)
        ;
        if (plVar26 != (long *)0x0) {
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar13) {
              *(int *)plVar1 = (int)*plVar1 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
        }
        local_480 = strlen((char *)local_468);
        puVar10 = PTR_DAT_04379c88;
        local_490 = &DAT_cbf29ce484222645;
        if (local_468[0] != 0) {
          local_490 = &DAT_cbf29ce484222645;
          pbVar23 = pbVar27;
          bVar5 = local_468[0];
          do {
            local_490 = (undefined1 *)(((ulong)local_490 ^ (ulong)bVar5) * 0x100000001b3);
            bVar5 = *pbVar23;
            pbVar23 = pbVar23 + 1;
          } while (bVar5 != 0);
        }
        pbStack_488 = local_468;
        local_478 = (long *)0x0;
        if (plVar28 == (long *)0x0) {
          local_5b8 = (long *)0x0;
        }
        else {
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar13) {
              *(int *)plVar15 = (int)*plVar15 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          local_5b8 = plVar28;
        }
        uVar9 = (&local_528)[lVar32 * 0xc];
        plVar30 = (long *)plVar26[0x38];
        if (plVar30 == (long *)0x0) {
          lVar16 = plVar28[0x16];
          if (lVar16 != 0) {
            plVar30 = *(long **)(lVar16 + 0x270);
            if (plVar30 != *(long **)(lVar16 + 0x278)) {
              iVar18 = 0;
              do {
                plVar4 = (long *)PTR_DAT_04379c88;
                if (*plVar30 != 0) {
                  plVar4 = (long *)(*plVar30 + 0x58);
                }
                if (*plVar4 == -0x6c0ff96e00c6aa59) goto LAB_013811cc;
                plVar30 = plVar30 + 1;
                iVar18 = iVar18 + 1;
              } while (*(long **)(lVar16 + 0x278) != plVar30);
            }
          }
          iVar18 = 0;
LAB_013811cc:
          FUN_02c2e33c(plVar28,iVar18,0);
          plVar30 = (long *)plVar26[0x37];
joined_r0x013811e0:
          if (plVar30 != (long *)0x0) goto LAB_013806c0;
LAB_01380dd4:
          FUN_02c395d0(0,0,uVar9,3,1,1);
        }
        else {
          plVar4 = plVar30 + 10;
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar13) {
              *(int *)plVar4 = (int)*plVar4 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          lVar16 = plVar28[0x16];
          if (lVar16 != 0) {
            plVar21 = *(long **)(lVar16 + 0x270);
            if (plVar21 != *(long **)(lVar16 + 0x278)) {
              iVar18 = 0;
              do {
                plVar3 = (long *)puVar10;
                if (*plVar21 != 0) {
                  plVar3 = (long *)(*plVar21 + 0x58);
                }
                if (*plVar3 == -0x6c0ff96e00c6aa59) goto LAB_01380694;
                plVar21 = plVar21 + 1;
                iVar18 = iVar18 + 1;
              } while (*(long **)(lVar16 + 0x278) != plVar21);
            }
          }
          iVar18 = 0;
LAB_01380694:
          FUN_02c2e33c(plVar28,iVar18,plVar30);
          do {
            iVar18 = (int)*plVar4 + -1;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar13) {
              *(int *)plVar4 = iVar18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*plVar30 + 0x10))(plVar30);
            plVar30 = (long *)plVar26[0x37];
            goto joined_r0x013811e0;
          }
          plVar30 = (long *)plVar26[0x37];
          if (plVar30 == (long *)0x0) goto LAB_01380dd4;
LAB_013806c0:
          lVar16 = plVar30[0xb];
          if (*(undefined8 **)(lVar16 + 0x18) == (undefined8 *)0x0) goto LAB_013811e8;
          if (*(long *)(lVar16 + 0x10) == 0) {
            uVar31 = (**(code **)**(undefined8 **)(lVar16 + 0x18))();
            *(undefined8 *)(lVar16 + 0x10) = uVar31;
          }
          piVar20 = (int *)(lVar16 + 0xc);
          do {
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar13) {
              *piVar20 = *piVar20 + 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          FUN_02c395d0(plVar30,0,uVar9,3,1,1);
          lVar16 = plVar30[0xb];
          piVar20 = (int *)(lVar16 + 0xc);
          do {
            iVar18 = *piVar20;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar20,0x10);
            if (bVar13) {
              *piVar20 = iVar18 + -1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 + -1 == 0) {
            *(undefined8 *)(lVar16 + 0x18) = 0;
            (**(code **)(*plVar30 + 0x20))(plVar30);
          }
        }
        lVar16 = plVar26[0x38];
        lVar17 = plVar26[0x39];
        lVar33 = plVar26[0x37];
        *(undefined4 *)(lVar33 + 0x124) = 0;
        *(undefined2 *)(lVar33 + 0x128) = 0;
        *(undefined4 *)(lVar33 + 300) = 0;
        *(undefined4 *)(lVar33 + 0x134) = 0;
        FUN_02c33414(lVar33,lVar16);
        if (*(char *)(lVar17 + 0x7c) != '\0') {
          **(undefined2 **)(lVar17 + 0x58) = 0;
          *(undefined2 *)(lVar17 + 0x7a) = 0;
        }
        FUN_02c338a4(lVar33,lVar17,lVar16,0,0);
        FUN_0283ce7c(plVar26,&local_490,plVar26[0x39],10);
        if (plVar28 != (long *)0x0) {
          do {
            iVar18 = (int)*plVar15 + -1;
            cVar7 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
            if (bVar13) {
              *(int *)plVar15 = iVar18;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          if (iVar18 == 0) {
            (**(code **)(*plVar28 + 0x10))(local_5b8);
          }
        }
        if (local_478 != (long *)0x0) {
          (**(code **)(*local_478 + 0x20))();
        }
        do {
          iVar18 = (int)*plVar1 + -1;
          cVar7 = '\x01';
          bVar13 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar13) {
            *(int *)plVar1 = iVar18;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar18 == 0) {
          (**(code **)(*plVar26 + 0x10))(plVar26);
        }
        snprintf((char *)local_468,0x400,"pane_%s_P_icon_check_%02d",*(char **)(param_1 + 0x20),
                 iVar14);
        lVar16 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_468);
        *(byte *)(lVar16 + 0x58) =
             *(byte *)(lVar16 + 0x58) & 0xfe |
             (&local_528)[lVar32 * 0xc] <= *(uint *)(&uStack_524 + lVar32 * 0x18);
        snprintf((char *)local_468,0x400,"pane_%s_%s",*(char **)(param_1 + 0x20),
                 (&PTR_s_N_icon_item_00_04207e78)[lVar19]);
        lVar16 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_468);
        snprintf((char *)local_468,0x400,"pane_%s_%s",*(char **)(param_1 + 0x20),
                 (&PTR_s_N_icon_poke_00_04207e90)[lVar19]);
        lVar17 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_468);
        snprintf((char *)local_468,0x400,"pane_%s_%s",*(char **)(param_1 + 0x20),
                 (&PTR_s_N_icon_work_00_04207ea8)[lVar19]);
        lVar33 = FUN_01306260(*(undefined8 *)(param_1 + 0x10),local_468);
        iVar18 = local_54c[(long)iVar25 * 0xc + -1];
        if (iVar18 == 0) {
          if (lVar16 != 0) {
            *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
          }
          if (lVar17 != 0) {
            *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
          }
          if (lVar33 != 0) {
            *(byte *)(lVar33 + 0x58) = *(byte *)(lVar33 + 0x58) & 0xfe;
          }
          FUN_0284ea78(lVar24 + (ulong)(uint)(*(int *)(param_1 + 0x28) + iVar14) * 0xc0,
                       *(undefined2 *)(local_54c + lVar32 * 0xc),0);
        }
        else if (iVar18 == 1) {
          if (lVar16 != 0) {
            *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
          }
          if (lVar17 != 0) {
            *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) | 1;
          }
          if (lVar33 != 0) {
            bVar5 = *(byte *)(lVar33 + 0x58) & 0xfe;
LAB_01380be4:
            *(byte *)(lVar33 + 0x58) = bVar5;
          }
        }
        else {
          if (lVar16 != 0) {
            *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
          }
          if (lVar17 != 0) {
            *(byte *)(lVar17 + 0x58) = *(byte *)(lVar17 + 0x58) & 0xfe;
          }
          if (lVar33 != 0) {
            bVar5 = *(byte *)(lVar33 + 0x58) | 1;
            goto LAB_01380be4;
          }
        }
        iVar25 = iVar25 + 1;
      }
      lVar19 = lVar19 + 1;
    } while (lVar19 != 3);
    FUN_0137fb8c(param_1);
LAB_01380928:
    iVar14 = iVar25;
    iVar25 = iVar14;
    if (plVar26 == (long *)0x0) goto LAB_01380948;
LAB_01380930:
    iVar14 = iVar25;
    iVar25 = local_46c;
    plVar15 = plVar26 + 10;
    do {
      iVar18 = (int)*plVar15 + -1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar13) {
        *(int *)plVar15 = iVar18;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar18 != 0) goto LAB_01380948;
    (**(code **)(*plVar26 + 0x10))(plVar26);
    iVar14 = iVar25 + iVar14;
  }
  if (plVar28 != (long *)0x0) {
    plVar26 = plVar28 + 10;
    do {
      iVar25 = (int)*plVar26 + -1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar13) {
        *(int *)plVar26 = iVar25;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar28 + 0x10))(plVar28);
    }
  }
LAB_01380968:
  FUN_0137fb8c(param_1);
  if (local_4c0 != (long *)0x0) {
    plVar26 = local_4c0 + 10;
    do {
      iVar25 = (int)*plVar26 + -1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar13) {
        *(int *)plVar26 = iVar25;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*local_4c0 + 0x10))();
    }
  }
  if (plVar29 != (long *)0x0) {
    plVar26 = plVar29 + 10;
    do {
      iVar25 = (int)*plVar26 + -1;
      cVar7 = '\x01';
      bVar13 = (bool)ExclusiveMonitorPass(plVar26,0x10);
      if (bVar13) {
        *(int *)plVar26 = iVar25;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar25 == 0) {
      (**(code **)(*plVar29 + 0x10))(plVar29);
    }
  }
  return iVar14;
LAB_01380c94:
  uVar22 = uVar22 + 1;
  piVar20 = piVar20 + 6;
  if (uVar9 == uVar22) goto LAB_01380ca4;
  goto LAB_0137fe5c;
}


