/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025e8240; name: FUN_025e8240
 */


void FUN_025e8240(float param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  long *plVar16;
  float fVar17;
  float local_50;
  undefined4 local_4c;
  undefined8 local_48;
  
  plVar7 = *(long **)(param_2 + 0x2b0);
joined_r0x025e8260:
  if (plVar7 == (long *)0x0) {
    return;
  }
  if (*(char *)((long)plVar7 + 0x14) != '\0') {
    if (*(int *)(plVar7 + 2) == 6) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar11 = *(long *)PTR_DAT_04379668;
      *(long *)PTR_DAT_04379670 = lVar11;
      puVar8 = *(undefined1 **)(lVar11 + 0x60);
      local_4c = 0;
      if (puVar8 != (undefined1 *)0x0) {
        uVar9 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          puVar10 = (undefined1 *)((ulong)(puVar8 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar10 = &DAT_7c08eae870e235e0;
          if (puVar8 < (undefined1 *)0x7c08eae870e235e1) {
            uVar13 = 0;
            if (puVar8 != (undefined1 *)0x0) {
              uVar13 = 0x7c08eae870e235e0 / (ulong)puVar8;
            }
            puVar10 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar8);
          }
        }
        local_4c = 0;
        plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + (long)puVar10 * 8);
        if (plVar12 != (long *)0x0) {
          plVar12 = (long *)*plVar12;
          local_4c = 0;
          if (plVar12 != (long *)0x0) {
            if (uVar9 < 2) {
              do {
                if ((undefined1 *)plVar12[1] == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e8394;
                }
                else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar8 + -1)) != puVar10) break;
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            else {
              do {
                puVar15 = (undefined1 *)plVar12[1];
                if (puVar15 == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e8394;
                }
                else {
                  if (puVar8 <= puVar15) {
                    uVar9 = 0;
                    if (puVar8 != (undefined1 *)0x0) {
                      uVar9 = (ulong)puVar15 / (ulong)puVar8;
                    }
                    puVar15 = puVar15 + -(uVar9 * (long)puVar8);
                  }
                  if (puVar15 != puVar10) break;
                }
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            local_4c = 0;
          }
        }
      }
      goto LAB_025e84f8;
    }
    local_50 = 0.0;
    local_4c = 0;
    if (*(int *)(plVar7 + 2) == 3) {
      if (((*PTR_DAT_04379660 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379660);
      }
      lVar11 = *(long *)PTR_DAT_04379668;
      local_4c = 0;
      *(long *)PTR_DAT_04379670 = lVar11;
      puVar8 = *(undefined1 **)(lVar11 + 0x60);
      if (puVar8 != (undefined1 *)0x0) {
        uVar9 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
        uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
        if (uVar9 < 2) {
          puVar10 = (undefined1 *)((ulong)(puVar8 + -1) & 0x7c08eae870e235e0);
        }
        else {
          puVar10 = &DAT_7c08eae870e235e0;
          if (puVar8 < (undefined1 *)0x7c08eae870e235e1) {
            uVar13 = 0;
            if (puVar8 != (undefined1 *)0x0) {
              uVar13 = 0x7c08eae870e235e0 / (ulong)puVar8;
            }
            puVar10 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar8);
          }
        }
        local_4c = 0;
        plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + (long)puVar10 * 8);
        if (plVar12 != (long *)0x0) {
          plVar12 = (long *)*plVar12;
          local_4c = 0;
          if (plVar12 != (long *)0x0) {
            if (uVar9 < 2) {
              do {
                if ((undefined1 *)plVar12[1] == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e8860;
                }
                else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar8 + -1)) != puVar10) break;
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            else {
              do {
                puVar15 = (undefined1 *)plVar12[1];
                if (puVar15 == &DAT_7c08eae870e235e0) {
                  if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e8860;
                }
                else {
                  if (puVar8 <= puVar15) {
                    uVar9 = 0;
                    if (puVar8 != (undefined1 *)0x0) {
                      uVar9 = (ulong)puVar15 / (ulong)puVar8;
                    }
                    puVar15 = puVar15 + -(uVar9 * (long)puVar8);
                  }
                  if (puVar15 != puVar10) break;
                }
                plVar12 = (long *)*plVar12;
              } while (plVar12 != (long *)0x0);
            }
            local_4c = 0;
          }
        }
      }
      goto LAB_025e8a44;
    }
    goto LAB_025e8704;
  }
  goto LAB_025e82a4;
