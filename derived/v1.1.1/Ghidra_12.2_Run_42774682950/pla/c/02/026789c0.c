/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026789c0; name: FUN_026789c0
 */


undefined4 FUN_026789c0(float param_1,ulong *param_2,ulong param_3)

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
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  
  puVar5 = PTR_DAT_04379660;
  param_3 = param_3 & 0xffffffff;
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  puVar7 = PTR_DAT_04379670;
  puVar6 = PTR_DAT_04379668;
  lVar14 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar14;
  uVar11 = *(ulong *)(lVar14 + 0x60);
  fVar17 = 0.0;
  if (uVar11 != 0) {
    uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
    uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
    uVar10 = *param_2;
    uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar12 < 2) {
      uVar13 = uVar11 - 1 & uVar10;
    }
    else if (uVar10 < uVar11) {
      uVar13 = uVar10;
    }
    else {
      uVar13 = 0;
      if (uVar11 != 0) {
        uVar13 = uVar10 / uVar11;
      }
      uVar13 = uVar10 - uVar13 * uVar11;
    }
    plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
    if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
      if (uVar12 < 2) {
        do {
          if (plVar15[1] == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_02678aa0;
          }
          else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
      else {
        do {
          uVar12 = plVar15[1];
          if (uVar12 == uVar10) {
            if (plVar15[2] == uVar10) goto LAB_02678aa0;
          }
          else {
            if (uVar11 <= uVar12) {
              uVar4 = 0;
              if (uVar11 != 0) {
                uVar4 = uVar12 / uVar11;
              }
              uVar12 = uVar12 - uVar4 * uVar11;
            }
            if (uVar12 != uVar13) break;
          }
          plVar15 = (long *)*plVar15;
        } while (plVar15 != (long *)0x0);
      }
    }
  }
joined_r0x02678c30:
  if (param_1 <= fVar17) {
    uVar9 = 0;
  }
  else {
    if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar6;
    *(long *)puVar7 = lVar14;
    uVar11 = *(ulong *)(lVar14 + 0x60);
    fVar17 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar10 = *param_2;
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & uVar10;
      }
      else if (uVar10 < uVar11) {
        uVar13 = uVar10;
      }
      else {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = uVar10 / uVar11;
        }
        uVar13 = uVar10 - uVar13 * uVar11;
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == uVar10) {
              if (plVar15[2] == uVar10) goto LAB_02678cd4;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == uVar10) {
              if (plVar15[2] == uVar10) goto LAB_02678cd4;
            }
            else {
              if (uVar11 <= uVar12) {
                uVar4 = 0;
                if (uVar11 != 0) {
                  uVar4 = uVar12 / uVar11;
                }
                uVar12 = uVar12 - uVar4 * uVar11;
              }
              if (uVar12 != uVar13) break;
            }
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
      }
    }
joined_r0x02678e50:
    if (param_1 <= fVar17) {
      uVar9 = 1;
    }
    else {
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar14 = *(long *)puVar6;
      *(long *)puVar7 = lVar14;
      uVar11 = *(ulong *)(lVar14 + 0x60);
      fVar17 = 0.0;
      if (uVar11 != 0) {
        uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
        uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
        uVar10 = *param_2;
        uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar12 < 2) {
          uVar13 = uVar11 - 1 & uVar10;
        }
        else if (uVar10 < uVar11) {
          uVar13 = uVar10;
        }
        else {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = uVar10 / uVar11;
          }
          uVar13 = uVar10 - uVar13 * uVar11;
        }
        plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
        if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
          if (uVar12 < 2) {
            do {
              if (plVar15[1] == uVar10) {
                if (plVar15[2] == uVar10) goto LAB_02678ef0;
              }
              else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
          else {
            do {
              uVar12 = plVar15[1];
              if (uVar12 == uVar10) {
                if (plVar15[2] == uVar10) goto LAB_02678ef0;
              }
              else {
                if (uVar11 <= uVar12) {
                  uVar4 = 0;
                  if (uVar11 != 0) {
                    uVar4 = uVar12 / uVar11;
                  }
                  uVar12 = uVar12 - uVar4 * uVar11;
                }
                if (uVar12 != uVar13) break;
              }
              plVar15 = (long *)*plVar15;
            } while (plVar15 != (long *)0x0);
          }
        }
      }
