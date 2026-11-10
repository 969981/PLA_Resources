/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a5d60; name: FUN_025a5d60
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_025a5d60(long param_1)

{
  long *plVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long *plVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  byte *pbVar21;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float fVar22;
  undefined4 extraout_var_01;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 in_q3 [16];
  float fVar25;
  float local_70;
  float fStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  
  uStack_58 = in_q3._8_8_;
  local_60 = in_q3._0_8_;
  lVar14 = FUN_025a8238(param_1 + 0x90,param_1 + 0x80);
  if (lVar14 == 0) {
LAB_025a5d98:
    uStack_58 = 0;
    local_60 = 0;
  }
  else {
    if (*(long *)(lVar14 + 0x18) == 0) {
      local_48 = (long *)0x0;
      goto LAB_025a5d98;
    }
    FUN_025a8344(&local_48);
    puVar11 = PTR_DAT_043794d8;
    puVar10 = PTR_DAT_043794c8;
    puVar9 = PTR_DAT_043794b8;
    if (local_48 == (long *)0x0) goto LAB_025a5d98;
    lVar14 = local_48[0x35];
    piVar2 = (int *)(lVar14 + 0xc);
    pbVar21 = PTR_DAT_043794b0;
    iVar12 = *(int *)(lVar14 + 0xc);
    do {
      while( true ) {
        plVar15 = *(long **)(lVar14 + 0x10);
        if (((*pbVar21 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_043794b0), pbVar21 = PTR_DAT_043794b0, iVar13 != 0)
           ) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar13 != 0)) {
            if (((*PTR_DAT_043794d0 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar13 != 0)) {
              uVar16 = FUN_0087f8f0();
              *(undefined8 *)puVar11 = uVar16;
              __cxa_guard_release(PTR_DAT_043794d0);
            }
            *(undefined **)puVar10 = puVar11;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar9 = puVar10;
          pbVar21 = PTR_DAT_043794b0;
          __cxa_guard_release(PTR_DAT_043794b0);
        }
        for (; plVar15 != (long *)puVar9; plVar15 = (long *)*plVar15) {
        }
        iVar13 = *piVar2;
        if (iVar13 == iVar12) break;
        ClearExclusiveLocal();
        iVar12 = iVar13;
      }
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar5) {
        *piVar2 = iVar12 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      iVar12 = iVar13;
    } while (cVar4 != '\0');
    lVar14 = *(long *)(lVar14 + 0x18);
    plVar15 = (long *)0x0;
    if (lVar14 != 0) {
      plVar15 = (long *)(lVar14 + -0x50);
    }
    (**(code **)(*plVar15 + 0x40))(plVar15);
    if (lVar14 != 0) {
      lVar14 = plVar15[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
    }
    if (local_48 != (long *)0x0) {
      lVar14 = local_48[0xb];
      piVar2 = (int *)(lVar14 + 0xc);
      do {
        iVar12 = *piVar2;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar5) {
          *piVar2 = iVar12 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar12 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_48 + 0x20))();
      }
    }
  }
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379678), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar14 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar14;
  plVar15 = *(long **)(lVar14 + 0xd0);
  lVar14 = _DAT_000001a8;
  if (plVar15 == (long *)0x0) {
joined_r0x025a64a8:
    if (lVar14 != 0) goto LAB_025a5e00;
LAB_025a62a0:
    auVar24 = ZEXT816(0);
  }
  else {
    plVar1 = plVar15 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    lVar14 = plVar15[0x35];
    do {
      iVar12 = (int)*plVar1 + -1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *(int *)plVar1 = iVar12;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 == 0) {
      (**(code **)(*plVar15 + 0x10))();
      goto joined_r0x025a64a8;
    }
    if (lVar14 == 0) goto LAB_025a62a0;
LAB_025a5e00:
    FUN_0131a8fc(lVar14);
    auVar24._12_4_ = extraout_var_01;
    auVar24._8_4_ = extraout_var_00;
    auVar24._4_4_ = extraout_var;
    auVar24._0_4_ = extraout_s0;
  }
  puVar9 = PTR_DAT_04379660;
  local_70 = auVar24._0_4_;
  fStack_6c = auVar24._4_4_;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar11 = PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar19 = *(ulong *)(lVar14 + 0x60);
  if (uVar19 != 0) {
    uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar19 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar18 = 0xe61d0118e24b8e78;
      if (uVar19 < 0xe61d0118e24b8e79) {
        uVar18 = 0;
        if (uVar19 != 0) {
          uVar18 = 0xe61d0118e24b8e78 / uVar19;
        }
        uVar18 = 0xe61d0118e24b8e78 - uVar18 * uVar19;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar18 * 8);
    if ((plVar15 == (long *)0x0) || (plVar15 = (long *)*plVar15, plVar15 == (long *)0x0))
    goto LAB_025a5fc8;
    if (1 < uVar17) {
      do {
        uVar17 = plVar15[1];
        if (uVar17 == 0xe61d0118e24b8e78) {
          if (plVar15[2] == -0x19e2fee71db47188) goto LAB_025a5ecc;
        }
        else {
          if (uVar19 <= uVar17) {
            uVar6 = 0;
            if (uVar19 != 0) {
              uVar6 = uVar17 / uVar19;
            }
            uVar17 = uVar17 - uVar6 * uVar19;
          }
          if (uVar17 != uVar18) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
      goto LAB_025a5fc8;
    }
    do {
      if (plVar15[1] == 0xe61d0118e24b8e78) {
        if (plVar15[2] == -0x19e2fee71db47188) goto LAB_025a5ecc;
      }
      else if ((plVar15[1] & uVar19 - 1) != uVar18) goto LAB_025a5fc8;
      plVar15 = (long *)*plVar15;
      iVar12 = 0;
    } while (plVar15 != (long *)0x0);
    goto LAB_025a6038;
  }
LAB_025a5fc8:
  iVar12 = 0;
  bVar3 = *puVar9;
  goto joined_r0x025a62c0;
LAB_025a5ecc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto LAB_025a5fc8;
  plVar1 = plVar15 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar19 = plVar15[0x14];
  if (uVar19 == 0) {
    iVar12 = 0;
  }
  else {
    uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar19 - 1 & 0xdaf1131e00069619;
    }
    else if (uVar19 < 0xdaf1131e0006961a) {
      uVar18 = 0;
      if (uVar19 != 0) {
        uVar18 = 0xdaf1131e00069619 / uVar19;
      }
      uVar18 = 0xdaf1131e00069619 - uVar18 * uVar19;
    }
    else {
      uVar18 = 0xdaf1131e00069619;
    }
    plVar20 = *(long **)(plVar15[0x13] + uVar18 * 8);
    if (plVar20 == (long *)0x0) {
      iVar12 = 0;
    }
    else {
      plVar20 = (long *)*plVar20;
      if (plVar20 == (long *)0x0) {
        iVar12 = 0;
      }
      else if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xdaf1131e00069619) {
            if (plVar20[2] == -0x250eece1fff969e7) goto LAB_025a6020;
          }
          else if ((plVar20[1] & uVar19 - 1) != uVar18) {
            iVar12 = 0;
            break;
          }
          plVar20 = (long *)*plVar20;
          iVar12 = 0;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xdaf1131e00069619) {
            if (plVar20[2] == -0x250eece1fff969e7) goto LAB_025a6020;
          }
          else {
            if (uVar19 <= uVar17) {
              uVar6 = 0;
              if (uVar19 != 0) {
                uVar6 = uVar17 / uVar19;
              }
              uVar17 = uVar17 - uVar6 * uVar19;
            }
            if (uVar17 != uVar18) {
              iVar12 = 0;
              goto LAB_025a6024;
            }
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
        iVar12 = 0;
      }
    }
  }
  goto LAB_025a6024;
