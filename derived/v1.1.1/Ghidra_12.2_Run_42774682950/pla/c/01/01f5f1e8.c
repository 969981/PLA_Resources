/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5f1e8; name: FUN_01f5f1e8
 */


void FUN_01f5f1e8(ulong param_1,ulong *param_2,uint param_3)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  undefined4 *puVar15;
  int iVar16;
  ulong uVar17;
  ulong extraout_x8;
  undefined8 uVar18;
  long *plVar19;
  ulong uVar20;
  ulong extraout_x9;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong extraout_x12;
  ulong uVar25;
  long *plVar26;
  uint *puVar27;
  long lVar28;
  long *plVar29;
  float fVar30;
  ulong local_88;
  ulong local_68;
  
  puVar9 = PTR_DAT_0437a0f0;
  puVar8 = PTR_DAT_0437a0e8;
  puVar7 = PTR_DAT_043794d0;
  lVar28 = *(long *)(param_1 + 0x68);
  iVar16 = -1;
  if ((param_3 & 1) != 0) {
    iVar16 = 1;
  }
  if (lVar28 == 0) {
    return;
  }
  if (*(int *)(lVar28 + 0xc) == 0) {
    return;
  }
  piVar1 = (int *)(lVar28 + 0xc);
  iVar11 = *(int *)(lVar28 + 0xc);
  do {
    plVar29 = *(long **)(lVar28 + 0x10);
    if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
      if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
        uVar18 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar18;
        __cxa_guard_release(puVar7);
      }
      *(undefined **)puVar9 = PTR_DAT_043794d8;
      __cxa_guard_release(puVar8);
    }
    while( true ) {
      if (plVar29 == (long *)0x0) {
        return;
      }
      if (plVar29 == (long *)puVar9) break;
      plVar29 = (long *)*plVar29;
    }
    iVar10 = *piVar1;
    if (iVar10 == iVar11) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        lVar28 = *(long *)(lVar28 + 0x18);
        if (lVar28 == 0) {
          return;
        }
        plVar26 = (long *)(lVar28 + -0x50);
        lVar12 = nn::os::GetCurrentThread();
        plVar29 = (long *)(param_1 + 0x88);
        do {
          if (*plVar29 != 0) {
            ClearExclusiveLocal();
            do {
              nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x7c));
              while (*plVar29 == 0) {
                cVar4 = '\x01';
                bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
                if (bVar5) {
                  *plVar29 = lVar12;
                  cVar4 = ExclusiveMonitorsStatus();
                }
                if (cVar4 == '\0') goto LAB_01f5f314;
              }
              ClearExclusiveLocal();
            } while( true );
          }
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(plVar29,0x10);
          if (bVar5) {
            *plVar29 = lVar12;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
LAB_01f5f314:
        uVar20 = *(ulong *)(param_1 + 0x98);
        if (uVar20 == 0) goto LAB_01f5f3c0;
        uVar21 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 & 0x3333333333333333) + (uVar21 >> 2 & 0x3333333333333333);
        uVar17 = *param_2;
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar21 < 2) goto LAB_01f5f3c4;
        if (uVar17 < uVar20) {
          uVar22 = uVar17;
        }
        else {
          uVar22 = 0;
          if (uVar20 != 0) {
            uVar22 = uVar17 / uVar20;
          }
          uVar22 = uVar17 - uVar22 * uVar20;
        }
        do {
          plVar29 = *(long **)(*(long *)(param_1 + 0x90) + uVar22 * 8);
          if ((plVar29 != (long *)0x0) && (plVar29 = (long *)*plVar29, plVar29 != (long *)0x0)) {
            if (uVar21 < 2) {
              do {
                if (plVar29[1] == uVar17) {
                  if (plVar29[2] == uVar17) goto LAB_01f5f408;
                }
                else if ((plVar29[1] & uVar20 - 1) != uVar22) break;
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
            else {
              do {
                uVar21 = plVar29[1];
                if (uVar21 == uVar17) {
                  if (plVar29[2] == uVar17) goto LAB_01f5f408;
                }
                else {
                  if (uVar20 <= uVar21) {
                    uVar25 = 0;
                    if (uVar20 != 0) {
                      uVar25 = uVar21 / uVar20;
                    }
                    uVar21 = uVar21 - uVar25 * uVar20;
                  }
                  if (uVar21 != uVar22) break;
                }
                plVar29 = (long *)*plVar29;
              } while (plVar29 != (long *)0x0);
            }
          }
LAB_01f5f3c0:
          FUN_01f607f0();
          uVar17 = extraout_x8;
          uVar20 = extraout_x9;
          uVar21 = extraout_x12;
LAB_01f5f3c4:
          uVar22 = uVar20 - 1 & uVar17;
        } while( true );
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar11 = iVar10;
    if (iVar10 == 0) {
      return;
    }
  } while( true );
LAB_01f5f408:
  puVar27 = (uint *)plVar29[3] + 1;
  uVar3 = *(uint *)plVar29[3];
  if (uVar3 == 0) {
LAB_01f5f7c4:
    *(undefined8 *)(param_1 + 0x88) = 0;
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x7c));
    lVar28 = *(long *)(lVar28 + 8);
    piVar1 = (int *)(lVar28 + 0xc);
    do {
      iVar16 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar16 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar28 + 0x18) = 0;
      (**(code **)(*plVar26 + 0x20))(plVar26);
    }
    return;
  }
  puVar2 = puVar27 + uVar3;
  plVar29 = (long *)(param_1 + 0xf8);
