/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b11d90; name: FUN_01b11d90
 */


undefined4 FUN_01b11d90(float param_1,uint param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  float fVar21;
  
  puVar5 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar13 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar13;
  puVar10 = *(undefined1 **)(lVar13 + 0x60);
  fVar21 = 0.0;
  if (puVar10 != (undefined1 *)0x0) {
    uVar11 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar12 = &DAT_7c08eae870e235e0;
      if (puVar10 < (undefined1 *)0x7c08eae870e235e1) {
        uVar18 = 0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar18 = 0x7c08eae870e235e0 / (ulong)puVar10;
        }
        puVar12 = &DAT_7c08eae870e235e0 + -(uVar18 * (long)puVar10);
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if ((undefined1 *)plVar14[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b11e7c;
          }
          else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar10 + -1)) != puVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          puVar17 = (undefined1 *)plVar14[1];
          if (puVar17 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b11e7c;
          }
          else {
            if (puVar10 <= puVar17) {
              uVar11 = 0;
              if (puVar10 != (undefined1 *)0x0) {
                uVar11 = (ulong)puVar17 / (ulong)puVar10;
              }
              puVar17 = puVar17 + -(uVar11 * (long)puVar10);
            }
            if (puVar17 != puVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
joined_r0x01b1200c:
  if (param_1 <= fVar21) {
    uVar9 = 0;
  }
  else {
    uVar11 = (ulong)param_2;
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar13 = *(long *)puVar6;
    *(long *)puVar7 = lVar13;
    puVar10 = *(undefined1 **)(lVar13 + 0x60);
    fVar21 = 0.0;
    if (puVar10 != (undefined1 *)0x0) {
      uVar18 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
      uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
      uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar18 < 2) {
        puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0x7c08eae870e235e0);
      }
      else {
        puVar12 = &DAT_7c08eae870e235e0;
        if (puVar10 < (undefined1 *)0x7c08eae870e235e1) {
          uVar19 = 0;
          if (puVar10 != (undefined1 *)0x0) {
            uVar19 = 0x7c08eae870e235e0 / (ulong)puVar10;
          }
          puVar12 = &DAT_7c08eae870e235e0 + -(uVar19 * (long)puVar10);
        }
      }
      plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar12 * 8);
      if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
        if (uVar18 < 2) {
          do {
            if ((undefined1 *)plVar14[1] == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b120b0;
            }
            else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar10 + -1)) != puVar12) break;
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
        else {
          do {
            puVar17 = (undefined1 *)plVar14[1];
            if (puVar17 == &DAT_7c08eae870e235e0) {
              if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b120b0;
            }
            else {
              if (puVar10 <= puVar17) {
                uVar18 = 0;
                if (puVar10 != (undefined1 *)0x0) {
                  uVar18 = (ulong)puVar17 / (ulong)puVar10;
                }
                puVar17 = puVar17 + -(uVar18 * (long)puVar10);
              }
              if (puVar17 != puVar12) break;
            }
            plVar14 = (long *)*plVar14;
          } while (plVar14 != (long *)0x0);
        }
      }
    }
joined_r0x01b1222c:
    if (param_1 <= fVar21) {
      uVar9 = 1;
    }
    else {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar13 = *(long *)puVar6;
      *(long *)puVar7 = lVar13;
      puVar10 = *(undefined1 **)(lVar13 + 0x60);
      fVar21 = 0.0;
      if (puVar10 != (undefined1 *)0x0) {
        uVar18 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
        uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
        uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar18 < 2) {
          puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar12 = &DAT_7c08eae870e235e0;
          if (puVar10 < (undefined1 *)0x7c08eae870e235e1) {
            uVar19 = 0;
            if (puVar10 != (undefined1 *)0x0) {
              uVar19 = 0x7c08eae870e235e0 / (ulong)puVar10;
            }
            puVar12 = &DAT_7c08eae870e235e0 + -(uVar19 * (long)puVar10);
          }
        }
        plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar12 * 8);
        if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
          if (uVar18 < 2) {
            do {
              if ((undefined1 *)plVar14[1] == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b122cc;
              }
              else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar10 + -1)) != puVar12) break;
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
          else {
            do {
              puVar17 = (undefined1 *)plVar14[1];
              if (puVar17 == &DAT_7c08eae870e235e0) {
                if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b122cc;
              }
              else {
                if (puVar10 <= puVar17) {
                  uVar18 = 0;
                  if (puVar10 != (undefined1 *)0x0) {
                    uVar18 = (ulong)puVar17 / (ulong)puVar10;
                  }
                  puVar17 = puVar17 + -(uVar18 * (long)puVar10);
                }
                if (puVar17 != puVar12) break;
              }
              plVar14 = (long *)*plVar14;
            } while (plVar14 != (long *)0x0);
          }
        }
      }
