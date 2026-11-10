/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f13600; name: FUN_01f13600
 */


void FUN_01f13600(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  
  snprintf((char *)(param_1 + 200),0x1f,"%s",*(undefined8 *)(param_2 + 8));
  FUN_019bf5b0(param_1 + 0x68,param_2 + 0x20);
  FUN_0192a7a4(param_1 + 0x78,param_2 + 0x30);
  FUN_019a94d0(param_1 + 0x88,param_2 + 0x40);
  FUN_01aabb3c(param_1 + 0x98,param_2 + 0x50);
  FUN_009630f4(param_1 + 0xa8,param_2 + 0x60);
  FUN_00d08588(param_1 + 0xb8,param_2 + 0x70);
  FUN_01f14178(param_1);
  if (((*PTR_DAT_04379660 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04379660), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043796b0,PTR_DAT_04379668,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379660);
  }
  lVar10 = *(long *)PTR_DAT_04379668;
  *(long *)PTR_DAT_04379670 = lVar10;
  uVar6 = *(ulong *)(lVar10 + 0x60);
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0xeb3fbf251277e21a;
    }
    else if (uVar6 < 0xeb3fbf251277e21b) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0xeb3fbf251277e21a / uVar6;
      }
      uVar9 = 0xeb3fbf251277e21a - uVar9 * uVar6;
    }
    else {
      uVar9 = 0xeb3fbf251277e21a;
    }
    plVar11 = *(long **)(*(long *)(lVar10 + 0x58) + uVar9 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar11[1] == 0xeb3fbf251277e21a) {
            if (plVar11[2] == -0x14c040daed881de6) goto LAB_01f1377c;
          }
          else if ((plVar11[1] & uVar6 - 1) != uVar9) break;
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar11[1];
          if (uVar8 == 0xeb3fbf251277e21a) {
            if (plVar11[2] == -0x14c040daed881de6) goto LAB_01f1377c;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar16 = 0;
              if (uVar6 != 0) {
                uVar16 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar16 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar11 = (long *)*plVar11;
        } while (plVar11 != (long *)0x0);
      }
    }
  }
  goto LAB_01f13c98;
LAB_01f1377c:
  plVar11 = (long *)plVar11[3];
  if (plVar11 == (long *)0x0) goto LAB_01f13c98;
  plVar1 = plVar11 + 10;
  do {
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = (int)*plVar1 + 1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  uVar6 = plVar11[0x14];
  uVar7 = 0;
  if (uVar6 != 0) {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x490970a2cdf1e2f8;
    }
    else if (uVar6 < 0x490970a2cdf1e2f9) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x490970a2cdf1e2f8 / uVar6;
      }
      uVar9 = 0x490970a2cdf1e2f8 - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x490970a2cdf1e2f8;
    }
    plVar13 = *(long **)(plVar11[0x13] + uVar9 * 8);
    if ((plVar13 != (long *)0x0) && (plVar13 = (long *)*plVar13, plVar13 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar13[1] == 0x490970a2cdf1e2f8) {
            if (plVar13[2] == 0x490970a2cdf1e2f8) goto LAB_01f138c4;
          }
          else if ((plVar13[1] & uVar6 - 1) != uVar9) goto LAB_01f13850;
          plVar13 = (long *)*plVar13;
          uVar7 = 0;
        } while (plVar13 != (long *)0x0);
        goto LAB_01f138c8;
      }
      do {
        uVar8 = plVar13[1];
        if (uVar8 == 0x490970a2cdf1e2f8) {
          if (plVar13[2] == 0x490970a2cdf1e2f8) goto LAB_01f138c4;
        }
        else {
          if (uVar6 <= uVar8) {
            uVar16 = 0;
            if (uVar6 != 0) {
              uVar16 = uVar8 / uVar6;
            }
            uVar8 = uVar8 - uVar16 * uVar6;
          }
          if (uVar8 != uVar9) break;
        }
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
LAB_01f13850:
    uVar7 = 0;
  }
  goto LAB_01f138c8;
LAB_01f1396c:
  plVar15 = plVar14 + 6;
  goto LAB_01f13970;
LAB_01f139d8:
  plVar15 = plVar14 + 6;
  goto LAB_01f139dc;
LAB_01f13a44:
  plVar15 = plVar14 + 6;
  goto LAB_01f13a48;
LAB_01f13ab0:
  plVar15 = plVar14 + 6;
  goto LAB_01f13ab4;
LAB_01f13b1c:
  plVar15 = plVar14 + 6;
  goto LAB_01f13b20;
LAB_01f13b88:
  plVar15 = plVar14 + 6;
  goto LAB_01f13b8c;
LAB_01f13bf4:
  plVar15 = plVar14 + 6;
  goto LAB_01f13bf8;
