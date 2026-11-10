/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c15ebc; name: FUN_01c15ebc
 */


undefined1  [16] FUN_01c15ebc(void)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined4 uVar16;
  undefined1 auVar17 [16];
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  
  puVar6 = PTR_DAT_04379660;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar8 = PTR_DAT_04379670;
  puVar7 = PTR_DAT_04379668;
  lVar13 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar16 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x3938faf76d4fe869;
    }
    else {
      uVar12 = 0x3938faf76d4fe869;
      if (uVar10 < 0x3938faf76d4fe86a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x3938faf76d4fe869 / uVar10;
        }
        uVar12 = 0x3938faf76d4fe869 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x3938faf76d4fe869) {
            if (plVar14[2] == 0x3938faf76d4fe869) goto LAB_01c15f94;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x3938faf76d4fe869) {
            if (plVar14[2] == 0x3938faf76d4fe869) goto LAB_01c15f94;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01c160f0:
  bVar2 = *puVar6;
joined_r0x01c1673c:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar7;
  *(long *)puVar8 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar18 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x3938faf76d4fe869;
    }
    else {
      uVar12 = 0x3938faf76d4fe869;
      if (uVar10 < 0x3938faf76d4fe86a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x3938faf76d4fe869 / uVar10;
        }
        uVar12 = 0x3938faf76d4fe869 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x3938faf76d4fe869) {
            if (plVar14[2] == 0x3938faf76d4fe869) goto LAB_01c1618c;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x3938faf76d4fe869) {
            if (plVar14[2] == 0x3938faf76d4fe869) goto LAB_01c1618c;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01c162e8:
  bVar2 = *puVar6;
joined_r0x01c167a0:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar7;
  *(long *)puVar8 = lVar13;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  uVar19 = 0;
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x3938faf76d4fe869;
    }
    else {
      uVar12 = 0x3938faf76d4fe869;
      if (uVar10 < 0x3938faf76d4fe86a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x3938faf76d4fe869 / uVar10;
        }
        uVar12 = 0x3938faf76d4fe869 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
        do {
          if (plVar14[1] == 0x3938faf76d4fe869) {
            if (plVar14[2] == 0x3938faf76d4fe869) goto LAB_01c16388;
          }
          else if ((plVar14[1] & uVar10 - 1) != uVar12) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar11 = plVar14[1];
          if (uVar11 == 0x3938faf76d4fe869) {
            if (plVar14[2] == 0x3938faf76d4fe869) goto LAB_01c16388;
          }
          else {
            if (uVar10 <= uVar11) {
              uVar5 = 0;
              if (uVar10 != 0) {
                uVar5 = uVar11 / uVar10;
              }
              uVar11 = uVar11 - uVar5 * uVar10;
            }
            if (uVar11 != uVar12) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01c164e8:
  bVar2 = *puVar6;
joined_r0x01c16804:
  if (((bVar2 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar13 = *(long *)puVar7;
  *(long *)puVar8 = lVar13;
  uVar20 = 0;
  uVar10 = *(ulong *)(lVar13 + 0x60);
  if (uVar10 != 0) {
    uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
    uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
    uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar11 < 2) {
      uVar12 = uVar10 - 1 & 0x3938faf76d4fe869;
    }
    else {
      uVar12 = 0x3938faf76d4fe869;
      if (uVar10 < 0x3938faf76d4fe86a) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x3938faf76d4fe869 / uVar10;
        }
        uVar12 = 0x3938faf76d4fe869 - uVar12 * uVar10;
      }
    }
    plVar14 = *(long **)(*(long *)(lVar13 + 0x58) + uVar12 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar11 < 2) {
LAB_01c16920:
        if (plVar14[1] == 0x3938faf76d4fe869) {
          if (plVar14[2] == 0x3938faf76d4fe869) {
            plVar14 = (long *)plVar14[3];
joined_r0x01c1658c:
            if (plVar14 == (long *)0x0) goto LAB_01c166e4;
            plVar1 = plVar14 + 10;
            do {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = (int)*plVar1 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            uVar10 = plVar14[0x21];
            uVar20 = 0;
            if (uVar10 != 0) {
              uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
              uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
              uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
              if (uVar11 < 2) {
                uVar12 = uVar10 - 1 & 0x55215e11cd0bdb0e;
              }
              else if (uVar10 < 0x55215e11cd0bdb0f) {
                uVar12 = 0;
                if (uVar10 != 0) {
                  uVar12 = 0x55215e11cd0bdb0e / uVar10;
                }
                uVar12 = 0x55215e11cd0bdb0e - uVar12 * uVar10;
              }
              else {
                uVar12 = 0x55215e11cd0bdb0e;
              }
              plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
              if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0))
              {
                if (uVar11 < 2) {
                  do {
                    if (plVar15[1] == 0x55215e11cd0bdb0e) {
                      if (plVar15[2] == 0x55215e11cd0bdb0e) goto LAB_01c166cc;
                    }
                    else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
                    plVar15 = (long *)*plVar15;
                  } while (plVar15 != (long *)0x0);
                }
                else {
                  do {
                    uVar11 = plVar15[1];
                    if (uVar11 != 0x55215e11cd0bdb0e) {
                      if (uVar10 <= uVar11) {
                        uVar5 = 0;
                        if (uVar10 != 0) {
                          uVar5 = uVar11 / uVar10;
                        }
                        uVar11 = uVar11 - uVar5 * uVar10;
                      }
                      if (uVar11 == uVar12) goto LAB_01c16658;
                      break;
                    }
                    if (plVar15[2] == 0x55215e11cd0bdb0e) goto LAB_01c166cc;
LAB_01c16658:
                    plVar15 = (long *)*plVar15;
                  } while (plVar15 != (long *)0x0);
                }
              }
            }
LAB_01c166d0:
            do {
              iVar9 = (int)*plVar1 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar4) {
                *(int *)plVar1 = iVar9;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*plVar14 + 0x10))();
            }
            goto LAB_01c166e4;
          }
        }
        else if ((plVar14[1] & uVar10 - 1) != uVar12) goto LAB_01c166e4;
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_01c166e4;
        goto LAB_01c16920;
      }
      do {
        uVar11 = plVar14[1];
        if (uVar11 == 0x3938faf76d4fe869) {
          if (plVar14[2] == 0x3938faf76d4fe869) {
            plVar14 = (long *)plVar14[3];
            goto joined_r0x01c1658c;
          }
        }
        else {
          if (uVar10 <= uVar11) {
            uVar5 = 0;
            if (uVar10 != 0) {
              uVar5 = uVar11 / uVar10;
            }
            uVar11 = uVar11 - uVar5 * uVar10;
          }
          if (uVar11 != uVar12) break;
        }
        plVar14 = (long *)*plVar14;
      } while (plVar14 != (long *)0x0);
    }
  }
