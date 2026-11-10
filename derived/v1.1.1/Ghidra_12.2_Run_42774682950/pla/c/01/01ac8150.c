/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ac8150; name: FUN_01ac8150
 */


undefined8 FUN_01ac8150(int *param_1,int *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  
  puVar6 = PTR_DAT_04379660;
  if (*param_1 != *param_2) goto LAB_01ac88ac;
  switch(*param_1) {
  case 0:
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)PTR_DAT_04379668;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar11 = *(ulong *)(lVar14 + 0x60);
    fVar20 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x6277176c3d00fa5e;
      }
      else if (uVar11 < 0x6277176c3d00fa5f) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x6277176c3d00fa5e / uVar11;
        }
        uVar13 = 0x6277176c3d00fa5e - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x6277176c3d00fa5e;
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == 0x6277176c3d00fa5e) {
              if (plVar15[2] == 0x6277176c3d00fa5e) goto LAB_01ac8490;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6277176c3d00fa5e) {
              if (plVar15[2] == 0x6277176c3d00fa5e) goto LAB_01ac8490;
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
    goto LAB_01ac8884;
  case 1:
    if (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc)) goto switchD_01ac81a0_default;
    break;
  case 2:
    if (*(long *)(param_1 + 0xc) == *(long *)(param_2 + 0xc)) {
LAB_01ac81e0:
      plVar15 = (long *)PTR_DAT_04379c88;
      if (*(long *)(param_1 + 0x10) != 0) {
        plVar15 = (long *)(*(long *)(param_1 + 0x10) + 0x58);
      }
      plVar1 = (long *)PTR_DAT_04379c88;
      if (*(long *)(param_2 + 0x10) != 0) {
        plVar1 = (long *)(*(long *)(param_2 + 0x10) + 0x58);
      }
      if (*plVar15 == *plVar1) goto switchD_01ac81a0_default;
    }
    break;
  case 3:
    fVar20 = (float)param_1[0x12];
    fVar21 = (float)param_2[0x12];
    if (((*PTR_DAT_04379660 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    puVar8 = PTR_DAT_04379670;
    puVar7 = PTR_DAT_04379668;
    lVar14 = *(long *)PTR_DAT_04379668;
    fVar22 = 0.0;
    *(long *)PTR_DAT_04379670 = lVar14;
    uVar11 = *(ulong *)(lVar14 + 0x60);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x6277176c3d00fa5e;
      }
      else {
        uVar13 = 0x6277176c3d00fa5e;
        if (uVar11 < 0x6277176c3d00fa5f) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = 0x6277176c3d00fa5e / uVar11;
          }
          uVar13 = 0x6277176c3d00fa5e - uVar13 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == 0x6277176c3d00fa5e) {
              if (plVar15[2] == 0x6277176c3d00fa5e) goto LAB_01ac82f4;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6277176c3d00fa5e) {
              if (plVar15[2] == 0x6277176c3d00fa5e) goto LAB_01ac82f4;
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
    goto joined_r0x01ac88c4;
  case 4:
    if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) goto switchD_01ac81a0_default;
    break;
  case 5:
    if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) goto LAB_01ac81e0;
    break;
  default:
    goto switchD_01ac81a0_default;
  }
  goto LAB_01ac88ac;
LAB_01ac82f4:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    fVar22 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x89faf996068c4566;
      }
      else if (uVar11 < 0x89faf996068c4567) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x89faf996068c4566 / uVar11;
        }
        uVar13 = 0x89faf996068c4566 - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x89faf996068c4566;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x89faf996068c4566) {
              if (plVar16[2] == -0x76050669f973ba9a) goto LAB_01ac85d4;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x89faf996068c4566) {
              if (plVar16[2] == -0x76050669f973ba9a) goto LAB_01ac85d4;
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
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01ac85d8;
  }
  goto joined_r0x01ac88c4;
LAB_01ac85d4:
  fVar22 = *(float *)(plVar16 + 6);
