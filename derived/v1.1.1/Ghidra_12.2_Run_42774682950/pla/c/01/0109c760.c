/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0109c760; name: FUN_0109c760
 */


ulong FUN_0109c760(undefined8 *param_1,long *param_2,uint param_3)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  ushort uVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long *plVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  float fVar28;
  float __x;
  float __x_00;
  
  if ((*(long *)(*(long *)(*param_2 + 0x98) + 8) != 0) &&
     (uVar17 = FUN_02c66b3c(), (int)uVar17 == 0)) {
    return uVar17;
  }
  plVar25 = (long *)*param_1;
  if (plVar25 != (long *)0x0) {
    plVar1 = plVar25 + 10;
    do {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar8) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  uVar11 = FUN_02c6849c(plVar25[0x13]);
  uVar9 = FUN_02c6f924(plVar25[0x13]);
  bVar8 = (uVar11 | 1) != 0x38b;
  uVar10 = 0;
  if ((int)uVar11 < 0x38a && bVar8) {
    uVar10 = uVar9;
  }
  if (uVar10 < 0x1c) {
    uVar17 = 0;
    if ((int)uVar11 < 0x38a && bVar8) {
      uVar17 = (ulong)uVar11;
    }
    lVar21 = *(&DAT_043f23a0)[uVar17 * 4];
    uVar17 = (&DAT_043f23a0)[uVar17 * 4][1] - lVar21 >> 3;
    if ((uVar17 <= uVar10) || (*(long *)(lVar21 + (ulong)uVar10 * 8) == 0)) goto LAB_0109c844;
  }
  else {
LAB_0109c844:
    uVar10 = 0;
    lVar21 = *DAT_043f23a0;
    uVar17 = DAT_043f23a0[1] - lVar21 >> 3;
  }
  if (uVar17 <= uVar10) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  piVar20 = *(int **)(lVar21 + (ulong)uVar10 * 8);
  if ((*(ushort *)((long)piVar20 - (long)*piVar20) < 0x43) ||
     (uVar17 = (ulong)((ushort *)((long)piVar20 - (long)*piVar20))[0x21], uVar17 == 0)) {
    uVar11 = 0;
  }
  else {
    uVar11 = (uint)*(ushort *)((long)piVar20 + uVar17);
  }
  plVar1 = plVar25 + 10;
  do {
    iVar16 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar16;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar16 == 0) {
    (**(code **)(*plVar25 + 0x10))(plVar25);
  }
  uVar12 = FUN_02c5fb2c(*param_1);
  uVar10 = FUN_02c5fb2c(*param_2);
  uVar13 = FUN_02c6917c(*(undefined8 *)(*param_2 + 0x98));
  uVar14 = FUN_0109c410(*param_2);
  puVar5 = PTR_DAT_04379558;
  if (((*PTR_DAT_04379558 & 1) == 0) &&
     (iVar16 = __cxa_guard_acquire(PTR_DAT_04379558), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  puVar7 = PTR_DAT_04379568;
  puVar6 = PTR_DAT_04379560;
  lVar21 = *(long *)PTR_DAT_04379560;
  *(long *)PTR_DAT_04379568 = lVar21;
  plVar25 = *(long **)(lVar21 + 0x268);
  if (plVar25 == (long *)0x0) {
    uVar17 = FUN_01123e40(0,*param_2);
    bVar2 = *puVar5;
  }
  else {
    lVar21 = plVar25[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) goto LAB_0109d150;
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar18;
    }
    piVar20 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = *piVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar17 = FUN_01123e40(plVar25,*param_2);
    lVar21 = plVar25[0xb];
    piVar20 = (int *)(lVar21 + 0xc);
    do {
      iVar16 = *piVar20;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = iVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
      bVar2 = *puVar5;
    }
    else {
      bVar2 = *puVar5;
    }
  }
  if (((bVar2 & 1) == 0) && (iVar16 = __cxa_guard_acquire(PTR_DAT_04379558), iVar16 != 0)) {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  lVar21 = *(long *)puVar6;
  *(long *)puVar7 = lVar21;
  plVar25 = *(long **)(lVar21 + 0x268);
  if (plVar25 != (long *)0x0) {
    lVar21 = plVar25[0xb];
    if (*(undefined8 **)(lVar21 + 0x18) == (undefined8 *)0x0) {
LAB_0109d150:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar21 + 0x10) == 0) {
      uVar18 = (**(code **)**(undefined8 **)(lVar21 + 0x18))();
      *(undefined8 *)(lVar21 + 0x10) = uVar18;
    }
    piVar20 = (int *)(lVar21 + 0xc);
    do {
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = *piVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  bVar2 = *(byte *)((long)plVar25 + 0x7f);
  lVar26 = *(long *)(*param_2 + 0x98);
  lVar21 = nn::os::GetCurrentThread();
  plVar1 = (long *)(lVar26 + 0x30);
  do {
    if (*plVar1 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar26 + 0x24));
        while (*plVar1 == 0) {
          cVar3 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar8) {
            *plVar1 = lVar21;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_0109ca14;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *plVar1 = lVar21;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_0109ca14:
  uVar15 = FUN_02c69ba8(lVar26);
  *(undefined8 *)(lVar26 + 0x30) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar26 + 0x24));
  if (plVar25 != (long *)0x0) {
    lVar21 = plVar25[0xb];
    piVar20 = (int *)(lVar21 + 0xc);
    do {
      iVar16 = *piVar20;
      cVar3 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(piVar20,0x10);
      if (bVar8) {
        *piVar20 = iVar16 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar16 + -1 == 0) {
      *(undefined8 *)(lVar21 + 0x18) = 0;
      (**(code **)(*plVar25 + 0x20))(plVar25);
    }
  }
  if (99 < uVar12) {
    uVar12 = 100;
  }
  uVar19 = 1;
  if (4 < uVar12 * uVar11) {
    uVar19 = (uVar12 * uVar11) / 5;
  }
  fVar28 = (float)(uVar12 & 0xffff);
  __x_00 = fVar28 + fVar28 + 10.0;
  __x = fVar28 + (float)uVar10 + 10.0;
  fVar28 = SQRT(__x_00);
  if (NAN(fVar28)) {
    fVar28 = sqrtf(__x_00);
  }
  fVar27 = SQRT(__x);
  if (NAN(fVar27)) {
    fVar27 = sqrtf(__x);
  }
  puVar6 = PTR_DAT_04379670;
  puVar5 = PTR_DAT_04379668;
  uVar11 = (uint)(((__x_00 * __x_00 * fVar28) / (__x * __x * fVar27)) * (float)uVar19 + 1.0);
  if ((uVar17 & 1) == 0) {
    fVar28 = 1.5;
    if (uVar15 != bVar2) {
      fVar28 = 1.7;
    }
    uVar11 = (uint)(fVar28 * (float)uVar11);
  }
  if ((uVar14 & 1) != 0) {
    uVar11 = (uint)((float)uVar11 * 1.2);
  }
  if (0xdb < uVar13) {
    uVar11 = (uint)((float)uVar11 * 1.2);
  }
  if ((param_3 & 1) == 0) {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar21 = *(long *)puVar5;
    *(long *)puVar6 = lVar21;
    uVar17 = *(ulong *)(lVar21 + 0x60);
    fVar28 = 0.0;
    if (uVar17 != 0) {
      uVar22 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar17 - 1 & 0x60866d12e7d91b01;
      }
      else {
        uVar4 = 0;
        if (uVar17 != 0) {
          uVar4 = 0x60866d12e7d91b01 / uVar17;
        }
        uVar23 = 0x60866d12e7d91b01;
        if (uVar17 < 0x60866d12e7d91b02) {
          uVar23 = 0x60866d12e7d91b01 - uVar4 * uVar17;
        }
      }
      plVar25 = *(long **)(*(long *)(lVar21 + 0x58) + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x60866d12e7d91b01) {
              if (plVar25[2] == 0x60866d12e7d91b01) goto LAB_0109cbc8;
            }
            else if ((plVar25[1] & uVar17 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x60866d12e7d91b01) {
              if (plVar25[2] == 0x60866d12e7d91b01) goto LAB_0109cbc8;
            }
            else {
              if (uVar17 <= uVar22) {
                uVar4 = 0;
                if (uVar17 != 0) {
                  uVar4 = uVar22 / uVar17;
                }
                uVar22 = uVar22 - uVar4 * uVar17;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
  }
  else {
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar16 = __cxa_guard_acquire(PTR_DAT_04379660), iVar16 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar21 = *(long *)puVar5;
    *(long *)puVar6 = lVar21;
    uVar17 = *(ulong *)(lVar21 + 0x60);
    fVar28 = 0.0;
    if (uVar17 != 0) {
      uVar22 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
      uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
      uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar22 < 2) {
        uVar23 = uVar17 - 1 & 0x60866d12e7d91b01;
      }
      else {
        uVar4 = 0;
        if (uVar17 != 0) {
          uVar4 = 0x60866d12e7d91b01 / uVar17;
        }
        uVar23 = 0x60866d12e7d91b01;
        if (uVar17 < 0x60866d12e7d91b02) {
          uVar23 = 0x60866d12e7d91b01 - uVar4 * uVar17;
        }
      }
      plVar25 = *(long **)(*(long *)(lVar21 + 0x58) + uVar23 * 8);
      if ((plVar25 != (long *)0x0) && (plVar25 = (long *)*plVar25, plVar25 != (long *)0x0)) {
        if (uVar22 < 2) {
          do {
            if (plVar25[1] == 0x60866d12e7d91b01) {
              if (plVar25[2] == 0x60866d12e7d91b01) goto LAB_0109cebc;
            }
            else if ((plVar25[1] & uVar17 - 1) != uVar23) break;
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
        else {
          do {
            uVar22 = plVar25[1];
            if (uVar22 == 0x60866d12e7d91b01) {
              if (plVar25[2] == 0x60866d12e7d91b01) goto LAB_0109cebc;
            }
            else {
              if (uVar17 <= uVar22) {
                uVar4 = 0;
                if (uVar17 != 0) {
                  uVar4 = uVar22 / uVar17;
                }
                uVar22 = uVar22 - uVar4 * uVar17;
              }
              if (uVar22 != uVar23) break;
            }
            plVar25 = (long *)*plVar25;
          } while (plVar25 != (long *)0x0);
        }
      }
    }
  }
  goto LAB_0109cd48;
LAB_0109cbc8:
  plVar25 = (long *)plVar25[3];
  if (plVar25 == (long *)0x0) goto LAB_0109cd48;
  plVar1 = plVar25 + 10;
  do {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar17 = plVar25[0x21];
  fVar28 = 0.0;
  if (uVar17 != 0) {
    uVar22 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar17 - 1 & 0x8bc736207c7f7ddb;
    }
    else if (uVar17 < 0x8bc736207c7f7ddc) {
      uVar23 = 0;
      if (uVar17 != 0) {
        uVar23 = 0x8bc736207c7f7ddb / uVar17;
      }
      uVar23 = 0x8bc736207c7f7ddb - uVar23 * uVar17;
    }
    else {
      uVar23 = 0x8bc736207c7f7ddb;
    }
    plVar24 = *(long **)(plVar25[0x20] + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0x8bc736207c7f7ddb) {
            if (plVar24[2] == -0x7438c9df83808225) goto LAB_0109cd30;
          }
          else if ((plVar24[1] & uVar17 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0x8bc736207c7f7ddb) {
            if (plVar24[2] == -0x7438c9df83808225) goto LAB_0109cd30;
          }
          else {
            if (uVar17 <= uVar22) {
              uVar4 = 0;
              if (uVar17 != 0) {
                uVar4 = uVar22 / uVar17;
              }
              uVar22 = uVar22 - uVar4 * uVar17;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_0109cd34;
LAB_0109cd30:
  fVar28 = *(float *)(plVar24 + 6);
LAB_0109cd34:
  do {
    iVar16 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar16;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar16 != 0) goto LAB_0109cd48;
  goto LAB_0109d060;
LAB_0109cebc:
  plVar25 = (long *)plVar25[3];
  if (plVar25 == (long *)0x0) goto LAB_0109cd48;
  plVar1 = plVar25 + 10;
  do {
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  uVar17 = plVar25[0x21];
  fVar28 = 0.0;
  if (uVar17 != 0) {
    uVar22 = uVar17 - (uVar17 >> 1 & 0x5555555555555555);
    uVar22 = (uVar22 & 0x3333333333333333) + (uVar22 >> 2 & 0x3333333333333333);
    uVar22 = (uVar22 + (uVar22 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar22 < 2) {
      uVar23 = uVar17 - 1 & 0x27ec32e5cd9c290e;
    }
    else if (uVar17 < 0x27ec32e5cd9c290f) {
      uVar23 = 0;
      if (uVar17 != 0) {
        uVar23 = 0x27ec32e5cd9c290e / uVar17;
      }
      uVar23 = 0x27ec32e5cd9c290e - uVar23 * uVar17;
    }
    else {
      uVar23 = 0x27ec32e5cd9c290e;
    }
    plVar24 = *(long **)(plVar25[0x20] + uVar23 * 8);
    if ((plVar24 != (long *)0x0) && (plVar24 = (long *)*plVar24, plVar24 != (long *)0x0)) {
      if (uVar22 < 2) {
        do {
          if (plVar24[1] == 0x27ec32e5cd9c290e) {
            if (plVar24[2] == 0x27ec32e5cd9c290e) goto LAB_0109d048;
          }
          else if ((plVar24[1] & uVar17 - 1) != uVar23) break;
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
      else {
        do {
          uVar22 = plVar24[1];
          if (uVar22 == 0x27ec32e5cd9c290e) {
            if (plVar24[2] == 0x27ec32e5cd9c290e) goto LAB_0109d048;
          }
          else {
            if (uVar17 <= uVar22) {
              uVar4 = 0;
              if (uVar17 != 0) {
                uVar4 = uVar22 / uVar17;
              }
              uVar22 = uVar22 - uVar4 * uVar17;
            }
            if (uVar22 != uVar23) break;
          }
          plVar24 = (long *)*plVar24;
        } while (plVar24 != (long *)0x0);
      }
    }
  }
  goto LAB_0109d04c;
LAB_0109d048:
  fVar28 = *(float *)(plVar24 + 6);
LAB_0109d04c:
  do {
    iVar16 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar8) {
      *(int *)plVar1 = iVar16;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar16 == 0) {
LAB_0109d060:
    (**(code **)(*plVar25 + 0x10))();
  }
LAB_0109cd48:
  uVar11 = (uint)(fVar28 * (float)(int)uVar11);
  if ((int)uVar11 < 2) {
    uVar11 = 1;
  }
  return (ulong)uVar11;
}