LAB_01c166e4:
  auVar17._4_4_ = uVar18;
  auVar17._0_4_ = uVar16;
  auVar17._12_4_ = uVar20;
  auVar17._8_4_ = uVar19;
  return auVar17;
LAB_01c15f94:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar14[0x21];
    uVar16 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x55214d11cd0bbe2b;
      }
      else if (uVar10 < 0x55214d11cd0bbe2c) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x55214d11cd0bbe2b / uVar10;
        }
        uVar12 = 0x55214d11cd0bbe2b - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x55214d11cd0bbe2b;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x55214d11cd0bbe2b) {
              if (plVar15[2] == 0x55214d11cd0bbe2b) goto LAB_01c160d8;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x55214d11cd0bbe2b) {
              if (plVar15[2] == 0x55214d11cd0bbe2b) goto LAB_01c160d8;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar5 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01c160dc;
  }
  goto LAB_01c160f0;
LAB_01c160d8:
  uVar16 = (undefined4)plVar15[6];
LAB_01c160dc:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_01c160f0;
  (**(code **)(*plVar14 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x01c1673c;
LAB_01c1618c:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar14[0x21];
    uVar18 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x55216011cd0bde74;
      }
      else if (uVar10 < 0x55216011cd0bde75) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x55216011cd0bde74 / uVar10;
        }
        uVar12 = 0x55216011cd0bde74 - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x55216011cd0bde74;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x55216011cd0bde74) {
              if (plVar15[2] == 0x55216011cd0bde74) goto LAB_01c162d0;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x55216011cd0bde74) {
              if (plVar15[2] == 0x55216011cd0bde74) goto LAB_01c162d0;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar5 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01c162d4;
  }
  goto LAB_01c162e8;
LAB_01c162d0:
  uVar18 = (undefined4)plVar15[6];
LAB_01c162d4:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_01c162e8;
  (**(code **)(*plVar14 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x01c167a0;
LAB_01c16388:
  plVar14 = (long *)plVar14[3];
  if (plVar14 != (long *)0x0) {
    plVar1 = plVar14 + 10;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    uVar10 = plVar14[0x21];
    uVar19 = 0;
    if (uVar10 != 0) {
      uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
      uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
      uVar11 = (uVar11 + (uVar11 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar11 < 2) {
        uVar12 = uVar10 - 1 & 0x55215d11cd0bd95b;
      }
      else if (uVar10 < 0x55215d11cd0bd95c) {
        uVar12 = 0;
        if (uVar10 != 0) {
          uVar12 = 0x55215d11cd0bd95b / uVar10;
        }
        uVar12 = 0x55215d11cd0bd95b - uVar12 * uVar10;
      }
      else {
        uVar12 = 0x55215d11cd0bd95b;
      }
      plVar15 = *(long **)(plVar14[0x20] + uVar12 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar11 < 2) {
          do {
            if (plVar15[1] == 0x55215d11cd0bd95b) {
              if (plVar15[2] == 0x55215d11cd0bd95b) goto LAB_01c164cc;
            }
            else if ((plVar15[1] & uVar10 - 1) != uVar12) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar11 = plVar15[1];
            if (uVar11 == 0x55215d11cd0bd95b) {
              if (plVar15[2] == 0x55215d11cd0bd95b) goto LAB_01c164cc;
            }
            else {
              if (uVar10 <= uVar11) {
                uVar5 = 0;
                if (uVar10 != 0) {
                  uVar5 = uVar11 / uVar10;
                }
                uVar11 = uVar11 - uVar5 * uVar10;
              }
              if (uVar11 != uVar12) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
    goto LAB_01c164d0;
  }
  goto LAB_01c164e8;
LAB_01c164cc:
  uVar19 = (undefined4)plVar15[6];
LAB_01c164d0:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar4) {
      *(int *)plVar1 = iVar9;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar9 != 0) goto LAB_01c164e8;
  (**(code **)(*plVar14 + 0x10))();
  bVar2 = *puVar6;
  goto joined_r0x01c16804;
LAB_01c166cc:
  uVar20 = (undefined4)plVar15[6];
  goto LAB_01c166d0;
}


