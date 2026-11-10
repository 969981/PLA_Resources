/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025a2030; name: FUN_025a2030
 */


int FUN_025a2030(void)

{
  int *piVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined8 uVar17;
  long lVar18;
  ulong *puVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined8 local_a0;
  char *pcStack_98;
  undefined8 local_90;
  long *local_88;
  undefined8 local_80;
  char *pcStack_78;
  undefined8 local_70;
  long *local_68;
  
  if (((*PTR_DAT_04379678 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379678), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379a10,PTR_DAT_04379680,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379678);
  }
  lVar18 = *(long *)PTR_DAT_04379680;
  *(long *)PTR_DAT_04379688 = lVar18;
  puVar19 = *(ulong **)(lVar18 + 0xd8);
  uVar20 = *puVar19;
  uVar21 = puVar19[1];
  do {
    uVar25 = uVar20 ^ uVar21;
    iVar16 = (int)uVar21;
    uVar21 = uVar25 >> 0x1b | uVar25 << 0x25;
    uVar2 = (int)uVar20 + iVar16 & 0x7f;
    uVar20 = uVar25 ^ (uVar20 >> 0x28 | uVar20 << 0x18) ^ uVar25 << 0x10;
  } while (99 < uVar2);
  *puVar19 = uVar20;
  puVar19[1] = uVar21;
  local_80 = 0xe61d0118e24b8e78;
  pcStack_78 = "wormhole";
  local_70 = 8;
  local_68 = (long *)0x0;
  local_a0 = 0x1e7d55389d865e89;
  pcStack_98 = "kWhEventFlag";
  local_90 = 0xc;
  local_88 = (long *)0x0;
  uVar20 = FUN_00ea3260(&local_80,&local_a0);
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379558), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar18 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar18;
  plVar30 = *(long **)(lVar18 + 0x228);
  if (plVar30 != (long *)0x0) {
    lVar18 = plVar30[0xb];
    if (*(undefined8 **)(lVar18 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar18 + 0x10) == 0) {
      uVar17 = (**(code **)**(undefined8 **)(lVar18 + 0x18))();
      *(undefined8 *)(lVar18 + 0x10) = uVar17;
    }
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = *piVar1 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  puVar9 = PTR_DAT_04379660;
  uVar21 = ((long *)plVar30[0x37])[1];
  if (uVar21 != 0) {
    uVar25 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar25 = (uVar25 & 0x3333333333333333) + (uVar25 >> 2 & 0x3333333333333333);
    uVar7 = 0;
    if (uVar21 != 0) {
      uVar7 = uVar20 / uVar21;
    }
    uVar25 = (uVar25 + (uVar25 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar25 < 2) {
      uVar28 = uVar21 - 1 & uVar20;
    }
    else {
      uVar28 = uVar20;
      if (uVar21 <= uVar20) {
        uVar28 = uVar20 - uVar7 * uVar21;
      }
    }
    lVar18 = *(long *)plVar30[0x37];
    plVar22 = *(long **)(lVar18 + uVar28 * 8);
    if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
      uVar23 = uVar21 - 1;
      if (uVar25 < 2) {
        do {
          if (plVar22[1] == uVar20) {
            if (plVar22[2] == uVar20) goto LAB_025a2284;
          }
          else if ((plVar22[1] & uVar23) != uVar28) break;
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
      else {
        do {
          uVar29 = plVar22[1];
          if (uVar29 == uVar20) {
            if (plVar22[2] == uVar20) goto LAB_025a2284;
          }
          else {
            if (uVar21 <= uVar29) {
              uVar8 = 0;
              if (uVar21 != 0) {
                uVar8 = uVar29 / uVar21;
              }
              uVar29 = uVar29 - uVar8 * uVar21;
            }
            if (uVar29 != uVar28) break;
          }
          plVar22 = (long *)*plVar22;
        } while (plVar22 != (long *)0x0);
      }
    }
  }
  goto LAB_025a2338;
LAB_025a2284:
  if (uVar25 < 2) {
    uVar28 = uVar23 & uVar20;
    plVar22 = *(long **)(lVar18 + uVar28 * 8);
  }
  else {
    uVar28 = uVar20;
    if (uVar21 <= uVar20) {
      uVar28 = uVar20 - uVar7 * uVar21;
    }
    plVar22 = *(long **)(lVar18 + uVar28 * 8);
  }
  if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
    if (uVar25 < 2) {
      do {
        if (plVar22[1] == uVar20) {
          if (plVar22[2] == uVar20) goto LAB_025a2330;
        }
        else if ((plVar22[1] & uVar23) != uVar28) break;
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
    else {
      do {
        uVar25 = plVar22[1];
        if (uVar25 == uVar20) {
          if (plVar22[2] == uVar20) goto LAB_025a2330;
        }
        else {
          if (uVar21 <= uVar25) {
            uVar7 = 0;
            if (uVar21 != 0) {
              uVar7 = uVar25 / uVar21;
            }
            uVar25 = uVar25 - uVar7 * uVar21;
          }
          if (uVar25 != uVar28) break;
        }
        plVar22 = (long *)*plVar22;
      } while (plVar22 != (long *)0x0);
    }
  }
LAB_025a2338:
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  plVar22 = (long *)PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a24e4:
    iVar16 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a24e4;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a23e8;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a24e4;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a23e8;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a24e4;
      plVar24 = (long *)*plVar24;
      iVar16 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a26e0:
    bVar3 = *puVar9;
  }
joined_r0x025a24ec:
  if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a2874:
    iVar12 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a2874;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a2778;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a2874;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a2778;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a2874;
      plVar24 = (long *)*plVar24;
      iVar12 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a28e4:
    bVar3 = *puVar9;
  }
joined_r0x025a287c:
  if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a2a78:
    iVar13 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a2a78;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a297c;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a2a78;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a297c;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a2a78;
      plVar24 = (long *)*plVar24;
      iVar13 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a2ae8:
    bVar3 = *puVar9;
  }
joined_r0x025a2a80:
  if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a2c7c:
    iVar14 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a2c7c;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a2b80;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a2c7c;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a2b80;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a2c7c;
      plVar24 = (long *)*plVar24;
      iVar14 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a2cec:
    bVar3 = *puVar9;
  }
