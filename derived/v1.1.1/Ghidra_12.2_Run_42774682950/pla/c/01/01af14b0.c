/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01af14b0; name: FUN_01af14b0
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01af14b0(long param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  long lVar15;
  long lVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  long *plVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  undefined1 *puVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  undefined8 *puVar27;
  long lVar28;
  float fVar29;
  long *local_188;
  long *local_180;
  long *local_178;
  long *local_170;
  undefined *puStack_168;
  long *local_160;
  long *local_158;
  long *local_150;
  long *plStack_148;
  long *local_138;
  undefined1 local_130 [16];
  long *local_118;
  long *local_110;
  long *local_108;
  undefined8 local_100;
  code *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if (*(long *)(param_1 + 0x788) == 0) {
    local_108 = (long *)0x0;
  }
  else {
    FUN_00959eac(&local_108);
  }
  local_100 = (long *)0x0;
  pcStack_f8 = (code *)0x0;
  FUN_01afe5cc(&local_100,param_1 + 0x5c8);
  if (local_100 == (long *)0x0) {
    plVar26 = (long *)0x0;
LAB_01af1504:
    if (local_108 != (long *)0x0) goto LAB_01af150c;
LAB_01af1890:
    uVar13 = 0;
    goto joined_r0x01af1684;
  }
  FUN_009d0e68(&local_170);
  plVar19 = local_100;
  plVar26 = local_170;
  if (local_100 == (long *)0x0) goto LAB_01af1504;
  plVar22 = local_100 + 1;
  do {
    iVar10 = (int)*plVar22 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar4) {
      *(int *)plVar22 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_01af1504;
  local_100[2] = 0;
  if (((*PTR_DAT_04379498 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379498);
  }
  lVar15 = *(long *)PTR_DAT_043794a0;
  *(long *)PTR_DAT_043794a8 = lVar15;
  local_170 = (long *)*plVar19;
  FUN_02a44274(lVar15 + 0xd8,&local_170);
  if (local_108 == (long *)0x0) goto LAB_01af1890;
LAB_01af150c:
  if (plVar26 != (long *)0x0) {
    local_100 = (long *)0x0;
    pcStack_f8 = (code *)0x0;
    FUN_00ac3fa4(&local_100,param_1 + 0x248);
    if (local_100 == (long *)0x0) {
      local_110 = (long *)0x0;
    }
    else {
      FUN_0095dafc(&local_110);
      plVar19 = local_100;
      if (local_100 != (long *)0x0) {
        plVar22 = local_100 + 1;
        do {
          iVar10 = (int)*plVar22 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
          if (bVar4) {
            *(int *)plVar22 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          local_100[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar15 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar15;
          local_170 = (long *)*plVar19;
          FUN_02a44274(lVar15 + 0xd8,&local_170);
        }
      }
    }
    local_100 = (long *)0x0;
    pcStack_f8 = (code *)0x0;
    FUN_00ac3fa4(&local_100,local_108 + 0x49);
    FUN_0099c748(&local_118,&local_100);
    plVar19 = local_100;
    if (local_100 != (long *)0x0) {
      plVar22 = local_100 + 1;
      do {
        iVar10 = (int)*plVar22 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
        if (bVar4) {
          *(int *)plVar22 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_100[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_170 = (long *)*plVar19;
        FUN_02a44274(lVar15 + 0xd8,&local_170);
      }
    }
    if ((local_110 != (long *)0x0) && (local_118 != (long *)0x0)) {
      lVar15 = plVar26[0x3e];
      if (lVar15 != 0) {
        iVar10 = *(int *)(lVar15 + 0xc0);
      }
      else {
        iVar10 = 0;
      }
      uVar14 = 0xe;
      if (*(char *)(param_2 + 2) != '\0') {
        uVar14 = 0x10;
      }
      uVar12 = FUN_01af1360(plVar26,uVar14);
      if ((uVar12 & 1) == 0) goto LAB_01af1638;
      if (*(char *)(param_2 + 2) == '\0' && *(char *)(param_2 + 1) == '\0') {
        if (((*PTR_DAT_04379660 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar16 = *(long *)PTR_DAT_04379668;
        *(long *)PTR_DAT_04379670 = lVar16;
        puVar17 = *(undefined1 **)(lVar16 + 0x60);
        fVar29 = 0.0;
        if (puVar17 != (undefined1 *)0x0) {
          uVar12 = (long)puVar17 - ((ulong)puVar17 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar12 < 2) {
            puVar18 = (undefined1 *)((ulong)(puVar17 + -1) & 0x7f1d939d8653868);
          }
          else if (&DAT_7f1d939d8653868 < puVar17) {
            puVar18 = &DAT_7f1d939d8653868;
          }
          else {
            uVar20 = 0;
            if (puVar17 != (undefined1 *)0x0) {
              uVar20 = 0x7f1d939d8653868 / (ulong)puVar17;
            }
            puVar18 = &DAT_7f1d939d8653868 + -(uVar20 * (long)puVar17);
          }
          plVar19 = *(long **)(*(long *)(lVar16 + 0x58) + (long)puVar18 * 8);
          if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
            if (uVar12 < 2) {
              do {
                if ((undefined1 *)plVar19[1] == &DAT_7f1d939d8653868) {
                  if ((undefined1 *)plVar19[2] == &DAT_7f1d939d8653868) goto LAB_01af1a00;
                }
                else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar17 + -1)) != puVar18)
                break;
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
            else {
              do {
                puVar23 = (undefined1 *)plVar19[1];
                if (puVar23 == &DAT_7f1d939d8653868) {
                  if ((undefined1 *)plVar19[2] == &DAT_7f1d939d8653868) goto LAB_01af1a00;
                }
                else {
                  if (puVar17 <= puVar23) {
                    uVar12 = 0;
                    if (puVar17 != (undefined1 *)0x0) {
                      uVar12 = (ulong)puVar23 / (ulong)puVar17;
                    }
                    puVar23 = puVar23 + -(uVar12 * (long)puVar17);
                  }
                  if (puVar23 != puVar18) break;
                }
                plVar19 = (long *)*plVar19;
              } while (plVar19 != (long *)0x0);
            }
          }
        }
        goto LAB_01af1b38;
      }
      (**(code **)(*local_110 + 0x100))(local_110,PTR_DAT_0437a330);
      (**(code **)(*local_110 + 0x200))(0);
      uVar13 = 0;
      goto LAB_01af1b94;
    }
LAB_01af1638:
    uVar13 = 0;
    goto joined_r0x01af2724;
  }
  uVar13 = 0;
  goto LAB_01af18bc;
LAB_01af1a00:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar22 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar19[0x21];
    fVar29 = 0.0;
    if (uVar12 != 0) {
      uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar12 - 1 & 0x9930b09db3692865;
      }
      else if (uVar12 < 0x9930b09db3692866) {
        uVar21 = 0;
        if (uVar12 != 0) {
          uVar21 = 0x9930b09db3692865 / uVar12;
        }
        uVar21 = 0x9930b09db3692865 - uVar21 * uVar12;
      }
      else {
        uVar21 = 0x9930b09db3692865;
      }
      plVar24 = *(long **)(plVar19[0x20] + uVar21 * 8);
      if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar24[1] == 0x9930b09db3692865) {
              if (plVar24[2] == -0x66cf4f624c96d79b) goto LAB_01af1b20;
            }
            else if ((plVar24[1] & uVar12 - 1) != uVar21) break;
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar24[1];
            if (uVar20 == 0x9930b09db3692865) {
              if (plVar24[2] == -0x66cf4f624c96d79b) goto LAB_01af1b20;
            }
            else {
              if (uVar12 <= uVar20) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar20 / uVar12;
                }
                uVar20 = uVar20 - uVar5 * uVar12;
              }
              if (uVar20 != uVar21) break;
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
        }
      }
    }
    goto LAB_01af1b24;
  }
  goto LAB_01af1b38;
LAB_01af1b20:
  fVar29 = *(float *)(plVar24 + 6);
LAB_01af1b24:
  do {
    iVar11 = (int)*plVar22 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar4) {
      *(int *)plVar22 = iVar11;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
LAB_01af1b38:
  local_100 = (long *)CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x10) >> 0x20) * fVar29,
                               (float)*(undefined8 *)(param_2 + 0x10) * fVar29);
  pcStack_f8 = (code *)CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x18) >> 0x20) * fVar29,
                                (float)*(undefined8 *)(param_2 + 0x18) * fVar29);
  (**(code **)(*local_110 + 0x100))(local_110,&local_100);
  fVar29 = -1.0;
  if (local_100._4_4_ != 0.0) {
    fVar29 = local_100._4_4_;
  }
  (**(code **)(*local_110 + 0x200))(fVar29);
  if (*(int *)(local_118[0xb8] + 0x68) == 3) {
    uVar13 = 2;
LAB_01af1b94:
    (**(code **)(*local_110 + 0x1f8))(local_110,uVar13);
  }
  local_130 = FUN_01aef148(param_1);
  if (*(long *)(param_1 + 0x5f8) == 0) {
    local_100 = (long *)0x0;
  }
  else {
    FUN_01b04810(&local_100);
    plVar19 = local_100;
    if (local_100 != (long *)0x0) {
      FUN_025c021c(local_100);
      lVar16 = plVar19[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*plVar19 + 0x20))(plVar19);
      }
    }
  }
  if ((code *)local_110[0x15c] != (code *)0x0) {
    local_100 = (long *)CONCAT71(local_100._1_7_,1);
    (*(code *)local_110[0x15c])(local_110 + 0x160,&local_100);
  }
  (**(code **)(*local_110 + 0xf8))(local_110,1);
  plVar19 = local_110 + 0x15a;
  FUN_01839c8c(&local_170,plVar19);
  if (local_170 != (long *)0x0) {
    FUN_01839c8c(&local_100,plVar19);
    if (local_100 != (long *)0x0) {
      lVar16 = local_100[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      iVar11 = *(int *)((long)local_100 + 0x7c);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
      if (iVar11 == 2) {
        lVar16 = local_170[0x1a];
        *(undefined8 *)(lVar16 + 0xc0) = 0;
        *(undefined8 *)(lVar16 + 200) = 0;
      }
    }
    if (local_170 != (long *)0x0) {
      lVar16 = local_170[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
  }
  FUN_01a9d5dc(local_110 + 0x12a,local_118 + 0x12a);
  plVar19 = local_110;
  if (local_110[0xc5] == 0) {
    local_100 = (long *)0x0;
LAB_01af1c94:
    *(undefined4 *)(plVar19 + 0x11c) = 0;
    *(undefined4 *)(plVar19 + 0x11d) = 0;
  }
  else {
    FUN_009b8474(&local_100);
    if (local_100 == (long *)0x0) goto LAB_01af1c94;
    FUN_018281e0();
    if (local_100 != (long *)0x0) {
      lVar16 = local_100[0xb];
      piVar1 = (int *)(lVar16 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar16 + 0x18) = 0;
        (**(code **)(*local_100 + 0x20))();
      }
    }
  }
  *(undefined1 *)(local_110[0xb8] + 0x99) = 1;
  FUN_009c69bc(&local_100);
  *(undefined1 (*) [16])(local_100 + 0x1a) = local_130;
  *(undefined1 *)(local_100 + 0x1c) = 1;
  if (local_100 != (long *)0x0) {
    lVar16 = local_100[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  FUN_009c69bc(&local_100,local_110);
  plVar19 = local_100;
  FUN_009c69bc(&local_170,local_108);
  lVar28 = local_170[0x19];
  lVar16 = local_170[0x18];
  *(undefined1 *)(plVar19 + 0x1c) = 1;
  plVar19[0x19] = lVar28;
  plVar19[0x18] = lVar16;
  if (local_170 != (long *)0x0) {
    lVar16 = local_170[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  if (local_100 != (long *)0x0) {
    lVar16 = local_100[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  plVar19 = local_110;
  FUN_009c69bc(&local_170,local_108);
  pcStack_f8 = (code *)local_170[0x19];
  local_100 = (long *)local_170[0x18];
  FUN_01a83770(plVar19,local_130,&local_100);
  if (local_170 != (long *)0x0) {
    lVar16 = local_170[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_170 + 0x20))();
    }
  }
  plVar19 = local_110;
  (**(code **)(*local_118 + 0x10))(&local_100);
  local_170 = (long *)0x0;
  puStack_168 = (undefined *)0x0;
  FUN_009cca14(&local_170,&local_100);
  plVar22 = local_100;
  if (local_100 != (long *)0x0) {
    plVar24 = local_100 + 1;
    do {
      iVar11 = (int)*plVar24 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar4) {
        *(int *)plVar24 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_100[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar11 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_150 = (long *)*plVar22;
      FUN_02a44274(lVar16 + 0xd8,&local_150);
    }
  }
  FUN_01b1a7b8(plVar19,&local_170);
  plVar19 = local_170;
  if (local_170 != (long *)0x0) {
    plVar22 = local_170 + 1;
    do {
      iVar11 = (int)*plVar22 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = iVar11;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 == 0) {
      local_170[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar11 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_100 = (long *)*plVar19;
      FUN_02a44274(lVar16 + 0xd8,&local_100);
    }
  }
  FUN_01a8b7b8(local_110);
  *(undefined4 *)(local_110 + 0x145) = 0;
  *(undefined1 *)((long)local_110 + 0xa25) = 0;
  *(undefined4 *)(local_110 + 0x144) = 0;
  *(undefined1 *)((long)local_110 + 0xa1d) = 0;
  if (lVar15 != 0 && iVar10 == 10) {
    FUN_01a8ac20();
  }
  local_100 = (long *)0x0;
  pcStack_f8 = (code *)0x0;
  FUN_00ac4814(&local_100,local_110 + 0xc5);
  if (local_100 == (long *)0x0) {
    local_150 = (long *)0x0;
    plVar19 = local_150;
  }
  else {
    FUN_009b8474(&local_150);
    plVar22 = local_100;
    plVar19 = local_150;
    if (local_100 != (long *)0x0) {
      plVar24 = local_100 + 1;
      do {
        iVar10 = (int)*plVar24 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
        if (bVar4) {
          *(int *)plVar24 = iVar10;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 == 0) {
        local_100[2] = 0;
        if ((*PTR_DAT_04379498 & 1) == 0) {
          iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
          if (iVar10 != 0) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_170 = (long *)*plVar22;
        FUN_02a44274(lVar15 + 0xd8,&local_170);
        plVar19 = local_150;
      }
    }
  }
  local_150 = plVar19;
  if (plVar19 != (long *)0x0) {
    if (plVar19[0x4b] == 0) {
      local_100 = (long *)0x0;
LAB_01af1ef8:
      cVar3 = (char)plVar19[0x3e];
    }
    else {
      FUN_0182b7ac(&local_100);
      if (local_100 == (long *)0x0) goto LAB_01af1ef8;
      FUN_018172a8();
      if (local_100 == (long *)0x0) goto LAB_01af1ef8;
      lVar15 = local_100[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 != 0) goto LAB_01af1ef8;
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
      cVar3 = (char)plVar19[0x3e];
    }
    if (cVar3 != '\0') {
      *(undefined1 *)(plVar19 + 0x3e) = 0;
    }
    *(undefined1 *)(local_150 + 0x4a) = 1;
    if (local_150 != (long *)0x0) {
      lVar15 = local_150[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_150 + 0x20))();
      }
    }
  }
  local_100 = (long *)0x0;
  pcStack_f8 = (code *)0x0;
  FUN_01a9e67c(&local_100,local_110 + 0xc3);
  if (local_100 == (long *)0x0) {
    local_150 = (long *)0x0;
LAB_01af1f50:
    if (local_150 == (long *)0x0) goto LAB_01af1f88;
LAB_01af1f58:
    (**(code **)(*local_150 + 0xf0))();
    if (local_150 == (long *)0x0) goto LAB_01af1f88;
    lVar15 = local_150[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 != 0) goto LAB_01af1f88;
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*local_150 + 0x20))();
    cVar3 = *(char *)(param_2 + 1);
  }
  else {
    FUN_01aa5214(&local_150);
    plVar19 = local_100;
    if (local_100 == (long *)0x0) goto LAB_01af1f50;
    plVar22 = local_100 + 1;
    do {
      iVar10 = (int)*plVar22 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 != 0) goto LAB_01af1f50;
    local_100[2] = 0;
    if ((*PTR_DAT_04379498 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
      if (iVar10 != 0) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
    }
    lVar15 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar15;
    local_170 = (long *)*plVar19;
    FUN_02a44274(lVar15 + 0xd8,&local_170);
    if (local_150 != (long *)0x0) goto LAB_01af1f58;
LAB_01af1f88:
    cVar3 = *(char *)(param_2 + 1);
  }
  if (cVar3 == '\0') {
    if (*(long *)(param_1 + 0x7b8) == 0) {
      local_138 = (long *)0x0;
    }
    else {
      FUN_01b04bc8(&local_138);
      if (local_138 != (long *)0x0) {
        FUN_009c69bc(&local_100,local_108);
        plStack_148 = (long *)local_100[0x1b];
        local_150 = (long *)local_100[0x1a];
        if (local_100 != (long *)0x0) {
          lVar15 = local_100[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_100 + 0x20))();
          }
        }
        local_170 = (long *)&DAT_d5c964d358df1941;
        FUN_026b7cf0(&local_100,&local_170);
        FUN_01a74058(&local_170,local_108,&local_d0,PTR_DAT_0437a330);
        if ((char)local_170 != '\0') {
          local_170 = (long *)((ulong)local_170 & 0xffffffffffffff00);
          local_150 = local_160;
          plStack_148 = local_158;
        }
        FUN_02635430(local_138,*(undefined4 *)((long)local_108 + 0x59c),&local_150);
        if (local_b8 != (long *)0x0) {
          (**(code **)(*local_b8 + 0x20))();
        }
        FUN_00984b00(&local_100);
        if (local_138 != (long *)0x0) {
          lVar15 = local_138[0xb];
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar15 + 0x18) = 0;
            (**(code **)(*local_138 + 0x20))();
          }
        }
      }
    }
  }
  local_100 = (long *)0x0;
  pcStack_f8 = (code *)0x0;
  FUN_01afe83c(&local_100,param_1 + 0x7a8);
  plVar19 = local_100;
  if (local_100 == (long *)0x0) {
    local_150 = (long *)0x0;
  }
  else {
    FUN_01b04d80(&local_150,local_100);
    plVar22 = plVar19 + 1;
    do {
      iVar10 = (int)*plVar22 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar19[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar10 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_170 = (long *)*plVar19;
      FUN_02a44274(lVar15 + 0xd8,&local_170);
    }
  }
  if (local_150 != (long *)0x0) {
    FUN_025fa054(local_150,param_2);
    if (local_150 != (long *)0x0) {
      lVar15 = local_150[0xb];
      piVar1 = (int *)(lVar15 + 0xc);
      do {
        iVar10 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar10 + -1 == 0) {
        *(undefined8 *)(lVar15 + 0x18) = 0;
        (**(code **)(*local_150 + 0x20))();
      }
    }
  }
  FUN_009c69bc(&local_100,local_108);
  plStack_148 = (long *)local_100[0x1b];
  local_150 = (long *)local_100[0x1a];
  if (local_100 != (long *)0x0) {
    lVar15 = local_100[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_100 + 0x20))();
    }
  }
  if ((*PTR_DAT_04379c28 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04379c28);
    if (iVar10 != 0) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
  }
  uVar13 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar13;
  lVar15 = (long)*(int *)((long)local_108 + 0x59c) * 0x18;
  local_90 = 0;
  uStack_88 = 0;
  local_160 = *(long **)(&DAT_0423da38 + lVar15);
  local_170 = *(long **)(&DAT_0423da28 + lVar15);
  puStack_168 = (&PTR_s_PLAY_PM_RIDE_SHINING_RUNNING_THR_0423da30)
                [(long)*(int *)((long)local_108 + 0x59c) * 3];
  local_a0 = 0;
  uStack_98 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_b8 = (long *)0x0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = (long *)0x0;
  pcStack_f8 = (code *)0x0;
  local_158 = (long *)0x0;
  FUN_0291356c(uVar13,&local_170,&local_150,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_100,0,0);
  pcVar9 = pcStack_f8;
  if (pcStack_f8 == (code *)0x0) {
    pcStack_f8 = (code *)0x0;
  }
  else {
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = (long *)0x0;
    pcStack_f8 = (code *)0x0;
    (*pcVar9)(&local_e0);
  }
  if (local_158 != (long *)0x0) {
    (**(code **)(*local_158 + 0x20))();
  }
  puVar8 = PTR_DAT_04382230;
  puVar7 = PTR_DAT_04382228;
  lVar15 = *(long *)(param_1 + 0x768);
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar10 = *(int *)(lVar15 + 0xc);
    do {
      plVar19 = *(long **)(lVar15 + 0x10);
      if ((*puVar7 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(puVar7);
        if (iVar11 != 0) {
          uVar13 = FUN_018cf5f0();
          *(undefined8 *)puVar8 = uVar13;
          __cxa_guard_release(puVar7);
        }
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01af20e4;
        if (plVar19 == (long *)puVar8) break;
        plVar19 = (long *)*plVar19;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            plVar19 = (long *)(lVar15 + -0x50);
            if ((*PTR_DAT_04379660 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_04379660);
              if (iVar10 != 0) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
            }
            lVar16 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar16;
            uVar12 = *(ulong *)(lVar16 + 0x60);
            uVar14 = 0;
            if (uVar12 == 0) goto LAB_01af2dd8;
            uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              uVar21 = uVar12 - 1 & 0xcd6deab880d35977;
            }
            else if (uVar12 < 0xcd6deab880d35978) {
              uVar21 = 0;
              if (uVar12 != 0) {
                uVar21 = 0xcd6deab880d35977 / uVar12;
              }
              uVar21 = 0xcd6deab880d35977 - uVar21 * uVar12;
            }
            else {
              uVar21 = 0xcd6deab880d35977;
            }
            plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
            if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
            goto LAB_01af2dd8;
            if (1 < uVar20) goto LAB_01af28a8;
            goto LAB_01af2c6c;
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
  goto LAB_01af20e4;
LAB_01af28a8:
  do {
    uVar20 = plVar22[1];
    if (uVar20 == 0xcd6deab880d35977) {
      if (plVar22[2] == -0x329215477f2ca689) goto LAB_01af2ca0;
    }
    else {
      if (uVar12 <= uVar20) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar20 / uVar12;
        }
        uVar20 = uVar20 - uVar5 * uVar12;
      }
      if (uVar20 != uVar21) break;
    }
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
  goto LAB_01af2dd8;
  while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
LAB_01af2c6c:
    if (plVar22[1] == 0xcd6deab880d35977) {
      if (plVar22[2] == -0x329215477f2ca689) goto LAB_01af2ca0;
    }
    else if ((plVar22[1] & uVar12 - 1) != uVar21) break;
  }
LAB_01af2dd8:
  FUN_01bb1904(uVar14,plVar19);
  FUN_01bfcca8(plVar19,PTR_DAT_0437a330);
  FUN_009c69bc(&local_178,param_1);
  FUN_01bfc964(plVar19,&local_178);
  if (local_178 != (long *)0x0) {
    lVar16 = local_178[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_178 + 0x20))();
    }
  }
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar15 = *(long *)(param_1 + 0x758);
    pbVar6 = PTR_DAT_04382210;
    puVar27 = (undefined8 *)PTR_DAT_04382218;
  }
  else {
LAB_01af20e4:
    lVar15 = *(long *)(param_1 + 0x758);
    pbVar6 = PTR_DAT_04382210;
    puVar27 = (undefined8 *)PTR_DAT_04382218;
  }
  PTR_DAT_04382210 = pbVar6;
  PTR_DAT_04382218 = (undefined *)puVar27;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar10 = *(int *)(lVar15 + 0xc);
    do {
      plVar19 = *(long **)(lVar15 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(pbVar6);
        if (iVar11 != 0) {
          uVar13 = FUN_018cf5f0();
          *puVar27 = uVar13;
          __cxa_guard_release(pbVar6);
        }
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01af20ec;
        if (plVar19 == puVar27) break;
        plVar19 = (long *)*plVar19;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar15 = *(long *)(lVar15 + 0x18);
          if (lVar15 != 0) {
            plVar19 = (long *)(lVar15 + -0x50);
            if ((*PTR_DAT_04379660 & 1) == 0) {
              iVar10 = __cxa_guard_acquire(PTR_DAT_04379660);
              if (iVar10 != 0) {
                FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379660);
              }
            }
            lVar16 = *(long *)PTR_DAT_04379668;
            *(long *)PTR_DAT_04379670 = lVar16;
            uVar12 = *(ulong *)(lVar16 + 0x60);
            uVar14 = 0;
            if (uVar12 == 0) goto LAB_01af31b4;
            uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
            uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
            uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar20 < 2) {
              uVar21 = uVar12 - 1 & 0xcd6deab880d35977;
            }
            else if (uVar12 < 0xcd6deab880d35978) {
              uVar21 = 0;
              if (uVar12 != 0) {
                uVar21 = 0xcd6deab880d35977 / uVar12;
              }
              uVar21 = 0xcd6deab880d35977 - uVar21 * uVar12;
            }
            else {
              uVar21 = 0xcd6deab880d35977;
            }
            plVar22 = *(long **)(*(long *)(lVar16 + 0x58) + uVar21 * 8);
            if ((plVar22 == (long *)0x0) || (plVar22 = (long *)*plVar22, plVar22 == (long *)0x0))
            goto LAB_01af31b4;
            if (1 < uVar20) goto LAB_01af2fac;
            goto LAB_01af3048;
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
  goto LAB_01af20ec;
LAB_01af2ca0:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar24 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar4) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar22[0x21];
    uVar14 = 0;
    if (uVar12 != 0) {
      uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar12 - 1 & 0x3a626f835b9bdfb1;
      }
      else if (uVar12 < 0x3a626f835b9bdfb2) {
        uVar21 = 0;
        if (uVar12 != 0) {
          uVar21 = 0x3a626f835b9bdfb1 / uVar12;
        }
        uVar21 = 0x3a626f835b9bdfb1 - uVar21 * uVar12;
      }
      else {
        uVar21 = 0x3a626f835b9bdfb1;
      }
      plVar25 = *(long **)(plVar22[0x20] + uVar21 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar25[1] == 0x3a626f835b9bdfb1) {
              if (plVar25[2] == 0x3a626f835b9bdfb1) goto LAB_01af2dc0;
            }
            else if ((plVar25[1] & uVar12 - 1) != uVar21) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar25[1];
            if (uVar20 == 0x3a626f835b9bdfb1) {
              if (plVar25[2] == 0x3a626f835b9bdfb1) goto LAB_01af2dc0;
            }
            else {
              if (uVar12 <= uVar20) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar20 / uVar12;
                }
                uVar20 = uVar20 - uVar5 * uVar12;
              }
              if (uVar20 != uVar21) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01af2dc4;
  }
  goto LAB_01af2dd8;
