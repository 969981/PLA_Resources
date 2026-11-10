/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01acd854; name: FUN_01acd854
 */


/* WARNING: Type propagation algorithm not settling */

ulong FUN_01acd854(long param_1)

{
  int *piVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined1 auVar10 [8];
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  char *pcVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined8 *puVar30;
  undefined1 in_q3 [16];
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 local_264;
  undefined8 local_260;
  code *local_258;
  undefined1 local_250 [8];
  long *plStack_248;
  long *local_240;
  long *local_238;
  long *local_230;
  long *local_228;
  undefined8 local_220;
  long *local_218;
  undefined8 local_210;
  ulong local_208;
  undefined8 local_200;
  long *local_1f8;
  ulong local_1f0;
  long *local_1e8;
  undefined8 uStack_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long *local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  ushort local_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  long *local_180;
  char *local_178;
  undefined8 local_170;
  long *local_168;
  undefined8 local_160;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_140;
  long *local_138;
  undefined8 local_130;
  ulong local_128;
  undefined4 local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  ushort local_c8;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  long *local_a0;
  undefined8 uStack_98;
  long *local_90;
  long *local_88;
  long *local_80 [2];
  
  uVar22 = in_q3._8_8_;
  plVar24 = in_q3._0_8_;
  if (*(long *)(param_1 + 0x810) != 0) {
    FUN_009b3e90(&local_a0);
    if (local_a0 == (long *)0x0) {
LAB_01ace430:
      bVar17 = false;
      goto LAB_01acd88c;
    }
    local_260 = (long *)0x0;
    local_258 = (code *)0x0;
    FUN_009ab200(&local_260,local_a0 + 0x68);
    plVar28 = local_260;
    if (local_260 == (long *)0x0) goto LAB_01ace430;
    if (*(int *)((long)local_260 + 0xc) != 0) {
      piVar1 = (int *)((long)local_260 + 0xc);
      iVar20 = *(int *)((long)local_260 + 0xc);
      while (uVar21 = FUN_009b4090(plVar28[2]), (uVar21 & 1) != 0) {
        iVar19 = *piVar1;
        if (iVar19 == iVar20) {
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar17) {
            *piVar1 = iVar20 + 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          if (cVar6 == '\0') {
            lVar23 = plVar28[3];
            plVar28 = (long *)0x0;
            plVar2 = local_260;
            if (lVar23 != 0) {
              plVar28 = (long *)(lVar23 + -0x50);
            }
            goto joined_r0x01acf2cc;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar20 = iVar19;
        if (iVar19 == 0) break;
      }
    }
    plVar28 = (long *)0x0;
    plVar2 = local_260;
joined_r0x01acf2cc:
    local_260 = plVar2;
    if (plVar2 != (long *)0x0) {
      plVar29 = plVar2 + 1;
      do {
        iVar20 = (int)*plVar29 + -1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar29,0x10);
        if (bVar17) {
          *(int *)plVar29 = iVar20;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar20 == 0) {
        plVar2[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar23 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar23;
        local_180 = (long *)*plVar2;
        FUN_02a44274(lVar23 + 0xd8,&local_180);
      }
    }
    if (plVar28 == (long *)0x0) goto LAB_01ace430;
    bVar7 = *(char *)((long)plVar28 + 0x75d) != '\0';
    if (bVar7) {
      FUN_01acd104(param_1);
      uVar18 = 0;
    }
    else {
      uVar18 = FUN_018e0d5c(plVar28);
      uVar18 = uVar18 & 1;
    }
    lVar23 = plVar28[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar20 = *piVar1;
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar17) {
        *piVar1 = iVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*plVar28 + 0x20))(plVar28);
    }
    bVar17 = uVar18 != 0;
    if (!bVar7) goto LAB_01acd88c;
    bVar7 = true;
    if (local_a0 != (long *)0x0) goto LAB_01acd898;
LAB_01acd8b4:
    if (bVar7) goto LAB_01acd8b8;
LAB_01acd8f4:
    if (((!bVar17) || (*(char *)(param_1 + 0x768) == '\0')) || (*(int *)(param_1 + 0x770) != 8)) {
      cVar6 = *(char *)(param_1 + 0x769);
      pbVar9 = PTR_DAT_04379660;
    }
    else {
      *(undefined2 *)(param_1 + 0x768) = 0x100;
      *(undefined4 *)(param_1 + 0x770) = 0;
      cVar6 = *(char *)(param_1 + 0x769);
      pbVar9 = PTR_DAT_04379660;
    }
    PTR_DAT_04379660 = pbVar9;
    if (cVar6 != '\0') {
      local_260 = (long *)((ulong)local_260 & 0xffffffffffff0000);
      lVar23 = param_1 + 0x5d0;
      local_258 = (code *)((ulong)local_258 & 0xffffffff00000000);
      local_220 = 0;
      local_250 = (undefined1  [8])0x0;
      plStack_248 = (long *)0x0;
      local_240 = (long *)0x0;
      local_238 = (long *)0x0;
      local_230 = (long *)0x0;
      local_228 = (long *)0x0;
      local_208 = local_208 & 0xffffffffffffff00;
      local_218 = (long *)0x0;
      local_210 = 0;
      if (((*pbVar9 & 1) == 0) && (iVar20 = __cxa_guard_acquire(pbVar9), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      puVar12 = PTR_DAT_04379670;
      puVar11 = PTR_DAT_04379668;
      lVar27 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar27;
      uVar21 = *(ulong *)(lVar27 + 0x60);
      uVar32 = 0;
      if (uVar21 != 0) {
        uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
        uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
        uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar25 < 2) {
          uVar26 = uVar21 - 1 & 0x4e9fd5f8e749f8e3;
        }
        else {
          uVar26 = 0x4e9fd5f8e749f8e3;
          if (uVar21 < 0x4e9fd5f8e749f8e4) {
            uVar26 = 0;
            if (uVar21 != 0) {
              uVar26 = 0x4e9fd5f8e749f8e3 / uVar21;
            }
            uVar26 = 0x4e9fd5f8e749f8e3 - uVar26 * uVar21;
          }
        }
        plVar28 = *(long **)(*(long *)(lVar27 + 0x58) + uVar26 * 8);
        if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
          if (uVar25 < 2) {
            do {
              if (plVar28[1] == 0x4e9fd5f8e749f8e3) {
                if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acd9e8;
              }
              else if ((plVar28[1] & uVar21 - 1) != uVar26) break;
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
          }
          else {
            do {
              uVar25 = plVar28[1];
              if (uVar25 == 0x4e9fd5f8e749f8e3) {
                if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acd9e8;
              }
              else {
                if (uVar21 <= uVar25) {
                  uVar8 = 0;
                  if (uVar21 != 0) {
                    uVar8 = uVar25 / uVar21;
                  }
                  uVar25 = uVar25 - uVar8 * uVar21;
                }
                if (uVar25 != uVar26) break;
              }
              plVar28 = (long *)*plVar28;
            } while (plVar28 != (long *)0x0);
          }
        }
      }
      goto LAB_01acdb44;
    }
    bVar17 = false;
    goto LAB_01acdf2c;
  }
  bVar17 = false;
  local_a0 = (long *)0x0;
LAB_01acd88c:
  bVar7 = false;
  if (local_a0 == (long *)0x0) goto LAB_01acd8b4;
LAB_01acd898:
  lVar23 = local_a0[0xb];
  piVar1 = (int *)(lVar23 + 0xc);
  do {
    iVar20 = *piVar1;
    cVar6 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar16) {
      *piVar1 = iVar20 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 + -1 != 0) goto LAB_01acd8b4;
  *(undefined8 *)(lVar23 + 0x18) = 0;
  (**(code **)(*local_a0 + 0x20))();
  if (!bVar7) goto LAB_01acd8f4;
  goto LAB_01acd8b8;
LAB_01acd9e8:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar21 = plVar28[0x21];
    uVar32 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0xb5f3dc2a4ab23268;
      }
      else if (uVar21 < 0xb5f3dc2a4ab23269) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0xb5f3dc2a4ab23268 / uVar21;
        }
        uVar26 = 0xb5f3dc2a4ab23268 - uVar26 * uVar21;
      }
      else {
        uVar26 = 0xb5f3dc2a4ab23268;
      }
      plVar29 = *(long **)(plVar28[0x20] + uVar26 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar29[1] == 0xb5f3dc2a4ab23268) {
              if (plVar29[2] == -0x4a0c23d5b54dcd98) goto LAB_01acdb2c;
            }
            else if ((plVar29[1] & uVar21 - 1) != uVar26) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar29[1];
            if (uVar25 == 0xb5f3dc2a4ab23268) {
              if (plVar29[2] == -0x4a0c23d5b54dcd98) goto LAB_01acdb2c;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01acdb30;
  }
  goto LAB_01acdb44;
LAB_01acdb2c:
  uVar32 = (undefined4)plVar29[6];