joined_r0x025a2c84:
  if (((bVar3 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a2e80:
    iVar15 = 0;
    if (iVar16 <= (int)uVar2) goto LAB_025a2ef8;
LAB_025a372c:
    if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar18 = *(long *)puVar10;
    *plVar22 = lVar18;
    uVar20 = *(ulong *)(lVar18 + 0x60);
    if (uVar20 != 0) {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
      }
      else {
        uVar25 = 0xe61d0118e24b8e78;
        if (uVar20 < 0xe61d0118e24b8e79) {
          uVar25 = 0;
          if (uVar20 != 0) {
            uVar25 = 0xe61d0118e24b8e78 / uVar20;
          }
          uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
        }
      }
      plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar22[1] == 0xe61d0118e24b8e78) {
              if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a37c4;
            }
            else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
            plVar22 = (long *)*plVar22;
            iVar16 = 0;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar22[1];
            if (uVar21 == 0xe61d0118e24b8e78) {
              if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a37c4;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) goto LAB_025a5ca0;
            }
            plVar22 = (long *)*plVar22;
            iVar16 = 0;
          } while (plVar22 != (long *)0x0);
        }
        goto LAB_025a3b00;
      }
    }
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a2e80;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a2d84;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a2e80;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a2d84;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a2e80;
      plVar24 = (long *)*plVar24;
      iVar15 = 0;
    } while (plVar24 != (long *)0x0);
joined_r0x025a3728:
    if ((int)uVar2 < iVar16) goto LAB_025a372c;
LAB_025a2ef8:
    if ((int)uVar2 < iVar12 + iVar16) {
      if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar18 = *(long *)puVar10;
      *plVar22 = lVar18;
      uVar20 = *(ulong *)(lVar18 + 0x60);
      if (uVar20 != 0) {
        uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
        }
        else {
          uVar25 = 0xe61d0118e24b8e78;
          if (uVar20 < 0xe61d0118e24b8e79) {
            uVar25 = 0;
            if (uVar20 != 0) {
              uVar25 = 0xe61d0118e24b8e78 / uVar20;
            }
            uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
          }
        }
        plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if (uVar21 < 2) {
            do {
              if (plVar22[1] == 0xe61d0118e24b8e78) {
                if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a32a8;
              }
              else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
              plVar22 = (long *)*plVar22;
              iVar16 = 0;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              uVar21 = plVar22[1];
              if (uVar21 == 0xe61d0118e24b8e78) {
                if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a32a8;
              }
              else {
                if (uVar20 <= uVar21) {
                  uVar7 = 0;
                  if (uVar20 != 0) {
                    uVar7 = uVar21 / uVar20;
                  }
                  uVar21 = uVar21 - uVar7 * uVar20;
                }
                if (uVar21 != uVar25) goto LAB_025a5ca0;
              }
              plVar22 = (long *)*plVar22;
              iVar16 = 0;
            } while (plVar22 != (long *)0x0);
          }
          goto LAB_025a3b00;
        }
      }
    }
    else {
      iVar13 = iVar13 + iVar12 + iVar16;
      if ((int)uVar2 < iVar13) {
        if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar18 = *(long *)puVar10;
        *plVar22 = lVar18;
        uVar20 = *(ulong *)(lVar18 + 0x60);
        if (uVar20 != 0) {
          uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
          uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar21 < 2) {
            uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
          }
          else {
            uVar25 = 0xe61d0118e24b8e78;
            if (uVar20 < 0xe61d0118e24b8e79) {
              uVar25 = 0;
              if (uVar20 != 0) {
                uVar25 = 0xe61d0118e24b8e78 / uVar20;
              }
              uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
            }
          }
          plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
          if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
            if (uVar21 < 2) {
              do {
                if (plVar22[1] == 0xe61d0118e24b8e78) {
                  if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a341c;
                }
                else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
                plVar22 = (long *)*plVar22;
                iVar16 = 0;
              } while (plVar22 != (long *)0x0);
            }
            else {
              do {
                uVar21 = plVar22[1];
                if (uVar21 == 0xe61d0118e24b8e78) {
                  if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a341c;
                }
                else {
                  if (uVar20 <= uVar21) {
                    uVar7 = 0;
                    if (uVar20 != 0) {
                      uVar7 = uVar21 / uVar20;
                    }
                    uVar21 = uVar21 - uVar7 * uVar20;
                  }
                  if (uVar21 != uVar25) goto LAB_025a5ca0;
                }
                plVar22 = (long *)*plVar22;
                iVar16 = 0;
              } while (plVar22 != (long *)0x0);
            }
            goto LAB_025a3b00;
          }
        }
      }
      else {
        iVar14 = iVar14 + iVar13;
        if ((int)uVar2 < iVar14) {
          if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0))
          {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)puVar10;
          *plVar22 = lVar18;
          uVar20 = *(ulong *)(lVar18 + 0x60);
          if (uVar20 != 0) {
            uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar21 < 2) {
              uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
            }
            else {
              uVar25 = 0xe61d0118e24b8e78;
              if (uVar20 < 0xe61d0118e24b8e79) {
                uVar25 = 0;
                if (uVar20 != 0) {
                  uVar25 = 0xe61d0118e24b8e78 / uVar20;
                }
                uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
              }
            }
            plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
            if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
              if (uVar21 < 2) {
                do {
                  if (plVar22[1] == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a3134;
                  }
                  else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              else {
                do {
                  uVar21 = plVar22[1];
                  if (uVar21 == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a3134;
                  }
                  else {
                    if (uVar20 <= uVar21) {
                      uVar7 = 0;
                      if (uVar20 != 0) {
                        uVar7 = uVar21 / uVar20;
                      }
                      uVar21 = uVar21 - uVar7 * uVar20;
                    }
                    if (uVar21 != uVar25) goto LAB_025a5ca0;
                  }
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              goto LAB_025a3b00;
            }
          }
        }
        else if ((int)uVar2 < iVar15 + iVar14) {
          if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0))
          {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)puVar10;
          *plVar22 = lVar18;
          uVar20 = *(ulong *)(lVar18 + 0x60);
          if (uVar20 != 0) {
            uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar21 < 2) {
              uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
            }
            else {
              uVar25 = 0xe61d0118e24b8e78;
              if (uVar20 < 0xe61d0118e24b8e79) {
                uVar25 = 0;
                if (uVar20 != 0) {
                  uVar25 = 0xe61d0118e24b8e78 / uVar20;
                }
                uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
              }
            }
            plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
            if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
              if (uVar21 < 2) {
                do {
                  if (plVar22[1] == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a2fc0;
                  }
                  else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              else {
                do {
                  uVar21 = plVar22[1];
                  if (uVar21 == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a2fc0;
                  }
                  else {
                    if (uVar20 <= uVar21) {
                      uVar7 = 0;
                      if (uVar20 != 0) {
                        uVar7 = uVar21 / uVar20;
                      }
                      uVar21 = uVar21 - uVar7 * uVar20;
                    }
                    if (uVar21 != uVar25) goto LAB_025a5ca0;
                  }
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              goto LAB_025a3b00;
            }
          }
        }
      }
    }
  }