LAB_01af2dc0:
  uVar14 = (undefined4)plVar25[6];
LAB_01af2dc4:
  do {
    iVar10 = (int)*plVar24 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar4) {
      *(int *)plVar24 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar22 + 0x10))();
  }
  goto LAB_01af2dd8;
LAB_01af2fac:
  do {
    uVar20 = plVar22[1];
    if (uVar20 == 0xcd6deab880d35977) {
      if (plVar22[2] == -0x329215477f2ca689) goto LAB_01af307c;
    }
    else {
      if (uVar12 <= uVar20) {
        uVar5 = 0;
        if (uVar12 != 0) {
          uVar5 = uVar20 / uVar12;
        }
        uVar20 = uVar20 - uVar5 * uVar12;
      }
      if (uVar20 != uVar21) break;
    }
    plVar22 = (long *)*plVar22;
  } while (plVar22 != (long *)0x0);
  goto LAB_01af31b4;
LAB_01af307c:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar24 = plVar22 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar4) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar22[0x21];
    uVar14 = 0;
    if (uVar12 != 0) {
      uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar12 - 1 & 0x698000f53b96ea96;
      }
      else if (uVar12 < 0x698000f53b96ea97) {
        uVar21 = 0;
        if (uVar12 != 0) {
          uVar21 = 0x698000f53b96ea96 / uVar12;
        }
        uVar21 = 0x698000f53b96ea96 - uVar21 * uVar12;
      }
      else {
        uVar21 = 0x698000f53b96ea96;
      }
      plVar25 = *(long **)(plVar22[0x20] + uVar21 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar20 < 2) {
          do {
            if (plVar25[1] == 0x698000f53b96ea96) {
              if (plVar25[2] == 0x698000f53b96ea96) goto LAB_01af319c;
            }
            else if ((plVar25[1] & uVar12 - 1) != uVar21) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar25[1];
            if (uVar20 == 0x698000f53b96ea96) {
              if (plVar25[2] == 0x698000f53b96ea96) goto LAB_01af319c;
            }
            else {
              if (uVar12 <= uVar20) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar20 / uVar12;
                }
                uVar20 = uVar20 - uVar5 * uVar12;
              }
              if (uVar20 != uVar21) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_01af31a0;
  }
  goto LAB_01af31b4;