LAB_025a6020:
  iVar12 = (int)plVar20[6];
LAB_025a6024:
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar15 + 0x10))();
    bVar3 = *puVar9;
  }
  else {
LAB_025a6038:
    bVar3 = *puVar9;
  }
joined_r0x025a62c0:
  if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar10;
  *(long *)puVar11 = lVar14;
  uVar19 = *(ulong *)(lVar14 + 0x60);
  fVar25 = 0.0;
  if (uVar19 != 0) {
    uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar19 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar18 = 0xe61d0118e24b8e78;
      if (uVar19 < 0xe61d0118e24b8e79) {
        uVar18 = 0;
        if (uVar19 != 0) {
          uVar18 = 0xe61d0118e24b8e78 / uVar19;
        }
        uVar18 = 0xe61d0118e24b8e78 - uVar18 * uVar19;
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar18 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar15[1] == 0xe61d0118e24b8e78) {
            if (plVar15[2] == -0x19e2fee71db47188) goto LAB_025a60d4;
          }
          else if ((plVar15[1] & uVar19 - 1) != uVar18) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar15[1];
          if (uVar17 == 0xe61d0118e24b8e78) {
            if (plVar15[2] == -0x19e2fee71db47188) goto LAB_025a60d4;
          }
          else {
            if (uVar19 <= uVar17) {
              uVar6 = 0;
              if (uVar19 != 0) {
                uVar6 = uVar17 / uVar19;
              }
              uVar17 = uVar17 - uVar6 * uVar19;
            }
            if (uVar17 != uVar18) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
  goto joined_r0x025a6324;
LAB_025a60d4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 == (long *)0x0) goto joined_r0x025a6324;
  plVar1 = plVar15 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar19 = plVar15[0x14];
  fVar25 = 0.0;
  if (uVar19 != 0) {
    uVar17 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar18 = uVar19 - 1 & 0xa69e984a0f78cfad;
    }
    else if (uVar19 < 0xa69e984a0f78cfae) {
      uVar18 = 0;
      if (uVar19 != 0) {
        uVar18 = 0xa69e984a0f78cfad / uVar19;
      }
      uVar18 = 0xa69e984a0f78cfad - uVar18 * uVar19;
    }
    else {
      uVar18 = 0xa69e984a0f78cfad;
    }
    plVar20 = *(long **)(plVar15[0x13] + uVar18 * 8);
    if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar20[1] == 0xa69e984a0f78cfad) {
            if (plVar20[2] == -0x596167b5f0873053) goto LAB_025a6218;
          }
          else if ((plVar20[1] & uVar19 - 1) != uVar18) break;
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar20[1];
          if (uVar17 == 0xa69e984a0f78cfad) {
            if (plVar20[2] == -0x596167b5f0873053) goto LAB_025a6218;
          }
          else {
            if (uVar19 <= uVar17) {
              uVar6 = 0;
              if (uVar19 != 0) {
                uVar6 = uVar17 / uVar19;
              }
              uVar17 = uVar17 - uVar6 * uVar19;
            }
            if (uVar17 != uVar18) break;
          }
          plVar20 = (long *)*plVar20;
        } while (plVar20 != (long *)0x0);
      }
    }
  }
  goto LAB_025a6220;