LAB_025a5ca0:
  iVar16 = 0;
  goto LAB_025a3b00;
LAB_025a2330:
  if ((char)plVar22[3] == '\0') goto LAB_025a2338;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  plVar22 = (long *)PTR_DAT_04379670;
  puVar10 = PTR_DAT_04379668;
  lVar18 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 != 0) {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a3a30;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a25a4;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a3a30;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a25a4;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a3a30;
      plVar24 = (long *)*plVar24;
      iVar16 = 0;
    } while (plVar24 != (long *)0x0);
    goto LAB_025a3bc4;
  }
LAB_025a3a30:
  iVar16 = 0;
  bVar3 = *puVar9;
  goto joined_r0x025a4a44;
LAB_025a25a4:
  plVar24 = (long *)plVar24[3];
  if (plVar24 == (long *)0x0) goto LAB_025a3a30;
  plVar27 = plVar24 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = (int)*plVar27 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar24[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x97a67be9ae0d989a;
    }
    else if (uVar20 < 0x97a67be9ae0d989b) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x97a67be9ae0d989a / uVar20;
      }
      uVar25 = 0x97a67be9ae0d989a - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x97a67be9ae0d989a;
    }
    plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
    if (plVar26 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar26 = (long *)*plVar26;
      if (plVar26 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar26[1] == 0x97a67be9ae0d989a) {
            if (plVar26[2] == -0x6859841651f26766) goto LAB_025a3bac;
          }
          else if ((plVar26[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar26 = (long *)*plVar26;
          iVar16 = 0;
        } while (plVar26 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar26[1];
          if (uVar21 == 0x97a67be9ae0d989a) {
            if (plVar26[2] == -0x6859841651f26766) goto LAB_025a3bac;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a3bb0;
            }
          }
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a3bb0;
LAB_025a3bac:
  iVar16 = (int)plVar26[6];
LAB_025a3bb0:
  do {
    iVar12 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 == 0) {
    (**(code **)(*plVar24 + 0x10))();
    bVar3 = *puVar9;
  }
  else {
LAB_025a3bc4:
    bVar3 = *puVar9;
  }
joined_r0x025a4a44:
  if (((bVar3 & 1) == 0) && (iVar12 = __cxa_guard_acquire(PTR_DAT_04379660), iVar12 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a3d58:
    iVar12 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a3d58;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a3c5c;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a3d58;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a3c5c;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a3d58;
      plVar24 = (long *)*plVar24;
      iVar12 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a3dc8:
    bVar3 = *puVar9;
  }
joined_r0x025a3d60:
  if (((bVar3 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04379660), iVar13 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a3f5c:
    iVar13 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a3f5c;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a3e60;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a3f5c;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a3e60;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a3f5c;
      plVar24 = (long *)*plVar24;
      iVar13 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a3fcc:
    bVar3 = *puVar9;
  }
joined_r0x025a3f64:
  if (((bVar3 & 1) == 0) && (iVar14 = __cxa_guard_acquire(PTR_DAT_04379660), iVar14 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a4160:
    iVar14 = 0;
    bVar3 = *puVar9;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a4160;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a4064;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a4160;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a4064;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a4160;
      plVar24 = (long *)*plVar24;
      iVar14 = 0;
    } while (plVar24 != (long *)0x0);
LAB_025a41d0:
    bVar3 = *puVar9;
  }
joined_r0x025a4168:
  if (((bVar3 & 1) == 0) && (iVar15 = __cxa_guard_acquire(PTR_DAT_04379660), iVar15 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar18 = *(long *)puVar10;
  *plVar22 = lVar18;
  uVar20 = *(ulong *)(lVar18 + 0x60);
  if (uVar20 == 0) {
LAB_025a4364:
    iVar15 = 0;
    if (iVar16 <= (int)uVar2) goto LAB_025a43dc;
LAB_025a4c24:
    if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar18 = *(long *)puVar10;
    *plVar22 = lVar18;
    uVar20 = *(ulong *)(lVar18 + 0x60);
    if (uVar20 != 0) {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
      }
      else {
        uVar25 = 0xe61d0118e24b8e78;
        if (uVar20 < 0xe61d0118e24b8e79) {
          uVar25 = 0;
          if (uVar20 != 0) {
            uVar25 = 0xe61d0118e24b8e78 / uVar20;
          }
          uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
        }
      }
      plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
      if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
        if (uVar21 < 2) {
          do {
            if (plVar22[1] == 0xe61d0118e24b8e78) {
              if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4cbc;
            }
            else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
            plVar22 = (long *)*plVar22;
            iVar16 = 0;
          } while (plVar22 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar22[1];
            if (uVar21 == 0xe61d0118e24b8e78) {
              if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4cbc;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) goto LAB_025a5ca0;
            }
            plVar22 = (long *)*plVar22;
            iVar16 = 0;
          } while (plVar22 != (long *)0x0);
        }
        goto LAB_025a3b00;
      }
    }
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
    }
    else {
      uVar25 = 0xe61d0118e24b8e78;
      if (uVar20 < 0xe61d0118e24b8e79) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0xe61d0118e24b8e78 / uVar20;
        }
        uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
      }
    }
    plVar24 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
    if ((plVar24 == (long *)0x0) || (plVar24 = (long *)*plVar24, plVar24 == (long *)0x0))
    goto LAB_025a4364;
    if (1 < uVar21) {
      do {
        uVar21 = plVar24[1];
        if (uVar21 == 0xe61d0118e24b8e78) {
          if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a4268;
        }
        else {
          if (uVar20 <= uVar21) {
            uVar7 = 0;
            if (uVar20 != 0) {
              uVar7 = uVar21 / uVar20;
            }
            uVar21 = uVar21 - uVar7 * uVar20;
          }
          if (uVar21 != uVar25) break;
        }
        plVar24 = (long *)*plVar24;
      } while (plVar24 != (long *)0x0);
      goto LAB_025a4364;
    }
    do {
      if (plVar24[1] == 0xe61d0118e24b8e78) {
        if (plVar24[2] == -0x19e2fee71db47188) goto LAB_025a4268;
      }
      else if ((plVar24[1] & uVar20 - 1) != uVar25) goto LAB_025a4364;
      plVar24 = (long *)*plVar24;
      iVar15 = 0;
    } while (plVar24 != (long *)0x0);
joined_r0x025a4c20:
    if ((int)uVar2 < iVar16) goto LAB_025a4c24;
LAB_025a43dc:
    if ((int)uVar2 < iVar12 + iVar16) {
      if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar18 = *(long *)puVar10;
      *plVar22 = lVar18;
      uVar20 = *(ulong *)(lVar18 + 0x60);
      if (uVar20 != 0) {
        uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) {
          uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
        }
        else {
          uVar25 = 0xe61d0118e24b8e78;
          if (uVar20 < 0xe61d0118e24b8e79) {
            uVar25 = 0;
            if (uVar20 != 0) {
              uVar25 = 0xe61d0118e24b8e78 / uVar20;
            }
            uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
          }
        }
        plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
        if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
          if (uVar21 < 2) {
            do {
              if (plVar22[1] == 0xe61d0118e24b8e78) {
                if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a478c;
              }
              else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
              plVar22 = (long *)*plVar22;
              iVar16 = 0;
            } while (plVar22 != (long *)0x0);
          }
          else {
            do {
              uVar21 = plVar22[1];
              if (uVar21 == 0xe61d0118e24b8e78) {
                if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a478c;
              }
              else {
                if (uVar20 <= uVar21) {
                  uVar7 = 0;
                  if (uVar20 != 0) {
                    uVar7 = uVar21 / uVar20;
                  }
                  uVar21 = uVar21 - uVar7 * uVar20;
                }
                if (uVar21 != uVar25) goto LAB_025a5ca0;
              }
              plVar22 = (long *)*plVar22;
              iVar16 = 0;
            } while (plVar22 != (long *)0x0);
          }
          goto LAB_025a3b00;
        }
      }
    }
    else {
      iVar13 = iVar13 + iVar12 + iVar16;
      if ((int)uVar2 < iVar13) {
        if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar18 = *(long *)puVar10;
        *plVar22 = lVar18;
        uVar20 = *(ulong *)(lVar18 + 0x60);
        if (uVar20 != 0) {
          uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
          uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
          uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar21 < 2) {
            uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
          }
          else {
            uVar25 = 0xe61d0118e24b8e78;
            if (uVar20 < 0xe61d0118e24b8e79) {
              uVar25 = 0;
              if (uVar20 != 0) {
                uVar25 = 0xe61d0118e24b8e78 / uVar20;
              }
              uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
            }
          }
          plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
          if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
            if (uVar21 < 2) {
              do {
                if (plVar22[1] == 0xe61d0118e24b8e78) {
                  if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4900;
                }
                else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
                plVar22 = (long *)*plVar22;
                iVar16 = 0;
              } while (plVar22 != (long *)0x0);
            }
            else {
              do {
                uVar21 = plVar22[1];
                if (uVar21 == 0xe61d0118e24b8e78) {
                  if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4900;
                }
                else {
                  if (uVar20 <= uVar21) {
                    uVar7 = 0;
                    if (uVar20 != 0) {
                      uVar7 = uVar21 / uVar20;
                    }
                    uVar21 = uVar21 - uVar7 * uVar20;
                  }
                  if (uVar21 != uVar25) goto LAB_025a5ca0;
                }
                plVar22 = (long *)*plVar22;
                iVar16 = 0;
              } while (plVar22 != (long *)0x0);
            }
            goto LAB_025a3b00;
          }
        }
      }
      else {
        iVar14 = iVar14 + iVar13;
        if ((int)uVar2 < iVar14) {
          if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0))
          {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)puVar10;
          *plVar22 = lVar18;
          uVar20 = *(ulong *)(lVar18 + 0x60);
          if (uVar20 != 0) {
            uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar21 < 2) {
              uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
            }
            else {
              uVar25 = 0xe61d0118e24b8e78;
              if (uVar20 < 0xe61d0118e24b8e79) {
                uVar25 = 0;
                if (uVar20 != 0) {
                  uVar25 = 0xe61d0118e24b8e78 / uVar20;
                }
                uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
              }
            }
            plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
            if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
              if (uVar21 < 2) {
                do {
                  if (plVar22[1] == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4498;
                  }
                  else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              else {
                do {
                  uVar21 = plVar22[1];
                  if (uVar21 == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4498;
                  }
                  else {
                    if (uVar20 <= uVar21) {
                      uVar7 = 0;
                      if (uVar20 != 0) {
                        uVar7 = uVar21 / uVar20;
                      }
                      uVar21 = uVar21 - uVar7 * uVar20;
                    }
                    if (uVar21 != uVar25) goto LAB_025a5ca0;
                  }
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              goto LAB_025a3b00;
            }
          }
        }
        else if ((int)uVar2 < iVar15 + iVar14) {
          if (((*puVar9 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0))
          {
            FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379660);
          }
          lVar18 = *(long *)puVar10;
          *plVar22 = lVar18;
          uVar20 = *(ulong *)(lVar18 + 0x60);
          if (uVar20 != 0) {
            uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
            uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
            uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
            if (uVar21 < 2) {
              uVar25 = uVar20 - 1 & 0xe61d0118e24b8e78;
            }
            else {
              uVar25 = 0xe61d0118e24b8e78;
              if (uVar20 < 0xe61d0118e24b8e79) {
                uVar25 = 0;
                if (uVar20 != 0) {
                  uVar25 = 0xe61d0118e24b8e78 / uVar20;
                }
                uVar25 = 0xe61d0118e24b8e78 - uVar25 * uVar20;
              }
            }
            plVar22 = *(long **)(*(long *)(lVar18 + 0x58) + uVar25 * 8);
            if ((plVar22 != (long *)0x0) && (plVar22 = (long *)*plVar22, plVar22 != (long *)0x0)) {
              if (uVar21 < 2) {
                do {
                  if (plVar22[1] == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4618;
                  }
                  else if ((plVar22[1] & uVar20 - 1) != uVar25) goto LAB_025a5ca0;
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              else {
                do {
                  uVar21 = plVar22[1];
                  if (uVar21 == 0xe61d0118e24b8e78) {
                    if (plVar22[2] == -0x19e2fee71db47188) goto LAB_025a4618;
                  }
                  else {
                    if (uVar20 <= uVar21) {
                      uVar7 = 0;
                      if (uVar20 != 0) {
                        uVar7 = uVar21 / uVar20;
                      }
                      uVar21 = uVar21 - uVar7 * uVar20;
                    }
                    if (uVar21 != uVar25) goto LAB_025a5ca0;
                  }
                  plVar22 = (long *)*plVar22;
                  iVar16 = 0;
                } while (plVar22 != (long *)0x0);
              }
              goto LAB_025a3b00;
            }
          }
        }
      }
    }
  }
  goto LAB_025a5ca0;