LAB_01f13c5c:
  plVar13 = plVar14 + 6;
  goto LAB_01f13c60;
LAB_01f138c4:
  uVar7 = (undefined4)plVar13[6];
LAB_01f138c8:
  *(undefined4 *)(param_1 + 0x1008c0) = uVar7;
  *(undefined4 *)(param_1 + 0x1008c4) = uVar7;
  uVar6 = plVar11[0x2e];
  plVar13 = (long *)PTR_DAT_0437a330;
  if (uVar6 == 0) {
    lVar28 = 0;
    lVar29 = 0;
    lVar25 = 0;
    lVar24 = 0;
    lVar21 = 0;
    lVar20 = 0;
    lVar17 = 0;
    lVar10 = 0;
    lVar19 = 0;
    lVar18 = 0;
    lVar23 = 0;
    lVar22 = 0;
    lVar27 = 0;
    lVar26 = 0;
  }
  else {
    uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d15ccf27def34;
    }
    else if (uVar6 < 0x6c1d15ccf27def35) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d15ccf27def34 / uVar6;
      }
      uVar9 = 0x6c1d15ccf27def34 - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d15ccf27def34;
    }
    lVar12 = plVar11[0x2d];
    lVar10 = 0;
    lVar17 = 0;
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d15ccf27def34) {
            if (plVar14[2] == 0x6c1d15ccf27def34) goto LAB_01f1396c;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d15ccf27def34) {
            if (plVar14[2] == 0x6c1d15ccf27def34) goto LAB_01f1396c;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f13970:
      lVar17 = plVar15[1];
      lVar10 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d18ccf27df44d;
    }
    else if (uVar6 < 0x6c1d18ccf27df44e) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d18ccf27df44d / uVar6;
      }
      uVar9 = 0x6c1d18ccf27df44d - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d18ccf27df44d;
    }
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    lVar18 = 0;
    lVar19 = 0;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d18ccf27df44d) {
            if (plVar14[2] == 0x6c1d18ccf27df44d) goto LAB_01f139d8;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d18ccf27df44d) {
            if (plVar14[2] == 0x6c1d18ccf27df44d) goto LAB_01f139d8;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f139dc:
      lVar19 = plVar15[1];
      lVar18 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d17ccf27df29a;
    }
    else if (uVar6 < 0x6c1d17ccf27df29b) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d17ccf27df29a / uVar6;
      }
      uVar9 = 0x6c1d17ccf27df29a - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d17ccf27df29a;
    }
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    lVar20 = 0;
    lVar21 = 0;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d17ccf27df29a) {
            if (plVar14[2] == 0x6c1d17ccf27df29a) goto LAB_01f13a44;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d17ccf27df29a) {
            if (plVar14[2] == 0x6c1d17ccf27df29a) goto LAB_01f13a44;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f13a48:
      lVar21 = plVar15[1];
      lVar20 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d12ccf27dea1b;
    }
    else if (uVar6 < 0x6c1d12ccf27dea1c) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d12ccf27dea1b / uVar6;
      }
      uVar9 = 0x6c1d12ccf27dea1b - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d12ccf27dea1b;
    }
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    lVar22 = 0;
    lVar23 = 0;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d12ccf27dea1b) {
            if (plVar14[2] == 0x6c1d12ccf27dea1b) goto LAB_01f13ab0;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d12ccf27dea1b) {
            if (plVar14[2] == 0x6c1d12ccf27dea1b) goto LAB_01f13ab0;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f13ab4:
      lVar23 = plVar15[1];
      lVar22 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d11ccf27de868;
    }
    else if (uVar6 < 0x6c1d11ccf27de869) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d11ccf27de868 / uVar6;
      }
      uVar9 = 0x6c1d11ccf27de868 - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d11ccf27de868;
    }
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    lVar24 = 0;
    lVar25 = 0;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d11ccf27de868) {
            if (plVar14[2] == 0x6c1d11ccf27de868) goto LAB_01f13b1c;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d11ccf27de868) {
            if (plVar14[2] == 0x6c1d11ccf27de868) goto LAB_01f13b1c;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f13b20:
      lVar25 = plVar15[1];
      lVar24 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d14ccf27ded81;
    }
    else if (uVar6 < 0x6c1d14ccf27ded82) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d14ccf27ded81 / uVar6;
      }
      uVar9 = 0x6c1d14ccf27ded81 - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d14ccf27ded81;
    }
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    lVar26 = 0;
    lVar27 = 0;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d14ccf27ded81) {
            if (plVar14[2] == 0x6c1d14ccf27ded81) goto LAB_01f13b88;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d14ccf27ded81) {
            if (plVar14[2] == 0x6c1d14ccf27ded81) goto LAB_01f13b88;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f13b8c:
      lVar27 = plVar15[1];
      lVar26 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d13ccf27debce;
    }
    else if (uVar6 < 0x6c1d13ccf27debcf) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d13ccf27debce / uVar6;
      }
      uVar9 = 0x6c1d13ccf27debce - uVar9 * uVar6;
    }
    else {
      uVar9 = 0x6c1d13ccf27debce;
    }
    plVar14 = *(long **)(lVar12 + uVar9 * 8);
    lVar28 = 0;
    lVar29 = 0;
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      plVar15 = (long *)PTR_DAT_0437a330;
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d13ccf27debce) {
            if (plVar14[2] == 0x6c1d13ccf27debce) goto LAB_01f13bf4;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar16 = plVar14[1];
          if (uVar16 == 0x6c1d13ccf27debce) {
            if (plVar14[2] == 0x6c1d13ccf27debce) goto LAB_01f13bf4;
          }
          else {
            if (uVar6 <= uVar16) {
              uVar4 = 0;
              if (uVar6 != 0) {
                uVar4 = uVar16 / uVar6;
              }
              uVar16 = uVar16 - uVar4 * uVar6;
            }
            if (uVar16 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
LAB_01f13bf8:
      lVar29 = plVar15[1];
      lVar28 = *plVar15;
    }
    if (uVar8 < 2) {
      uVar9 = uVar6 - 1 & 0x6c1d0eccf27de34f;
      plVar14 = *(long **)(lVar12 + uVar9 * 8);
    }
    else if (uVar6 < 0x6c1d0eccf27de350) {
      uVar9 = 0;
      if (uVar6 != 0) {
        uVar9 = 0x6c1d0eccf27de34f / uVar6;
      }
      uVar9 = 0x6c1d0eccf27de34f - uVar9 * uVar6;
      plVar14 = *(long **)(lVar12 + uVar9 * 8);
    }
    else {
      uVar9 = 0x6c1d0eccf27de34f;
      plVar14 = *(long **)(lVar12 + 0x60e8766793ef1a78);
    }
    if ((plVar14 != (long *)0x0) && (plVar14 = (long *)*plVar14, plVar14 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if (plVar14[1] == 0x6c1d0eccf27de34f) {
            if (plVar14[2] == 0x6c1d0eccf27de34f) goto LAB_01f13c5c;
          }
          else if ((plVar14[1] & uVar6 - 1) != uVar9) break;
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
      else {
        do {
          uVar8 = plVar14[1];
          if (uVar8 == 0x6c1d0eccf27de34f) {
            if (plVar14[2] == 0x6c1d0eccf27de34f) goto LAB_01f13c5c;
          }
          else {
            if (uVar6 <= uVar8) {
              uVar16 = 0;
              if (uVar6 != 0) {
                uVar16 = uVar8 / uVar6;
              }
              uVar8 = uVar8 - uVar16 * uVar6;
            }
            if (uVar8 != uVar9) break;
          }
          plVar14 = (long *)*plVar14;
        } while (plVar14 != (long *)0x0);
      }
    }
  }
LAB_01f13c60:
  lVar30 = plVar13[1];
  lVar12 = *plVar13;
  *(long *)(param_1 + 0x100938) = lVar17;
  *(long *)(param_1 + 0x100930) = lVar10;
  *(long *)(param_1 + 0x100948) = lVar19;
  *(long *)(param_1 + 0x100940) = lVar18;
  *(long *)(param_1 + 0x100958) = lVar21;
  *(long *)(param_1 + 0x100950) = lVar20;
  *(long *)(param_1 + 0x100968) = lVar23;
  *(long *)(param_1 + 0x100960) = lVar22;
  *(long *)(param_1 + 0x100978) = lVar25;
  *(long *)(param_1 + 0x100970) = lVar24;
  *(long *)(param_1 + 0x100988) = lVar27;
  *(long *)(param_1 + 0x100980) = lVar26;
  *(long *)(param_1 + 0x100998) = lVar29;
  *(long *)(param_1 + 0x100990) = lVar28;
  *(long *)(param_1 + 0x1009a8) = lVar30;
  *(long *)(param_1 + 0x1009a0) = lVar12;
  do {
    iVar5 = (int)*plVar1 + -1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
    if (bVar3) {
      *(int *)plVar1 = iVar5;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 0) {
    (**(code **)(*plVar11 + 0x10))();
  }
LAB_01f13c98:
  *(undefined1 *)(param_1 + 0x6118) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined1 *)(param_1 + 0x285c1) = *(undefined1 *)(param_2 + 0xb1);
  *(undefined1 *)(param_1 + 0x1008a8) = *(undefined1 *)(param_2 + 0xb2);
  *(undefined1 *)(param_1 + 0xdc7b1) = 1;
  *(undefined1 *)(param_1 + 0xe27d9) = 1;
  *(undefined1 *)(param_1 + 0xe8) = 1;
  return;
}