LAB_025e8394:
  plVar12 = (long *)plVar12[3];
  local_4c = 0;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = plVar12[0x21];
    local_4c = 0;
    if (uVar9 != 0) {
      uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar9 - 1 & 0xda156224f0e7ff10;
      }
      else if (uVar9 < 0xda156224f0e7ff11) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = 0xda156224f0e7ff10 / uVar9;
        }
        uVar14 = 0xda156224f0e7ff10 - uVar14 * uVar9;
      }
      else {
        uVar14 = 0xda156224f0e7ff10;
      }
      local_4c = 0;
      plVar16 = *(long **)(plVar12[0x20] + uVar14 * 8);
      if (plVar16 != (long *)0x0) {
        plVar16 = (long *)*plVar16;
        local_4c = 0;
        if (plVar16 != (long *)0x0) {
          if (uVar13 < 2) {
            do {
              if (plVar16[1] == 0xda156224f0e7ff10) {
                if (plVar16[2] == -0x25ea9ddb0f1800f0) goto LAB_025e84d8;
              }
              else if ((plVar16[1] & uVar9 - 1) != uVar14) break;
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          else {
            do {
              uVar13 = plVar16[1];
              if (uVar13 == 0xda156224f0e7ff10) {
                if (plVar16[2] == -0x25ea9ddb0f1800f0) goto LAB_025e84d8;
              }
              else {
                if (uVar9 <= uVar13) {
                  uVar4 = 0;
                  if (uVar9 != 0) {
                    uVar4 = uVar13 / uVar9;
                  }
                  uVar13 = uVar13 - uVar4 * uVar9;
                }
                if (uVar13 != uVar14) break;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
          }
          local_4c = 0;
        }
      }
    }
    goto LAB_025e84e0;
  }
  goto LAB_025e84f8;
LAB_025e84d8:
  local_4c = (undefined4)plVar16[6];
LAB_025e84e0:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_025e84f8:
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar11 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar11;
  puVar8 = *(undefined1 **)(lVar11 + 0x60);
  if (puVar8 != (undefined1 *)0x0) {
    uVar9 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      puVar10 = (undefined1 *)((ulong)(puVar8 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar10 = &DAT_7c08eae870e235e0;
      if (puVar8 < (undefined1 *)0x7c08eae870e235e1) {
        uVar13 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar13 = 0x7c08eae870e235e0 / (ulong)puVar8;
        }
        puVar10 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar8);
      }
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + (long)puVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e85a8;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar8 + -1)) != puVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar12[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e85a8;
          }
          else {
            if (puVar8 <= puVar15) {
              uVar9 = 0;
              if (puVar8 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar15 / (ulong)puVar8;
              }
              puVar15 = puVar15 + -(uVar9 * (long)puVar8);
            }
            if (puVar15 != puVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  goto LAB_025e869c;
LAB_025e85a8:
  plVar12 = (long *)plVar12[3];
  if (plVar12 == (long *)0x0) goto LAB_025e869c;
  plVar1 = plVar12 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar9 = plVar12[0x21];
  local_50 = 0.0;
  if (uVar9 != 0) {
    uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
    uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar13 < 2) {
      uVar14 = uVar9 - 1 & 0xf59539100002c2a0;
    }
    else if (uVar9 < 0xf59539100002c2a1) {
      uVar14 = 0;
      if (uVar9 != 0) {
        uVar14 = 0xf59539100002c2a0 / uVar9;
      }
      uVar14 = 0xf59539100002c2a0 - uVar14 * uVar9;
    }
    else {
      uVar14 = 0xf59539100002c2a0;
    }
    local_50 = 0.0;
    plVar16 = *(long **)(plVar12[0x20] + uVar14 * 8);
    if (plVar16 != (long *)0x0) {
      plVar16 = (long *)*plVar16;
      local_50 = 0.0;
      if (plVar16 != (long *)0x0) {
        if (uVar13 < 2) {
          do {
            if (plVar16[1] == 0xf59539100002c2a0) {
              if (plVar16[2] == -0xa6ac6effffd3d60) goto LAB_025e86e8;
            }
            else if ((plVar16[1] & uVar9 - 1) != uVar14) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar13 = plVar16[1];
            if (uVar13 == 0xf59539100002c2a0) {
              if (plVar16[2] == -0xa6ac6effffd3d60) goto LAB_025e86e8;
            }
            else {
              if (uVar9 <= uVar13) {
                uVar4 = 0;
                if (uVar9 != 0) {
                  uVar4 = uVar13 / uVar9;
                }
                uVar13 = uVar13 - uVar4 * uVar9;
              }
              if (uVar13 != uVar14) break;
            }
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        local_50 = 0.0;
      }
    }
  }
  goto LAB_025e86f0;
LAB_025e86e8:
  local_50 = *(float *)(plVar16 + 6);
LAB_025e86f0:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
LAB_025e8cbc:
    (**(code **)(*plVar12 + 0x10))();
  }
  goto LAB_025e8704;
LAB_025e8860:
  plVar12 = (long *)plVar12[3];
  local_4c = 0;
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = plVar12[0x21];
    local_4c = 0;
    if (uVar9 != 0) {
      uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar9 - 1 & 0x85c5430ba9d0543c;
      }
      else if (uVar9 < 0x85c5430ba9d0543d) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = 0x85c5430ba9d0543c / uVar9;
        }
        uVar14 = 0x85c5430ba9d0543c - uVar14 * uVar9;
      }
      else {
        uVar14 = 0x85c5430ba9d0543c;
      }
      local_4c = 0;
      plVar16 = *(long **)(plVar12[0x20] + uVar14 * 8);
      if (plVar16 != (long *)0x0) {
        plVar16 = (long *)*plVar16;
        local_4c = 0;
        if (plVar16 != (long *)0x0) {
          if (uVar13 < 2) {
            do {
              if (plVar16[1] == 0x85c5430ba9d0543c) {
                if (plVar16[2] == -0x7a3abcf4562fabc4) goto LAB_025e8a28;
              }
              else if ((plVar16[1] & uVar9 - 1) != uVar14) {
                local_4c = 0;
                goto LAB_025e8a30;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
            local_4c = 0;
          }
          else {
            do {
              uVar13 = plVar16[1];
              if (uVar13 == 0x85c5430ba9d0543c) {
                if (plVar16[2] == -0x7a3abcf4562fabc4) goto LAB_025e8a28;
              }
              else {
                if (uVar9 <= uVar13) {
                  uVar4 = 0;
                  if (uVar9 != 0) {
                    uVar4 = uVar13 / uVar9;
                  }
                  uVar13 = uVar13 - uVar4 * uVar9;
                }
                if (uVar13 != uVar14) {
                  local_4c = 0;
                  goto LAB_025e8a30;
                }
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
            local_4c = 0;
          }
        }
      }
    }
    goto LAB_025e8a30;
  }
  goto LAB_025e8a44;
LAB_025e8a28:
  local_4c = (undefined4)plVar16[6];
LAB_025e8a30:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 == 0) {
    (**(code **)(*plVar12 + 0x10))();
  }
LAB_025e8a44:
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04379660), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar11 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar11;
  puVar8 = *(undefined1 **)(lVar11 + 0x60);
  if (puVar8 != (undefined1 *)0x0) {
    uVar9 = (long)puVar8 - ((ulong)puVar8 >> 1 & 0x5555555555555555);
    uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
    uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar9 < 2) {
      puVar10 = (undefined1 *)((ulong)(puVar8 + -1) & 0x7c08eae870e235e0);
    }
    else {
      puVar10 = &DAT_7c08eae870e235e0;
      if (puVar8 < (undefined1 *)0x7c08eae870e235e1) {
        uVar13 = 0;
        if (puVar8 != (undefined1 *)0x0) {
          uVar13 = 0x7c08eae870e235e0 / (ulong)puVar8;
        }
        puVar10 = &DAT_7c08eae870e235e0 + -(uVar13 * (long)puVar8);
      }
    }
    plVar12 = *(long **)(*(long *)(lVar11 + 0x58) + (long)puVar10 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar9 < 2) {
        do {
          if ((undefined1 *)plVar12[1] == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e8af0;
          }
          else if ((undefined1 *)((ulong)plVar12[1] & (ulong)(puVar8 + -1)) != puVar10) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          puVar15 = (undefined1 *)plVar12[1];
          if (puVar15 == &DAT_7c08eae870e235e0) {
            if ((undefined1 *)plVar12[2] == &DAT_7c08eae870e235e0) goto LAB_025e8af0;
          }
          else {
            if (puVar8 <= puVar15) {
              uVar9 = 0;
              if (puVar8 != (undefined1 *)0x0) {
                uVar9 = (ulong)puVar15 / (ulong)puVar8;
              }
              puVar15 = puVar15 + -(uVar9 * (long)puVar8);
            }
            if (puVar15 != puVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
LAB_025e869c:
  local_50 = 0.0;
LAB_025e8704:
  fVar17 = *(float *)(plVar7 + 3) + param_1;
  *(float *)(plVar7 + 3) = fVar17;
  puVar5 = PTR_DAT_043796b8;
  if (fVar17 <= local_50) {
LAB_025e82a4:
    plVar7 = (long *)*plVar7;
  }
  else {
    *(float *)(plVar7 + 3) = fVar17 - local_50;
    FUN_025e9564(local_4c);
    if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_043796b8), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_04379c58,PTR_DAT_043796c0,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043796b8);
    }
    lVar11 = *(long *)PTR_DAT_043796c0;
    *(long *)PTR_DAT_043796c8 = lVar11;
    local_48 = 0x15c5877ec0e7b8c9;
    FUN_00da3604(lVar11 + 0x3c0,&local_48,0);
    plVar7 = (long *)*plVar7;
  }
  goto joined_r0x025e8260;
LAB_025e8af0:
  plVar12 = (long *)plVar12[3];
  if (plVar12 != (long *)0x0) {
    plVar1 = plVar12 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar9 = plVar12[0x21];
    local_50 = 0.0;
    if (uVar9 != 0) {
      uVar13 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
      uVar13 = (uVar13 & 0x3333333333333333) + (uVar13 >> 2 & 0x3333333333333333);
      uVar13 = (uVar13 + (uVar13 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar13 < 2) {
        uVar14 = uVar9 - 1 & 0xf5493928857c3674;
      }
      else if (uVar9 < 0xf5493928857c3675) {
        uVar14 = 0;
        if (uVar9 != 0) {
          uVar14 = 0xf5493928857c3674 / uVar9;
        }
        uVar14 = 0xf5493928857c3674 - uVar14 * uVar9;
      }
      else {
        uVar14 = 0xf5493928857c3674;
      }
      local_50 = 0.0;
      plVar16 = *(long **)(plVar12[0x20] + uVar14 * 8);
      if (plVar16 != (long *)0x0) {
        plVar16 = (long *)*plVar16;
        local_50 = 0.0;
        if (plVar16 != (long *)0x0) {
          if (uVar13 < 2) {
            do {
              if (plVar16[1] == 0xf5493928857c3674) {
                if (plVar16[2] == -0xab6c6d77a83c98c) goto LAB_025e8ca0;
              }
              else if ((plVar16[1] & uVar9 - 1) != uVar14) {
                local_50 = 0.0;
                goto LAB_025e8ca8;
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
            local_50 = 0.0;
          }
          else {
            do {
              uVar13 = plVar16[1];
              if (uVar13 == 0xf5493928857c3674) {
                if (plVar16[2] == -0xab6c6d77a83c98c) goto LAB_025e8ca0;
              }
              else {
                if (uVar9 <= uVar13) {
                  uVar4 = 0;
                  if (uVar9 != 0) {
                    uVar4 = uVar13 / uVar9;
                  }
                  uVar13 = uVar13 - uVar4 * uVar9;
                }
                if (uVar13 != uVar14) {
                  local_50 = 0.0;
                  goto LAB_025e8ca8;
                }
              }
              plVar16 = (long *)*plVar16;
            } while (plVar16 != (long *)0x0);
            local_50 = 0.0;
          }
        }
      }
    }
    goto LAB_025e8ca8;
  }
  goto LAB_025e869c;
LAB_025e8ca0:
  local_50 = *(float *)(plVar16 + 6);
LAB_025e8ca8:
  do {
    iVar6 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar6 != 0) goto LAB_025e8704;
  goto LAB_025e8cbc;
}


