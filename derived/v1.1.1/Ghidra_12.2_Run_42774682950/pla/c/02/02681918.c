/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02681918; name: FUN_02681918
 */


void FUN_02681918(undefined8 param_1,long param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined1 *puVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  long *plVar15;
  undefined1 *puVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  fVar23 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0x471b26c9ac42475c);
    }
    else {
      puVar13 = &DAT_471b26c9ac42475c;
      if (puVar11 < (undefined1 *)0x471b26c9ac42475d) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0x471b26c9ac42475c / (ulong)puVar11;
        }
        puVar13 = &DAT_471b26c9ac42475c + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02681a04;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02681a04;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02681b60:
  bVar2 = *puVar6;
joined_r0x026823cc:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  fVar25 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0x471b26c9ac42475c);
    }
    else {
      puVar13 = &DAT_471b26c9ac42475c;
      if (puVar11 < (undefined1 *)0x471b26c9ac42475d) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0x471b26c9ac42475c / (ulong)puVar11;
        }
        puVar13 = &DAT_471b26c9ac42475c + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02681bfc;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02681bfc;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02681d58:
  puVar9 = PTR_PTR_0437a4c8;
  fVar21 = (float)(**(code **)PTR_PTR_0437a4c8)(param_1);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  fVar24 = 0.0;
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0x471b26c9ac42475c);
    }
    else {
      puVar13 = &DAT_471b26c9ac42475c;
      if (puVar11 < (undefined1 *)0x471b26c9ac42475d) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0x471b26c9ac42475c / (ulong)puVar11;
        }
        puVar13 = &DAT_471b26c9ac42475c + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02681e0c;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02681e0c;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02681f68:
  bVar2 = *puVar6;