LAB_025a3c5c:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar12 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x97a67ae9ae0d96e7;
      }
      else if (uVar20 < 0x97a67ae9ae0d96e8) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x97a67ae9ae0d96e7 / uVar20;
        }
        uVar25 = 0x97a67ae9ae0d96e7 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x97a67ae9ae0d96e7;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar12 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar12 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x97a67ae9ae0d96e7) {
              if (plVar26[2] == -0x6859851651f26919) goto LAB_025a3db0;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar12 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar12 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x97a67ae9ae0d96e7) {
              if (plVar26[2] == -0x6859851651f26919) goto LAB_025a3db0;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar12 = 0;
                goto LAB_025a3db4;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar12 = 0;
        }
      }
    }
    goto LAB_025a3db4;
  }
  goto LAB_025a3d58;
LAB_025a3db0:
  iVar12 = (int)plVar26[6];
LAB_025a3db4:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 != 0) goto LAB_025a3dc8;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a3d60;
LAB_025a3e60:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar13 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x97a679e9ae0d9534;
      }
      else if (uVar20 < 0x97a679e9ae0d9535) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x97a679e9ae0d9534 / uVar20;
        }
        uVar25 = 0x97a679e9ae0d9534 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x97a679e9ae0d9534;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar13 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar13 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x97a679e9ae0d9534) {
              if (plVar26[2] == -0x6859861651f26acc) goto LAB_025a3fb4;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar13 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar13 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x97a679e9ae0d9534) {
              if (plVar26[2] == -0x6859861651f26acc) goto LAB_025a3fb4;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar13 = 0;
                goto LAB_025a3fb8;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar13 = 0;
        }
      }
    }
    goto LAB_025a3fb8;
  }
  goto LAB_025a3f5c;
