/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e543c; name: FUN_001e543c
 */


int FUN_001e543c(undefined8 param_1,code *param_2,byte *param_3,undefined8 *param_4)

{
  char *pcVar1;
  char cVar2;
  double dVar3;
  byte *__nptr;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  undefined8 uVar10;
  long lVar11;
  byte bVar12;
  undefined1 uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined1 uVar17;
  uint uVar18;
  long *plVar19;
  double dVar20;
  double *pdVar21;
  undefined4 uVar22;
  double *pdVar23;
  uint *puVar24;
  double dVar25;
  double *pdVar26;
  double *pdVar27;
  uint uVar28;
  byte *pbVar29;
  undefined1 *puVar30;
  undefined1 *puVar31;
  long lVar32;
  double dVar33;
  double dVar34;
  int iVar35;
  char *pcVar36;
  long lVar37;
  long lVar38;
  char *pcVar39;
  long local_15f0;
  undefined8 local_15e0;
  undefined8 uStack_15d8;
  undefined8 local_15d0;
  undefined8 uStack_15c8;
  char local_15c0 [323];
  char local_147d [5];
  long alStack_1478 [128];
  uint local_1078;
  undefined1 local_1074 [8];
  undefined1 auStack_106c [8];
  undefined4 uStack_1064;
  double adStack_1060 [510];
  byte *local_68;
  
  lVar11 = param_4[2];
  pdVar21 = (double *)*param_4;
  lVar37 = param_4[1];
  iVar35 = *(int *)(param_4 + 3);
  iVar6 = *(int *)((long)param_4 + 0x1c);
  bVar12 = *param_3;
  local_15e0 = param_3;
  if (bVar12 != 0) {
    lVar38 = 0;
    iVar7 = 0;
    plVar19 = alStack_1478;
    do {
      pbVar29 = local_15e0 + 1;
      while (local_15e0 = pbVar29, bVar12 == 0x25) {
        if (*local_15e0 != 0x25) {
          iVar7 = iVar7 + 1;
          lVar8 = FUN_001e67b4(local_15e0,&local_15e0);
          uVar28 = 0;
          local_15f0 = 0;
          lVar16 = (long)iVar7;
          if (lVar8 != 0) {
            lVar16 = lVar8;
          }
          lVar32 = 0;
          bVar4 = SBORROW8(lVar16,lVar38);
          lVar8 = lVar16 - lVar38;
          bVar5 = lVar16 == lVar38;
          lVar15 = lVar16;
          do {
            if (bVar5 || lVar8 < 0 != bVar4) {
              lVar15 = lVar38;
            }
            lVar38 = lVar15;
            pbVar29 = local_15e0;
switchD_001e556c_caseD_1:
            local_15e0 = pbVar29;
            __nptr = local_15e0;
            bVar12 = *local_15e0;
            uVar18 = bVar12 - 0x20;
            if ((0x2f < uVar18 || (1L << ((ulong)uVar18 & 0x3f) & 0x900003ff6c09U) == 0) &&
               (uVar14 = bVar12 - 0x68,
               0x12 < uVar14 || (1 << (ulong)(uVar14 & 0x1f) & 0x40211U) == 0)) {
              lVar8 = lVar16 + -1;
              if ((lVar16 < 1) || (0x7f < lVar8)) {
                return -1;
              }
              if (bVar12 < 0x58) {
                if (bVar12 == 0x45) {
                  *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = 7;
                  uVar18 = 0x41000;
                }
                else {
                  if (bVar12 != 0x47) {
                    if (bVar12 == 0x53) {
                      uVar28 = uVar28 | 8;
                      goto switchD_001e5730_caseD_73;
                    }
                    goto switchD_001e5730_caseD_68;
                  }
                  *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = 7;
                  uVar18 = 0x81000;
                }
LAB_001e584c:
                uVar28 = uVar28 | uVar18;
                goto LAB_001e5850;
              }
              switch(bVar12) {
              case 99:
                uVar22 = 3;
                uVar28 = uVar28 | 0x20000;
                break;
              case 100:
              case 0x69:
                uVar22 = 3;
                break;
              case 0x65:
                uVar22 = 7;
                uVar28 = uVar28 | 0x40000;
                break;
              case 0x66:
                uVar22 = 7;
                break;
              case 0x67:
                uVar22 = 7;
                uVar28 = uVar28 | 0x80000;
                break;
              case 0x68:
              case 0x6a:
              case 0x6b:
              case 0x6c:
              case 0x6d:
              case 0x71:
              case 0x72:
              case 0x74:
              case 0x76:
              case 0x77:
                goto switchD_001e5730_caseD_68;
              case 0x6e:
                uVar22 = 4;
                break;
              case 0x6f:
                uVar22 = 3;
                uVar28 = uVar28 | 0x400;
                break;
              case 0x70:
                uVar22 = 2;
                break;
              case 0x73:
switchD_001e5730_caseD_73:
                *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = 1;
                goto LAB_001e5850;
              case 0x75:
                uVar22 = 3;
                uVar28 = uVar28 | 0x200;
                break;
              case 0x78:
                *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = 3;
                uVar18 = 0xa00;
                goto LAB_001e584c;
              default:
                if (bVar12 == 0x58) {
                  *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = 3;
                  uVar18 = 0x1a00;
                  goto LAB_001e584c;
                }
                goto switchD_001e5730_caseD_68;
              }
              *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = uVar22;
LAB_001e5850:
              lVar8 = lVar8 * 0x20;
              *(uint *)(local_1074 + lVar8) = uVar28;
              *(long *)(local_1074 + lVar8 + 4) = lVar32;
              *(long *)(auStack_106c + lVar8 + 4) = local_15f0;
              if ((uVar28 >> 0xe & 1) != 0) {
                lVar32 = lVar32 + -1;
                *(long *)(local_1074 + lVar8 + 4) = lVar32;
                lVar16 = lVar32 * 0x20;
                *(undefined4 *)(alStack_1478 + lVar32 * 4 + 0x80) = 9;
                *(undefined8 *)(local_1074 + lVar16) = 0;
                *(undefined8 *)(auStack_106c + lVar16) = 0;
                *(undefined4 *)(auStack_106c + lVar16 + 8) = 0;
              }
              if ((uVar28 >> 0x10 & 1) != 0) {
                local_15f0 = local_15f0 + -1;
                *(long *)(auStack_106c + lVar8 + 4) = local_15f0;
                lVar16 = local_15f0 * 0x20;
                *(undefined4 *)(alStack_1478 + local_15f0 * 4 + 0x80) = 9;
                *(undefined8 *)(local_1074 + lVar16) = 0;
                *(undefined8 *)(auStack_106c + lVar16) = 0;
                *(undefined4 *)(auStack_106c + lVar16 + 8) = 0;
              }
              *plVar19 = (long)(local_15e0 + 1);
              plVar19 = plVar19 + 1;
              goto LAB_001e58c4;
            }
            pbVar29 = local_15e0 + 1;
            if (0x4b < bVar12) {
              if (0x6b < bVar12) {
                if (bVar12 == 0x6c) {
                  if ((uVar28 >> 5 & 1) != 0) goto LAB_001e569c;
                }
                else {
                  if (bVar12 == 0x71) {
LAB_001e569c:
                    uVar28 = uVar28 | 0x40;
                    goto switchD_001e556c_caseD_1;
                  }
                  if (bVar12 != 0x7a) goto switchD_001e556c_caseD_1;
                }
LAB_001e5694:
                uVar28 = uVar28 | 0x20;
                goto switchD_001e556c_caseD_1;
              }
              if (bVar12 == 0x4c) {
                uVar28 = uVar28 | 0x80;
              }
              else {
                if (bVar12 == 0x4f) goto LAB_001e5694;
                if (bVar12 == 0x68) {
                  uVar28 = uVar28 | 0x10;
                }
              }
              goto switchD_001e556c_caseD_1;
            }
            switch((ulong)uVar18) {
            case 0:
              uVar28 = uVar28 | 1;
            default:
              goto switchD_001e556c_caseD_1;
            case 3:
              uVar28 = uVar28 | 8;
              goto switchD_001e556c_caseD_1;
            case 10:
              uVar28 = uVar28 | 0x4000;
              iVar7 = iVar7 + 1;
              local_15e0 = pbVar29;
              lVar8 = FUN_001e67b4(pbVar29,&local_15e0);
              lVar32 = (long)iVar7;
              if (lVar8 != 0) {
                lVar32 = lVar8;
              }
              lVar8 = lVar32;
              if (lVar32 <= lVar38) {
                lVar8 = lVar38;
              }
              lVar38 = lVar8;
              pbVar29 = local_15e0;
              goto switchD_001e556c_caseD_1;
            case 0xb:
              uVar28 = uVar28 | 2;
              goto switchD_001e556c_caseD_1;
            case 0xd:
              uVar28 = uVar28 & 0xfffffeff | 4;
              goto switchD_001e556c_caseD_1;
            case 0xe:
              if (*pbVar29 != 0x2a) {
                uVar28 = uVar28 | 0x8000;
                local_15e0 = pbVar29;
                local_15f0 = strtol((char *)pbVar29,(char **)&local_15e0,10);
                pbVar29 = local_15e0;
                goto switchD_001e556c_caseD_1;
              }
              local_15e0 = local_15e0 + 2;
              uVar28 = uVar28 | 0x10000;
              iVar7 = iVar7 + 1;
              lVar8 = FUN_001e67b4(local_15e0,&local_15e0);
              lVar15 = (long)iVar7;
              if (lVar8 != 0) {
                lVar15 = lVar8;
              }
              bVar4 = SBORROW8(lVar15,lVar38);
              lVar8 = lVar15 - lVar38;
              bVar5 = lVar15 == lVar38;
              local_15f0 = lVar15;
              break;
            case 0x10:
              uVar28 = (uVar28 << 6 ^ 0xffffffff) & 0x100 | uVar28;
            case 0x11:
            case 0x12:
            case 0x13:
            case 0x14:
            case 0x15:
            case 0x16:
            case 0x17:
            case 0x18:
            case 0x19:
              uVar28 = uVar28 | 0x2000;
              local_15e0 = pbVar29;
              lVar32 = strtol((char *)__nptr,(char **)&local_15e0,10);
              pbVar29 = local_15e0;
              goto switchD_001e556c_caseD_1;
            }
          } while( true );
        }
        bVar12 = local_15e0[1];
        pbVar29 = local_15e0 + 2;
        if (bVar12 == 0) {
          local_15e0 = local_15e0 + 1;
          goto LAB_001e58d8;
        }
      }
LAB_001e58c4:
      bVar12 = *local_15e0;
    } while (bVar12 != 0);
LAB_001e58d8:
    if (0 < lVar38) {
      pdVar23 = adStack_1060;
      do {
        uVar28 = *(uint *)((long)pdVar23 + -0x14);
        pdVar26 = pdVar21;
        if ((uVar28 >> 0xe & 1) != 0) {
          if (iVar35 < 0) {
            iVar7 = iVar35 + 8;
            if (0 < iVar7) goto LAB_001e591c;
            pdVar21 = (double *)(lVar37 + iVar35);
            iVar35 = iVar7;
          }
          else {
            iVar7 = iVar35;
LAB_001e591c:
            pdVar26 = pdVar21 + 1;
            iVar35 = iVar7;
          }
          adStack_1060[(long)pdVar23[-2] * 4] = (double)(long)(int)*(uint *)pdVar21;
        }
        pdVar27 = pdVar26;
        if ((uVar28 >> 0x10 & 1) != 0) {
          if (iVar35 < 0) {
            iVar7 = iVar35 + 8;
            if (0 < iVar7) goto LAB_001e5954;
            pdVar26 = (double *)(lVar37 + iVar35);
            iVar35 = iVar7;
          }
          else {
            iVar7 = iVar35;
LAB_001e5954:
            pdVar27 = pdVar26 + 1;
            iVar35 = iVar7;
          }
          adStack_1060[(long)pdVar23[-1] * 4] = (double)(long)(int)*(uint *)pdVar26;
        }
        pdVar21 = pdVar27;
        switch(*(undefined4 *)(pdVar23 + -3)) {
        case 0:
        case 1:
        case 2:
        case 4:
switchD_001e5988_caseD_0:
          if (iVar35 < 0) {
            iVar7 = iVar35 + 8;
            if (0 < iVar7) goto LAB_001e59a4;
            pdVar27 = (double *)(lVar37 + iVar35);
          }
          else {
            iVar7 = iVar35;
LAB_001e59a4:
            pdVar21 = pdVar27 + 1;
          }
          dVar33 = *pdVar27;
          iVar35 = iVar7;
          goto LAB_001e59ac;
        case 3:
          if ((((((uVar28 ^ 0xffffffff) & 0x240) == 0) || ((uVar28 >> 6 & 1) != 0)) ||
              (((uVar28 ^ 0xffffffff) & 0x220) == 0)) || ((uVar28 >> 5 & 1) != 0))
          goto switchD_001e5988_caseD_0;
          if ((uVar28 >> 9 & 1) == 0) {
            if (iVar35 < 0) {
              iVar7 = iVar35 + 8;
              if (0 < iVar7) goto LAB_001e5a6c;
              pdVar27 = (double *)(lVar37 + iVar35);
              iVar35 = iVar7;
            }
            else {
              iVar7 = iVar35;
LAB_001e5a6c:
              pdVar21 = pdVar27 + 1;
              iVar35 = iVar7;
            }
            dVar33 = (double)(long)(int)*(uint *)pdVar27;
          }
          else {
            if (iVar35 < 0) {
              iVar7 = iVar35 + 8;
              if (0 < iVar7) goto LAB_001e5a84;
              pdVar27 = (double *)(lVar37 + iVar35);
              iVar35 = iVar7;
            }
            else {
              iVar7 = iVar35;
LAB_001e5a84:
              pdVar21 = pdVar27 + 1;
              iVar35 = iVar7;
            }
            dVar33 = (double)(ulong)*(uint *)pdVar27;
          }
LAB_001e59ac:
          *pdVar23 = dVar33;
          break;
        case 7:
          if (iVar6 < 0) {
            iVar7 = iVar6 + 0x10;
            if (0 < iVar7) goto LAB_001e5a34;
            pdVar27 = (double *)(lVar11 + iVar6);
            iVar6 = iVar7;
          }
          else {
            iVar7 = iVar6;
LAB_001e5a34:
            pdVar21 = pdVar27 + 1;
            iVar6 = iVar7;
          }
          *pdVar23 = *pdVar27;
          break;
        case 9:
          *(undefined4 *)(pdVar23 + -3) = 3;
        }
        pdVar23 = pdVar23 + 4;
        lVar38 = lVar38 + -1;
      } while (lVar38 != 0);
    }
  }
  lVar37 = 0;
  iVar35 = 0;
  pcVar1 = local_147d + 1;
  pcVar39 = "0123456789abcdefghijklmnopqrstuvwxyz";
  plVar19 = alStack_1478;
  local_68 = param_3;
  do {
    pbVar29 = local_68;
    iVar6 = iVar35;
    while( true ) {
      while( true ) {
        iVar35 = iVar6;
        if (*pbVar29 == 0x25) break;
        if (*pbVar29 == 0) {
          return iVar35;
        }
        bVar12 = *pbVar29;
        do {
          iVar6 = (*param_2)(bVar12,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          pbVar29 = pbVar29 + 1;
          bVar12 = *pbVar29;
          iVar35 = iVar35 + 1;
        } while ((bVar12 != 0) && (bVar12 != 0x25));
        local_68 = pbVar29;
        iVar6 = iVar35;
      }
      local_68 = pbVar29 + 1;
      if (pbVar29[1] != 0x25) break;
      pbVar29 = pbVar29 + 2;
      local_68 = pbVar29;
      iVar7 = (*param_2)(0x25,param_1);
      iVar6 = iVar35 + 1;
      if (iVar7 == -1) {
        return iVar35;
      }
    }
    lVar38 = FUN_001e67b4(local_68,&local_68);
    lVar11 = lVar37;
    if (lVar38 != 0) {
      lVar11 = lVar38 + -1;
    }
    lVar38 = lVar11 * 0x20;
    uVar28 = *(uint *)(local_1074 + lVar38);
    dVar33 = *(double *)(local_1074 + lVar38 + 4);
    puVar24 = (uint *)((ulong)(alStack_1478 + lVar11 * 4 + 0x80) | 4);
    if ((uVar28 >> 0xe & 1) == 0) {
      lVar37 = lVar37 + 1;
      dVar25 = dVar33;
      if ((uVar28 >> 0x10 & 1) == 0) goto LAB_001e5bf8;
LAB_001e5bb4:
      dVar20 = adStack_1060[*(long *)(auStack_106c + lVar38 + 4) * 4];
      lVar37 = lVar37 + 1;
      if ((long)dVar20 < 0) {
        dVar20 = -NAN;
      }
    }
    else {
      dVar25 = adStack_1060[(long)dVar33 * 4];
      lVar37 = lVar37 + 2;
      if ((long)dVar25 < 0) {
        uVar28 = uVar28 & 0xfffffeff | 4;
        dVar25 = (double)-(long)dVar25;
        *puVar24 = uVar28;
      }
      if ((uVar28 >> 0x10 & 1) != 0) goto LAB_001e5bb4;
LAB_001e5bf8:
      if ((uVar28 >> 0xf & 1) == 0) {
        dVar20 = -NAN;
      }
      else {
        dVar20 = *(double *)(auStack_106c + lVar38 + 4);
      }
    }
    switch((int)alStack_1478[lVar11 * 4 + 0x80]) {
    case 1:
      pcVar36 = (char *)adStack_1060[lVar11 * 4];
      if (pcVar36 == (char *)0x0) {
        if ((dVar20 == -NAN) || (4 < (long)dVar20)) {
          uVar28 = uVar28 & 0xfffffff7;
          dVar33 = 2.47032822920623e-323;
          *puVar24 = uVar28;
          pcVar36 = "(nil)";
          dVar20 = dVar33;
        }
        else {
          dVar33 = 0.0;
          pcVar36 = "";
          dVar20 = dVar33;
        }
      }
      else {
        if (dVar20 == -NAN) {
          dVar20 = (double)strlen(pcVar36);
        }
        dVar33 = dVar20;
        if (0x7ffffffffffffffe < (ulong)dVar20) {
          dVar33 = NAN;
        }
      }
      if ((uVar28 >> 3 & 1) != 0) {
        iVar6 = (*param_2)(0x22,param_1);
        if (iVar6 == -1) {
          return iVar35;
        }
        iVar35 = iVar35 + 1;
        uVar28 = *puVar24;
      }
      lVar38 = (long)dVar25 - (long)dVar33;
      lVar11 = lVar38;
      if ((uVar28 >> 2 & 1) == 0) {
        lVar11 = lVar38 + -1;
        if (0 < lVar38) {
          do {
            lVar11 = lVar38;
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) {
              return iVar35;
            }
            lVar38 = lVar11 + -1;
            iVar35 = iVar35 + 1;
          } while (0 < lVar38);
          lVar11 = lVar11 + -2;
        }
      }
      for (; (dVar20 != 0.0 && (*pcVar36 != '\0')); pcVar36 = pcVar36 + 1) {
        iVar6 = (*param_2)(*pcVar36,param_1);
        if (iVar6 == -1) {
          return iVar35;
        }
        iVar35 = iVar35 + 1;
        dVar20 = (double)((long)dVar20 + -1);
      }
      uVar28 = *puVar24;
      if (((uVar28 >> 2 & 1) != 0) && (0 < lVar11)) {
        do {
          iVar6 = (*param_2)(0x20,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          lVar11 = lVar11 + -1;
          iVar35 = iVar35 + 1;
        } while (0 < lVar11);
        uVar28 = *puVar24;
      }
      if ((uVar28 >> 3 & 1) != 0) {
        iVar6 = (*param_2)(0x22,param_1);
        if (iVar6 == -1) {
          return iVar35;
        }
        iVar35 = iVar35 + 1;
      }
      break;
    case 2:
      dVar33 = adStack_1060[lVar11 * 4];
      if (dVar33 == 0.0) {
        if ((uVar28 >> 2 & 1) == 0) {
          lVar11 = (long)dVar25 + -5;
        }
        else {
          lVar11 = (long)dVar25 + -6;
          lVar38 = lVar11;
          if (0 < (long)dVar25 + -5) {
            do {
              iVar6 = (*param_2)(0x20,param_1);
              if (iVar6 == -1) {
                return iVar35;
              }
              lVar11 = lVar38 + -1;
              iVar35 = iVar35 + 1;
              bVar5 = 0 < lVar38;
              lVar38 = lVar11;
            } while (bVar5);
          }
        }
        uVar17 = 0x28;
        lVar38 = 0;
        do {
          iVar6 = (*param_2)(uVar17,param_1);
          if (iVar6 == -1) {
            return iVar35 + (int)lVar38;
          }
          lVar16 = lVar38 + 1;
          uVar17 = (&DAT_03936963)[lVar38];
          lVar38 = lVar16;
        } while (lVar16 != 5);
        iVar35 = iVar35 + 5;
        if (((byte)*puVar24 >> 2 & 1) == 0) {
          for (; 0 < lVar11; lVar11 = lVar11 + -1) {
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) {
              return iVar35;
            }
            iVar35 = iVar35 + 1;
          }
        }
      }
      else {
        uVar14 = 0;
        pcVar39 = "0123456789abcdefghijklmnopqrstuvwxyz";
        if ((uVar28 & 0x1000) != 0) {
          pcVar39 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        }
        uVar18 = 1;
        dVar34 = 7.90505033345994e-323;
LAB_001e5fd8:
        if (dVar20 == -NAN) {
          dVar20 = 4.94065645841247e-324;
        }
        lVar11 = 0;
        if (dVar33 == 0.0) {
          pcVar36 = pcVar1;
        }
        else {
          do {
            dVar3 = 0.0;
            if (dVar34 != 0.0) {
              dVar3 = (double)((ulong)dVar33 / (ulong)dVar34);
            }
            pcVar1[lVar11] = pcVar39[(long)dVar33 - (long)dVar3 * (long)dVar34];
            lVar11 = lVar11 + -1;
            bVar5 = (ulong)dVar34 <= (ulong)dVar33;
            dVar33 = dVar3;
          } while (bVar5);
          pcVar36 = pcVar1 + lVar11;
        }
        lVar38 = lVar11 + (long)dVar25;
        sVar9 = lVar11 + (long)dVar20;
        if (((uVar18 == 0) || (dVar34 != 3.95252516672997e-323)) || (0 < (long)sVar9)) {
          if (0 < (long)sVar9) {
            memset(local_147d + (2 - (long)dVar20),0x30,sVar9);
            do {
              lVar11 = lVar11 + -1;
            } while (0 < (long)dVar20 + lVar11);
            lVar38 = lVar38 - sVar9;
          }
        }
        else {
          lVar11 = lVar11 + -1;
          *pcVar36 = '0';
          lVar38 = lVar38 + -1;
        }
        lVar16 = lVar38 + -2;
        if (uVar18 == 0 || dVar34 != 7.90505033345994e-323) {
          lVar16 = lVar38;
        }
        lVar16 = lVar16 - (ulong)(uVar14 != 0 || (uVar28 & 3) != 0);
        lVar38 = lVar16;
        if (((uVar28 & 0x104) == 0) && (lVar38 = lVar16 + -1, 0 < lVar16)) {
          do {
            lVar38 = lVar16;
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) {
              return iVar35;
            }
            lVar16 = lVar38 + -1;
            iVar35 = iVar35 + 1;
          } while (0 < lVar16);
          lVar38 = lVar38 + -2;
          if (uVar14 != 0) goto LAB_001e60d4;
LAB_001e6284:
          if ((*puVar24 >> 1 & 1) != 0) {
            uVar10 = 0x2b;
            goto LAB_001e629c;
          }
          if ((*puVar24 & 1) != 0) {
            uVar10 = 0x20;
            goto LAB_001e629c;
          }
        }
        else {
          if (uVar14 == 0) goto LAB_001e6284;
LAB_001e60d4:
          uVar10 = 0x2d;
LAB_001e629c:
          iVar6 = (*param_2)(uVar10,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          iVar35 = iVar35 + 1;
        }
        if (!(uVar18 == 0 || dVar34 != 7.90505033345994e-323)) {
          iVar6 = (*param_2)(0x30,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          if ((*(byte *)((long)puVar24 + 1) >> 4 & 1) == 0) {
            uVar10 = 0x78;
          }
          else {
            uVar10 = 0x58;
          }
          iVar6 = (*param_2)(uVar10,param_1);
          if (iVar6 == -1) {
            return iVar35 + 1;
          }
          iVar35 = iVar35 + 2;
        }
        lVar16 = lVar38;
        if ((*puVar24 & 0x104) == 0x100) {
          lVar16 = lVar38 + -1;
          if (0 < lVar38) {
            do {
              lVar16 = lVar38;
              iVar6 = (*param_2)(0x30,param_1);
              if (iVar6 == -1) {
                return iVar35;
              }
              lVar38 = lVar16 + -1;
              iVar35 = iVar35 + 1;
            } while (0 < lVar38);
            lVar16 = lVar16 + -2;
          }
        }
        if (lVar11 < 0) {
          do {
            iVar6 = (*param_2)(local_147d[lVar11 + 2],param_1);
            if (iVar6 == -1) {
              return iVar35;
            }
            lVar11 = lVar11 + 1;
            iVar35 = iVar35 + 1;
          } while (lVar11 != 0);
        }
        if (((byte)*puVar24 >> 2 & 1) != 0) {
          for (; 0 < lVar16; lVar16 = lVar16 + -1) {
            iVar6 = (*param_2)(0x20,param_1);
            if (iVar6 == -1) {
              return iVar35;
            }
            iVar35 = iVar35 + 1;
          }
        }
      }
      break;
    case 3:
      dVar33 = adStack_1060[lVar11 * 4];
      if ((uVar28 >> 0x11 & 1) == 0) {
        uVar18 = uVar28 >> 3 & 1;
        if ((uVar28 >> 10 & 1) == 0) {
          dVar34 = (double)-(long)dVar33;
          if (-1 < (long)dVar33) {
            dVar34 = dVar33;
          }
          uVar14 = 0;
          dVar3 = dVar33;
          if ((uVar28 & 0x200) == 0) {
            uVar14 = (uint)((ulong)dVar33 >> 0x3f);
            dVar3 = dVar34;
          }
          pcVar36 = "0123456789abcdefghijklmnopqrstuvwxyz";
          if ((uVar28 & 0x1000) != 0) {
            pcVar36 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          }
          bVar5 = (uVar28 & 0x800) != 0;
          if (bVar5) {
            uVar14 = 0;
          }
          dVar34 = 4.94065645841247e-323;
          if (bVar5) {
            dVar34 = 7.90505033345994e-323;
            pcVar39 = pcVar36;
            dVar3 = dVar33;
          }
          dVar33 = dVar3;
        }
        else {
          uVar14 = 0;
          dVar34 = 3.95252516672997e-323;
        }
        goto LAB_001e5fd8;
      }
      if (((uVar28 >> 2 & 1) == 0) && (dVar25 = (double)((long)dVar25 + -1), 0 < (long)dVar25)) {
        do {
          iVar6 = (*param_2)(0x20,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          dVar25 = (double)((long)dVar25 + -1);
          iVar35 = iVar35 + 1;
        } while (0 < (long)dVar25);
      }
      iVar6 = (*param_2)(SUB84(dVar33,0) & 0xff,param_1);
      if (iVar6 == -1) {
        return iVar35;
      }
      iVar35 = iVar35 + 1;
      if (((byte)*puVar24 >> 2 & 1) != 0) {
        while (dVar25 = (double)((long)dVar25 + -1), 0 < (long)dVar25) {
          iVar6 = (*param_2)(0x20,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          iVar35 = iVar35 + 1;
        }
      }
      break;
    case 4:
      if (((uVar28 >> 6 & 1) == 0) && ((uVar28 >> 5 & 1) == 0)) {
        if ((uVar28 >> 4 & 1) == 0) {
          *(int *)adStack_1060[lVar11 * 4] = iVar35;
        }
        else {
          *(short *)adStack_1060[lVar11 * 4] = (short)iVar35;
        }
      }
      else {
        *(long *)adStack_1060[lVar11 * 4] = (long)iVar35;
      }
      break;
    case 7:
      local_15d0 = 0;
      uStack_15c8 = 0;
      local_15e0 = (byte *)0x25;
      uStack_15d8 = 0;
      sVar9 = strlen((char *)&local_15e0);
      dVar25 = dVar33;
      if (((uVar28 >> 0xd & 1) == 0) && (dVar25 = -NAN, (uVar28 >> 0xe & 1) != 0)) {
        dVar25 = adStack_1060[(long)dVar33 * 4];
      }
      if ((uVar28 >> 0xf & 1) == 0) {
        dVar33 = -NAN;
        if ((uVar28 >> 0x10 & 1) != 0) {
          pdVar21 = adStack_1060 + *(long *)(auStack_106c + lVar38 + 4) * 4;
          goto LAB_001e5de0;
        }
      }
      else {
        pdVar21 = (double *)(auStack_106c + lVar38 + 4);
LAB_001e5de0:
        dVar33 = *pdVar21;
      }
      puVar31 = (undefined1 *)((ulong)&local_15e0 | 1);
      if ((uVar28 >> 2 & 1) != 0) {
        local_15e0._0_2_ = CONCAT11(0x2d,(char)local_15e0);
        puVar31 = (undefined1 *)((ulong)&local_15e0 | 2);
      }
      if ((uVar28 >> 1 & 1) != 0) {
        *puVar31 = 0x2b;
        puVar31 = puVar31 + 1;
      }
      puVar30 = puVar31;
      if ((uVar28 & 1) != 0) {
        puVar30 = puVar31 + 1;
        *puVar31 = 0x20;
      }
      lVar38 = 0x20 - sVar9;
      puVar31 = puVar30;
      if ((uVar28 >> 3 & 1) != 0) {
        puVar31 = puVar30 + 1;
        *puVar30 = 0x23;
      }
      *puVar31 = 0;
      if (-1 < (long)dVar25) {
        if (0x144 < (long)dVar25) {
          dVar25 = 1.60571334898405e-321;
        }
        iVar6 = FUN_001e64cc(puVar31,lVar38,&DAT_038aa48e,dVar25);
        puVar31 = puVar31 + iVar6;
        lVar38 = lVar38 - iVar6;
      }
      if (-1 < (long)dVar33) {
        lVar16 = 0x144;
        for (dVar25 = adStack_1060[lVar11 * 4]; 10.0 <= dVar25; dVar25 = dVar25 / 10.0) {
          lVar16 = lVar16 + -1;
        }
        dVar25 = (double)(lVar16 + -1);
        if ((long)dVar33 <= lVar16) {
          dVar25 = dVar33;
        }
        iVar6 = FUN_001e64cc(puVar31,lVar38,&DAT_03952ef6,dVar25);
        puVar31 = puVar31 + iVar6;
      }
      uVar28 = *puVar24;
      puVar30 = puVar31;
      if ((uVar28 >> 5 & 1) != 0) {
        puVar30 = puVar31 + 1;
        *puVar31 = 0x6c;
        uVar28 = *puVar24;
      }
      if ((uVar28 >> 0x12 & 1) == 0) {
        uVar17 = 0x66;
        if ((uVar28 >> 0x13 & 1) != 0) {
          uVar13 = 0x47;
          uVar17 = 0x67;
          goto LAB_001e5eec;
        }
      }
      else {
        uVar13 = 0x45;
        uVar17 = 0x65;
LAB_001e5eec:
        if ((uVar28 & 0x1000) != 0) {
          uVar17 = uVar13;
        }
      }
      dVar33 = adStack_1060[lVar11 * 4];
      *puVar30 = uVar17;
      puVar30[1] = 0;
      sprintf(local_15c0,(char *)&local_15e0,dVar33);
      if (local_15c0[0] != '\0') {
        pcVar36 = (char *)((ulong)local_15c0 | 1);
        cVar2 = local_15c0[0];
        do {
          iVar6 = (*param_2)(cVar2,param_1);
          if (iVar6 == -1) {
            return iVar35;
          }
          cVar2 = *pcVar36;
          iVar35 = iVar35 + 1;
          pcVar36 = pcVar36 + 1;
        } while (cVar2 != '\0');
      }
    }
    local_68 = (byte *)*plVar19;
    plVar19 = plVar19 + 1;
  } while( true );
switchD_001e5730_caseD_68:
  *(undefined4 *)(alStack_1478 + lVar8 * 4 + 0x80) = 0;
  goto LAB_001e5850;
}