joined_r0x02679270:
      if (param_1 <= fVar17) {
        uVar9 = 2;
      }
      else {
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04379660), iVar8 != 0)) {
          FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379660);
        }
        lVar14 = *(long *)puVar6;
        *(long *)puVar7 = lVar14;
        uVar11 = *(ulong *)(lVar14 + 0x60);
        fVar17 = 0.0;
        if (uVar11 != 0) {
          uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
          uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
          uVar10 = *param_2;
          uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
          if (uVar12 < 2) {
            uVar13 = uVar11 - 1 & uVar10;
          }
          else if (uVar10 < uVar11) {
            uVar13 = uVar10;
          }
          else {
            uVar13 = 0;
            if (uVar11 != 0) {
              uVar13 = uVar10 / uVar11;
            }
            uVar13 = uVar10 - uVar13 * uVar11;
          }
          plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
          if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
            if (uVar12 < 2) {
              do {
                if (plVar15[1] == uVar10) {
                  if (plVar15[2] == uVar10) goto LAB_026790f0;
                }
                else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
            else {
              do {
                uVar12 = plVar15[1];
                if (uVar12 == uVar10) {
                  if (plVar15[2] == uVar10) goto LAB_026790f0;
                }
                else {
                  if (uVar11 <= uVar12) {
                    uVar4 = 0;
                    if (uVar11 != 0) {
                      uVar4 = uVar12 / uVar11;
                    }
                    uVar12 = uVar12 - uVar4 * uVar11;
                  }
                  if (uVar12 != uVar13) break;
                }
                plVar15 = (long *)*plVar15;
              } while (plVar15 != (long *)0x0);
            }
          }
        }
LAB_0267924c:
        uVar9 = 4;
        if (param_1 <= fVar17) {
          uVar9 = 3;
        }
      }
    }
  }
  return uVar9;
LAB_02678aa0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    uVar11 = *(ulong *)(&DAT_042664c0 + param_3 * 0x60);
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar12 = plVar15[0x21];
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar13 = uVar12 - 1 & uVar11;
      }
      else {
        uVar13 = uVar11;
        if (uVar12 <= uVar11) {
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar11 / uVar12;
          }
          uVar13 = uVar11 - uVar13 * uVar12;
        }
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar16[1] == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02678be4;
            }
            else if ((plVar16[1] & uVar12 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar16[1];
            if (uVar10 == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02678be4;
            }
            else {
              if (uVar12 <= uVar10) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar10 / uVar12;
                }
                uVar10 = uVar10 - uVar4 * uVar12;
              }
              if (uVar10 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02678be8;
  }
  goto joined_r0x02678c30;
LAB_02678be4:
  fVar17 = *(float *)(plVar16 + 6);
LAB_02678be8:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto joined_r0x02678c30;
LAB_02678cd4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    uVar11 = *(ulong *)(&DAT_042664d8 + param_3 * 0x60);
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar12 = plVar15[0x21];
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar13 = uVar12 - 1 & uVar11;
      }
      else {
        uVar13 = uVar11;
        if (uVar12 <= uVar11) {
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar11 / uVar12;
          }
          uVar13 = uVar11 - uVar13 * uVar12;
        }
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar16[1] == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02678e18;
            }
            else if ((plVar16[1] & uVar12 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar16[1];
            if (uVar10 == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02678e18;
            }
            else {
              if (uVar12 <= uVar10) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar10 / uVar12;
                }
                uVar10 = uVar10 - uVar4 * uVar12;
              }
              if (uVar10 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02678e1c;
  }
  goto joined_r0x02678e50;
LAB_02678e18:
  fVar17 = *(float *)(plVar16 + 6);
LAB_02678e1c:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto joined_r0x02678e50;
LAB_02678ef0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    uVar11 = *(ulong *)(&DAT_042664f0 + param_3 * 0x60);
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar12 = plVar15[0x21];
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar13 = uVar12 - 1 & uVar11;
      }
      else {
        uVar13 = uVar11;
        if (uVar12 <= uVar11) {
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar11 / uVar12;
          }
          uVar13 = uVar11 - uVar13 * uVar12;
        }
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar16[1] == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02679034;
            }
            else if ((plVar16[1] & uVar12 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar16[1];
            if (uVar10 == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02679034;
            }
            else {
              if (uVar12 <= uVar10) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar10 / uVar12;
                }
                uVar10 = uVar10 - uVar4 * uVar12;
              }
              if (uVar10 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02679038;
  }
  goto joined_r0x02679270;
LAB_02679034:
  fVar17 = *(float *)(plVar16 + 6);
LAB_02679038:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto joined_r0x02679270;
LAB_026790f0:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    uVar11 = *(ulong *)(&DAT_04266508 + param_3 * 0x60);
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar12 = plVar15[0x21];
    fVar17 = 0.0;
    if (uVar12 != 0) {
      uVar10 = uVar12 - (uVar12 >> 1 & 0x5555555555555555);
      uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
      uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar10 < 2) {
        uVar13 = uVar12 - 1 & uVar11;
      }
      else {
        uVar13 = uVar11;
        if (uVar12 <= uVar11) {
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar11 / uVar12;
          }
          uVar13 = uVar11 - uVar13 * uVar12;
        }
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar10 < 2) {
          do {
            if (plVar16[1] == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02679234;
            }
            else if ((plVar16[1] & uVar12 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar10 = plVar16[1];
            if (uVar10 == uVar11) {
              if (plVar16[2] == uVar11) goto LAB_02679234;
            }
            else {
              if (uVar12 <= uVar10) {
                uVar4 = 0;
                if (uVar12 != 0) {
                  uVar4 = uVar10 / uVar12;
                }
                uVar10 = uVar10 - uVar4 * uVar12;
              }
              if (uVar10 != uVar13) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_02679238;
  }
  goto LAB_0267924c;
LAB_02679234:
  fVar17 = *(float *)(plVar16 + 6);
LAB_02679238:
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
    (**(code **)(*plVar15 + 0x10))();
  }
  goto LAB_0267924c;
}