joined_r0x0268242c:
  if (((bVar2 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  fVar26 = 0.0;
  *(long *)puVar8 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0x471b26c9ac42475c);
    }
    else {
      puVar13 = &DAT_471b26c9ac42475c;
      if (puVar11 < (undefined1 *)0x471b26c9ac42475d) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0x471b26c9ac42475c / (ulong)puVar11;
        }
        puVar13 = &DAT_471b26c9ac42475c + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02682008;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          puVar16 = (undefined1 *)plVar15[1];
          if (puVar16 == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_02682008;
          }
          else {
            if (puVar11 <= puVar16) {
              uVar12 = 0;
              if (puVar11 != (undefined1 *)0x0) {
                uVar12 = (ulong)puVar16 / (ulong)puVar11;
              }
              puVar16 = puVar16 + -(uVar12 * (long)puVar11);
            }
            if (puVar16 != puVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
LAB_02682164:
  fVar22 = (float)(**(code **)puVar9)(param_1);
  if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04379660), iVar10 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar14 = *(long *)puVar7;
  *(long *)puVar8 = lVar14;
  puVar11 = *(undefined1 **)(lVar14 + 0x60);
  if (puVar11 != (undefined1 *)0x0) {
    uVar12 = (long)puVar11 - ((ulong)puVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      puVar13 = (undefined1 *)((ulong)(puVar11 + -1) & 0x471b26c9ac42475c);
    }
    else {
      puVar13 = &DAT_471b26c9ac42475c;
      if (puVar11 < (undefined1 *)0x471b26c9ac42475d) {
        uVar17 = 0;
        if (puVar11 != (undefined1 *)0x0) {
          uVar17 = 0x471b26c9ac42475c / (ulong)puVar11;
        }
        puVar13 = &DAT_471b26c9ac42475c + -(uVar17 * (long)puVar11);
      }
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + (long)puVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if ((undefined1 *)plVar15[1] == &DAT_471b26c9ac42475c) {
            if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_0268221c;
          }
          else if ((undefined1 *)((ulong)plVar15[1] & (ulong)(puVar11 + -1)) != puVar13)
          goto LAB_02682318;
          plVar15 = (long *)*plVar15;
          uVar20 = 0;
        } while (plVar15 != (long *)0x0);
        goto LAB_02682380;
      }
      do {
        puVar16 = (undefined1 *)plVar15[1];
        if (puVar16 == &DAT_471b26c9ac42475c) {
          if ((undefined1 *)plVar15[2] == &DAT_471b26c9ac42475c) goto LAB_0268221c;
        }
        else {
          if (puVar11 <= puVar16) {
            uVar12 = 0;
            if (puVar11 != (undefined1 *)0x0) {
              uVar12 = (ulong)puVar16 / (ulong)puVar11;
            }
            puVar16 = puVar16 + -(uVar12 * (long)puVar11);
          }
          if (puVar16 != puVar13) break;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
  }
LAB_02682318:
  uVar20 = 0;
LAB_02682380:
  *(float *)(param_2 + 0xbd8) = fVar23 + (fVar25 - fVar23) * fVar21;
  *(float *)(param_2 + 0xbdc) = fVar24 + (fVar26 - fVar24) * fVar22;
  *(undefined4 *)(param_2 + 0xbe0) = uVar20;
  return;
LAB_02681a04:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x21];
    fVar23 = 0.0;
    if (uVar12 != 0) {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0x57e5ac2789bee5af;
      }
      else if (uVar12 < 0x57e5ac2789bee5b0) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0x57e5ac2789bee5af / uVar12;
        }
        uVar18 = 0x57e5ac2789bee5af - uVar18 * uVar12;
      }
      else {
        uVar18 = 0x57e5ac2789bee5af;
      }
      plVar19 = *(long **)(plVar15[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x57e5ac2789bee5af) {
              if (plVar19[2] == 0x57e5ac2789bee5af) goto LAB_02681b48;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x57e5ac2789bee5af) {
              if (plVar19[2] == 0x57e5ac2789bee5af) goto LAB_02681b48;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar5 * uVar12;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_02681b4c;
  }
  goto LAB_02681b60;
LAB_02681b48:
  fVar23 = *(float *)(plVar19 + 6);
LAB_02681b4c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_02681b60;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x026823cc;
LAB_02681bfc:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x21];
    fVar25 = 0.0;
    if (uVar12 != 0) {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0x57ca9a2789a7ff61;
      }
      else if (uVar12 < 0x57ca9a2789a7ff62) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0x57ca9a2789a7ff61 / uVar12;
        }
        uVar18 = 0x57ca9a2789a7ff61 - uVar18 * uVar12;
      }
      else {
        uVar18 = 0x57ca9a2789a7ff61;
      }
      plVar19 = *(long **)(plVar15[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x57ca9a2789a7ff61) {
              if (plVar19[2] == 0x57ca9a2789a7ff61) goto LAB_02681d40;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x57ca9a2789a7ff61) {
              if (plVar19[2] == 0x57ca9a2789a7ff61) goto LAB_02681d40;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar5 * uVar12;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_02681d44;
  }
  goto LAB_02681d58;
LAB_02681d40:
  fVar25 = *(float *)(plVar19 + 6);
LAB_02681d44:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_02681d58;
LAB_02681e0c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x21];
    fVar24 = 0.0;
    if (uVar12 != 0) {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0x31671847cd7ef7bd;
      }
      else if (uVar12 < 0x31671847cd7ef7be) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0x31671847cd7ef7bd / uVar12;
        }
        uVar18 = 0x31671847cd7ef7bd - uVar18 * uVar12;
      }
      else {
        uVar18 = 0x31671847cd7ef7bd;
      }
      plVar19 = *(long **)(plVar15[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x31671847cd7ef7bd) {
              if (plVar19[2] == 0x31671847cd7ef7bd) goto LAB_02681f50;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x31671847cd7ef7bd) {
              if (plVar19[2] == 0x31671847cd7ef7bd) goto LAB_02681f50;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar5 * uVar12;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_02681f54;
  }
  goto LAB_02681f68;
LAB_02681f50:
  fVar24 = *(float *)(plVar19 + 6);
LAB_02681f54:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 != 0) goto LAB_02681f68;
  (**(code **)(*plVar15 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x0268242c;
LAB_02682008:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x21];
    fVar26 = 0.0;
    if (uVar12 != 0) {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0x314c2247cd684103;
      }
      else if (uVar12 < 0x314c2247cd684104) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0x314c2247cd684103 / uVar12;
        }
        uVar18 = 0x314c2247cd684103 - uVar18 * uVar12;
      }
      else {
        uVar18 = 0x314c2247cd684103;
      }
      plVar19 = *(long **)(plVar15[0x20] + uVar18 * 8);
      if ((plVar19 != (long *)0x0) && (plVar19 = (long *)*plVar19, plVar19 != (long *)0x0)) {
        if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0x314c2247cd684103) {
              if (plVar19[2] == 0x314c2247cd684103) goto LAB_0268214c;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) break;
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0x314c2247cd684103) {
              if (plVar19[2] == 0x314c2247cd684103) goto LAB_0268214c;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar5 * uVar12;
              }
              if (uVar17 != uVar18) break;
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
        }
      }
    }
    goto LAB_02682150;
  }
  goto LAB_02682164;