LAB_01ac85d8:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
joined_r0x01ac88c4:
  if (ABS(fVar20 - fVar21) < fVar22) {
    fVar20 = (float)param_1[0x13];
    fVar21 = (float)param_2[0x13];
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379660), iVar9 != 0)) {
      FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379660);
    }
    lVar14 = *(long *)puVar7;
    fVar22 = 0.0;
    *(long *)puVar8 = lVar14;
    uVar11 = *(ulong *)(lVar14 + 0x60);
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x6277176c3d00fa5e;
      }
      else {
        uVar13 = 0x6277176c3d00fa5e;
        if (uVar11 < 0x6277176c3d00fa5f) {
          uVar13 = 0;
          if (uVar11 != 0) {
            uVar13 = 0x6277176c3d00fa5e / uVar11;
          }
          uVar13 = 0x6277176c3d00fa5e - uVar13 * uVar11;
        }
      }
      plVar15 = *(long **)(*(long *)(lVar14 + 0x58) + uVar13 * 8);
      if ((plVar15 != (long *)0x0) && (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar15[1] == 0x6277176c3d00fa5e) {
              if (plVar15[2] == 0x6277176c3d00fa5e) goto LAB_01ac869c;
            }
            else if ((plVar15[1] & uVar11 - 1) != uVar13) break;
            plVar15 = (long *)*plVar15;
          } while (plVar15 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar15[1];
            if (uVar12 == 0x6277176c3d00fa5e) {
              if (plVar15[2] == 0x6277176c3d00fa5e) goto LAB_01ac869c;
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
    goto joined_r0x01ac88dc;
  }
  goto LAB_01ac88ac;
LAB_01ac869c:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    fVar22 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0x3c775a3ebc11268b;
      }
      else if (uVar11 < 0x3c775a3ebc11268c) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0x3c775a3ebc11268b / uVar11;
        }
        uVar13 = 0x3c775a3ebc11268b - uVar13 * uVar11;
      }
      else {
        uVar13 = 0x3c775a3ebc11268b;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0x3c775a3ebc11268b) {
              if (plVar16[2] == 0x3c775a3ebc11268b) goto LAB_01ac87e0;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0x3c775a3ebc11268b) {
              if (plVar16[2] == 0x3c775a3ebc11268b) goto LAB_01ac87e0;
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
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01ac87e4;
  }
  goto joined_r0x01ac88dc;
LAB_01ac87e0:
  fVar22 = *(float *)(plVar16 + 6);
LAB_01ac87e4:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
joined_r0x01ac88dc:
  if (ABS(fVar20 - fVar21) < fVar22) goto switchD_01ac81a0_default;
  goto LAB_01ac88ac;
LAB_01ac8490:
  plVar15 = (long *)plVar15[3];
  if (plVar15 != (long *)0x0) {
    plVar1 = plVar15 + 10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *(int *)plVar1 = (int)*plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    uVar11 = plVar15[0x21];
    fVar20 = 0.0;
    if (uVar11 != 0) {
      uVar12 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
      uVar12 = (uVar12 & 0x3333333333333333) + (uVar12 >> 2 & 0x3333333333333333);
      uVar12 = (uVar12 + (uVar12 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
      if (uVar12 < 2) {
        uVar13 = uVar11 - 1 & 0xc8ffd5ce02346cfc;
      }
      else if (uVar11 < 0xc8ffd5ce02346cfd) {
        uVar13 = 0;
        if (uVar11 != 0) {
          uVar13 = 0xc8ffd5ce02346cfc / uVar11;
        }
        uVar13 = 0xc8ffd5ce02346cfc - uVar13 * uVar11;
      }
      else {
        uVar13 = 0xc8ffd5ce02346cfc;
      }
      plVar16 = *(long **)(plVar15[0x20] + uVar13 * 8);
      if ((plVar16 != (long *)0x0) && (plVar16 = (long *)*plVar16, plVar16 != (long *)0x0)) {
        if (uVar12 < 2) {
          do {
            if (plVar16[1] == 0xc8ffd5ce02346cfc) {
              if (plVar16[2] == -0x37002a31fdcb9304) goto LAB_01ac886c;
            }
            else if ((plVar16[1] & uVar11 - 1) != uVar13) break;
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
        else {
          do {
            uVar12 = plVar16[1];
            if (uVar12 == 0xc8ffd5ce02346cfc) {
              if (plVar16[2] == -0x37002a31fdcb9304) goto LAB_01ac886c;
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
            plVar16 = (long *)*plVar16;
          } while (plVar16 != (long *)0x0);
        }
      }
    }
    goto LAB_01ac8870;
  }
  goto LAB_01ac8884;
LAB_01ac886c:
  fVar20 = *(float *)(plVar16 + 6);
LAB_01ac8870:
  do {
    iVar9 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar9;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar9 == 0) {
    (**(code **)(*plVar15 + 0x10))();
  }
LAB_01ac8884:
  fVar21 = (float)*(undefined8 *)(param_1 + 4) - (float)param_2[4];
  fVar22 = (float)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20) - (float)param_2[5];
  fVar17 = (float)*(undefined8 *)(param_1 + 6) - (float)param_2[6];
  fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20) - (float)param_2[7];
  fVar21 = fVar21 * fVar21;
  fVar22 = fVar22 * fVar22;
  fVar17 = fVar17 * fVar17;
  fVar18 = fVar18 * fVar18;
  auVar19._4_4_ = fVar22;
  auVar19._0_4_ = fVar21;
  auVar19._8_4_ = fVar17;
  auVar19._12_4_ = fVar18;
  auVar5._4_4_ = fVar22;
  auVar5._0_4_ = fVar21;
  auVar5._8_4_ = fVar17;
  auVar5._12_4_ = fVar18;
  auVar19 = NEON_ext(auVar19,auVar5,8,1);
  if (auVar19._0_4_ + fVar21 + auVar19._4_4_ + fVar22 < fVar20 * fVar20) {
switchD_01ac81a0_default:
    uVar10 = 1;
  }
  else {
LAB_01ac88ac:
    uVar10 = 0;
  }
  return uVar10;
}