LAB_025a3fb4:
  iVar13 = (int)plVar26[6];
LAB_025a3fb8:
  do {
    iVar14 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 != 0) goto LAB_025a3fcc;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a3f64;
LAB_025a4064:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar14 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x97a678e9ae0d9381;
      }
      else if (uVar20 < 0x97a678e9ae0d9382) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x97a678e9ae0d9381 / uVar20;
        }
        uVar25 = 0x97a678e9ae0d9381 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x97a678e9ae0d9381;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar14 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar14 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x97a678e9ae0d9381) {
              if (plVar26[2] == -0x6859871651f26c7f) goto LAB_025a41b8;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar14 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar14 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x97a678e9ae0d9381) {
              if (plVar26[2] == -0x6859871651f26c7f) goto LAB_025a41b8;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar14 = 0;
                goto LAB_025a41bc;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar14 = 0;
        }
      }
    }
    goto LAB_025a41bc;
  }
  goto LAB_025a4160;
LAB_025a41b8:
  iVar14 = (int)plVar26[6];
LAB_025a41bc:
  do {
    iVar15 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 != 0) goto LAB_025a41d0;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a4168;
LAB_025a4268:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar15 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x97a677e9ae0d91ce;
      }
      else if (uVar20 < 0x97a677e9ae0d91cf) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x97a677e9ae0d91ce / uVar20;
        }
        uVar25 = 0x97a677e9ae0d91ce - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x97a677e9ae0d91ce;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar15 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar15 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x97a677e9ae0d91ce) {
              if (plVar26[2] == -0x6859881651f26e32) goto LAB_025a43bc;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar15 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar15 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x97a677e9ae0d91ce) {
              if (plVar26[2] == -0x6859881651f26e32) goto LAB_025a43bc;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar15 = 0;
                goto LAB_025a43c0;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar15 = 0;
        }
      }
    }
    goto LAB_025a43c0;
  }
  goto LAB_025a4364;
