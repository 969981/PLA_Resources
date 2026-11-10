/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017fb3ec; name: FUN_017fb3ec
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_017fb3ec(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  uint uVar1;
  int *piVar2;
  byte bVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long *plVar13;
  size_t sVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  long **pplVar17;
  long lVar18;
  ulong uVar19;
  undefined1 *puVar20;
  long *plVar21;
  undefined1 *puVar22;
  ulong uVar23;
  ulong uVar24;
  long *plVar25;
  long *plVar26;
  undefined8 uVar27;
  char *__s;
  long lVar28;
  undefined4 uVar29;
  float fVar30;
  undefined **local_1b0 [2];
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined8 local_180;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined2 local_f0;
  undefined2 uStack_ee;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined2 local_c8;
  undefined2 uStack_c6;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  long *local_a8;
  long local_a0;
  long lStack_98;
  long *local_88;
  long *local_80 [2];
  
  puVar9 = PTR_DAT_0437a668;
  puVar8 = PTR_DAT_0437a660;
  lVar28 = *(long *)(param_1 + 0x70);
  if (lVar28 == 0) {
LAB_017fb428:
    plVar26 = (long *)0x0;
    if (*(long *)(param_1 + 0x80) == 0) goto LAB_017fb430;
LAB_017fc1f0:
    FUN_00cfac20(local_80);
  }
  else {
    if (*(int *)(lVar28 + 0xc) != 0) {
      piVar2 = (int *)(lVar28 + 0xc);
      iVar11 = *(int *)(lVar28 + 0xc);
      do {
        puVar15 = *(undefined8 **)(lVar28 + 0x10);
        if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar12 != 0)) {
            uVar27 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar27;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)puVar8 = PTR_DAT_043794d8;
          __cxa_guard_release(puVar9);
        }
        if (puVar15 == (undefined8 *)0x0) goto LAB_017fc240;
        while (puVar15 != (undefined8 *)puVar8) {
          puVar15 = (undefined8 *)*puVar15;
          if (puVar15 == (undefined8 *)0x0) goto LAB_017fb428;
        }
        iVar12 = *piVar2;
        if (iVar12 == iVar11) {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar6) {
            *piVar2 = iVar11 + 1;
            cVar5 = ExclusiveMonitorsStatus();
          }
          if (cVar5 == '\0') {
            plVar26 = (long *)0x0;
            if (*(long *)(lVar28 + 0x18) != 0) {
              plVar26 = (long *)(*(long *)(lVar28 + 0x18) + -0x50);
            }
            lVar28 = *(long *)(param_1 + 0x80);
            goto joined_r0x017fc1ec;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
      goto LAB_017fb428;
    }
LAB_017fc240:
    plVar26 = (long *)0x0;
    lVar28 = *(long *)(param_1 + 0x80);
joined_r0x017fc1ec:
    if (lVar28 != 0) goto LAB_017fc1f0;
LAB_017fb430:
    local_80[0] = (long *)0x0;
  }
  if ((plVar26 != (long *)0x0) && (local_80[0] != (long *)0x0)) {
    local_170 = (long *)0x0;
    uStack_168 = 0;
    FUN_00ac3fa4(&local_170,local_80[0] + 0x49);
    FUN_0099c748(&local_88,&local_170);
    plVar21 = local_170;
    if (local_170 != (long *)0x0) {
      plVar13 = local_170 + 1;
      do {
        iVar11 = (int)*plVar13 + -1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar6) {
          *(int *)plVar13 = iVar11;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      if (iVar11 == 0) {
        local_170[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar28 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar28;
        local_1b0[0] = (undefined **)*plVar21;
        FUN_02a44274(lVar28 + 0xd8,local_1b0);
      }
    }
    puVar8 = PTR_DAT_04379660;
    if (local_88 != (long *)0x0) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar10 = PTR_DAT_04379670;
      puVar9 = PTR_DAT_04379668;
      lVar28 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar28;
      puVar16 = *(undefined1 **)(lVar28 + 0x60);
      uVar29 = 0;
      if (puVar16 != (undefined1 *)0x0) {
        uVar19 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
        uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
        uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar19 < 2) {
          puVar20 = (undefined1 *)((ulong)(puVar16 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar20 = &DAT_7c08eae870e235e0;
          if (puVar16 < (undefined1 *)0x7c08eae870e235e1) {
            uVar23 = 0;
            if (puVar16 != (undefined1 *)0x0) {
              uVar23 = 0x7c08eae870e235e0 / (ulong)puVar16;
            }
            puVar20 = &DAT_7c08eae870e235e0 + -(uVar23 * (long)puVar16);
          }
        }
        plVar21 = *(long **)(*(long *)(lVar28 + 0x58) + (long)puVar20 * 8);
        if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
          if (uVar19 < 2) {
            do {
              if ((undefined1 *)plVar21[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar21[2] == &DAT_7c08eae870e235e0) goto LAB_017fb588;
              }
              else if ((undefined1 *)((ulong)plVar21[1] & (ulong)(puVar16 + -1)) != puVar20) break;
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
          else {
            do {
              puVar22 = (undefined1 *)plVar21[1];
              if (puVar22 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar21[2] == &DAT_7c08eae870e235e0) goto LAB_017fb588;
              }
              else {
                if (puVar16 <= puVar22) {
                  uVar19 = 0;
                  if (puVar16 != (undefined1 *)0x0) {
                    uVar19 = (ulong)puVar22 / (ulong)puVar16;
                  }
                  puVar22 = puVar22 + -(uVar19 * (long)puVar16);
                }
                if (puVar22 != puVar20) break;
              }
              plVar21 = (long *)*plVar21;
            } while (plVar21 != (long *)0x0);
          }
        }
      }
      goto LAB_017fb6e4;
    }
  }
  uVar27 = 0;
  goto joined_r0x017fbaf0;
LAB_017fb588:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar13 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar19 = plVar21[0x21];
    uVar29 = 0;
    if (uVar19 != 0) {
      uVar23 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar19 - 1 & 0x2278be0200cee497;
      }
      else if (uVar19 < 0x2278be0200cee498) {
        uVar24 = 0;
        if (uVar19 != 0) {
          uVar24 = 0x2278be0200cee497 / uVar19;
        }
        uVar24 = 0x2278be0200cee497 - uVar24 * uVar19;
      }
      else {
        uVar24 = 0x2278be0200cee497;
      }
      plVar25 = *(long **)(plVar21[0x20] + uVar24 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar25[1] == 0x2278be0200cee497) {
              if (plVar25[2] == 0x2278be0200cee497) goto LAB_017fb6cc;
            }
            else if ((plVar25[1] & uVar19 - 1) != uVar24) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar25[1];
            if (uVar23 == 0x2278be0200cee497) {
              if (plVar25[2] == 0x2278be0200cee497) goto LAB_017fb6cc;
            }
            else {
              if (uVar19 <= uVar23) {
                uVar7 = 0;
                if (uVar19 != 0) {
                  uVar7 = uVar23 / uVar19;
                }
                uVar23 = uVar23 - uVar7 * uVar19;
              }
              if (uVar23 != uVar24) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_017fb6d0;
  }
LAB_017fb6e4:
  bVar3 = *puVar8;
  goto joined_r0x017fbb68;
LAB_017fb6cc:
  uVar29 = (undefined4)plVar25[6];
LAB_017fb6d0:
  do {
    iVar11 = (int)*plVar13 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *(int *)plVar13 = iVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 != 0) goto LAB_017fb6e4;
  (**(code **)(*plVar21 + 0x10))();
  bVar3 = *puVar8;
joined_r0x017fbb68:
  if (((bVar3 & 1) == 0) && (iVar11 = __cxa_guard_acquire(PTR_DAT_04379660), iVar11 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar28 = *(long *)puVar9;
  *(long *)puVar10 = lVar28;
  puVar16 = *(undefined1 **)(lVar28 + 0x60);
  fVar30 = 0.0;
  if (puVar16 != (undefined1 *)0x0) {
    uVar19 = (long)puVar16 - ((ulong)puVar16 >> 1 & 0x5555555555555555);
    uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
    uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar19 < 2) {
      puVar20 = (undefined1 *)((ulong)(puVar16 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar20 = &DAT_7c08eae870e235e0;
      if (puVar16 < (undefined1 *)0x7c08eae870e235e1) {
        uVar23 = 0;
        if (puVar16 != (undefined1 *)0x0) {
          uVar23 = 0x7c08eae870e235e0 / (ulong)puVar16;
        }
        puVar20 = &DAT_7c08eae870e235e0 + -(uVar23 * (long)puVar16);
      }
    }
    plVar21 = *(long **)(*(long *)(lVar28 + 0x58) + (long)puVar20 * 8);
    if ((plVar21 != (long *)0x0) && (plVar21 = (long *)*plVar21, plVar21 != (long *)0x0)) {
      if (uVar19 < 2) {
        do {
          if ((undefined1 *)plVar21[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar21[2] == &DAT_7c08eae870e235e0) goto LAB_017fb780;
          }
          else if ((undefined1 *)((ulong)plVar21[1] & (ulong)(puVar16 + -1)) != puVar20) break;
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
      else {
        do {
          puVar22 = (undefined1 *)plVar21[1];
          if (puVar22 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar21[2] == &DAT_7c08eae870e235e0) goto LAB_017fb780;
          }
          else {
            if (puVar16 <= puVar22) {
              uVar19 = 0;
              if (puVar16 != (undefined1 *)0x0) {
                uVar19 = (ulong)puVar22 / (ulong)puVar16;
              }
              puVar22 = puVar22 + -(uVar19 * (long)puVar16);
            }
            if (puVar22 != puVar20) break;
          }
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
      }
    }
  }
  goto LAB_017fb8dc;
LAB_017fb780:
  plVar21 = (long *)plVar21[3];
  if (plVar21 != (long *)0x0) {
    plVar13 = plVar21 + 10;
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = (int)*plVar13 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    uVar19 = plVar21[0x21];
    fVar30 = 0.0;
    if (uVar19 != 0) {
      uVar23 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar23 = (uVar23 & 0x3333333333333333) + (uVar23 >> 2 & 0x3333333333333333);
      uVar23 = (uVar23 + (uVar23 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar23 < 2) {
        uVar24 = uVar19 - 1 & 0x5f3b7360305e8df8;
      }
      else if (uVar19 < 0x5f3b7360305e8df9) {
        uVar24 = 0;
        if (uVar19 != 0) {
          uVar24 = 0x5f3b7360305e8df8 / uVar19;
        }
        uVar24 = 0x5f3b7360305e8df8 - uVar24 * uVar19;
      }
      else {
        uVar24 = 0x5f3b7360305e8df8;
      }
      plVar25 = *(long **)(plVar21[0x20] + uVar24 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar23 < 2) {
          do {
            if (plVar25[1] == 0x5f3b7360305e8df8) {
              if (plVar25[2] == 0x5f3b7360305e8df8) goto LAB_017fb8c4;
            }
            else if ((plVar25[1] & uVar19 - 1) != uVar24) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar23 = plVar25[1];
            if (uVar23 == 0x5f3b7360305e8df8) {
              if (plVar25[2] == 0x5f3b7360305e8df8) goto LAB_017fb8c4;
            }
            else {
              if (uVar19 <= uVar23) {
                uVar7 = 0;
                if (uVar19 != 0) {
                  uVar7 = uVar23 / uVar19;
                }
                uVar23 = uVar23 - uVar7 * uVar19;
              }
              if (uVar23 != uVar24) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
    goto LAB_017fb8c8;
  }
  goto LAB_017fb8dc;
LAB_017fb8c4:
  fVar30 = *(float *)(plVar25 + 6);
LAB_017fb8c8:
  do {
    iVar11 = (int)*plVar13 + -1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
    if (bVar6) {
      *(int *)plVar13 = iVar11;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (iVar11 == 0) {
    (**(code **)(*plVar21 + 0x10))();
  }
LAB_017fb8dc:
  local_a0 = 0;
  lStack_98 = 0;
  local_170 = (long *)0x0;
  uStack_168 = 0;
  FUN_00cf9db0(&local_170,local_80[0] + 0xf1);
  if (local_170 == (long *)0x0) {
    local_a8 = (long *)0x0;
LAB_017fb900:
    if (local_a8 == (long *)0x0) goto LAB_017fb908;
LAB_017fc03c:
    FUN_009c69bc(&local_170);
    lStack_98 = local_170[0x1b];
    local_a0 = local_170[0x1a];
    if (local_170 != (long *)0x0) {
      lVar28 = local_170[0xb];
      piVar2 = (int *)(lVar28 + 0xc);
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
        *(undefined8 *)(lVar28 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    pplVar17 = &local_a8;
  }
  else {
    FUN_00959eac(&local_a8);
    plVar21 = local_170;
    if (local_170 == (long *)0x0) goto LAB_017fb900;
    plVar13 = local_170 + 1;
    do {
      iVar11 = (int)*plVar13 + -1;
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar6) {
        *(int *)plVar13 = iVar11;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    if (iVar11 != 0) goto LAB_017fb900;
    local_170[2] = 0;
    if (((*PTR_DAT_04379498 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379498);
    }
    lVar28 = *(long *)PTR_DAT_043794a0;
    *(long *)PTR_DAT_043794a8 = lVar28;
    local_1b0[0] = (undefined **)*plVar21;
    FUN_02a44274(lVar28 + 0xd8,local_1b0);
    if (local_a8 != (long *)0x0) goto LAB_017fc03c;
LAB_017fb908:
    FUN_009c69bc(&local_170,local_80[0]);
    lStack_98 = local_170[0x1b];
    local_a0 = local_170[0x1a];
    if (local_170 != (long *)0x0) {
      lVar28 = local_170[0xb];
      piVar2 = (int *)(lVar28 + 0xc);
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
        *(undefined8 *)(lVar28 + 0x18) = 0;
        (**(code **)(*local_170 + 0x20))();
      }
    }
    pplVar17 = local_80;
  }
  FUN_01a71da0(&local_170,*pplVar17);
  plVar21 = local_170;
  if (local_a8 != (long *)0x0) {
    lVar28 = local_a8[0xb];
    piVar2 = (int *)(lVar28 + 0xc);
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
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
    }
  }
  local_150 = 0;
  local_110 = 0x7f7fffee;
  local_108 = 0xffffffffffffffff;
  local_148 = 0;
  local_140 = 0;
  local_130 = 0;
  uStack_128 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_100 = 0xffffff;
  local_f8 = 0xfffffffff;
  uStack_ee = 0;
  local_f0 = 0xffff;
  uStack_ec = 0;
  local_d8 = 0xffffff;
  uStack_c6 = 0;
  local_d0 = 0xfffffffff;
  local_c8 = 0xffff;
  local_c4 = 0;
  local_b8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_e8 = 0;
  uStack_e4 = 0;
  local_e0 = 0xffffffffffffffff;
  if ((int)plVar21[0x50] == 3) {
    local_1b0[0] = &PTR_FUN_04287c30;
    local_188 = plVar21[0x5d];
    local_190 = plVar21[0x5c];
    local_198 = plVar21[0x5b];
    local_180._0_4_ = (float)plVar21[0x5e];
    local_1a0 = plVar21[0x5a];
    local_180 = CONCAT44((int)((ulong)plVar21[0x5e] >> 0x20),fVar30 + (float)local_180);
    uVar4 = *param_2;
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar28 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar28;
    iVar11 = FUN_02bf7af8(uVar29,*(undefined8 *)(lVar28 + 0x230),local_1b0,&local_a0,uVar4,
                          &local_170,1);
    if (iVar11 == 0) goto LAB_017fba9c;
LAB_017fbc3c:
    if (param_3 != (undefined8 *)0x0) {
      uVar19 = param_3[6];
      *param_3 = local_170;
      param_3[1] = uStack_168;
      param_3[2] = local_160;
      param_3[3] = uStack_158;
      param_3[4] = local_150;
      param_3[5] = local_148;
      puVar8 = PTR_PTR_0434a080;
      __s = (char *)(local_140 & 0xfffffffffffffffe);
      if ((char *)(uVar19 & 0xfffffffffffffffe) != __s) {
        if (__s == (char *)0x0) {
          param_3[6] = 0;
        }
        else {
          sVar14 = strlen(__s);
          uVar1 = (int)sVar14 + 1;
          puVar15 = (undefined8 *)
                    (**(code **)(*(long *)puVar8 + 0x10))
                              (puVar8,(long)((sVar14 << 0x20) + 0x1100000000) >> 0x20,0);
          *puVar15 = puVar8;
          *(uint *)(puVar15 + 1) = uVar1;
          memcpy(puVar15 + 2,__s,(ulong)uVar1);
          param_3[6] = (ulong)(puVar15 + 2) | 1;
        }
        if ((uVar19 & 1) != 0) {
          lVar28 = tpidr_el0;
          lVar18 = *(long *)(lVar28 + 0x38d490);
          if (lVar18 == 0) {
            lVar18 = FUN_0333d16c(0,1);
            *(long *)(lVar28 + 0x38d490) = lVar18;
          }
          plVar13 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
          *(undefined8 *)(uVar19 - 0x11) = 0;
          (**(code **)(*plVar13 + 0x18))
                    (plVar13,(undefined8 *)(uVar19 - 0x11),(long)*(int *)(uVar19 - 9) + 0x10);
        }
      }
      param_3[9] = uStack_128;
      param_3[8] = local_130;
      param_3[0xb] = uStack_118;
      param_3[10] = local_120;
      *(undefined4 *)(param_3 + 0xc) = (undefined4)local_110;
      *(undefined4 *)(param_3 + 0xe) = (undefined4)local_100;
      param_3[0xd] = local_108;
      *(undefined4 *)(param_3 + 0xf) = (undefined4)local_f8;
      *(undefined1 *)((long)param_3 + 0x7c) = local_f8._4_1_;
      *(undefined2 *)(param_3 + 0x10) = local_f0;
      *(undefined4 *)((long)param_3 + 0x8c) = uStack_e4;
      *(ulong *)((long)param_3 + 0x84) = CONCAT44(local_e8,uStack_ec);
      *(undefined4 *)(param_3 + 0x13) = (undefined4)local_d8;
      param_3[0x12] = local_e0;
      *(undefined4 *)(param_3 + 0x14) = (undefined4)local_d0;
      *(undefined1 *)((long)param_3 + 0xa4) = local_d0._4_1_;
      *(undefined2 *)(param_3 + 0x15) = local_c8;
      *(undefined4 *)((long)param_3 + 0xb4) = uStack_bc;
      *(ulong *)((long)param_3 + 0xac) = CONCAT44(uStack_c0,local_c4);
      param_3[0x17] = local_b8;
    }
    uVar27 = 1;
    uVar19 = local_140;
  }
  else {
    if ((int)plVar21[0x50] == 1) {
      local_1b0[0] = &PTR_FUN_04287c08;
      local_1a0 = plVar21[0x54];
      local_198 = plVar21[0x55];
      local_190 = CONCAT44(local_190._4_4_,fVar30 + *(float *)(plVar21 + 0x56));
      uVar4 = *param_2;
      if (((*PTR_DAT_0437a648 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar11 != 0)) {
        FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_0437a648);
      }
      lVar28 = *(long *)PTR_DAT_0437a650;
      *(long *)PTR_DAT_0437a658 = lVar28;
      iVar11 = FUN_02bf7384(uVar29,*(undefined8 *)(lVar28 + 0x230),local_1b0,&local_a0,uVar4,
                            &local_170,1);
      if (iVar11 != 0) goto LAB_017fbc3c;
    }
LAB_017fba9c:
    uVar27 = 0;
    uVar19 = local_140;
  }
  local_140 = uVar19;
  if ((uVar19 & 1) != 0) {
    lVar28 = tpidr_el0;
    lVar18 = *(long *)(lVar28 + 0x38d490);
    if (lVar18 == 0) {
      lVar18 = FUN_0333d16c(0,1);
      *(long *)(lVar28 + 0x38d490) = lVar18;
    }
    plVar13 = *(long **)(*(long *)(lVar18 + 8) + 0x58);
    *(undefined8 *)(uVar19 - 0x11) = 0;
    (**(code **)(*plVar13 + 0x18))
              (plVar13,(undefined8 *)(uVar19 - 0x11),(long)*(int *)(uVar19 - 9) + 0x10);
  }
  if (plVar21 != (long *)0x0) {
    lVar28 = plVar21[0xb];
    piVar2 = (int *)(lVar28 + 0xc);
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
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*plVar21 + 0x20))(plVar21);
    }
  }
  if (local_88 != (long *)0x0) {
    lVar28 = local_88[0xb];
    piVar2 = (int *)(lVar28 + 0xc);
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
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*local_88 + 0x20))();
    }
  }
joined_r0x017fbaf0:
  if (local_80[0] != (long *)0x0) {
    lVar28 = local_80[0][0xb];
    piVar2 = (int *)(lVar28 + 0xc);
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
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*local_80[0] + 0x20))();
    }
  }
  if (plVar26 != (long *)0x0) {
    lVar28 = plVar26[0xb];
    piVar2 = (int *)(lVar28 + 0xc);
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
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
  }
  return uVar27;
}