joined_r0x01b12448:
      if (param_1 <= fVar21) {
        uVar9 = 2;
      }
      else {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar13 = *(long *)puVar6;
        *(long *)puVar7 = lVar13;
        puVar10 = *(undefined1 **)(lVar13 + 0x60);
        fVar21 = 0.0;
        if (puVar10 != (undefined1 *)0x0) {
          uVar18 = (long)puVar10 - ((ulong)puVar10 >> 1 & 0x5555555555555555);
          uVar18 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
          uVar18 = (uVar18 + (uVar18 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar18 < 2) {
            puVar12 = (undefined1 *)((ulong)(puVar10 + -1) & 0x7c08eae870e235e0);
          }
          else {
            puVar12 = &DAT_7c08eae870e235e0;
            if (puVar10 < (undefined1 *)0x7c08eae870e235e1) {
              uVar19 = 0;
              if (puVar10 != (undefined1 *)0x0) {
                uVar19 = 0x7c08eae870e235e0 / (ulong)puVar10;
              }
              puVar12 = &DAT_7c08eae870e235e0 + -(uVar19 * (long)puVar10);
            }
          }
          plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + (long)puVar12 * 8);
          if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
            if (uVar18 < 2) {
              do {
                if ((undefined1 *)plVar14[1] == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b124e8;
                }
                else if ((undefined1 *)((ulong)plVar14[1] & (ulong)(puVar10 + -1)) != puVar12)
                break;
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
            else {
              do {
                puVar17 = (undefined1 *)plVar14[1];
                if (puVar17 == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar14[2] == &DAT_7c08eae870e235e0) goto LAB_01b124e8;
                }
                else {
                  if (puVar10 <= puVar17) {
                    uVar18 = 0;
                    if (puVar10 != (undefined1 *)0x0) {
                      uVar18 = (ulong)puVar17 / (ulong)puVar10;
                    }
                    puVar17 = puVar17 + -(uVar18 * (long)puVar10);
                  }
                  if (puVar17 != puVar12) break;
                }
                plVar14 = (long *)*plVar14;
              } while (plVar14 != (long *)0x0);
            }
          }
        }
LAB_01b12644:
        uVar9 = 4;
        if (param_1 <= fVar21) {
          uVar9 = 3;
        }
      }
    }
  }
  return uVar9;
LAB_01b11e7c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    uVar11 = *(ulong *)(&DAT_0423e308 + (ulong)param_2 * 0x60);
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar18 = plVar14[0x21];
    fVar21 = 0.0;
    if (uVar18 != 0) {
      uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar15 = uVar18 - 1 & uVar11;
      }
      else {
        uVar15 = uVar11;
        if (uVar18 <= uVar11) {
          uVar15 = 0;
          if (uVar18 != 0) {
            uVar15 = uVar11 / uVar18;
          }
          uVar15 = uVar11 - uVar15 * uVar18;
        }
      }
      plVar20 = *(long **)(plVar14[0x20] + uVar15 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar20[1] == uVar11) {
              if (plVar20[2] == uVar11) goto LAB_01b11fc0;
            }
            else if ((plVar20[1] & uVar18 - 1) != uVar15) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar20[1];
            if (uVar19 == uVar11) {
              if (plVar20[2] == uVar11) goto LAB_01b11fc0;
            }
            else {
              if (uVar18 <= uVar19) {
                uVar16 = 0;
                if (uVar18 != 0) {
                  uVar16 = uVar19 / uVar18;
                }
                uVar19 = uVar19 - uVar16 * uVar18;
              }
              if (uVar19 != uVar15) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01b11fc4;
  }
  goto joined_r0x01b1200c;
LAB_01b11fc0:
  fVar21 = *(float *)(plVar20 + 6);
LAB_01b11fc4:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto joined_r0x01b1200c;
LAB_01b120b0:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    uVar18 = *(ulong *)(&DAT_0423e320 + uVar11 * 0x60);
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar19 = plVar14[0x21];
    fVar21 = 0.0;
    if (uVar19 != 0) {
      uVar15 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar19 - 1 & uVar18;
      }
      else {
        uVar16 = uVar18;
        if (uVar19 <= uVar18) {
          uVar16 = 0;
          if (uVar19 != 0) {
            uVar16 = uVar18 / uVar19;
          }
          uVar16 = uVar18 - uVar16 * uVar19;
        }
      }
      plVar20 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar20[1] == uVar18) {
              if (plVar20[2] == uVar18) goto LAB_01b121f4;
            }
            else if ((plVar20[1] & uVar19 - 1) != uVar16) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar20[1];
            if (uVar15 == uVar18) {
              if (plVar20[2] == uVar18) goto LAB_01b121f4;
            }
            else {
              if (uVar19 <= uVar15) {
                uVar4 = 0;
                if (uVar19 != 0) {
                  uVar4 = uVar15 / uVar19;
                }
                uVar15 = uVar15 - uVar4 * uVar19;
              }
              if (uVar15 != uVar16) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01b121f8;
  }
  goto joined_r0x01b1222c;
