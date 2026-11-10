/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00206fe4; name: FUN_00206fe4
 */


long FUN_00206fe4(long param_1,long *param_2,int param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulong *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  char cVar15;
  undefined4 uVar16;
  long lVar17;
  ulong uVar18;
  
  iVar6 = FUN_00206e78();
  if (iVar6 < -900) {
LAB_002079ac:
    return (long)iVar6;
  }
  lVar1 = param_1 + 0x158;
  lVar2 = param_1 + 0x890;
  puVar3 = (undefined8 *)(param_1 + 0x150);
  lVar4 = param_1 + 0x290;
switchD_00207058_default:
  do {
    switch(*(undefined4 *)(param_1 + 0x198)) {
    case 0:
      puVar10 = (ulong *)FUN_00206f60(param_1);
      if (puVar10 == (ulong *)0x0) {
        return 0;
      }
      cVar15 = *(char *)((long)puVar10 + 0xc);
      switch(cVar15) {
      case '\0':
        lVar11 = FUN_00205cf4(param_1,(int)puVar10[1]);
        uVar8 = FUN_0020bd28(param_1,lVar11);
        if (uVar8 == 0) {
          lVar17 = (long)*(int *)(lVar11 + 0xbc);
          if (0x3fff < lVar17) {
            lVar17 = 0x4000;
          }
          if (*(int *)(param_1 + 0x94c) <= lVar17) {
            lVar17 = (long)*(int *)(param_1 + 0x94c);
          }
          if (*(int *)(param_1 + 0x974) <= lVar17) {
            lVar17 = (long)*(int *)(param_1 + 0x974);
          }
          if (lVar17 < 1) {
            uVar14 = 4;
LAB_00207888:
            uVar9 = FUN_00211a2c(lVar11,uVar14);
            if (-0x385 < (int)uVar9) {
              *puVar3 = 0;
              goto LAB_002071a4;
            }
          }
          else {
            uVar9 = FUN_0020b684(param_1,lVar1,lVar17,puVar10,puVar10 + 0xc,lVar11);
            if ((int)uVar9 < -0x1fc) {
              if (uVar9 == 0xfffffdf7) {
                uVar9 = FUN_002119e8(lVar11);
                if (-0x385 < (int)uVar9) {
                  uVar9 = FUN_00206aec(param_1,(int)puVar10[1],2);
                  uVar8 = 0xfffffdf7;
                  if (-0x385 < (int)uVar9) break;
                }
                goto LAB_00207428;
              }
              if (uVar9 == 0xfffffdf2) {
                return 0;
              }
            }
            else {
              if (uVar9 == 0) goto switchD_0020708c_caseD_9;
              if (uVar9 == 0xfffffe04) {
                uVar14 = 8;
                goto LAB_00207888;
              }
            }
            uVar8 = FUN_002119e8(lVar11);
            if ((int)uVar8 < -900) {
              uVar9 = uVar8;
            }
          }
        }
        else {
          lVar11 = FUN_00211270(param_1,(int)puVar10[1]);
          if (lVar11 != 0) {
            uVar9 = FUN_002119e8();
            if ((int)uVar9 < -900) goto LAB_00207428;
          }
          uVar9 = uVar8;
        }
        goto LAB_00207428;
      case '\x01':
        if ((int)puVar10[7] == 0) {
          lVar11 = FUN_002066d8(param_1,(int)puVar10[1],0,puVar10 + 3,0,puVar10[0xe]);
          if (lVar11 == 0) {
            uVar8 = 0xfffffc7b;
          }
          else if (*(char *)((long)puVar10 + 0x7c) == '\0') {
            uVar8 = 0xfffffdfc;
            if ((*(byte *)(param_1 + 0x9ab) >> 3 & 1) == 0) {
              iVar6 = FUN_00206f14(param_1);
              uVar8 = 0xfffffdfc;
              if (iVar6 == 0) {
                if ((*(byte *)(param_1 + 0x99c) >> 2 & 1) == 0) {
                  FUN_00210e8c(lVar11,puVar10);
                }
                goto LAB_0020791c;
              }
            }
          }
          else {
LAB_002075e4:
            uVar8 = 0xfffffe01;
          }
        }
        else {
          lVar11 = FUN_00205cf4(param_1);
          if (lVar11 == 0) {
            *(undefined4 *)(puVar10 + 7) = 3;
LAB_002076d0:
            uVar8 = 0xfffffe02;
          }
          else {
            iVar6 = *(int *)(lVar11 + 0xdc);
            iVar7 = FUN_00206f14(param_1);
            if (iVar6 == 4) {
              uVar8 = 0xfffffdee;
              if (iVar7 == 0) {
                if ((*(byte *)(lVar11 + 0xe5) >> 1 & 1) == 0) {
                  if ((*(char *)(param_1 + 0x9aa) == '\0') || (*(int *)(lVar11 + 0xdc) != 4))
                  goto LAB_002074c0;
                  uVar8 = 0xfffffdfc;
                  if ((*(byte *)(param_1 + 0x9ab) >> 3 & 1) == 0) {
                    *(undefined4 *)(puVar10 + 7) = 2;
                    if (puVar10[0xe] != 0) {
                      *(ulong *)(lVar11 + 0xa0) = puVar10[0xe];
                    }
                    goto LAB_0020791c;
                  }
                }
                else {
LAB_00207878:
                  uVar8 = 0xfffffe00;
                }
              }
            }
            else if (((((iVar7 == 0) && ((*(byte *)(lVar11 + 0xe5) >> 1 & 1) == 0)) &&
                      (*(char *)(param_1 + 0x9aa) != '\0')) &&
                     ((*(uint *)(lVar11 + 0xb8) == 0 || ((*(uint *)(lVar11 + 0xb8) & 1) != 0)))) &&
                    (*(int *)(lVar11 + 0xdc) == 1)) {
              *(undefined4 *)(puVar10 + 7) = 1;
LAB_0020791c:
              lVar11 = FUN_0020e1f0(lVar4,puVar10[5],puVar10[6]);
              uVar8 = 0xfffffdf6;
              if (lVar11 + 5U <= *(ulong *)(param_1 + 0x928)) {
                uVar9 = FUN_0020ca84(lVar1,puVar10,lVar4);
                if (uVar9 == 0) {
                  uVar9 = FUN_0020bdd0(param_1,puVar10);
                  if (uVar9 == 0) {
                    if ((int)puVar10[7] == 0) {
                      uVar16 = (undefined4)puVar10[1];
LAB_00207970:
                      *(undefined4 *)(param_1 + 0x934) = uVar16;
                    }
                    goto switchD_0020708c_caseD_9;
                  }
                }
                goto LAB_00207428;
              }
            }
            else {
              *(undefined4 *)(puVar10 + 7) = 3;
              iVar6 = FUN_00206f14(param_1);
              uVar8 = 0xfffffdee;
              if (iVar6 == 0) {
                if ((*(byte *)(lVar11 + 0xe5) >> 1 & 1) != 0) goto LAB_00207878;
                if (*(int *)(lVar11 + 0xdc) == 2) goto LAB_0020791c;
                if (*(int *)(lVar11 + 0xdc) == 3) goto LAB_002075e4;
                if (*(uint *)(lVar11 + 0xb8) == 0) {
                  uVar8 = 0xfffffdfe;
                }
                else {
                  uVar8 = 0xfffffdfe;
                  if ((*(uint *)(lVar11 + 0xb8) & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0'))
                  goto LAB_0020791c;
                }
              }
            }
          }
        }
        break;
      case '\x02':
        iVar6 = FUN_00206f14(param_1);
        uVar8 = 0xfffffdee;
        if (iVar6 == 0) {
          FUN_0020cd08(lVar1,puVar10);
          goto switchD_0020708c_caseD_9;
        }
        break;
      case '\x03':
        iVar6 = FUN_00206f14(param_1);
        uVar8 = 0xfffffdee;
        if (iVar6 == 0) {
          FUN_0020cd5c(lVar1,puVar10);
          goto switchD_0020708c_caseD_9;
        }
        break;
      case '\x04':
        if ((*(byte *)((long)puVar10 + 0xd) & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + -1;
          iVar6 = FUN_00206f14(param_1);
          uVar8 = 0xfffffdee;
          if (iVar6 != 0) break;
        }
        uVar9 = FUN_0020cdd0(lVar1,puVar10);
LAB_00207428:
        uVar8 = uVar9;
        if (uVar8 == 0xfffffe04) goto switchD_00207058_default;
        if (uVar8 == 0xfffffdf2) {
          return 0;
        }
        if (-1 < (int)uVar8) goto switchD_0020708c_caseD_9;
        break;
      case '\x05':
        lVar11 = FUN_00205cf4(param_1,(int)puVar10[1]);
        if (*(char *)(param_1 + 0x9aa) == '\0') {
LAB_002074c0:
          uVar8 = 0xfffffe07;
        }
        else {
          if (lVar11 == 0) goto LAB_002076d0;
          iVar6 = FUN_00206f14(param_1);
          uVar8 = 0xfffffdee;
          if (iVar6 == 0) {
            if ((*(byte *)(lVar11 + 0xe5) >> 1 & 1) != 0) goto LAB_00207878;
            if (*(int *)(param_1 + 0x968) == 0) {
              uVar8 = 0xfffffdf0;
            }
            else {
              if (*(int *)(lVar11 + 0xdc) == 3) goto LAB_002075e4;
              uVar8 = 0xfffffdfc;
              if ((*(byte *)(param_1 + 0x9ab) >> 3 & 1) == 0) {
                uVar18 = FUN_0020e1f0(lVar4,puVar10[3],puVar10[4]);
                uVar8 = 0xfffffdf6;
                if (uVar18 <= *(ulong *)(param_1 + 0x928)) {
                  uVar9 = FUN_0020cfdc(lVar1,puVar10,lVar4);
                  if (uVar9 == 0) {
                    uVar9 = FUN_0020bdd0(param_1,puVar10);
                    if (uVar9 == 0) {
                      uVar16 = (undefined4)puVar10[5];
                      goto LAB_00207970;
                    }
                  }
                  goto LAB_00207428;
                }
              }
            }
          }
        }
        break;
      case '\x06':
        if ((*(byte *)((long)puVar10 + 0xd) & 1) != 0) {
          *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + -1;
        }
        uVar8 = 0xfffffdee;
        if ((*(byte *)(param_1 + 0x9ab) & 1) == 0) {
          FUN_0020d0a0(lVar1,puVar10);
          goto switchD_0020708c_caseD_9;
        }
        break;
      case '\a':
        uVar9 = FUN_0020d0f4(lVar1,puVar10);
        if (uVar9 != 0) goto LAB_00207428;
        *(int *)(param_1 + 0x944) = (int)puVar10[2];
      case '\t':
switchD_0020708c_caseD_9:
        *(ulong **)(param_1 + 0x150) = puVar10;
        *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x158);
        if (*(char *)((long)puVar10 + 0xc) == '\0') {
          if (*(char *)((long)puVar10 + 0x72) != '\0') {
            *(undefined4 *)(param_1 + 0x198) = 2;
            goto switchD_00207058_default;
          }
        }
        else if (*(code **)(param_1 + 0x800) != (code *)0x0) {
          iVar7 = (**(code **)(param_1 + 0x800))(param_1,puVar10,*(undefined8 *)(param_1 + 0x8b8));
          iVar6 = 0;
          if (iVar7 != 0) {
            iVar6 = -0x386;
          }
          iVar5 = iVar7;
          if (iVar7 != -0x217) {
            iVar5 = iVar6;
          }
          if (iVar5 < -900) {
            return (long)iVar5;
          }
          if (iVar7 == -0x217) {
            if ((*(code **)(param_1 + 0x810) != (code *)0x0) &&
               (iVar6 = (**(code **)(param_1 + 0x810))
                                  (param_1,puVar10,0xfffffde9,*(undefined8 *)(param_1 + 0x8b8)),
               iVar6 != 0)) {
              return -0x386;
            }
            if (*(char *)((long)puVar10 + 0xc) == '\x05') {
              puVar10 = puVar10 + 5;
              uVar14 = 2;
LAB_002076b4:
              if ((int)*puVar10 != 0) {
                iVar6 = FUN_00206c04(param_1,(int)*puVar10,uVar14);
LAB_00207188:
                if (iVar6 < -900) goto LAB_002079ac;
              }
            }
            else if ((*(char *)((long)puVar10 + 0xc) == '\x01') && ((int)puVar10[7] == 0)) {
              puVar10 = puVar10 + 1;
              uVar14 = 7;
              goto LAB_002076b4;
            }
LAB_002071a4:
            FUN_00206380(puVar3,lVar2);
            goto switchD_00207058_default;
          }
        }
        *(undefined4 *)(param_1 + 0x198) = 1;
        goto switchD_00207058_default;
      case '\b':
        uVar18 = puVar10[1];
        iVar6 = FUN_00206f14(param_1);
        uVar8 = 0xfffffdee;
        if (iVar6 == 0) {
          if ((int)uVar18 != 0) {
            lVar11 = FUN_00205cf4(param_1,(int)uVar18);
            if (lVar11 == 0) goto LAB_002076d0;
            if (*(int *)(lVar11 + 0xdc) == 3) goto LAB_002075e4;
            if (((*(int *)(lVar11 + 0xdc) == 4) && (*(uint *)(lVar11 + 0xb8) != 0)) &&
               (uVar8 = 0xfffffdfe,
               ((*(uint *)(lVar11 + 0xb8) & 1) == 0) == (*(char *)(param_1 + 0x9aa) != '\0')))
            break;
          }
          FUN_0020d1c4(lVar1,puVar10);
          goto switchD_0020708c_caseD_9;
        }
        break;
      default:
        if ((char)puVar10[0xc] == '\0') {
          iVar6 = FUN_00206f14(param_1);
          uVar8 = 0xfffffdee;
          if (iVar6 == 0) {
            lVar11 = *(long *)(param_1 + 0x158);
            uVar18 = *(long *)(lVar11 + 0x10) - *(long *)(lVar11 + 0x20);
            if (0x3fff < uVar18) {
              uVar18 = 0x4000;
            }
            uVar12 = (**(code **)(param_1 + 0x868))
                               (param_1,*(long *)(lVar11 + 0x20),uVar18,puVar10,
                                *(undefined8 *)(param_1 + 0x8b8));
            uVar8 = 0xfffffde9;
            if (uVar12 != 0xfffffffffffffde9) {
              if ((long)uVar12 < 0) {
                uVar8 = 0xfffffc7a;
              }
              else {
                uVar8 = 0xfffffc7a;
                if (uVar12 <= uVar18) {
                  *puVar10 = uVar12;
                  lVar17 = *(long *)(lVar11 + 0x18) + -9;
                  *(long *)(lVar11 + 0x18) = lVar17;
                  *(ulong *)(lVar11 + 0x20) = *(long *)(lVar11 + 0x20) + uVar12;
                  FUN_0020c7ac(lVar17,puVar10);
                  goto switchD_0020708c_caseD_9;
                }
              }
            }
          }
        }
        else {
          if (cVar15 != '\f') {
            if (cVar15 == '\n') {
              uVar18 = puVar10[1];
              iVar6 = FUN_00206f14(param_1);
              uVar8 = 0xfffffdee;
              if (iVar6 != 0) break;
              if ((int)uVar18 != 0) {
                lVar11 = FUN_00205cf4(param_1,(int)uVar18);
                if (lVar11 == 0) goto LAB_002076d0;
                if (*(int *)(lVar11 + 0xdc) == 3) goto LAB_002075e4;
              }
              FUN_0020d23c(lVar1,puVar10);
            }
            goto switchD_0020708c_caseD_9;
          }
          iVar6 = FUN_00206f14(param_1);
          uVar8 = 0xfffffdee;
          if (iVar6 == 0) {
            uVar9 = FUN_0020d2c8(lVar1,puVar10);
            goto LAB_00207428;
          }
        }
      }
      cVar15 = *(char *)((long)puVar10 + 0xc);
      if (cVar15 != '\0') {
        if (((*(code **)(param_1 + 0x810) != (code *)0x0) && (0xfffffc7c < uVar8)) &&
           (cVar15 != '\b')) {
          iVar6 = (**(code **)(param_1 + 0x810))
                            (param_1,puVar10,uVar8,*(undefined8 *)(param_1 + 0x8b8));
          if (iVar6 != 0) {
            FUN_00211348(puVar10,lVar2);
            FUN_0020c748(lVar2,puVar10);
            return -0x386;
          }
          cVar15 = *(char *)((long)puVar10 + 0xc);
        }
        if (cVar15 == '\x05') {
          iVar6 = (int)puVar10[5];
          uVar16 = 2;
joined_r0x0020774c:
          if (iVar6 != 0) {
LAB_00207750:
            iVar6 = FUN_00206c04(param_1,iVar6,uVar16);
            if (iVar6 < -900) goto LAB_002079ac;
          }
        }
        else if ((cVar15 == '\x01') && ((int)puVar10[7] == 0)) {
          iVar6 = (int)puVar10[1];
          if (*(char *)((long)puVar10 + 0x7c) != '\0') {
            uVar16 = (undefined4)puVar10[0xf];
            goto joined_r0x0020774c;
          }
          uVar16 = 7;
          if (iVar6 == 0) goto LAB_00207760;
          goto LAB_00207750;
        }
      }
LAB_00207760:
      FUN_00211348(puVar10,lVar2);
      FUN_0020c748(lVar2,puVar10);
      FUN_00206380(puVar3,lVar2);
      if (uVar8 == 0xfffffdf5) {
        uVar8 = FUN_00205c6c(param_1,*(undefined4 *)(param_1 + 0x93c),2,0);
      }
      if ((int)uVar8 < -900) {
        return (long)(int)uVar8;
      }
      break;
    case 1:
      lVar17 = *(long *)(param_1 + 0x160);
      lVar11 = *(long *)(lVar17 + 0x18);
      if (lVar11 != *(long *)(lVar17 + 0x20)) {
LAB_002079d4:
        *param_2 = lVar11;
        lVar1 = *(long *)(lVar17 + 0x18);
        *(long *)(lVar17 + 0x18) = *(long *)(lVar17 + 0x20);
        return *(long *)(lVar17 + 0x20) - lVar1;
      }
      if (((param_3 == 0) && (iVar6 = FUN_00207a2c(param_1), iVar6 < 0)) ||
         (iVar6 = FUN_0020bc68(param_1), iVar6 < 0)) goto LAB_002079ac;
      break;
    case 2:
      lVar17 = *(long *)(param_1 + 0x150);
      lVar11 = FUN_00205cf4(param_1,*(undefined4 *)(lVar17 + 8));
      if (lVar11 == 0) goto LAB_002071a4;
      plVar13 = *(long **)(param_1 + 0x150);
      iVar7 = (**(code **)(param_1 + 0x860))
                        (param_1,plVar13,*(undefined8 *)(*(long *)(param_1 + 0x160) + 0x18),
                         *plVar13 - plVar13[2],plVar13 + 0xc,*(undefined8 *)(param_1 + 0x8b8));
      if (iVar7 < -0x1f8) {
        if (iVar7 == -0x20e) goto LAB_002071b8;
        if (iVar7 != -0x209) {
          return -0x386;
        }
        iVar6 = FUN_002119e8(lVar11);
        if (-0x385 < iVar6) {
          iVar6 = FUN_00206aec(param_1,*(undefined4 *)(lVar17 + 8),2);
          goto LAB_00207188;
        }
      }
      else {
        if (iVar7 != 0) {
          if (iVar7 == -0x1f8) {
            return 0;
          }
          return -0x386;
        }
LAB_002071b8:
        iVar6 = FUN_00207a2c(param_1);
        if ((-1 < iVar6) && (iVar6 = FUN_0020bc68(param_1), -1 < iVar6)) goto code_r0x002071d0;
      }
      goto LAB_002079ac;
    case 3:
      lVar17 = *(long *)(param_1 + 0x160);
      lVar11 = *(long *)(lVar17 + 0x18);
      if (lVar11 != *(long *)(lVar17 + 0x20)) goto LAB_002079d4;
      goto LAB_002071a4;
    }
  } while( true );
code_r0x002071d0:
  if (iVar7 == -0x20e) {
    return 0;
  }
  goto switchD_00207058_default;
}