LAB_01acdb30:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_01acdb44:
  uVar31 = 0;
  uVar21 = FUN_01ad40b8(uVar32,0,param_1,lVar23,&local_260,0);
  if ((uVar21 & 1) == 0) {
    if (((*pbVar9 & 1) == 0) && (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar27 = *(long *)puVar11;
    *(long *)puVar12 = lVar27;
    uVar21 = *(ulong *)(lVar27 + 0x60);
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0x4e9fd5f8e749f8e3;
      }
      else {
        uVar26 = 0x4e9fd5f8e749f8e3;
        if (uVar21 < 0x4e9fd5f8e749f8e4) {
          uVar26 = 0;
          if (uVar21 != 0) {
            uVar26 = 0x4e9fd5f8e749f8e3 / uVar21;
          }
          uVar26 = 0x4e9fd5f8e749f8e3 - uVar26 * uVar21;
        }
      }
      plVar28 = *(long **)(*(long *)(lVar27 + 0x58) + uVar26 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar28[1] == 0x4e9fd5f8e749f8e3) {
              if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acddf0;
            }
            else if ((plVar28[1] & uVar21 - 1) != uVar26) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar28[1];
            if (uVar25 == 0x4e9fd5f8e749f8e3) {
              if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acddf0;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
    }
LAB_01ace12c:
    bVar5 = *pbVar9;
joined_r0x01ace36c:
    if (((bVar5 & 1) == 0) && (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar27 = *(long *)puVar11;
    *(long *)puVar12 = lVar27;
    uVar21 = *(ulong *)(lVar27 + 0x60);
    uVar32 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0x4e9fd5f8e749f8e3;
      }
      else {
        uVar26 = 0x4e9fd5f8e749f8e3;
        if (uVar21 < 0x4e9fd5f8e749f8e4) {
          uVar26 = 0;
          if (uVar21 != 0) {
            uVar26 = 0x4e9fd5f8e749f8e3 / uVar21;
          }
          uVar26 = 0x4e9fd5f8e749f8e3 - uVar26 * uVar21;
        }
      }
      plVar28 = *(long **)(*(long *)(lVar27 + 0x58) + uVar26 * 8);
      if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar28[1] == 0x4e9fd5f8e749f8e3) {
              if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ace1c8;
            }
            else if ((plVar28[1] & uVar21 - 1) != uVar26) break;
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar28[1];
            if (uVar25 == 0x4e9fd5f8e749f8e3) {
              if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ace1c8;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar28 = (long *)*plVar28;
          } while (plVar28 != (long *)0x0);
        }
      }
    }
    goto LAB_01ace324;
  }
  uVar21 = 1;
  goto LAB_01acdb6c;
LAB_01acddf0:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar21 = plVar28[0x21];
    uVar31 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0x9173ce61c188d6ec;
      }
      else if (uVar21 < 0x9173ce61c188d6ed) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0x9173ce61c188d6ec / uVar21;
        }
        uVar26 = 0x9173ce61c188d6ec - uVar26 * uVar21;
      }
      else {
        uVar26 = 0x9173ce61c188d6ec;
      }
      plVar29 = *(long **)(plVar28[0x20] + uVar26 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar29[1] == 0x9173ce61c188d6ec) {
              if (plVar29[2] == -0x6e8c319e3e772914) goto LAB_01ace114;
            }
            else if ((plVar29[1] & uVar21 - 1) != uVar26) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar29[1];
            if (uVar25 == 0x9173ce61c188d6ec) {
              if (plVar29[2] == -0x6e8c319e3e772914) goto LAB_01ace114;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01ace118;
  }
  goto LAB_01ace12c;
LAB_01ace114:
  uVar31 = (undefined4)plVar29[6];
LAB_01ace118:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 != 0) goto LAB_01ace12c;
  (**(code **)(*plVar28 + 0x10))();
  bVar5 = *pbVar9;
  goto joined_r0x01ace36c;
LAB_01ace1c8:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar21 = plVar28[0x21];
    uVar32 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0x55869a3296d44da5;
      }
      else if (uVar21 < 0x55869a3296d44da6) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0x55869a3296d44da5 / uVar21;
        }
        uVar26 = 0x55869a3296d44da5 - uVar26 * uVar21;
      }
      else {
        uVar26 = 0x55869a3296d44da5;
      }
      plVar29 = *(long **)(plVar28[0x20] + uVar26 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar29[1] == 0x55869a3296d44da5) {
              if (plVar29[2] == 0x55869a3296d44da5) goto LAB_01ace30c;
            }
            else if ((plVar29[1] & uVar21 - 1) != uVar26) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar29[1];
            if (uVar25 == 0x55869a3296d44da5) {
              if (plVar29[2] == 0x55869a3296d44da5) goto LAB_01ace30c;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01ace310;
  }
  goto LAB_01ace324;
LAB_01ace30c:
  uVar32 = (undefined4)plVar29[6];