LAB_01b121f4:
  fVar21 = *(float *)(plVar20 + 6);
LAB_01b121f8:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto joined_r0x01b1222c;
LAB_01b122cc:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    uVar18 = *(ulong *)(&DAT_0423e338 + uVar11 * 0x60);
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar19 = plVar14[0x21];
    fVar21 = 0.0;
    if (uVar19 != 0) {
      uVar15 = uVar19 - (uVar19 >> 1 & 0x5555555555555555);
      uVar15 = (uVar15 & 0x3333333333333333) + (uVar15 >> 2 & 0x3333333333333333);
      uVar15 = (uVar15 + (uVar15 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar15 < 2) {
        uVar16 = uVar19 - 1 & uVar18;
      }
      else {
        uVar16 = uVar18;
        if (uVar19 <= uVar18) {
          uVar16 = 0;
          if (uVar19 != 0) {
            uVar16 = uVar18 / uVar19;
          }
          uVar16 = uVar18 - uVar16 * uVar19;
        }
      }
      plVar20 = *(long **)(plVar14[0x20] + uVar16 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar15 < 2) {
          do {
            if (plVar20[1] == uVar18) {
              if (plVar20[2] == uVar18) goto LAB_01b12410;
            }
            else if ((plVar20[1] & uVar19 - 1) != uVar16) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar15 = plVar20[1];
            if (uVar15 == uVar18) {
              if (plVar20[2] == uVar18) goto LAB_01b12410;
            }
            else {
              if (uVar19 <= uVar15) {
                uVar4 = 0;
                if (uVar19 != 0) {
                  uVar4 = uVar15 / uVar19;
                }
                uVar15 = uVar15 - uVar4 * uVar19;
              }
              if (uVar15 != uVar16) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01b12414;
  }
  goto joined_r0x01b12448;
LAB_01b12410:
  fVar21 = *(float *)(plVar20 + 6);
LAB_01b12414:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto joined_r0x01b12448;
LAB_01b124e8:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    uVar11 = *(ulong *)(&DAT_0423e350 + uVar11 * 0x60);
    plVar1 = plVar14 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar18 = plVar14[0x21];
    fVar21 = 0.0;
    if (uVar18 != 0) {
      uVar19 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
      uVar19 = (uVar19 & 0x3333333333333333) + (uVar19 >> 2 & 0x3333333333333333);
      uVar19 = (uVar19 + (uVar19 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar19 < 2) {
        uVar15 = uVar18 - 1 & uVar11;
      }
      else {
        uVar15 = uVar11;
        if (uVar18 <= uVar11) {
          uVar15 = 0;
          if (uVar18 != 0) {
            uVar15 = uVar11 / uVar18;
          }
          uVar15 = uVar11 - uVar15 * uVar18;
        }
      }
      plVar20 = *(long **)(plVar14[0x20] + uVar15 * 8);
      if ((plVar20 != (long *)0x0) && (plVar20 = (long *)*plVar20, plVar20 != (long *)0x0)) {
        if (uVar19 < 2) {
          do {
            if (plVar20[1] == uVar11) {
              if (plVar20[2] == uVar11) goto LAB_01b1262c;
            }
            else if ((plVar20[1] & uVar18 - 1) != uVar15) break;
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
        else {
          do {
            uVar19 = plVar20[1];
            if (uVar19 == uVar11) {
              if (plVar20[2] == uVar11) goto LAB_01b1262c;
            }
            else {
              if (uVar18 <= uVar19) {
                uVar16 = 0;
                if (uVar18 != 0) {
                  uVar16 = uVar19 / uVar18;
                }
                uVar19 = uVar19 - uVar16 * uVar18;
              }
              if (uVar19 != uVar15) break;
            }
            plVar20 = (long *)*plVar20;
          } while (plVar20 != (long *)0x0);
        }
      }
    }
    goto LAB_01b12630;
  }
  goto LAB_01b12644;
LAB_01b1262c:
  fVar21 = *(float *)(plVar20 + 6);
LAB_01b12630:
  do {
    iVar8 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar8;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar8 == 0) {
    (**(code **)(*plVar14 + 0x10))();
  }
  goto LAB_01b12644;
}