LAB_025a6218:
  fVar25 = (float)(int)plVar20[6];
LAB_025a6220:
  do {
    iVar13 = (int)*plVar1 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar5) {
      *(int *)plVar1 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
joined_r0x025a6324:
  if (iVar12 < 1) {
    iVar12 = 0x1e;
  }
  else {
    local_70 = local_70 - (float)local_60;
    fStack_6c = fStack_6c - (float)((ulong)local_60 >> 0x20);
    fVar22 = auVar24._8_4_ - (float)uStack_58;
    fVar23 = auVar24._12_4_ - (float)((ulong)uStack_58 >> 0x20);
    local_70 = local_70 * local_70;
    fStack_6c = fStack_6c * fStack_6c;
    fVar22 = fVar22 * fVar22;
    fVar23 = fVar23 * fVar23;
    auVar7._4_4_ = fStack_6c;
    auVar7._0_4_ = local_70;
    auVar7._8_4_ = fVar22;
    auVar7._12_4_ = fVar23;
    auVar8._4_4_ = fStack_6c;
    auVar8._0_4_ = local_70;
    auVar8._8_4_ = fVar22;
    auVar8._12_4_ = fVar23;
    auVar24 = NEON_ext(auVar7,auVar8,8,1);
    iVar12 = (int)((fVar25 + SQRT(auVar24._0_4_ + local_70 + auVar24._4_4_ + fStack_6c) /
                             (float)iVar12) * 30.0);
  }
  return iVar12;
}