LAB_0268214c:
  fVar26 = *(float *)(plVar19 + 6);
LAB_02682150:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_02682164;
LAB_0268221c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar12 = plVar15[0x14];
    if (uVar12 == 0) {
      uVar20 = 0;
    }
    else {
      uVar17 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar17 = (uVar17 & 0x3333333333333333) + (uVar17 >> 2 & 0x3333333333333333);
      uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar17 < 2) {
        uVar18 = uVar12 - 1 & 0xc36c33c8b93e9dbf;
      }
      else if (uVar12 < 0xc36c33c8b93e9dc0) {
        uVar18 = 0;
        if (uVar12 != 0) {
          uVar18 = 0xc36c33c8b93e9dbf / uVar12;
        }
        uVar18 = 0xc36c33c8b93e9dbf - uVar18 * uVar12;
      }
      else {
        uVar18 = 0xc36c33c8b93e9dbf;
      }
      plVar19 = *(long **)(plVar15[0x13] + uVar18 * 8);
      if (plVar19 == (long *)0x0) {
        uVar20 = 0;
      }
      else {
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) {
          uVar20 = 0;
        }
        else if (uVar17 < 2) {
          do {
            if (plVar19[1] == 0xc36c33c8b93e9dbf) {
              if (plVar19[2] == -0x3c93cc3746c16241) goto LAB_02682368;
            }
            else if ((plVar19[1] & uVar12 - 1) != uVar18) {
              uVar20 = 0;
              break;
            }
            plVar19 = (long *)*plVar19;
            uVar20 = 0;
          } while (plVar19 != (long *)0x0);
        }
        else {
          do {
            uVar17 = plVar19[1];
            if (uVar17 == 0xc36c33c8b93e9dbf) {
              if (plVar19[2] == -0x3c93cc3746c16241) goto LAB_02682368;
            }
            else {
              if (uVar12 <= uVar17) {
                uVar5 = 0;
                if (uVar12 != 0) {
                  uVar5 = uVar17 / uVar12;
                }
                uVar17 = uVar17 - uVar5 * uVar12;
              }
              if (uVar17 != uVar18) {
                uVar20 = 0;
                goto LAB_0268236c;
              }
            }
            plVar19 = (long *)*plVar19;
          } while (plVar19 != (long *)0x0);
          uVar20 = 0;
        }
      }
    }
    goto LAB_0268236c;
  }
  goto LAB_02682318;
LAB_02682368:
  uVar20 = (undefined4)plVar19[6];
LAB_0268236c:
  do {
    iVar10 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar10;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar10 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_02682380;
}