LAB_01ace310:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar7) {
      *(int *)plVar2 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_01ace324:
  uVar21 = FUN_01ad40b8(uVar31,uVar32,param_1,lVar23,&local_260,1);
  if (!bVar17 && (uVar21 & 1) == 0) {
    uVar21 = FUN_01ad4d90(param_1,lVar23,&local_260);
  }
LAB_01acdb6c:
  bVar17 = false;
  if (((char)local_260 != '\0') && ((uVar21 & 1) != 0)) {
    *(undefined2 *)(param_1 + 0x768) = (undefined2)local_260;
    *(undefined4 *)(param_1 + 0x770) = local_258._0_4_;
    FUN_00b63974(param_1 + 0x778,local_250);
    FUN_00cfa028(param_1 + 0x788,&local_240);
    FUN_0095aa3c(param_1 + 0x798,&local_230);
    *(undefined8 *)(param_1 + 0x7a8) = local_220;
    FUN_00bd10a0(param_1 + 0x7b0,&local_218);
    bVar17 = true;
    *(undefined1 *)(param_1 + 0x7c0) = (undefined1)local_208;
  }
  plVar28 = local_218;
  if (local_218 != (long *)0x0) {
    plVar2 = local_218 + 1;
    do {
      iVar20 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar20 == 0) {
      local_218[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_180 = (long *)*plVar28;
      FUN_02a44274(lVar23 + 0xd8,&local_180);
    }
  }
  plVar28 = local_230;
  if (local_230 != (long *)0x0) {
    plVar2 = local_230 + 1;
    do {
      iVar20 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar20 == 0) {
      local_230[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_180 = (long *)*plVar28;
      FUN_02a44274(lVar23 + 0xd8,&local_180);
    }
  }
  plVar28 = local_240;
  if (local_240 != (long *)0x0) {
    plVar2 = local_240 + 1;
    do {
      iVar20 = (int)*plVar2 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar7) {
        *(int *)plVar2 = iVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar20 == 0) {
      local_240[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_180 = (long *)*plVar28;
      FUN_02a44274(lVar23 + 0xd8,&local_180);
    }
  }
  auVar10 = local_250;
  if (local_250 != (undefined1  [8])0x0) {
    plVar28 = (long *)((long)local_250 + 8);
    do {
      iVar20 = (int)*plVar28 + -1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
      if (bVar7) {
        *(int *)plVar28 = iVar20;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar20 == 0) {
      *(long *)((long)local_250 + 0x10) = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar23 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar23;
      local_180 = *(long **)auVar10;
      FUN_02a44274(lVar23 + 0xd8,&local_180);
    }
  }
LAB_01acdf2c:
  switch(*(undefined4 *)(param_1 + 0x770)) {
  case 3:
    if (*(long *)(param_1 + 0x810) == 0) {
      local_88 = (long *)0x0;
      uVar21 = 0;
LAB_01ace074:
      bVar17 = false;
      plVar24 = local_88;
    }
    else {
      FUN_009b3e90(&local_88);
      if (local_88 == (long *)0x0) {
LAB_01acf18c:
        uVar21 = 0;
        goto LAB_01ace074;
      }
      local_260 = (long *)0x0;
      local_258 = (code *)0x0;
      FUN_009ab200(&local_260,local_88 + 0x68);
      plVar24 = local_260;
      if (local_260 == (long *)0x0) goto LAB_01acf18c;
      if (*(int *)((long)local_260 + 0xc) != 0) {
        piVar1 = (int *)((long)local_260 + 0xc);
        iVar20 = *(int *)((long)local_260 + 0xc);
        while (uVar21 = FUN_009b4090(plVar24[2]), (uVar21 & 1) != 0) {
          iVar19 = *piVar1;
          if (iVar19 == iVar20) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              lVar23 = plVar24[3];
              plVar24 = (long *)0x0;
              plVar28 = local_260;
              if (lVar23 != 0) {
                plVar24 = (long *)(lVar23 + -0x50);
              }
              goto joined_r0x01ad01f8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar20 = iVar19;
          if (iVar19 == 0) break;
        }
      }
      plVar24 = (long *)0x0;
      plVar28 = local_260;
joined_r0x01ad01f8:
      local_260 = plVar28;
      if (plVar28 != (long *)0x0) {
        plVar2 = plVar28 + 1;
        do {
          iVar20 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *(int *)plVar2 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 == 0) {
          plVar28[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_180 = (long *)*plVar28;
          FUN_02a44274(lVar23 + 0xd8,&local_180);
        }
      }
      if (plVar24 == (long *)0x0) goto LAB_01acf18c;
      FUN_00cf6d78(&local_90,param_1 + 0x778);
      if (local_90 == (long *)0x0) {
        uVar21 = 0;
        iVar20 = 0;
      }
      else {
        FUN_009c69bc(&local_260);
        plVar28 = (long *)FUN_009b807c(local_260 + 0x1e,&local_180);
        if (local_260 == (long *)0x0) {
LAB_01ad02ac:
          if (plVar28 != (long *)0x0) goto LAB_01ad02b0;
LAB_01ad136c:
          uVar21 = 0;
        }
        else {
          lVar23 = local_260[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 != 0) goto LAB_01ad02ac;
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_260 + 0x20))();
          if (plVar28 == (long *)0x0) goto LAB_01ad136c;
LAB_01ad02b0:
          local_1f0 = local_1f0 & 0xffffffffffffff00;
          local_200 = (long *)0x0;
          local_1f8 = (long *)0x0;
          local_238 = (long *)0x0;
          local_1e8 = (long *)((ulong)local_1e8 & 0xffffffffffffff00);
          local_240 = (long *)((ulong)local_240 & 0xffffffff00000000);
          local_210 = 0;
          local_208 = 0;
          local_220 = 0;
          local_218 = (long *)0x0;
          local_230 = (long *)0x0;
          local_228 = (long *)0x0;
          local_250 = (undefined1  [8])0x0;
          plStack_248 = (long *)0x0;
          local_258 = *(code **)(param_1 + 0x5d8);
          local_260 = *(long **)(param_1 + 0x5d0);
          (**(code **)(*plVar28 + 0x10))(&local_180,plVar28);
          local_a0 = (long *)0x0;
          uStack_98 = 0;
          FUN_00b5ff1c(&local_a0,&local_180);
          plVar28 = local_180;
          if (local_180 != (long *)0x0) {
            plVar2 = local_180 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_180[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_80[0] = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,local_80);
            }
          }
          FUN_00b6021c(local_250,&local_a0);
          plVar28 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          local_240 = (long *)CONCAT44(local_240._4_4_,*(undefined4 *)(param_1 + 0x770));
          FUN_00b63974(&local_238,param_1 + 0x778);
          FUN_00cfa028(&local_228,param_1 + 0x788);
          FUN_0095aa3c(&local_218,param_1 + 0x798);
          local_208 = *(ulong *)(param_1 + 0x7a8);
          FUN_00bd10a0(&local_200,param_1 + 0x7b0);
          local_1f0 = CONCAT71(local_1f0._1_7_,*(undefined1 *)(param_1 + 0x7c0));
          iVar20 = FUN_01838b54(local_90);
          if (iVar20 == 4) {
            local_1e8 = (long *)CONCAT71(local_1e8._1_7_,1);
          }
          uVar21 = FUN_018d84d8(plVar24,&local_260);
          if ((uVar21 & 1) == 0) {
            FUN_01acd104(param_1);
            uVar21 = 0;
            plVar28 = local_200;
          }
          else {
            uVar21 = 2;
            plVar28 = local_200;
          }
          local_200 = plVar28;
          if (plVar28 != (long *)0x0) {
            plVar2 = plVar28 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              plVar28[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          plVar28 = local_218;
          if (local_218 != (long *)0x0) {
            plVar2 = local_218 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_218[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          plVar28 = local_228;
          if (local_228 != (long *)0x0) {
            plVar2 = local_228 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_228[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          plVar28 = local_238;
          if (local_238 != (long *)0x0) {
            plVar2 = local_238 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_238[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          auVar10 = local_250;
          if (local_250 != (undefined1  [8])0x0) {
            plVar28 = (long *)((long)local_250 + 8);
            do {
              iVar20 = (int)*plVar28 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar17) {
                *(int *)plVar28 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              *(long *)((long)local_250 + 0x10) = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = *(long **)auVar10;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          plVar28 = (long *)0x1;
        }
        iVar20 = (int)plVar28;
        if (local_90 != (long *)0x0) {
          lVar23 = local_90[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
      }
      lVar23 = plVar24[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar17) {
          *piVar1 = iVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
      if (iVar20 == 0) goto LAB_01ace074;
      bVar17 = true;
      plVar24 = local_88;
    }
    local_88 = plVar24;
    if (plVar24 != (long *)0x0) {
      lVar23 = plVar24[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        bVar16 = *piVar1 + -1 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
LAB_01ace010:
      if (bVar16) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))(plVar24);
        if (bVar17) {
          return uVar21;
        }
        goto LAB_01ace018;
      }
    }
    break;
  default:
    if (*(long *)(param_1 + 0x810) != 0) {
      FUN_009b3e90(&local_a0);
      if (local_a0 == (long *)0x0) goto LAB_01ace018;
      local_260 = (long *)0x0;
      local_258 = (code *)0x0;
      FUN_009ab200(&local_260,local_a0 + 0x68);
      plVar24 = local_260;
      if (local_260 != (long *)0x0) {
        if (*(int *)((long)local_260 + 0xc) != 0) {
          piVar1 = (int *)((long)local_260 + 0xc);
          iVar20 = *(int *)((long)local_260 + 0xc);
          while (uVar21 = FUN_009b4090(plVar24[2]), (uVar21 & 1) != 0) {
            iVar19 = *piVar1;
            if (iVar19 == iVar20) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar17) {
                *piVar1 = iVar20 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                lVar23 = plVar24[3];
                plVar24 = (long *)0x0;
                plVar28 = local_260;
                if (lVar23 != 0) {
                  plVar24 = (long *)(lVar23 + -0x50);
                }
                goto joined_r0x01acfc80;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar20 = iVar19;
            if (iVar19 == 0) break;
          }
        }
        plVar24 = (long *)0x0;
        plVar28 = local_260;
joined_r0x01acfc80:
        local_260 = plVar28;
        if (plVar28 != (long *)0x0) {
          plVar2 = plVar28 + 1;
          do {
            iVar20 = (int)*plVar2 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar17) {
              *(int *)plVar2 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            plVar28[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_180 = (long *)*plVar28;
            FUN_02a44274(lVar23 + 0xd8,&local_180);
          }
        }
        puVar11 = PTR_DAT_04379660;
        if (plVar24 != (long *)0x0) {
          local_250 = (undefined1  [8])((ulong)local_250 & 0xffffffff00000000);
          local_230 = (long *)((ulong)local_230 & 0xffffffffffffff00);
          local_260 = (long *)0x0;
          local_258 = (code *)0x0;
          local_240 = (long *)0x0;
          local_238 = (long *)0x0;
          if (((*PTR_DAT_04379660 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          puVar13 = PTR_DAT_04379670;
          puVar12 = PTR_DAT_04379668;
          lVar23 = *(long *)PTR_DAT_04379668;
          *(long *)PTR_DAT_04379670 = lVar23;
          uVar21 = *(ulong *)(lVar23 + 0x60);
          uVar32 = 0;
          if (uVar21 != 0) {
            uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
            uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
            uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar25 < 2) {
              uVar26 = uVar21 - 1 & 0x4e9fd5f8e749f8e3;
            }
            else {
              uVar26 = 0x4e9fd5f8e749f8e3;
              if (uVar21 < 0x4e9fd5f8e749f8e4) {
                uVar26 = 0;
                if (uVar21 != 0) {
                  uVar26 = 0x4e9fd5f8e749f8e3 / uVar21;
                }
                uVar26 = 0x4e9fd5f8e749f8e3 - uVar26 * uVar21;
              }
            }
            plVar28 = *(long **)(*(long *)(lVar23 + 0x58) + uVar26 * 8);
            if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
              if (uVar25 < 2) {
                do {
                  if (plVar28[1] == 0x4e9fd5f8e749f8e3) {
                    if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acfdb4;
                  }
                  else if ((plVar28[1] & uVar21 - 1) != uVar26) break;
                  plVar28 = (long *)*plVar28;
                } while (plVar28 != (long *)0x0);
              }
              else {
                do {
                  uVar25 = plVar28[1];
                  if (uVar25 == 0x4e9fd5f8e749f8e3) {
                    if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01acfdb4;
                  }
                  else {
                    if (uVar21 <= uVar25) {
                      uVar8 = 0;
                      if (uVar21 != 0) {
                        uVar8 = uVar25 / uVar21;
                      }
                      uVar25 = uVar25 - uVar8 * uVar21;
                    }
                    if (uVar25 != uVar26) break;
                  }
                  plVar28 = (long *)*plVar28;
                } while (plVar28 != (long *)0x0);
              }
            }
          }
          goto LAB_01ad0718;
        }
      }
      bVar17 = false;
      uVar21 = 0;
      goto joined_r0x01ad0bac;
    }
    local_a0 = (long *)0x0;
    goto LAB_01ace018;
  case 5:
    FUN_00cf6d78(local_80,param_1 + 0x778);
    if (local_80[0] == (long *)0x0) goto LAB_01ace018;
    FUN_009c69bc(&local_260);
    lVar23 = FUN_008a7e50(local_260 + 0x1e,&local_180);
    if (local_260 != (long *)0x0) {
      lVar27 = local_260[0xb];
      piVar1 = (int *)(lVar27 + 0xc);
      do {
        iVar20 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar20 + -1 != 0) goto LAB_01acdfa8;
      *(undefined8 *)(lVar27 + 0x18) = 0;
      (**(code **)(*local_260 + 0x20))();
      if (lVar23 != 0) goto LAB_01acdfac;
LAB_01ace3f4:
      bVar17 = false;
      uVar21 = 0;
      if (local_80[0] == (long *)0x0) break;
LAB_01acdfc4:
      lVar23 = local_80[0][0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        bVar16 = *piVar1 + -1 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_80[0];
      } while (cVar6 != '\0');
      goto LAB_01ace010;
    }
LAB_01acdfa8:
    if (lVar23 == 0) goto LAB_01ace3f4;
LAB_01acdfac:
    if (*(long *)(param_1 + 0x2d0) == 0) {
      bVar17 = false;
      local_88 = (long *)0x0;
      uVar21 = 0;
    }
    else {
      FUN_0165ce38(&local_88);
      if (local_88 == (long *)0x0) goto LAB_01ace3f4;
      uVar21 = FUN_01ba3f1c(lVar23);
      if (((uVar21 & 1) == 0) || (uVar21 = FUN_01ba04ec(lVar23), (uVar21 & 1) != 0)) {
        if (bVar17 == false) {
          FUN_009c69bc(&local_260,param_1);
          (**(code **)(*local_260 + 0x40))();
          local_a0 = plVar24;
          uStack_98 = uVar22;
          if (local_260 != (long *)0x0) {
            lVar23 = local_260[0xb];
            piVar1 = (int *)(lVar23 + 0xc);
            do {
              iVar20 = *piVar1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar17) {
                *piVar1 = iVar20 + -1;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 + -1 == 0) {
              *(undefined8 *)(lVar23 + 0x18) = 0;
              (**(code **)(*local_260 + 0x20))();
            }
          }
          if (((*PTR_DAT_04379c28 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379c28);
          }
          local_170 = 0x1e;
          local_168 = (long *)0x0;
          local_180 = (long *)0x354b9d1690612c13;
          local_178 = "PLAY_BA_SYS_BALL_REFRECT_NUSHI";
          uVar22 = *(undefined8 *)PTR_DAT_04379c30;
          *(undefined8 *)PTR_DAT_04379c38 = uVar22;
          local_1f0 = 0;
          local_1e8 = (long *)0x0;
          local_200 = (long *)0x0;
          local_1f8 = (long *)0x0;
          local_210 = 0;
          local_208 = 0;
          local_220 = 0;
          local_218 = (long *)0x0;
          local_230 = (long *)0x0;
          local_228 = (long *)0x0;
          local_240 = (long *)0x0;
          local_238 = (long *)0x0;
          local_250 = (undefined1  [8])0x0;
          plStack_248 = (long *)0x0;
          local_260 = (long *)0x0;
          local_258 = (code *)0x0;
          FUN_0291356c(uVar22,&local_180,&local_a0,PTR_DAT_0437a0f8,PTR_DAT_0437a100,&local_260,0,0)
          ;
          pcVar14 = local_258;
          if (local_258 == (code *)0x0) {
            local_258 = (code *)0x0;
          }
          else {
            local_250 = (undefined1  [8])0x0;
            plStack_248 = (long *)0x0;
            local_260 = (long *)0x0;
            local_258 = (code *)0x0;
            (*pcVar14)(&local_240);
          }
          if (local_168 != (long *)0x0) {
            (**(code **)(*local_168 + 0x20))();
          }
        }
        FUN_01acd104(param_1);
        uVar21 = 0;
      }
      else {
        if (bVar17) {
LAB_01ace5bc:
          local_264 = 0;
        }
        else {
          FUN_01b39678(&local_180,lVar23);
          if (local_180 == (long *)0x0) goto LAB_01ace5bc;
          uVar21 = FUN_02c628e4();
          if ((uVar21 & 1) == 0) {
            local_250 = (undefined1  [8])0x0;
            plStack_248 = (long *)0x0;
            local_258 = *(code **)(param_1 + 0x5d8);
            local_260 = *(long **)(param_1 + 0x5d0);
            _local_250 = FUN_01b759f4(param_1);
            local_264 = FUN_01ba2780(lVar23,&local_260);
          }
          else {
            local_264 = 0;
          }
          if (local_180 != (long *)0x0) {
            plVar24 = local_180 + 10;
            do {
              iVar20 = (int)*plVar24 + -1;
              cVar6 = '\x01';
              bVar7 = (bool)ExclusiveMonitorPass(plVar24,0x10);
              if (bVar7) {
                *(int *)plVar24 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              (**(code **)(*local_180 + 0x10))();
            }
          }
        }
        local_120 = 0;
        local_118 = (undefined8 *)0x0;
        uStack_110 = 0;
        local_d8 = 0;
        local_d0 = 0;
        local_c8 = 0;
        local_150 = 0;
        local_108 = (undefined8 *)0x0;
        uStack_100 = 0;
        local_f8 = (undefined8 *)0x0;
        uStack_f0 = 0;
        local_e8 = 0;
        local_e0 = (undefined8 *)0x0;
        local_180 = (long *)0x0;
        local_178 = (char *)0x0;
        local_170 = 0;
        local_168 = (long *)0x0;
        local_160 = 0;
        local_158 = (undefined8 *)0x0;
        FUN_01ad5ac4(&local_260,param_1);
        FUN_01ad63f8(&local_158,&local_260);
        plVar24 = local_260;
        if (local_260 != (long *)0x0) {
          plVar28 = local_260 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_260[2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar20 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar20 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar27 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar27;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar27 + 0xd8,&local_a0);
          }
        }
        FUN_01b3a354(&local_260,lVar23);
        FUN_0095a500((ulong)&local_180 | 8,&local_260);
        plVar24 = local_260;
        if (local_260 != (long *)0x0) {
          plVar28 = local_260 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar7) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_260[2] = 0;
            if ((*PTR_DAT_04379498 & 1) == 0) {
              iVar20 = __cxa_guard_acquire(PTR_DAT_04379498);
              if (iVar20 != 0) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        local_138 = *(long **)(param_1 + 0x5d8);
        local_140 = *(undefined8 *)(param_1 + 0x5d0);
        local_120 = *(undefined4 *)(param_1 + 0x770);
        FUN_00b63974(&local_118,param_1 + 0x778);
        FUN_00cfa028(&local_108,param_1 + 0x788);
        FUN_0095aa3c(&local_f8,param_1 + 0x798);
        local_e8 = *(undefined8 *)(param_1 + 0x7a8);
        FUN_00bd10a0(&local_e0,param_1 + 0x7b0);
        local_d0 = *(undefined1 *)(param_1 + 0x7c0);
        local_c8 = (CONCAT11(local_264,bVar17) ^ 1) & 0x1ff;
        local_128 = *(ulong *)(param_1 + 0x7d8);
        local_130 = *(undefined8 *)(param_1 + 2000);
        local_260 = local_180;
        local_258 = (code *)0x0;
        local_250 = (undefined1  [8])0x0;
        FUN_0095e070((ulong)&local_260 | 8,(ulong)&local_180 | 8);
        plStack_248 = (long *)0x0;
        local_240 = (long *)0x0;
        FUN_008c4b3c(&plStack_248,&local_168);
        local_238 = (long *)0x0;
        local_230 = (long *)0x0;
        FUN_0195cb34(&local_238,&local_158);
        local_1f8 = (long *)0x0;
        local_1f0 = 0;
        local_220 = local_140;
        local_218 = local_138;
        local_210 = local_130;
        local_208 = local_128;
        local_200 = (long *)CONCAT44(local_200._4_4_,local_120);
        FUN_00b63974(&local_1f8,&local_118);
        local_1e8 = (long *)0x0;
        uStack_1e0 = 0;
        FUN_00cfa028(&local_1e8,&local_108);
        local_1d8 = (long *)0x0;
        uStack_1d0 = 0;
        FUN_0095aa3c(&local_1d8,&local_f8);
        local_1c8 = local_e8;
        local_1c0 = (long *)0x0;
        local_1b8 = 0;
        FUN_00bd10a0(&local_1c0,&local_e0);
        local_1b0 = local_d0;
        local_1a0 = (long *)0x0;
        uStack_198 = 0;
        local_1a8 = local_c8;
        local_190 = 0;
        FUN_01ad5c5c(local_88[0x1a],&local_260);
        plVar24 = local_1a0;
        if (local_1a0 != (long *)0x0) {
          plVar28 = local_1a0 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_1a0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        plVar24 = local_1c0;
        if (local_1c0 != (long *)0x0) {
          plVar28 = local_1c0 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_1c0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        plVar24 = local_1d8;
        if (local_1d8 != (long *)0x0) {
          plVar28 = local_1d8 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_1d8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        plVar24 = local_1e8;
        if (local_1e8 != (long *)0x0) {
          plVar28 = local_1e8 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_1e8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        plVar24 = local_1f8;
        if (local_1f8 != (long *)0x0) {
          plVar28 = local_1f8 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_1f8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        plVar24 = local_238;
        if (local_238 != (long *)0x0) {
          plVar28 = local_238 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_238[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        plVar24 = plStack_248;
        if (plStack_248 != (long *)0x0) {
          plVar28 = plStack_248 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            plStack_248[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        pcVar14 = local_258;
        if (local_258 != (code *)0x0) {
          plVar24 = (long *)((long)local_258 + 8);
          do {
            iVar20 = (int)*plVar24 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar17) {
              *(int *)plVar24 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            *(long *)((long)local_258 + 0x10) = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_a0 = *(long **)pcVar14;
            FUN_02a44274(lVar23 + 0xd8,&local_a0);
          }
        }
        puVar30 = local_e0;
        if (local_e0 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_e0 + 1);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            local_e0[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = (long *)*puVar30;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        puVar30 = local_f8;
        if (local_f8 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_f8 + 1);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            local_f8[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = (long *)*puVar30;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        puVar30 = local_108;
        if (local_108 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_108 + 1);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            local_108[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = (long *)*puVar30;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        puVar30 = local_118;
        if (local_118 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_118 + 1);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            local_118[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = (long *)*puVar30;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        puVar30 = local_158;
        if (local_158 != (undefined8 *)0x0) {
          piVar1 = (int *)(local_158 + 1);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            local_158[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = (long *)*puVar30;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        plVar24 = local_168;
        if (local_168 != (long *)0x0) {
          plVar28 = local_168 + 1;
          do {
            iVar20 = (int)*plVar28 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
            if (bVar17) {
              *(int *)plVar28 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            local_168[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = (long *)*plVar24;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        pcVar15 = local_178;
        if (local_178 != (char *)0x0) {
          piVar1 = (int *)(local_178 + 8);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            local_178[0x10] = '\0';
            local_178[0x11] = '\0';
            local_178[0x12] = '\0';
            local_178[0x13] = '\0';
            local_178[0x14] = '\0';
            local_178[0x15] = '\0';
            local_178[0x16] = '\0';
            local_178[0x17] = '\0';
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_260 = *(long **)pcVar15;
            FUN_02a44274(lVar23 + 0xd8,&local_260);
          }
        }
        uVar21 = 1;
      }
      if (local_88 != (long *)0x0) {
        lVar23 = local_88[0xb];
        piVar1 = (int *)(lVar23 + 0xc);
        do {
          iVar20 = *piVar1;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar17) {
            *piVar1 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 == 1) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
      bVar17 = true;
    }
    if (local_80[0] != (long *)0x0) goto LAB_01acdfc4;
    break;
  case 7:
    if (*(long *)(param_1 + 0x810) == 0) {
      local_80[0] = (long *)0x0;
      uVar21 = 0;
LAB_01acdfec:
      bVar17 = false;
    }
    else {
      FUN_009b3e90(local_80);
      if (local_80[0] == (long *)0x0) {
LAB_01acee4c:
        uVar21 = 0;
        goto LAB_01acdfec;
      }
      local_260 = (long *)0x0;
      local_258 = (code *)0x0;
      FUN_009ab200(&local_260,local_80[0] + 0x68);
      plVar24 = local_260;
      if (local_260 == (long *)0x0) goto LAB_01acee4c;
      if (*(int *)((long)local_260 + 0xc) != 0) {
        piVar1 = (int *)((long)local_260 + 0xc);
        iVar20 = *(int *)((long)local_260 + 0xc);
        while (uVar21 = FUN_009b4090(plVar24[2]), (uVar21 & 1) != 0) {
          iVar19 = *piVar1;
          if (iVar19 == iVar20) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              lVar23 = plVar24[3];
              plVar24 = (long *)0x0;
              plVar28 = local_260;
              if (lVar23 != 0) {
                plVar24 = (long *)(lVar23 + -0x50);
              }
              goto joined_r0x01acf7e8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar20 = iVar19;
          if (iVar19 == 0) break;
        }
      }
      plVar24 = (long *)0x0;
      plVar28 = local_260;
joined_r0x01acf7e8:
      local_260 = plVar28;
      if (plVar28 != (long *)0x0) {
        plVar2 = plVar28 + 1;
        do {
          iVar20 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *(int *)plVar2 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 == 0) {
          plVar28[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_180 = (long *)*plVar28;
          FUN_02a44274(lVar23 + 0xd8,&local_180);
        }
      }
      if (plVar24 == (long *)0x0) goto LAB_01acee4c;
      FUN_00cf6d78(&local_88,param_1 + 0x778);
      if (local_88 == (long *)0x0) {
        uVar21 = 0;
        bVar17 = false;
      }
      else {
        FUN_009c69bc(&local_260);
        uVar21 = FUN_01ad66f8(local_260 + 0x1e,&local_180);
        if (local_260 == (long *)0x0) {
LAB_01acf89c:
          if (uVar21 != 0) goto LAB_01acf8a0;
LAB_01ad0db4:
          bVar17 = false;
        }
        else {
          lVar23 = local_260[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 != 0) goto LAB_01acf89c;
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_260 + 0x20))();
          if (uVar21 == 0) goto LAB_01ad0db4;
LAB_01acf8a0:
          if (*(char *)(uVar21 + 0x531) == '\0') {
            local_1f0 = local_1f0 & 0xffffffffffffff00;
            local_200 = (long *)0x0;
            local_1f8 = (long *)0x0;
            local_238 = (long *)0x0;
            local_240 = (long *)((ulong)local_240 & 0xffffffff00000000);
            local_210 = 0;
            local_208 = 0;
            local_220 = 0;
            local_218 = (long *)0x0;
            local_230 = (long *)0x0;
            local_228 = (long *)0x0;
            local_250 = (undefined1  [8])0x0;
            plStack_248 = (long *)0x0;
            local_258 = *(code **)(param_1 + 0x5d8);
            local_260 = *(long **)(param_1 + 0x5d0);
            FUN_01ad59e4(&local_180,uVar21);
            FUN_01ad6b8c(local_250,&local_180);
            plVar28 = local_180;
            if (local_180 != (long *)0x0) {
              plVar2 = local_180 + 1;
              do {
                iVar20 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar17) {
                  *(int *)plVar2 = iVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar20 == 0) {
                local_180[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_a0 = (long *)*plVar28;
                FUN_02a44274(lVar23 + 0xd8,&local_a0);
              }
            }
            local_240 = (long *)CONCAT44(local_240._4_4_,*(undefined4 *)(param_1 + 0x770));
            FUN_00b63974(&local_238,param_1 + 0x778);
            FUN_00cfa028(&local_228,param_1 + 0x788);
            FUN_0095aa3c(&local_218,param_1 + 0x798);
            local_208 = *(ulong *)(param_1 + 0x7a8);
            FUN_00bd10a0(&local_200,param_1 + 0x7b0);
            local_1f0 = CONCAT71(local_1f0._1_7_,*(undefined1 *)(param_1 + 0x7c0));
            uVar21 = FUN_018d7c0c(plVar24,&local_260);
            if ((uVar21 & 1) == 0) {
              FUN_01acd104(param_1);
              uVar21 = 0;
              plVar28 = local_200;
            }
            else {
              uVar21 = 2;
              plVar28 = local_200;
            }
            local_200 = plVar28;
            if (plVar28 != (long *)0x0) {
              plVar2 = plVar28 + 1;
              do {
                iVar20 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar17) {
                  *(int *)plVar2 = iVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar20 == 0) {
                plVar28[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_180 = (long *)*plVar28;
                FUN_02a44274(lVar23 + 0xd8,&local_180);
              }
            }
            plVar28 = local_218;
            if (local_218 != (long *)0x0) {
              plVar2 = local_218 + 1;
              do {
                iVar20 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar17) {
                  *(int *)plVar2 = iVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar20 == 0) {
                local_218[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_180 = (long *)*plVar28;
                FUN_02a44274(lVar23 + 0xd8,&local_180);
              }
            }
            plVar28 = local_228;
            if (local_228 != (long *)0x0) {
              plVar2 = local_228 + 1;
              do {
                iVar20 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar17) {
                  *(int *)plVar2 = iVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar20 == 0) {
                local_228[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_180 = (long *)*plVar28;
                FUN_02a44274(lVar23 + 0xd8,&local_180);
              }
            }
            plVar28 = local_238;
            if (local_238 != (long *)0x0) {
              plVar2 = local_238 + 1;
              do {
                iVar20 = (int)*plVar2 + -1;
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                if (bVar17) {
                  *(int *)plVar2 = iVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar20 == 0) {
                local_238[2] = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_180 = (long *)*plVar28;
                FUN_02a44274(lVar23 + 0xd8,&local_180);
              }
            }
            auVar10 = local_250;
            if (local_250 != (undefined1  [8])0x0) {
              plVar28 = (long *)((long)local_250 + 8);
              do {
                iVar20 = (int)*plVar28 + -1;
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                if (bVar17) {
                  *(int *)plVar28 = iVar20;
                  cVar6 = ExclusiveMonitorsStatus();
                }
              } while (cVar6 != '\0');
              if (iVar20 == 0) {
                *(long *)((long)local_250 + 0x10) = 0;
                if (((*PTR_DAT_04379498 & 1) == 0) &&
                   (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                  FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                  __cxa_guard_release(PTR_DAT_04379498);
                }
                lVar23 = *(long *)PTR_DAT_043794a0;
                *(long *)PTR_DAT_043794a8 = lVar23;
                local_180 = *(long **)auVar10;
                FUN_02a44274(lVar23 + 0xd8,&local_180);
              }
            }
          }
          else {
            FUN_01acd104(param_1);
            uVar21 = 0;
          }
          bVar17 = true;
        }
        if (local_88 != (long *)0x0) {
          lVar23 = local_88[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar7) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 == 0) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            (**(code **)(*local_88 + 0x20))();
          }
        }
      }
      lVar23 = plVar24[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar20 = *piVar1;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = iVar20 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar20 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
      if (!bVar17) {
        uVar21 = uVar21 & 0xffffffff;
        goto LAB_01acdfec;
      }
      bVar17 = true;
      uVar21 = uVar21 & 0xffffffff;
    }
    if (local_80[0] != (long *)0x0) {
      lVar23 = local_80[0][0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        bVar16 = *piVar1 + -1 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_80[0];
      } while (cVar6 != '\0');
      goto LAB_01ace010;
    }
    break;
  case 8:
    if (*(long *)(param_1 + 0x810) == 0) {
      local_88 = (long *)0x0;
      uVar21 = 0;
LAB_01ace0a8:
      bVar17 = false;
    }
    else {
      FUN_009b3e90(&local_88);
      if (local_88 == (long *)0x0) {
        uVar21 = 0;
        goto LAB_01ace0a8;
      }
      local_260 = (long *)0x0;
      local_258 = (code *)0x0;
      FUN_009ab200(&local_260,local_88 + 0x68);
      plVar28 = local_260;
      plVar24 = (long *)0x0;
      if (local_260 == (long *)0x0) {
LAB_01acf1bc:
        uVar21 = 0;
LAB_01acf1c0:
        bVar17 = false;
      }
      else {
        if (*(int *)((long)local_260 + 0xc) != 0) {
          piVar1 = (int *)((long)local_260 + 0xc);
          iVar20 = *(int *)((long)local_260 + 0xc);
          while (uVar21 = FUN_009b4090(plVar28[2]), (uVar21 & 1) != 0) {
            iVar19 = *piVar1;
            if (iVar19 == iVar20) {
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar17) {
                *piVar1 = iVar20 + 1;
                cVar6 = ExclusiveMonitorsStatus();
              }
              if (cVar6 == '\0') {
                lVar23 = plVar28[3];
                plVar24 = (long *)0x0;
                plVar28 = local_260;
                if (lVar23 != 0) {
                  plVar24 = (long *)(lVar23 + -0x50);
                }
                goto joined_r0x01ad0c3c;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar20 = iVar19;
            if (iVar19 == 0) break;
          }
        }
        plVar24 = (long *)0x0;
        plVar28 = local_260;
joined_r0x01ad0c3c:
        local_260 = plVar28;
        if (plVar28 != (long *)0x0) {
          plVar2 = plVar28 + 1;
          do {
            iVar20 = (int)*plVar2 + -1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar17) {
              *(int *)plVar2 = iVar20;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 == 0) {
            plVar28[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar23 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar23;
            local_180 = (long *)*plVar28;
            FUN_02a44274(lVar23 + 0xd8,&local_180);
          }
        }
        if ((plVar24 == (long *)0x0) ||
           (FUN_00cf6d78(&local_90,param_1 + 0x778), local_90 == (long *)0x0)) goto LAB_01acf1bc;
        FUN_009c69bc(&local_260);
        plVar28 = (long *)FUN_009b421c(local_260 + 0x1e,&local_180);
        if (local_260 == (long *)0x0) {
LAB_01ad0cf0:
          if (plVar28 == (long *)0x0) goto LAB_01ad1bdc;
LAB_01ad0cf4:
          uVar21 = FUN_018de07c(plVar28);
          if ((uVar21 & 1) != 0) {
            uVar21 = FUN_018e0d5c(plVar28);
            puVar11 = PTR_DAT_0437a110;
            if ((uVar21 & 1) != 0) goto LAB_01ad0d0c;
            lVar23 = *(long *)(param_1 + 0x800);
            if ((lVar23 == 0) || (*(int *)(lVar23 + 0xc) == 0)) goto LAB_01ad1bdc;
            piVar1 = (int *)(lVar23 + 0xc);
            iVar20 = *(int *)(lVar23 + 0xc);
            do {
              puVar30 = *(undefined8 **)(lVar23 + 0x10);
              if (((*puVar11 & 1) == 0) && (iVar19 = __cxa_guard_acquire(puVar11), iVar19 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar19 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar19 != 0)) {
                  uVar22 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar22;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)PTR_DAT_0437a108 = PTR_DAT_043794d8;
                __cxa_guard_release(puVar11);
              }
              if (puVar30 == (undefined8 *)0x0) goto LAB_01ad1bdc;
              while (puVar30 != (undefined8 *)PTR_DAT_0437a108) {
                puVar30 = (undefined8 *)*puVar30;
                uVar21 = 0;
                if (puVar30 == (undefined8 *)0x0) goto LAB_01ad1be4;
              }
              iVar19 = *piVar1;
              if (iVar19 == iVar20) {
                cVar6 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                if (bVar17) {
                  *piVar1 = iVar20 + 1;
                  cVar6 = ExclusiveMonitorsStatus();
                }
                if (cVar6 != '\0') goto LAB_01ad0e98;
                lVar23 = *(long *)(lVar23 + 0x18);
                if (lVar23 != 0) {
                  plVar29 = (long *)(lVar23 + -0x50);
                  FUN_017e63cc(&local_260,plVar29);
                  plVar2 = local_260;
                  if (local_260 == (long *)0x0) {
                    uVar21 = 0;
                    bVar17 = false;
                  }
                  else {
                    lVar27 = local_260[0xb];
                    piVar1 = (int *)(lVar27 + 0xc);
                    do {
                      iVar20 = *piVar1;
                      cVar6 = '\x01';
                      bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                      if (bVar17) {
                        *piVar1 = iVar20 + -1;
                        cVar6 = ExclusiveMonitorsStatus();
                      }
                    } while (cVar6 != '\0');
                    if (iVar20 + -1 == 0) {
                      *(undefined8 *)(lVar27 + 0x18) = 0;
                      (**(code **)(*local_260 + 0x20))(local_260);
                    }
                    local_1f0 = local_1f0 & 0xffffffffffffff00;
                    local_200 = (long *)0x0;
                    local_1f8 = (long *)0x0;
                    local_238 = (long *)0x0;
                    local_240 = (long *)((ulong)local_240 & 0xffffffff00000000);
                    local_210 = 0;
                    local_208 = 0;
                    local_220 = 0;
                    local_218 = (long *)0x0;
                    local_230 = (long *)0x0;
                    local_228 = (long *)0x0;
                    local_250 = (undefined1  [8])0x0;
                    plStack_248 = (long *)0x0;
                    local_258 = *(code **)(param_1 + 0x5d8);
                    local_260 = *(long **)(param_1 + 0x5d0);
                    (**(code **)(*plVar28 + 0x10))(&local_180,plVar28);
                    local_a0 = (long *)0x0;
                    uStack_98 = 0;
                    FUN_017dc294(&local_a0,&local_180);
                    plVar4 = local_180;
                    if (local_180 != (long *)0x0) {
                      plVar3 = local_180 + 1;
                      do {
                        iVar20 = (int)*plVar3 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar17) {
                          *(int *)plVar3 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        local_180[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_80[0] = (long *)*plVar4;
                        FUN_02a44274(lVar27 + 0xd8,local_80);
                      }
                    }
                    FUN_017e9b98(local_250,&local_a0);
                    plVar4 = local_a0;
                    if (local_a0 != (long *)0x0) {
                      plVar3 = local_a0 + 1;
                      do {
                        iVar20 = (int)*plVar3 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar3,0x10);
                        if (bVar17) {
                          *(int *)plVar3 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        local_a0[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_180 = (long *)*plVar4;
                        FUN_02a44274(lVar27 + 0xd8,&local_180);
                      }
                    }
                    local_240 = (long *)CONCAT44(local_240._4_4_,*(undefined4 *)(param_1 + 0x770));
                    FUN_00b63974(&local_238,param_1 + 0x778);
                    FUN_00cfa028(&local_228,param_1 + 0x788);
                    FUN_0095aa3c(&local_218,param_1 + 0x798);
                    local_208 = *(ulong *)(param_1 + 0x7a8);
                    FUN_00bd10a0(&local_200,param_1 + 0x7b0);
                    local_1f0 = CONCAT71(local_1f0._1_7_,*(undefined1 *)(param_1 + 0x7c0));
                    uVar21 = FUN_018d9058(plVar24,&local_260);
                    if ((uVar21 & 1) == 0) {
                      FUN_01acd104(param_1);
                      uVar21 = 0;
                      plVar28 = local_200;
                    }
                    else {
                      (**(code **)(*plVar28 + 0x10))(&local_180,plVar28);
                      local_b0 = (undefined8 *)0x0;
                      uStack_a8 = 0;
                      FUN_017dc294(&local_b0,&local_180);
                      plVar28 = local_180;
                      if (local_180 != (long *)0x0) {
                        plVar4 = local_180 + 1;
                        do {
                          iVar20 = (int)*plVar4 + -1;
                          cVar6 = '\x01';
                          bVar17 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                          if (bVar17) {
                            *(int *)plVar4 = iVar20;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar20 == 0) {
                          local_180[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar27 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar27;
                          local_a0 = (long *)*plVar28;
                          FUN_02a44274(lVar27 + 0xd8,&local_a0);
                        }
                      }
                      (**(code **)(*plVar24 + 0x10))(&local_180,plVar24);
                      local_c0 = (undefined8 *)0x0;
                      uStack_b8 = 0;
                      FUN_017dc294(&local_c0,&local_180);
                      plVar28 = local_180;
                      if (local_180 != (long *)0x0) {
                        plVar4 = local_180 + 1;
                        do {
                          iVar20 = (int)*plVar4 + -1;
                          cVar6 = '\x01';
                          bVar17 = (bool)ExclusiveMonitorPass(plVar4,0x10);
                          if (bVar17) {
                            *(int *)plVar4 = iVar20;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar20 == 0) {
                          local_180[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar27 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar27;
                          local_a0 = (long *)*plVar28;
                          FUN_02a44274(lVar27 + 0xd8,&local_a0);
                        }
                      }
                      FUN_017d4c90(plVar2,&local_b0,&local_c0);
                      puVar30 = local_c0;
                      if (local_c0 != (undefined8 *)0x0) {
                        piVar1 = (int *)(local_c0 + 1);
                        do {
                          iVar20 = *piVar1;
                          cVar6 = '\x01';
                          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar17) {
                            *piVar1 = iVar20 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar20 + -1 == 0) {
                          local_c0[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar27 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar27;
                          local_180 = (long *)*puVar30;
                          FUN_02a44274(lVar27 + 0xd8,&local_180);
                        }
                      }
                      puVar30 = local_b0;
                      if (local_b0 != (undefined8 *)0x0) {
                        piVar1 = (int *)(local_b0 + 1);
                        do {
                          iVar20 = *piVar1;
                          cVar6 = '\x01';
                          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                          if (bVar17) {
                            *piVar1 = iVar20 + -1;
                            cVar6 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar6 != '\0');
                        if (iVar20 == 1) {
                          local_b0[2] = 0;
                          if (((*PTR_DAT_04379498 & 1) == 0) &&
                             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                            __cxa_guard_release(PTR_DAT_04379498);
                          }
                          lVar27 = *(long *)PTR_DAT_043794a0;
                          *(long *)PTR_DAT_043794a8 = lVar27;
                          local_180 = (long *)*puVar30;
                          FUN_02a44274(lVar27 + 0xd8,&local_180);
                        }
                      }
                      uVar21 = 2;
                      plVar28 = local_200;
                    }
                    local_200 = plVar28;
                    if (plVar28 != (long *)0x0) {
                      plVar2 = plVar28 + 1;
                      do {
                        iVar20 = (int)*plVar2 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar17) {
                          *(int *)plVar2 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        plVar28[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_180 = (long *)*plVar28;
                        FUN_02a44274(lVar27 + 0xd8,&local_180);
                      }
                    }
                    plVar28 = local_218;
                    if (local_218 != (long *)0x0) {
                      plVar2 = local_218 + 1;
                      do {
                        iVar20 = (int)*plVar2 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar17) {
                          *(int *)plVar2 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        local_218[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_180 = (long *)*plVar28;
                        FUN_02a44274(lVar27 + 0xd8,&local_180);
                      }
                    }
                    plVar28 = local_228;
                    if (local_228 != (long *)0x0) {
                      plVar2 = local_228 + 1;
                      do {
                        iVar20 = (int)*plVar2 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar17) {
                          *(int *)plVar2 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        local_228[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_180 = (long *)*plVar28;
                        FUN_02a44274(lVar27 + 0xd8,&local_180);
                      }
                    }
                    plVar28 = local_238;
                    if (local_238 != (long *)0x0) {
                      plVar2 = local_238 + 1;
                      do {
                        iVar20 = (int)*plVar2 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
                        if (bVar17) {
                          *(int *)plVar2 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        local_238[2] = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_180 = (long *)*plVar28;
                        FUN_02a44274(lVar27 + 0xd8,&local_180);
                      }
                    }
                    auVar10 = local_250;
                    if (local_250 != (undefined1  [8])0x0) {
                      plVar28 = (long *)((long)local_250 + 8);
                      do {
                        iVar20 = (int)*plVar28 + -1;
                        cVar6 = '\x01';
                        bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
                        if (bVar17) {
                          *(int *)plVar28 = iVar20;
                          cVar6 = ExclusiveMonitorsStatus();
                        }
                      } while (cVar6 != '\0');
                      if (iVar20 == 0) {
                        *(long *)((long)local_250 + 0x10) = 0;
                        if (((*PTR_DAT_04379498 & 1) == 0) &&
                           (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                          __cxa_guard_release(PTR_DAT_04379498);
                        }
                        lVar27 = *(long *)PTR_DAT_043794a0;
                        *(long *)PTR_DAT_043794a8 = lVar27;
                        local_180 = *(long **)auVar10;
                        FUN_02a44274(lVar27 + 0xd8,&local_180);
                      }
                    }
                    bVar17 = true;
                  }
                  lVar23 = *(long *)(lVar23 + 8);
                  piVar1 = (int *)(lVar23 + 0xc);
                  do {
                    iVar20 = *piVar1;
                    cVar6 = '\x01';
                    bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
                    if (bVar7) {
                      *piVar1 = iVar20 + -1;
                      cVar6 = ExclusiveMonitorsStatus();
                    }
                  } while (cVar6 != '\0');
                  if (iVar20 + -1 == 0) {
                    *(undefined8 *)(lVar23 + 0x18) = 0;
                    (**(code **)(*plVar29 + 0x20))(plVar29);
                  }
                  if (!bVar17) break;
                  goto LAB_01ad0d18;
                }
                goto LAB_01ad1bdc;
              }
              ClearExclusiveLocal();
LAB_01ad0e98:
              uVar21 = 0;
              iVar20 = iVar19;
            } while (iVar19 != 0);
            goto LAB_01ad1be4;
          }
LAB_01ad0d0c:
          FUN_01acd104(param_1);
          uVar21 = 0;
LAB_01ad0d18:
          bVar17 = true;
          bVar7 = true;
          if (local_90 != (long *)0x0) goto LAB_01ad1bec;
LAB_01ad1c08:
          if (bVar17) goto LAB_01ad1c0c;
          goto LAB_01acf1c0;
        }
        lVar23 = local_260[0xb];
        piVar1 = (int *)(lVar23 + 0xc);
        do {
          iVar20 = *piVar1;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar17) {
            *piVar1 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 + -1 != 0) goto LAB_01ad0cf0;
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_260 + 0x20))();
        if (plVar28 != (long *)0x0) goto LAB_01ad0cf4;
LAB_01ad1bdc:
        uVar21 = 0;
LAB_01ad1be4:
        bVar17 = false;
        bVar7 = bVar17;
        if (local_90 == (long *)0x0) goto LAB_01ad1c08;
LAB_01ad1bec:
        bVar17 = bVar7;
        lVar23 = local_90[0xb];
        piVar1 = (int *)(lVar23 + 0xc);
        do {
          iVar20 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 + -1 != 0) goto LAB_01ad1c08;
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*local_90 + 0x20))();
        if (!bVar17) goto LAB_01acf1c0;
LAB_01ad1c0c:
        bVar17 = true;
      }
      if (plVar24 != (long *)0x0) {
        lVar23 = plVar24[0xb];
        piVar1 = (int *)(lVar23 + 0xc);
        do {
          iVar20 = *piVar1;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar7) {
            *piVar1 = iVar20 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 + -1 == 0) {
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*plVar24 + 0x20))(plVar24);
        }
      }
      if (!bVar17) goto LAB_01ace0a8;
      bVar17 = true;
    }
    if (local_88 != (long *)0x0) {
      lVar23 = local_88[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        bVar16 = *piVar1 + -1 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_88;
      } while (cVar6 != '\0');
      goto LAB_01ace010;
    }
    break;
  case 0x21:
    if (*(long *)(param_1 + 0x810) == 0) {
      local_88 = (long *)0x0;
      uVar21 = 0;
LAB_01ace040:
      bVar17 = false;
    }
    else {
      FUN_009b3e90(&local_88);
      if (local_88 == (long *)0x0) {
LAB_01acf154:
        uVar21 = 0;
        goto LAB_01ace040;
      }
      local_260 = (long *)0x0;
      local_258 = (code *)0x0;
      FUN_009ab200(&local_260,local_88 + 0x68);
      plVar24 = local_260;
      if (local_260 == (long *)0x0) goto LAB_01acf154;
      if (*(int *)((long)local_260 + 0xc) != 0) {
        piVar1 = (int *)((long)local_260 + 0xc);
        iVar20 = *(int *)((long)local_260 + 0xc);
        while (uVar21 = FUN_009b4090(plVar24[2]), (uVar21 & 1) != 0) {
          iVar19 = *piVar1;
          if (iVar19 == iVar20) {
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + 1;
              cVar6 = ExclusiveMonitorsStatus();
            }
            if (cVar6 == '\0') {
              lVar23 = plVar24[3];
              plVar24 = (long *)0x0;
              plVar28 = local_260;
              if (lVar23 != 0) {
                plVar24 = (long *)(lVar23 + -0x50);
              }
              goto joined_r0x01acfefc;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar20 = iVar19;
          if (iVar19 == 0) break;
        }
      }
      plVar24 = (long *)0x0;
      plVar28 = local_260;
joined_r0x01acfefc:
      local_260 = plVar28;
      if (plVar28 != (long *)0x0) {
        plVar2 = plVar28 + 1;
        do {
          iVar20 = (int)*plVar2 + -1;
          cVar6 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar17) {
            *(int *)plVar2 = iVar20;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
        if (iVar20 == 0) {
          plVar28[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar23 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar23;
          local_180 = (long *)*plVar28;
          FUN_02a44274(lVar23 + 0xd8,&local_180);
        }
      }
      if (plVar24 == (long *)0x0) goto LAB_01acf154;
      FUN_00cf6d78(&local_90,param_1 + 0x778);
      if (local_90 == (long *)0x0) {
        uVar21 = 0;
        iVar20 = 0;
      }
      else {
        FUN_009c69bc(&local_260);
        plVar28 = (long *)FUN_01093f28(local_260 + 0x1e,&local_180);
        if (local_260 == (long *)0x0) {
LAB_01acffb0:
          if (plVar28 != (long *)0x0) goto LAB_01acffb4;
LAB_01ad1214:
          uVar21 = 0;
        }
        else {
          lVar23 = local_260[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar20 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar20 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar20 + -1 != 0) goto LAB_01acffb0;
          *(undefined8 *)(lVar23 + 0x18) = 0;
          (**(code **)(*local_260 + 0x20))();
          if (plVar28 == (long *)0x0) goto LAB_01ad1214;
LAB_01acffb4:
          local_250 = (undefined1  [8])0x0;
          plStack_248 = (long *)0x0;
          local_258 = *(code **)(param_1 + 0x5d8);
          local_260 = *(long **)(param_1 + 0x5d0);
          (**(code **)(*plVar28 + 0x10))(&local_180,plVar28);
          local_a0 = (long *)0x0;
          uStack_98 = 0;
          FUN_009c43c8(&local_a0,&local_180);
          plVar28 = local_180;
          if (local_180 != (long *)0x0) {
            plVar2 = local_180 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_180[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_80[0] = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,local_80);
            }
          }
          FUN_009c496c(local_250,&local_a0);
          plVar28 = local_a0;
          if (local_a0 != (long *)0x0) {
            plVar2 = local_a0 + 1;
            do {
              iVar20 = (int)*plVar2 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar17) {
                *(int *)plVar2 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              local_a0[2] = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = (long *)*plVar28;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          uVar21 = FUN_018d701c(plVar24,&local_260);
          if ((uVar21 & 1) == 0) {
            FUN_01acd104(param_1);
            uVar21 = 0;
            auVar10 = local_250;
          }
          else {
            uVar21 = 2;
            auVar10 = local_250;
          }
          local_250 = auVar10;
          if (auVar10 != (undefined1  [8])0x0) {
            plVar28 = (long *)((long)auVar10 + 8);
            do {
              iVar20 = (int)*plVar28 + -1;
              cVar6 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar28,0x10);
              if (bVar17) {
                *(int *)plVar28 = iVar20;
                cVar6 = ExclusiveMonitorsStatus();
              }
            } while (cVar6 != '\0');
            if (iVar20 == 0) {
              *(long *)((long)auVar10 + 0x10) = 0;
              if (((*PTR_DAT_04379498 & 1) == 0) &&
                 (iVar20 = __cxa_guard_acquire(PTR_DAT_04379498), iVar20 != 0)) {
                FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
                __cxa_guard_release(PTR_DAT_04379498);
              }
              lVar23 = *(long *)PTR_DAT_043794a0;
              *(long *)PTR_DAT_043794a8 = lVar23;
              local_180 = *(long **)auVar10;
              FUN_02a44274(lVar23 + 0xd8,&local_180);
            }
          }
          plVar28 = (long *)0x1;
        }
        iVar20 = (int)plVar28;
        if (local_90 != (long *)0x0) {
          lVar23 = local_90[0xb];
          piVar1 = (int *)(lVar23 + 0xc);
          do {
            iVar19 = *piVar1;
            cVar6 = '\x01';
            bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar17) {
              *piVar1 = iVar19 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (iVar19 + -1 == 0) {
            *(undefined8 *)(lVar23 + 0x18) = 0;
            (**(code **)(*local_90 + 0x20))();
          }
        }
      }
      lVar23 = plVar24[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        iVar19 = *piVar1;
        cVar6 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar17) {
          *piVar1 = iVar19 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      if (iVar19 + -1 == 0) {
        *(undefined8 *)(lVar23 + 0x18) = 0;
        (**(code **)(*plVar24 + 0x20))(plVar24);
      }
      if (iVar20 == 0) goto LAB_01ace040;
      bVar17 = true;
    }
    if (local_88 != (long *)0x0) {
      lVar23 = local_88[0xb];
      piVar1 = (int *)(lVar23 + 0xc);
      do {
        bVar16 = *piVar1 + -1 == 0;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar7) {
          *piVar1 = *piVar1 + -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
        plVar24 = local_88;
      } while (cVar6 != '\0');
      goto LAB_01ace010;
    }
  }
  if (bVar17) {
    return uVar21;
  }
  goto LAB_01ace018;
LAB_01acfdb4:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar21 = plVar28[0x21];
    uVar32 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0x65af0be46cff5ac4;
      }
      else if (uVar21 < 0x65af0be46cff5ac5) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0x65af0be46cff5ac4 / uVar21;
        }
        uVar26 = 0x65af0be46cff5ac4 - uVar26 * uVar21;
      }
      else {
        uVar26 = 0x65af0be46cff5ac4;
      }
      plVar29 = *(long **)(plVar28[0x20] + uVar26 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar29[1] == 0x65af0be46cff5ac4) {
              if (plVar29[2] == 0x65af0be46cff5ac4) goto LAB_01ad0700;
            }
            else if ((plVar29[1] & uVar21 - 1) != uVar26) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar29[1];
            if (uVar25 == 0x65af0be46cff5ac4) {
              if (plVar29[2] == 0x65af0be46cff5ac4) goto LAB_01ad0700;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad0704;
  }
  goto LAB_01ad0718;
LAB_01ad0700:
  uVar32 = (undefined4)plVar29[6];
LAB_01ad0704:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *(int *)plVar2 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_01ad0718:
  local_260 = (long *)CONCAT44(local_260._4_4_,uVar32);
  if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar12;
  *(long *)puVar13 = lVar23;
  uVar21 = *(ulong *)(lVar23 + 0x60);
  uVar32 = 0;
  if (uVar21 != 0) {
    uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar26 = uVar21 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar26 = 0x4e9fd5f8e749f8e3;
      if (uVar21 < 0x4e9fd5f8e749f8e4) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0x4e9fd5f8e749f8e3 / uVar21;
        }
        uVar26 = 0x4e9fd5f8e749f8e3 - uVar26 * uVar21;
      }
    }
    plVar28 = *(long **)(*(long *)(lVar23 + 0x58) + uVar26 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar25 < 2) {
        do {
          if (plVar28[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad07b8;
          }
          else if ((plVar28[1] & uVar21 - 1) != uVar26) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar28[1];
          if (uVar25 == 0x4e9fd5f8e749f8e3) {
            if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad07b8;
          }
          else {
            if (uVar21 <= uVar25) {
              uVar8 = 0;
              if (uVar21 != 0) {
                uVar8 = uVar25 / uVar21;
              }
              uVar25 = uVar25 - uVar8 * uVar21;
            }
            if (uVar25 != uVar26) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
  goto LAB_01ad0950;
LAB_01ad07b8:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar21 = plVar28[0x21];
    uVar32 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0xe05b0095fee6abba;
      }
      else if (uVar21 < 0xe05b0095fee6abbb) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0xe05b0095fee6abba / uVar21;
        }
        uVar26 = 0xe05b0095fee6abba - uVar26 * uVar21;
      }
      else {
        uVar26 = 0xe05b0095fee6abba;
      }
      plVar29 = *(long **)(plVar28[0x20] + uVar26 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar29[1] == 0xe05b0095fee6abba) {
              if (plVar29[2] == -0x1fa4ff6a01195446) goto LAB_01ad0938;
            }
            else if ((plVar29[1] & uVar21 - 1) != uVar26) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar29[1];
            if (uVar25 == 0xe05b0095fee6abba) {
              if (plVar29[2] == -0x1fa4ff6a01195446) goto LAB_01ad0938;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad093c;
  }
  goto LAB_01ad0950;
LAB_01ad09f8:
  plVar28 = (long *)plVar28[3];
  if (plVar28 != (long *)0x0) {
    plVar2 = plVar28 + 10;
    do {
      cVar6 = '\x01';
      bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar17) {
        *(int *)plVar2 = (int)*plVar2 + 1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    uVar21 = plVar28[0x21];
    uVar32 = 0;
    if (uVar21 != 0) {
      uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
      uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
      uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar25 < 2) {
        uVar26 = uVar21 - 1 & 0x1116c792dc648d02;
      }
      else if (uVar21 < 0x1116c792dc648d03) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0x1116c792dc648d02 / uVar21;
        }
        uVar26 = 0x1116c792dc648d02 - uVar26 * uVar21;
      }
      else {
        uVar26 = 0x1116c792dc648d02;
      }
      plVar29 = *(long **)(plVar28[0x20] + uVar26 * 8);
      if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
        if (uVar25 < 2) {
          do {
            if (plVar29[1] == 0x1116c792dc648d02) {
              if (plVar29[2] == 0x1116c792dc648d02) goto LAB_01ad0b3c;
            }
            else if ((plVar29[1] & uVar21 - 1) != uVar26) break;
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
        else {
          do {
            uVar25 = plVar29[1];
            if (uVar25 == 0x1116c792dc648d02) {
              if (plVar29[2] == 0x1116c792dc648d02) goto LAB_01ad0b3c;
            }
            else {
              if (uVar21 <= uVar25) {
                uVar8 = 0;
                if (uVar21 != 0) {
                  uVar8 = uVar25 / uVar21;
                }
                uVar25 = uVar25 - uVar8 * uVar21;
              }
              if (uVar25 != uVar26) break;
            }
            plVar29 = (long *)*plVar29;
          } while (plVar29 != (long *)0x0);
        }
      }
    }
    goto LAB_01ad0b40;
  }
  goto LAB_01ad0b54;
LAB_01ad0b3c:
  uVar32 = (undefined4)plVar29[6];
LAB_01ad0b40:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *(int *)plVar2 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
  goto LAB_01ad0b54;
LAB_01ad0938:
  uVar32 = (undefined4)plVar29[6];
LAB_01ad093c:
  do {
    iVar20 = (int)*plVar2 + -1;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(plVar2,0x10);
    if (bVar17) {
      *(int *)plVar2 = iVar20;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 0) {
    (**(code **)(*plVar28 + 0x10))();
  }
LAB_01ad0950:
  local_260 = (long *)CONCAT44(uVar32,(undefined4)local_260);
  if (((*puVar11 & 1) == 0) && (iVar20 = __cxa_guard_acquire(PTR_DAT_04379660), iVar20 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar23 = *(long *)puVar12;
  *(long *)puVar13 = lVar23;
  uVar21 = *(ulong *)(lVar23 + 0x60);
  uVar32 = 0;
  if (uVar21 != 0) {
    uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar26 = uVar21 - 1 & 0x4e9fd5f8e749f8e3;
    }
    else {
      uVar26 = 0x4e9fd5f8e749f8e3;
      if (uVar21 < 0x4e9fd5f8e749f8e4) {
        uVar26 = 0;
        if (uVar21 != 0) {
          uVar26 = 0x4e9fd5f8e749f8e3 / uVar21;
        }
        uVar26 = 0x4e9fd5f8e749f8e3 - uVar26 * uVar21;
      }
    }
    plVar28 = *(long **)(*(long *)(lVar23 + 0x58) + uVar26 * 8);
    if ((plVar28 != (long *)0x0) && (plVar28 = (long *)*plVar28, plVar28 != (long *)0x0)) {
      if (uVar25 < 2) {
        do {
          if (plVar28[1] == 0x4e9fd5f8e749f8e3) {
            if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad09f8;
          }
          else if ((plVar28[1] & uVar21 - 1) != uVar26) break;
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar28[1];
          if (uVar25 == 0x4e9fd5f8e749f8e3) {
            if (plVar28[2] == 0x4e9fd5f8e749f8e3) goto LAB_01ad09f8;
          }
          else {
            if (uVar21 <= uVar25) {
              uVar8 = 0;
              if (uVar21 != 0) {
                uVar8 = uVar25 / uVar21;
              }
              uVar25 = uVar25 - uVar8 * uVar21;
            }
            if (uVar25 != uVar26) break;
          }
          plVar28 = (long *)*plVar28;
        } while (plVar28 != (long *)0x0);
      }
    }
  }
LAB_01ad0b54:
  local_250._0_4_ = uVar32;
  local_238 = *(long **)(param_1 + 0x5d8);
  local_240 = *(long **)(param_1 + 0x5d0);
  uVar21 = FUN_01ad3bac(param_1,&local_260);
  if ((uVar21 & 1) == 0) {
LAB_01ad0b78:
    FUN_01acd104(param_1);
    uVar21 = 0;
  }
  else {
    local_180 = *(long **)(param_1 + 0x5d0);
    local_178 = *(char **)(param_1 + 0x5d8);
    local_168 = *(long **)(param_1 + 0x7d8);
    local_170 = *(undefined8 *)(param_1 + 2000);
    uVar21 = FUN_018d9a34(plVar24,&local_180);
    if ((uVar21 & 1) == 0) goto LAB_01ad0b78;
    uVar21 = 2;
  }
  lVar23 = plVar24[0xb];
  piVar1 = (int *)(lVar23 + 0xc);
  do {
    iVar20 = *piVar1;
    cVar6 = '\x01';
    bVar17 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar17) {
      *piVar1 = iVar20 + -1;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  if (iVar20 == 1) {
    *(undefined8 *)(lVar23 + 0x18) = 0;
    (**(code **)(*plVar24 + 0x20))(plVar24);
  }
  bVar17 = true;
joined_r0x01ad0bac:
  if (local_a0 != (long *)0x0) {
    lVar23 = local_a0[0xb];
    piVar1 = (int *)(lVar23 + 0xc);
    do {
      iVar20 = *piVar1;
      cVar6 = '\x01';
      bVar7 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar7) {
        *piVar1 = iVar20 + -1;
        cVar6 = ExclusiveMonitorsStatus();
      }
    } while (cVar6 != '\0');
    if (iVar20 + -1 == 0) {
      *(undefined8 *)(lVar23 + 0x18) = 0;
      (**(code **)(*local_a0 + 0x20))();
    }
  }
  if (!bVar17) {
LAB_01ace018:
    FUN_01acd104(param_1);
LAB_01acd8b8:
    uVar21 = 0;
  }
  return uVar21;
}