LAB_025a43bc:
  iVar15 = (int)plVar26[6];
LAB_025a43c0:
  do {
    iVar6 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar24 + 0x10))();
    plVar22 = (long *)PTR_DAT_04379670;
  }
  goto joined_r0x025a4c20;
LAB_025a4cbc:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x44d9c464de0e9942;
    }
    else if (uVar20 < 0x44d9c464de0e9943) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x44d9c464de0e9942 / uVar20;
      }
      uVar25 = 0x44d9c464de0e9942 - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x44d9c464de0e9942;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x44d9c464de0e9942) {
            if (plVar27[2] == 0x44d9c464de0e9942) goto LAB_025a4ee0;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x44d9c464de0e9942) {
            if (plVar27[2] == 0x44d9c464de0e9942) goto LAB_025a4ee0;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a4ee4;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a4ee4;
LAB_025a4ee0:
  iVar16 = (int)plVar27[6];
LAB_025a4ee4:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a478c:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x44d9c364de0e978f;
    }
    else if (uVar20 < 0x44d9c364de0e9790) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x44d9c364de0e978f / uVar20;
      }
      uVar25 = 0x44d9c364de0e978f - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x44d9c364de0e978f;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x44d9c364de0e978f) {
            if (plVar27[2] == 0x44d9c364de0e978f) goto LAB_025a4fa0;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x44d9c364de0e978f) {
            if (plVar27[2] == 0x44d9c364de0e978f) goto LAB_025a4fa0;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a4fa4;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a4fa4;
LAB_025a4fa0:
  iVar16 = (int)plVar27[6];
LAB_025a4fa4:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a4900:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x44d9c264de0e95dc;
    }
    else if (uVar20 < 0x44d9c264de0e95dd) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x44d9c264de0e95dc / uVar20;
      }
      uVar25 = 0x44d9c264de0e95dc - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x44d9c264de0e95dc;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x44d9c264de0e95dc) {
            if (plVar27[2] == 0x44d9c264de0e95dc) goto LAB_025a5000;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x44d9c264de0e95dc) {
            if (plVar27[2] == 0x44d9c264de0e95dc) goto LAB_025a5000;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a5004;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a5004;
LAB_025a5000:
  iVar16 = (int)plVar27[6];
LAB_025a5004:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a4618:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x44d9c064de0e9276;
    }
    else if (uVar20 < 0x44d9c064de0e9277) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x44d9c064de0e9276 / uVar20;
      }
      uVar25 = 0x44d9c064de0e9276 - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x44d9c064de0e9276;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x44d9c064de0e9276) {
            if (plVar27[2] == 0x44d9c064de0e9276) goto LAB_025a4f40;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x44d9c064de0e9276) {
            if (plVar27[2] == 0x44d9c064de0e9276) goto LAB_025a4f40;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a4f44;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a4f44;
LAB_025a4f40:
  iVar16 = (int)plVar27[6];
LAB_025a4f44:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a4498:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x44d9c164de0e9429;
    }
    else if (uVar20 < 0x44d9c164de0e942a) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x44d9c164de0e9429 / uVar20;
      }
      uVar25 = 0x44d9c164de0e9429 - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x44d9c164de0e9429;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x44d9c164de0e9429) {
            if (plVar27[2] == 0x44d9c164de0e9429) goto LAB_025a4e08;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x44d9c164de0e9429) {
            if (plVar27[2] == 0x44d9c164de0e9429) goto LAB_025a4e08;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a4e0c;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a4e0c;
LAB_025a4e08:
  iVar16 = (int)plVar27[6];
LAB_025a4e0c:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a23e8:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar16 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x104c5607d5c3e0dd;
      }
      else if (uVar20 < 0x104c5607d5c3e0de) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x104c5607d5c3e0dd / uVar20;
        }
        uVar25 = 0x104c5607d5c3e0dd - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x104c5607d5c3e0dd;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar16 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar16 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x104c5607d5c3e0dd) {
              if (plVar26[2] == 0x104c5607d5c3e0dd) goto LAB_025a26c8;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar16 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar16 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x104c5607d5c3e0dd) {
              if (plVar26[2] == 0x104c5607d5c3e0dd) goto LAB_025a26c8;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar16 = 0;
                goto LAB_025a26cc;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar16 = 0;
        }
      }
    }
    goto LAB_025a26cc;
  }
  goto LAB_025a24e4;
LAB_025a26c8:
  iVar16 = (int)plVar26[6];
LAB_025a26cc:
  do {
    iVar12 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar12 != 0) goto LAB_025a26e0;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a24ec;
LAB_025a2778:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar12 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x104c5307d5c3dbc4;
      }
      else if (uVar20 < 0x104c5307d5c3dbc5) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x104c5307d5c3dbc4 / uVar20;
        }
        uVar25 = 0x104c5307d5c3dbc4 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x104c5307d5c3dbc4;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar12 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar12 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x104c5307d5c3dbc4) {
              if (plVar26[2] == 0x104c5307d5c3dbc4) goto LAB_025a28cc;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar12 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar12 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x104c5307d5c3dbc4) {
              if (plVar26[2] == 0x104c5307d5c3dbc4) goto LAB_025a28cc;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar12 = 0;
                goto LAB_025a28d0;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar12 = 0;
        }
      }
    }
    goto LAB_025a28d0;
  }
  goto LAB_025a2874;