LAB_01af319c:
  uVar14 = (undefined4)plVar25[6];
LAB_01af31a0:
  do {
    iVar10 = (int)*plVar24 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar4) {
      *(int *)plVar24 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar22 + 0x10))();
  }
  goto LAB_01af31b4;
LAB_01af2570:
  plVar19 = (long *)plVar19[3];
  if (plVar19 != (long *)0x0) {
    plVar22 = plVar19 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar4) {
        *(int *)plVar22 = (int)*plVar22 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar19[0x14];
    if (uVar12 == 0) {
      uVar14 = 0;
    }
    else {
      uVar20 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar20 = (uVar20 & 0x3333333333333333) + (uVar20 >> 2 & 0x3333333333333333);
      uVar20 = (uVar20 + (uVar20 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar20 < 2) {
        uVar21 = uVar12 - 1 & 0x56d93c65154fef71;
      }
      else if (uVar12 < 0x56d93c65154fef72) {
        uVar21 = 0;
        if (uVar12 != 0) {
          uVar21 = 0x56d93c65154fef71 / uVar12;
        }
        uVar21 = 0x56d93c65154fef71 - uVar21 * uVar12;
      }
      else {
        uVar21 = 0x56d93c65154fef71;
      }
      plVar24 = *(long **)(plVar19[0x13] + uVar21 * 8);
      if (plVar24 == (long *)0x0) {
        uVar14 = 0;
      }
      else {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) {
          uVar14 = 0;
        }
        else if (uVar20 < 2) {
          do {
            if (plVar24[1] == 0x56d93c65154fef71) {
              if (plVar24[2] == 0x56d93c65154fef71) goto LAB_01af2694;
            }
            else if ((plVar24[1] & uVar12 - 1) != uVar21) {
              uVar14 = 0;
              break;
            }
            plVar24 = (long *)*plVar24;
            uVar14 = 0;
          } while (plVar24 != (long *)0x0);
        }
        else {
          do {
            uVar20 = plVar24[1];
            if (uVar20 == 0x56d93c65154fef71) {
              if (plVar24[2] == 0x56d93c65154fef71) goto LAB_01af2694;
            }
            else {
              if (uVar12 <= uVar20) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar20 / uVar12;
                }
                uVar20 = uVar20 - uVar5 * uVar12;
              }
              if (uVar20 != uVar21) {
                uVar14 = 0;
                goto LAB_01af2698;
              }
            }
            plVar24 = (long *)*plVar24;
          } while (plVar24 != (long *)0x0);
          uVar14 = 0;
        }
      }
    }
    goto LAB_01af2698;
  }
  goto LAB_01af273c;