LAB_01f5f4d0:
  piVar1 = (int *)((long)puVar27 + (ulong)*puVar27);
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar20 == 0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(ulong *)((long)piVar1 + uVar20);
  }
  uVar21 = *(ulong *)(param_1 + 0x100);
  local_68 = uVar20;
  if (uVar21 == 0) {
LAB_01f5f84c:
    plVar24 = (long *)(**(code **)(**(long **)(param_1 + 0x130) + 0x10))
                                (*(long **)(param_1 + 0x130),0x20,8);
    if (plVar24 == (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x130) + 0xb8))();
    }
    uVar18 = *(undefined8 *)(param_1 + 0x130);
    if (((*PTR_DAT_04379520 & 1) == 0) &&
       (iVar11 = __cxa_guard_acquire(PTR_DAT_04379520), iVar11 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,PTR_DAT_04379528,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
    if (lVar12 == 0) {
      plVar24[2] = local_68;
      *(uint *)(plVar24 + 3) = param_3 & 1;
    }
    else {
      if (0xf < *(ulong *)(lVar12 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 *)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = uVar18;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      plVar24[2] = local_68;
      *(uint *)(plVar24 + 3) = param_3 & 1;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
    }
    *plVar24 = 0;
    plVar24[1] = uVar20;
    fVar30 = (float)(*(long *)(param_1 + 0x150) + 1);
    if ((uVar21 == 0) || (*(float *)(param_1 + 0x158) * (float)uVar21 < fVar30)) {
      uVar21 = (ulong)(uVar21 < 3 || (uVar21 & uVar21 - 1) != 0) | uVar21 << 1;
      uVar17 = (ulong)(fVar30 / *(float *)(param_1 + 0x158));
      if (uVar17 <= uVar21) {
        uVar17 = uVar21;
      }
      FUN_00b7bac8(plVar29,uVar17);
      uVar21 = *(ulong *)(param_1 + 0x100);
      if ((uVar21 & uVar21 - 1) == 0) {
        local_88 = uVar21 - 1 & uVar20;
      }
      else {
        if (uVar20 < uVar21) {
          local_88 = uVar20;
          goto LAB_01f5f908;
        }
        uVar17 = 0;
        if (uVar21 != 0) {
          uVar17 = uVar20 / uVar21;
        }
        local_88 = uVar20 - uVar17 * uVar21;
      }
    }
LAB_01f5f908:
    plVar19 = *(long **)(*plVar29 + local_88 * 8);
    if (plVar19 == (long *)0x0) {
      *plVar24 = *(long *)(param_1 + 0x128);
      *(long **)(param_1 + 0x128) = plVar24;
      *(ulong *)(*(long *)(param_1 + 0xf8) + local_88 * 8) = param_1 + 0x128;
      if (*plVar24 != 0) {
        uVar20 = *(ulong *)(*plVar24 + 8);
        if ((uVar21 & uVar21 - 1) == 0) {
          uVar20 = uVar20 & uVar21 - 1;
        }
        else if (uVar21 <= uVar20) {
          uVar17 = 0;
          if (uVar21 != 0) {
            uVar17 = uVar20 / uVar21;
          }
          uVar20 = uVar20 - uVar17 * uVar21;
        }
        plVar19 = (long *)(*plVar29 + uVar20 * 8);
        goto LAB_01f5f96c;
      }
    }
    else {
      *plVar24 = *plVar19;
LAB_01f5f96c:
      *plVar19 = (long)plVar24;
    }
    *(long *)(param_1 + 0x150) = *(long *)(param_1 + 0x150) + 1;
    uVar17 = param_1;
  }
  else {
    uVar17 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar22 = uVar21 - 1 & uVar20;
    }
    else {
      uVar22 = uVar20;
      if (uVar21 <= uVar20) {
        uVar22 = 0;
        if (uVar21 != 0) {
          uVar22 = uVar20 / uVar21;
        }
        uVar22 = uVar20 - uVar22 * uVar21;
      }
    }
    plVar24 = *(long **)(*plVar29 + uVar22 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar24[1] == uVar20) {
            if (plVar24[2] == uVar20) goto LAB_01f5f580;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar22) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar25 = plVar24[1];
          if (uVar25 == uVar20) {
            if (plVar24[2] == uVar20) goto LAB_01f5f580;
          }
          else {
            if (uVar21 <= uVar25) {
              uVar6 = 0;
              if (uVar21 != 0) {
                uVar6 = uVar25 / uVar21;
              }
              uVar25 = uVar25 - uVar6 * uVar21;
            }
            if (uVar25 != uVar22) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
    if (uVar17 < 2) {
      local_88 = uVar21 - 1 & uVar20;
    }
    else {
      local_88 = uVar20;
      if (uVar21 <= uVar20) {
        uVar22 = 0;
        if (uVar21 != 0) {
          uVar22 = uVar20 / uVar21;
        }
        local_88 = uVar20 - uVar22 * uVar21;
      }
    }
    plVar24 = *(long **)(*plVar29 + local_88 * 8);
    if (plVar24 == (long *)0x0) goto LAB_01f5f84c;
    if (uVar17 < 2) {
      uVar17 = uVar21 - 1;
      do {
        plVar24 = (long *)*plVar24;
        if ((plVar24 == (long *)0x0) || (plVar24[1] != uVar20 && (plVar24[1] & uVar17) != local_88))
        goto LAB_01f5f84c;
      } while (plVar24[2] != uVar20);
    }
    else {
      do {
        plVar24 = (long *)*plVar24;
        if (plVar24 == (long *)0x0) goto LAB_01f5f84c;
        uVar17 = plVar24[1];
        if (uVar17 != uVar20) {
          if (uVar21 <= uVar17) {
            uVar22 = 0;
            if (uVar21 != 0) {
              uVar22 = uVar17 / uVar21;
            }
            uVar17 = uVar17 - uVar22 * uVar21;
          }
          if (uVar17 != local_88) goto LAB_01f5f84c;
        }
        uVar17 = plVar24[2];
      } while (uVar17 != uVar20);
    }
  }
  goto LAB_01f5f598;
LAB_01f5f580:
  puVar13 = (uint *)FUN_00b89f84(plVar29,&local_68);
  uVar3 = *puVar13;
  *puVar13 = uVar3 + iVar16;
  uVar17 = (ulong)(uVar3 + iVar16);
LAB_01f5f598:
  piVar14 = (int *)FUN_00b89f84(uVar17,plVar29,&local_68);
  iVar11 = *piVar14;
  if (iVar11 < 1) {
    puVar15 = (undefined4 *)FUN_00b89f84(plVar29,&local_68);
    *puVar15 = 0;
  }
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 5) ||
     (uVar20 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar20 == 0)) {
    uVar20 = 0;
  }
  else {
    uVar20 = *(ulong *)((long)piVar1 + uVar20);
  }
  uVar21 = FUN_01845504(plVar26,uVar20);
  if (((uVar21 & 1) != 0) && (uVar21 = *(ulong *)(lVar28 + 0x58), uVar21 != 0)) {
    uVar17 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
    uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
    uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar17 < 2) {
      uVar22 = uVar21 - 1 & uVar20;
    }
    else {
      uVar22 = uVar20;
      if (uVar21 <= uVar20) {
        uVar22 = 0;
        if (uVar21 != 0) {
          uVar22 = uVar20 / uVar21;
        }
        uVar22 = uVar20 - uVar22 * uVar21;
      }
    }
    puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x50) + uVar22 * 8);
    if ((puVar23 != (undefined8 *)0x0) && (plVar24 = (long *)*puVar23, plVar24 != (long *)0x0)) {
      if (uVar17 < 2) {
        do {
          if (plVar24[1] == uVar20) {
            if (plVar24[2] == uVar20) goto LAB_01f5f69c;
          }
          else if ((plVar24[1] & uVar21 - 1) != uVar22) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar17 = plVar24[1];
          if (uVar17 == uVar20) {
            if (plVar24[2] == uVar20) goto LAB_01f5f69c;
          }
          else {
            if (uVar21 <= uVar17) {
              uVar25 = 0;
              if (uVar21 != 0) {
                uVar25 = uVar17 / uVar21;
              }
              uVar17 = uVar17 - uVar25 * uVar21;
            }
            if (uVar17 != uVar22) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
LAB_01f5f68c:
  puVar27 = puVar27 + 1;
  if (puVar27 == puVar2) goto LAB_01f5f7c4;
  goto LAB_01f5f4d0;
LAB_01f5f69c:
  FUN_015916d0(*(undefined8 *)(plVar24[3] + 0x70),iVar11 >= 1,0x200,0);
  goto LAB_01f5f68c;
}