LAB_025a28cc:
  iVar12 = (int)plVar26[6];
LAB_025a28d0:
  do {
    iVar13 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar13;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar13 != 0) goto LAB_025a28e4;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a287c;
LAB_025a297c:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar13 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x104c5407d5c3dd77;
      }
      else if (uVar20 < 0x104c5407d5c3dd78) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x104c5407d5c3dd77 / uVar20;
        }
        uVar25 = 0x104c5407d5c3dd77 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x104c5407d5c3dd77;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar13 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar13 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x104c5407d5c3dd77) {
              if (plVar26[2] == 0x104c5407d5c3dd77) goto LAB_025a2ad0;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar13 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar13 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x104c5407d5c3dd77) {
              if (plVar26[2] == 0x104c5407d5c3dd77) goto LAB_025a2ad0;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar13 = 0;
                goto LAB_025a2ad4;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar13 = 0;
        }
      }
    }
    goto LAB_025a2ad4;
  }
  goto LAB_025a2a78;
LAB_025a2ad0:
  iVar13 = (int)plVar26[6];
LAB_025a2ad4:
  do {
    iVar14 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar14;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar14 != 0) goto LAB_025a2ae8;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a2a80;
LAB_025a2b80:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar14 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x104c5107d5c3d85e;
      }
      else if (uVar20 < 0x104c5107d5c3d85f) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x104c5107d5c3d85e / uVar20;
        }
        uVar25 = 0x104c5107d5c3d85e - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x104c5107d5c3d85e;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar14 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar14 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x104c5107d5c3d85e) {
              if (plVar26[2] == 0x104c5107d5c3d85e) goto LAB_025a2cd4;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar14 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar14 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x104c5107d5c3d85e) {
              if (plVar26[2] == 0x104c5107d5c3d85e) goto LAB_025a2cd4;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar14 = 0;
                goto LAB_025a2cd8;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar14 = 0;
        }
      }
    }
    goto LAB_025a2cd8;
  }
  goto LAB_025a2c7c;
LAB_025a2cd4:
  iVar14 = (int)plVar26[6];
LAB_025a2cd8:
  do {
    iVar15 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar15 != 0) goto LAB_025a2cec;
  (**(code **)(*plVar24 + 0x10))();
  bVar3 = *puVar9;
  goto joined_r0x025a2c84;
LAB_025a2d84:
  plVar24 = (long *)plVar24[3];
  if (plVar24 != (long *)0x0) {
    plVar27 = plVar24 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
      if (bVar5) {
        *(int *)plVar27 = (int)*plVar27 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar24[0x14];
    if (uVar20 == 0) {
      iVar15 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x104c5207d5c3da11;
      }
      else if (uVar20 < 0x104c5207d5c3da12) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x104c5207d5c3da11 / uVar20;
        }
        uVar25 = 0x104c5207d5c3da11 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x104c5207d5c3da11;
      }
      plVar26 = *(long **)(plVar24[0x13] + uVar25 * 8);
      if (plVar26 == (long *)0x0) {
        iVar15 = 0;
      }
      else {
        plVar26 = (long *)*plVar26;
        if (plVar26 == (long *)0x0) {
          iVar15 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar26[1] == 0x104c5207d5c3da11) {
              if (plVar26[2] == 0x104c5207d5c3da11) goto LAB_025a2ed8;
            }
            else if ((plVar26[1] & uVar20 - 1) != uVar25) {
              iVar15 = 0;
              break;
            }
            plVar26 = (long *)*plVar26;
            iVar15 = 0;
          } while (plVar26 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar26[1];
            if (uVar21 == 0x104c5207d5c3da11) {
              if (plVar26[2] == 0x104c5207d5c3da11) goto LAB_025a2ed8;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar15 = 0;
                goto LAB_025a2edc;
              }
            }
            plVar26 = (long *)*plVar26;
          } while (plVar26 != (long *)0x0);
          iVar15 = 0;
        }
      }
    }
    goto LAB_025a2edc;
  }
  goto LAB_025a2e80;
LAB_025a2ed8:
  iVar15 = (int)plVar26[6];
LAB_025a2edc:
  do {
    iVar6 = (int)*plVar27 + -1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar27,0x10);
    if (bVar5) {
      *(int *)plVar27 = iVar6;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar24 + 0x10))();
    plVar22 = (long *)PTR_DAT_04379670;
  }
  goto joined_r0x025a3728;