LAB_01af2694:
  uVar14 = (undefined4)plVar24[6];
LAB_01af2698:
  do {
    iVar10 = (int)*plVar22 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar22,0x10);
    if (bVar4) {
      *(int *)plVar22 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar19 + 0x10))();
  }
  goto LAB_01af26ac;
  while (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0) {
LAB_01af3048:
    if (plVar22[1] == 0xcd6deab880d35977) {
      if (plVar22[2] == -0x329215477f2ca689) goto LAB_01af307c;
    }
    else if ((plVar22[1] & uVar12 - 1) != uVar21) break;
  }
LAB_01af31b4:
  FUN_01c39c90(uVar14,plVar19);
  FUN_01bfcca8(plVar19,PTR_DAT_0437a330);
  FUN_009c69bc(&local_180,param_1);
  FUN_01bfc964(plVar19,&local_180);
  if (local_180 != (long *)0x0) {
    lVar16 = local_180[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_180 + 0x20))();
    }
  }
  lVar15 = *(long *)(lVar15 + 8);
  piVar1 = (int *)(lVar15 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar10 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar15 + 0x18) = 0;
    (**(code **)(*plVar19 + 0x20))(plVar19);
    lVar15 = *(long *)(param_1 + 0x778);
    pbVar6 = PTR_DAT_04381ed8;
    puVar27 = (undefined8 *)PTR_DAT_04381ee0;
  }
  else {
LAB_01af20ec:
    lVar15 = *(long *)(param_1 + 0x778);
    pbVar6 = PTR_DAT_04381ed8;
    puVar27 = (undefined8 *)PTR_DAT_04381ee0;
  }
  PTR_DAT_04381ed8 = pbVar6;
  PTR_DAT_04381ee0 = (undefined *)puVar27;
  if ((lVar15 != 0) && (*(int *)(lVar15 + 0xc) != 0)) {
    piVar1 = (int *)(lVar15 + 0xc);
    iVar10 = *(int *)(lVar15 + 0xc);
    do {
      plVar19 = *(long **)(lVar15 + 0x10);
      if ((*pbVar6 & 1) == 0) {
        iVar11 = __cxa_guard_acquire(pbVar6);
        if (iVar11 != 0) {
          uVar13 = FUN_018cf5f0();
          *puVar27 = uVar13;
          __cxa_guard_release(pbVar6);
        }
      }
      while( true ) {
        if (plVar19 == (long *)0x0) goto LAB_01af20f4;
        if (plVar19 == puVar27) break;
        plVar19 = (long *)*plVar19;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01af3268;
        lVar15 = *(long *)(lVar15 + 0x18);
        if (lVar15 != 0) {
          plVar19 = (long *)(lVar15 + -0x50);
          FUN_01bfcca8(plVar19,PTR_DAT_0437a330);
          FUN_009c69bc(&local_188,param_1);
          FUN_01bfc964(plVar19,&local_188);
          if (local_188 != (long *)0x0) {
            lVar16 = local_188[0xb];
            piVar1 = (int *)(lVar16 + 0xc);
            do {
              iVar10 = *piVar1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar10 + -1 == 0) {
              *(undefined8 *)(lVar16 + 0x18) = 0;
              (**(code **)(*local_188 + 0x20))();
            }
          }
          lVar15 = *(long *)(lVar15 + 8);
          piVar1 = (int *)(lVar15 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 != 0) break;
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*plVar19 + 0x20))(plVar19);
          cVar3 = *(char *)(param_2 + 3);
          goto joined_r0x01af3370;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01af3268:
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01af20f4:
  cVar3 = *(char *)(param_2 + 3);
joined_r0x01af3370:
  if (cVar3 != '\0') {
    if ((*PTR_DAT_04379660 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04379660);
      if (iVar10 != 0) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
    }
    lVar15 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar15;
    puVar17 = *(undefined1 **)(lVar15 + 0x60);
    if (puVar17 == (undefined1 *)0x0) {
LAB_01af273c:
      uVar14 = 0;
    }
    else {
      uVar12 = (long)puVar17 - ((ulong)puVar17 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        puVar18 = (undefined1 *)((ulong)(puVar17 + -1) & 0x7c08eae870e235e0);
      }
      else if (&DAT_7c08eae870e235e0 < puVar17) {
        puVar18 = &DAT_7c08eae870e235e0;
      }
      else {
        uVar20 = 0;
        if (puVar17 != (undefined1 *)0x0) {
          uVar20 = 0x7c08eae870e235e0 / (ulong)puVar17;
        }
        puVar18 = &DAT_7c08eae870e235e0 + -(uVar20 * (long)puVar17);
      }
      plVar19 = *(long **)(*(long *)(lVar15 + 0x58) + (long)puVar18 * 8);
      if ((plVar19 == (long *)0x0) || (plVar19 = (long *)*plVar19, plVar19 == (long *)0x0))
      goto LAB_01af273c;
      if (1 < uVar12) {
        do {
          puVar23 = (undefined1 *)plVar19[1];
          if (puVar23 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar19[2] == &DAT_7c08eae870e235e0) goto LAB_01af2570;
          }
          else {
            if (puVar17 <= puVar23) {
              uVar12 = 0;
              if (puVar17 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar23 / (ulong)puVar17;
              }
              puVar23 = puVar23 + -(uVar12 * (long)puVar17);
            }
            if (puVar23 != puVar18) break;
          }
          plVar19 = (long *)*plVar19;
        } while (plVar19 != (long *)0x0);
        goto LAB_01af273c;
      }
      do {
        if ((undefined1 *)plVar19[1] == &DAT_7c08eae870e235e0) {
          if ((undefined1 *)plVar19[2] == &DAT_7c08eae870e235e0) goto LAB_01af2570;
        }
        else if ((undefined1 *)((ulong)plVar19[1] & (ulong)(puVar17 + -1)) != puVar18)
        goto LAB_01af273c;
        plVar19 = (long *)*plVar19;
        uVar14 = 0;
      } while (plVar19 != (long *)0x0);
    }
LAB_01af26ac:
    *(undefined4 *)(param_1 + 0x8f0) = uVar14;
  }
  puVar27 = *(undefined8 **)(param_1 + 0x788);
  *(undefined8 *)(param_1 + 0x788) = 0;
  if (puVar27 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar27 + 1);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      puVar27[2] = 0;
      if ((*PTR_DAT_04379498 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(PTR_DAT_04379498);
        if (iVar10 != 0) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
      }
      lVar15 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar15;
      local_100 = (long *)*puVar27;
      FUN_02a44274(lVar15 + 0xd8,&local_100);
    }
  }
  uVar13 = 1;
  *(undefined8 *)(param_1 + 0x790) = 0;
joined_r0x01af2724:
  if (local_118 != (long *)0x0) {
    lVar15 = local_118[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_118 + 0x20))();
    }
  }
  if (local_110 != (long *)0x0) {
    lVar15 = local_110[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_110 + 0x20))();
    }
  }
joined_r0x01af1684:
  if (plVar26 != (long *)0x0) {
    lVar15 = plVar26[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  if (local_108 != (long *)0x0) {
LAB_01af18bc:
    lVar15 = local_108[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_108 + 0x20))();
    }
  }
  return uVar13;
}