LAB_025a37c4:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x2627be9774b2450d;
    }
    else if (uVar20 < 0x2627be9774b2450e) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x2627be9774b2450d / uVar20;
      }
      uVar25 = 0x2627be9774b2450d - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x2627be9774b2450d;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x2627be9774b2450d) {
            if (plVar27[2] == 0x2627be9774b2450d) goto LAB_025a3ae8;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x2627be9774b2450d) {
            if (plVar27[2] == 0x2627be9774b2450d) goto LAB_025a3ae8;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a3aec;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a3aec;
LAB_025a3ae8:
  iVar16 = (int)plVar27[6];
LAB_025a3aec:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a32a8:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x2627bb9774b23ff4;
    }
    else if (uVar20 < 0x2627bb9774b23ff5) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x2627bb9774b23ff4 / uVar20;
      }
      uVar25 = 0x2627bb9774b23ff4 - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x2627bb9774b23ff4;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x2627bb9774b23ff4) {
            if (plVar27[2] == 0x2627bb9774b23ff4) goto LAB_025a39d0;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x2627bb9774b23ff4) {
            if (plVar27[2] == 0x2627bb9774b23ff4) goto LAB_025a39d0;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a39d4;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a39d4;
LAB_025a39d0:
  iVar16 = (int)plVar27[6];
LAB_025a39d4:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a341c:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x2627bc9774b241a7;
    }
    else if (uVar20 < 0x2627bc9774b241a8) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x2627bc9774b241a7 / uVar20;
      }
      uVar25 = 0x2627bc9774b241a7 - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x2627bc9774b241a7;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x2627bc9774b241a7) {
            if (plVar27[2] == 0x2627bc9774b241a7) goto LAB_025a3a88;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x2627bc9774b241a7) {
            if (plVar27[2] == 0x2627bc9774b241a7) goto LAB_025a3a88;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a3a8c;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a3a8c;
LAB_025a3a88:
  iVar16 = (int)plVar27[6];
LAB_025a3a8c:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a3134:
  plVar22 = (long *)plVar22[3];
  if (plVar22 == (long *)0x0) goto LAB_025a5ca0;
  plVar24 = plVar22 + 10;
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = (int)*plVar24 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  uVar20 = plVar22[0x14];
  if (uVar20 == 0) {
    iVar16 = 0;
  }
  else {
    uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
    uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
    uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar21 < 2) {
      uVar25 = uVar20 - 1 & 0x2627b99774b23c8e;
    }
    else if (uVar20 < 0x2627b99774b23c8f) {
      uVar25 = 0;
      if (uVar20 != 0) {
        uVar25 = 0x2627b99774b23c8e / uVar20;
      }
      uVar25 = 0x2627b99774b23c8e - uVar25 * uVar20;
    }
    else {
      uVar25 = 0x2627b99774b23c8e;
    }
    plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
    if (plVar27 == (long *)0x0) {
      iVar16 = 0;
    }
    else {
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else if (uVar21 < 2) {
        do {
          if (plVar27[1] == 0x2627b99774b23c8e) {
            if (plVar27[2] == 0x2627b99774b23c8e) goto LAB_025a3970;
          }
          else if ((plVar27[1] & uVar20 - 1) != uVar25) {
            iVar16 = 0;
            break;
          }
          plVar27 = (long *)*plVar27;
          iVar16 = 0;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          uVar21 = plVar27[1];
          if (uVar21 == 0x2627b99774b23c8e) {
            if (plVar27[2] == 0x2627b99774b23c8e) goto LAB_025a3970;
          }
          else {
            if (uVar20 <= uVar21) {
              uVar7 = 0;
              if (uVar20 != 0) {
                uVar7 = uVar21 / uVar20;
              }
              uVar21 = uVar21 - uVar7 * uVar20;
            }
            if (uVar21 != uVar25) {
              iVar16 = 0;
              goto LAB_025a3974;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
        iVar16 = 0;
      }
    }
  }
  goto LAB_025a3974;
LAB_025a2fc0:
  plVar22 = (long *)plVar22[3];
  if (plVar22 != (long *)0x0) {
    plVar24 = plVar22 + 10;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
      if (bVar5) {
        *(int *)plVar24 = (int)*plVar24 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    uVar20 = plVar22[0x14];
    if (uVar20 == 0) {
      iVar16 = 0;
    }
    else {
      uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
      uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
      uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar21 < 2) {
        uVar25 = uVar20 - 1 & 0x2627ba9774b23e41;
      }
      else if (uVar20 < 0x2627ba9774b23e42) {
        uVar25 = 0;
        if (uVar20 != 0) {
          uVar25 = 0x2627ba9774b23e41 / uVar20;
        }
        uVar25 = 0x2627ba9774b23e41 - uVar25 * uVar20;
      }
      else {
        uVar25 = 0x2627ba9774b23e41;
      }
      plVar27 = *(long **)(plVar22[0x13] + uVar25 * 8);
      if (plVar27 == (long *)0x0) {
        iVar16 = 0;
      }
      else {
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) {
          iVar16 = 0;
        }
        else if (uVar21 < 2) {
          do {
            if (plVar27[1] == 0x2627ba9774b23e41) {
              if (plVar27[2] == 0x2627ba9774b23e41) goto LAB_025a3910;
            }
            else if ((plVar27[1] & uVar20 - 1) != uVar25) {
              iVar16 = 0;
              break;
            }
            plVar27 = (long *)*plVar27;
            iVar16 = 0;
          } while (plVar27 != (long *)0x0);
        }
        else {
          do {
            uVar21 = plVar27[1];
            if (uVar21 == 0x2627ba9774b23e41) {
              if (plVar27[2] == 0x2627ba9774b23e41) goto LAB_025a3910;
            }
            else {
              if (uVar20 <= uVar21) {
                uVar7 = 0;
                if (uVar20 != 0) {
                  uVar7 = uVar21 / uVar20;
                }
                uVar21 = uVar21 - uVar7 * uVar20;
              }
              if (uVar21 != uVar25) {
                iVar16 = 0;
                goto LAB_025a3914;
              }
            }
            plVar27 = (long *)*plVar27;
          } while (plVar27 != (long *)0x0);
          iVar16 = 0;
        }
      }
    }
    goto LAB_025a3914;
  }
  goto LAB_025a5ca0;
LAB_025a3910:
  iVar16 = (int)plVar27[6];
LAB_025a3914:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  goto LAB_025a3afc;
LAB_025a3970:
  iVar16 = (int)plVar27[6];
LAB_025a3974:
  do {
    iVar12 = (int)*plVar24 + -1;
    bVar11 = iVar12 == 0;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar5) {
      *(int *)plVar24 = iVar12;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
LAB_025a3afc:
  if (bVar11) {
    (**(code **)(*plVar22 + 0x10))();
  }
LAB_025a3b00:
  if (plVar30 != (long *)0x0) {
    lVar18 = plVar30[0xb];
    piVar1 = (int *)(lVar18 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar12 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar18 + 0x18) = 0;
      (**(code **)(*plVar30 + 0x20))(plVar30);
    }
  }
  return iVar16 * 0x708;
}


