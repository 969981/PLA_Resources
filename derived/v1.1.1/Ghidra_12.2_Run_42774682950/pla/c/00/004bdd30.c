/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004bdd30; name: FUN_004bdd30
 */


/* WARNING: Type propagation algorithm not settling */

long FUN_004bdd30(long param_1,undefined8 param_2,long *param_3,long *param_4,char *param_5,
                 long param_6)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  undefined *puVar25;
  ulong uVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  char *pcVar31;
  long *local_70;
  long *local_68;
  
  local_70 = (long *)0x0;
  local_68 = (long *)0x0;
  if (param_4 == (long *)0x0) {
    return 0;
  }
  if (param_3 == (long *)0x0) {
    return 0;
  }
  if (param_5 == (char *)0x0) {
    return 0;
  }
  iVar7 = strncmp(param_5,"SUITEB128ONLY",0xd);
  if (iVar7 == 0) {
    bVar6 = false;
    uVar18 = 0x10000;
LAB_004be3d0:
    *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) & 0xfffcffff | uVar18;
    bVar2 = *(byte *)(*(long *)(param_1 + 0xc0) + 0x60);
joined_r0x004be3e8:
    if ((bVar2 >> 4 & 1) == 0) {
      uVar14 = 0x14b;
      uVar13 = 0x9e;
      uVar15 = 0x4e2;
      goto LAB_004be404;
    }
    if (uVar18 == 0x10000) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar18 == 0x20000) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else if ((uVar18 == 0x30000) &&
            (param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384", bVar6)) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
  }
  else {
    iVar7 = strncmp(param_5,"SUITEB128C2",0xb);
    if (iVar7 == 0) {
      bVar6 = true;
      uVar18 = 0x30000;
      goto LAB_004be3d0;
    }
    iVar7 = strncmp(param_5,"SUITEB128",9);
    if (iVar7 == 0) {
      bVar6 = false;
      uVar18 = 0x30000;
      goto LAB_004be3d0;
    }
    iVar7 = strncmp(param_5,"SUITEB192",9);
    if (iVar7 == 0) {
      bVar6 = false;
      uVar18 = 0x20000;
      goto LAB_004be3d0;
    }
    uVar18 = *(uint *)(param_6 + 0x1c) & 0x30000;
    if (uVar18 != 0) {
      bVar6 = false;
      bVar2 = *(byte *)(*(long *)(param_1 + 0xc0) + 0x60);
      goto joined_r0x004be3e8;
    }
  }
  uVar5 = DAT_0439ea18._4_4_;
  uVar4 = (uint)DAT_0439ea18;
  uVar3 = DAT_0439ea14;
  uVar18 = DAT_0439ea10;
  uVar8 = (**(code **)(param_1 + 0xa8))();
  plVar10 = (long *)FUN_00400260(-(ulong)(uVar8 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar8 << 5,
                                 "external/openssl/ssl/ssl_ciph.c",0x5a3);
  if (plVar10 == (long *)0x0) {
    uVar14 = 0xa6;
    uVar13 = 0x41;
    uVar15 = 0x5a5;
LAB_004be404:
    FUN_004014b0(0x14,uVar14,uVar13,"external/openssl/ssl/ssl_ciph.c",uVar15);
    return 0;
  }
  if ((int)uVar8 < 1) {
LAB_004bdfd4:
    local_68 = (long *)0x0;
    local_70 = (long *)0x0;
  }
  else {
    iVar9 = 0;
    iVar7 = 0;
    piVar11 = (int *)(**(code **)(param_1 + 0xb0))(0);
    while( true ) {
      if (((((piVar11 != (int *)0x0) && (*piVar11 != 0)) && ((piVar11[7] & uVar4) == 0)) &&
          (((piVar11[8] & uVar5) == 0 && ((piVar11[9] & uVar18) == 0)))) &&
         ((piVar11[10] & uVar3) == 0)) {
        if ((*(byte *)(*(long *)(param_1 + 0xc0) + 0x60) >> 3 & 1) == 0) {
          iVar1 = piVar11[0xb];
        }
        else {
          iVar1 = piVar11[0xd];
        }
        if (iVar1 != 0) {
          lVar16 = (long)iVar7;
          iVar7 = iVar7 + 1;
          plVar30 = plVar10 + lVar16 * 4;
          *plVar30 = (long)piVar11;
          *(undefined4 *)(plVar30 + 1) = 0;
          plVar30[2] = 0;
          plVar30[3] = 0;
        }
      }
      if (uVar8 == iVar9 + 1U) break;
      iVar9 = iVar9 + 1;
      piVar11 = (int *)(**(code **)(param_1 + 0xb0))(iVar9);
    }
    if (iVar7 < 1) goto LAB_004bdfd4;
    uVar17 = 0;
    plVar10[3] = 0;
    if (iVar7 != 1) {
      plVar10[2] = (long)(plVar10 + 4);
      uVar17 = (long)iVar7 - 1;
      if (1 < (int)uVar17) {
        uVar19 = uVar17 & 0xffffffff;
        uVar21 = uVar19 - 1;
        if (uVar21 < 4) {
          uVar20 = 1;
          uVar21 = 0xfffffffffffffffe;
        }
        else {
          uVar23 = uVar21 & 0xfffffffffffffffc;
          uVar20 = uVar23 | 1;
          uVar26 = uVar23;
          plVar30 = plVar10;
          do {
            plVar30[10] = (long)(plVar30 + 0xc);
            plVar30[0xb] = (long)(plVar30 + 4);
            plVar30[6] = (long)(plVar30 + 8);
            plVar30[7] = (long)plVar30;
            uVar26 = uVar26 - 4;
            plVar30[0xe] = (long)(plVar30 + 0x10);
            plVar30[0xf] = (long)(plVar30 + 8);
            plVar30[0x12] = (long)(plVar30 + 0x14);
            plVar30[0x13] = (long)(plVar30 + 0xc);
            plVar30 = plVar30 + 0x10;
          } while (uVar26 != 0);
          if (uVar21 == uVar23) goto LAB_004be64c;
          uVar21 = ~uVar20;
        }
        if ((uVar17 & 1) == 0) {
          plVar10[uVar20 * 4 + 2] = (long)(plVar10 + (uVar20 + 1) * 4);
          plVar10[uVar20 * 4 + 3] = (long)(plVar10 + uVar20 * 4 + -4);
          uVar20 = uVar20 + 1;
        }
        if (uVar21 + uVar19 != 0) {
          lVar16 = uVar19 - uVar20;
          plVar30 = plVar10 + uVar20 * 4;
          do {
            plVar30[2] = (long)(plVar30 + 4);
            plVar30[3] = (long)(plVar30 + -4);
            lVar16 = lVar16 + -2;
            plVar30[6] = (long)(plVar30 + 8);
            plVar30[7] = (long)plVar30;
            plVar30 = plVar30 + 8;
          } while (lVar16 != 0);
        }
      }
LAB_004be64c:
      plVar10[uVar17 * 4 + 3] = (long)(plVar10 + (long)iVar7 * 4 + -8);
    }
    plVar30 = plVar10 + uVar17 * 4;
    plVar30[2] = 0;
    plVar28 = plVar10;
    plVar27 = plVar30;
    plVar22 = plVar10;
    do {
      plVar24 = (long *)plVar22[2];
      plVar29 = plVar28;
      if ((((*(byte *)(*plVar22 + 0x1c) >> 2 & 1) != 0) &&
          ((*(byte *)(*plVar22 + 0x20) >> 3 & 1) != 0)) && ((int)plVar22[1] == 0)) {
        if (plVar22 != plVar27) {
          lVar16 = plVar22[3];
          plVar29 = plVar24;
          if (plVar22 != plVar28) {
            plVar29 = plVar28;
          }
          plVar28 = plVar24;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x10) = plVar24;
            plVar28 = (long *)plVar22[2];
          }
          if (plVar28 != (long *)0x0) {
            plVar28[3] = lVar16;
          }
          plVar27[2] = (long)plVar22;
          plVar22[2] = 0;
          plVar22[3] = (long)plVar27;
          plVar27 = plVar22;
        }
        *(undefined4 *)(plVar22 + 1) = 1;
      }
      if (plVar22 == plVar30) break;
      plVar28 = plVar29;
      plVar22 = plVar24;
    } while (plVar24 != (long *)0x0);
    plVar30 = plVar27;
    if ((plVar29 != (long *)0x0) && (plVar27 != (long *)0x0)) {
      plVar28 = plVar29;
      plVar22 = plVar29;
      do {
        plVar24 = (long *)plVar22[2];
        plVar29 = plVar28;
        if (((*(byte *)(*plVar22 + 0x1c) >> 2 & 1) != 0) && ((int)plVar22[1] == 0)) {
          if (plVar22 != plVar30) {
            lVar16 = plVar22[3];
            plVar29 = plVar24;
            if (plVar22 != plVar28) {
              plVar29 = plVar28;
            }
            plVar28 = plVar24;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar24;
              plVar28 = (long *)plVar22[2];
            }
            if (plVar28 != (long *)0x0) {
              plVar28[3] = lVar16;
            }
            plVar30[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar30;
            plVar30 = plVar22;
          }
          *(undefined4 *)(plVar22 + 1) = 1;
        }
        if (plVar22 == plVar27) break;
        plVar28 = plVar29;
        plVar22 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
    if (plVar29 != (long *)0x0) {
      plVar28 = plVar29;
      plVar27 = plVar30;
      plVar22 = plVar30;
      if (plVar30 != (long *)0x0) {
        do {
          plVar24 = (long *)plVar27[3];
          plVar30 = plVar22;
          if (((*(byte *)(*plVar27 + 0x1c) >> 2 & 1) != 0) && ((int)plVar27[1] != 0)) {
            if (plVar27 != plVar28) {
              lVar16 = plVar27[2];
              plVar30 = plVar24;
              if (plVar27 != plVar22) {
                plVar30 = plVar22;
              }
              plVar22 = plVar24;
              if (lVar16 != 0) {
                *(long **)(lVar16 + 0x18) = plVar24;
                plVar22 = (long *)plVar27[3];
              }
              if (plVar22 != (long *)0x0) {
                plVar22[2] = lVar16;
              }
              plVar28[3] = (long)plVar27;
              plVar27[2] = (long)plVar28;
              plVar27[3] = 0;
              plVar28 = plVar27;
            }
            *(undefined4 *)(plVar27 + 1) = 0;
          }
          if (plVar27 == plVar29) break;
          plVar27 = plVar24;
          plVar22 = plVar30;
        } while (plVar24 != (long *)0x0);
        plVar29 = plVar28;
      }
    }
    plVar27 = plVar30;
    plVar28 = plVar29;
    if ((plVar29 != (long *)0x0) && (plVar22 = plVar29, plVar30 != (long *)0x0)) {
      do {
        plVar24 = (long *)plVar22[2];
        plVar28 = plVar29;
        if (((*(byte *)(*plVar22 + 0x25) & 0x30) != 0) && ((int)plVar22[1] == 0)) {
          if (plVar22 != plVar27) {
            lVar16 = plVar22[3];
            plVar28 = plVar24;
            if (plVar22 != plVar29) {
              plVar28 = plVar29;
            }
            plVar29 = plVar24;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar24;
              plVar29 = (long *)plVar22[2];
            }
            if (plVar29 != (long *)0x0) {
              plVar29[3] = lVar16;
            }
            plVar27[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar27;
            plVar27 = plVar22;
          }
          *(undefined4 *)(plVar22 + 1) = 1;
        }
        if (plVar22 == plVar30) break;
        plVar29 = plVar28;
        plVar22 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
    plVar22 = plVar27;
    plVar30 = plVar28;
    if ((plVar28 != (long *)0x0) && (plVar29 = plVar28, plVar27 != (long *)0x0)) {
      do {
        plVar24 = (long *)plVar29[2];
        plVar30 = plVar28;
        if (((*(byte *)(*plVar29 + 0x26) >> 3 & 1) != 0) && ((int)plVar29[1] == 0)) {
          if (plVar29 != plVar22) {
            lVar16 = plVar29[3];
            plVar30 = plVar24;
            if (plVar29 != plVar28) {
              plVar30 = plVar28;
            }
            plVar28 = plVar24;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar24;
              plVar28 = (long *)plVar29[2];
            }
            if (plVar28 != (long *)0x0) {
              plVar28[3] = lVar16;
            }
            plVar22[2] = (long)plVar29;
            plVar29[2] = 0;
            plVar29[3] = (long)plVar22;
            plVar22 = plVar29;
          }
          *(undefined4 *)(plVar29 + 1) = 1;
        }
        if (plVar29 == plVar27) break;
        plVar28 = plVar30;
        plVar29 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
    plVar27 = plVar22;
    plVar28 = plVar30;
    if ((plVar30 != (long *)0x0) && (plVar29 = plVar30, plVar22 != (long *)0x0)) {
      do {
        plVar24 = (long *)plVar29[2];
        plVar28 = plVar30;
        if (((*(uint *)(*plVar29 + 0x24) & 0x3c0c0) != 0) && ((int)plVar29[1] == 0)) {
          if (plVar29 != plVar27) {
            lVar16 = plVar29[3];
            plVar28 = plVar24;
            if (plVar29 != plVar30) {
              plVar28 = plVar30;
            }
            plVar30 = plVar24;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar24;
              plVar30 = (long *)plVar29[2];
            }
            if (plVar30 != (long *)0x0) {
              plVar30[3] = lVar16;
            }
            plVar27[2] = (long)plVar29;
            plVar29[2] = 0;
            plVar29[3] = (long)plVar27;
            plVar27 = plVar29;
          }
          *(undefined4 *)(plVar29 + 1) = 1;
        }
        if (plVar29 == plVar22) break;
        plVar30 = plVar28;
        plVar29 = plVar24;
      } while (plVar24 != (long *)0x0);
    }
    plVar30 = plVar27;
    local_68 = plVar28;
    if ((plVar28 != (long *)0x0) && (plVar22 = plVar28, plVar27 != (long *)0x0)) {
      do {
        plVar29 = (long *)plVar22[2];
        local_68 = plVar28;
        if ((int)plVar22[1] == 0) {
          if (plVar22 != plVar30) {
            lVar16 = plVar22[3];
            local_68 = plVar29;
            if (plVar22 != plVar28) {
              local_68 = plVar28;
            }
            plVar28 = plVar29;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar29;
              plVar28 = (long *)plVar22[2];
            }
            if (plVar28 != (long *)0x0) {
              plVar28[3] = lVar16;
            }
            plVar30[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar30;
            plVar30 = plVar22;
          }
          *(undefined4 *)(plVar22 + 1) = 1;
        }
        if (plVar22 == plVar27) break;
        plVar28 = local_68;
        plVar22 = plVar29;
      } while (plVar29 != (long *)0x0);
    }
    plVar28 = plVar30;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar22 = local_68;
      if (plVar30 != (long *)0x0) {
        do {
          plVar29 = (long *)plVar22[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar22 + 0x28) & 1) != 0) && ((int)plVar22[1] != 0)) &&
             (plVar22 != plVar28)) {
            lVar16 = plVar22[3];
            local_68 = plVar29;
            if (plVar22 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar29;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar29;
              plVar27 = (long *)plVar22[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar16;
            }
            plVar28[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar28;
            plVar28 = plVar22;
          }
          if (plVar22 == plVar30) break;
          plVar27 = local_68;
          plVar22 = plVar29;
        } while (plVar29 != (long *)0x0);
      }
    }
    plVar30 = plVar28;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar22 = local_68;
      if (plVar28 != (long *)0x0) {
        do {
          plVar29 = (long *)plVar22[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar22 + 0x20) >> 2 & 1) != 0) && ((int)plVar22[1] != 0)) &&
             (plVar22 != plVar30)) {
            lVar16 = plVar22[3];
            local_68 = plVar29;
            if (plVar22 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar29;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar29;
              plVar27 = (long *)plVar22[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar16;
            }
            plVar30[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar30;
            plVar30 = plVar22;
          }
          if (plVar22 == plVar28) break;
          plVar27 = local_68;
          plVar22 = plVar29;
        } while (plVar29 != (long *)0x0);
      }
    }
    plVar28 = plVar30;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar22 = local_68;
      if (plVar30 != (long *)0x0) {
        do {
          plVar29 = (long *)plVar22[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar22 + 0x1c) & 1) != 0) && ((int)plVar22[1] != 0)) &&
             (plVar22 != plVar28)) {
            lVar16 = plVar22[3];
            local_68 = plVar29;
            if (plVar22 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar29;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar29;
              plVar27 = (long *)plVar22[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar16;
            }
            plVar28[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar28;
            plVar28 = plVar22;
          }
          if (plVar22 == plVar30) break;
          plVar27 = local_68;
          plVar22 = plVar29;
        } while (plVar29 != (long *)0x0);
      }
    }
    plVar30 = plVar28;
    if (local_68 != (long *)0x0) {
      plVar27 = local_68;
      plVar22 = local_68;
      if (plVar28 != (long *)0x0) {
        do {
          plVar29 = (long *)plVar22[2];
          local_68 = plVar27;
          if ((((*(byte *)(*plVar22 + 0x1c) >> 3 & 1) != 0) && ((int)plVar22[1] != 0)) &&
             (plVar22 != plVar30)) {
            lVar16 = plVar22[3];
            local_68 = plVar29;
            if (plVar22 != plVar27) {
              local_68 = plVar27;
            }
            plVar27 = plVar29;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x10) = plVar29;
              plVar27 = (long *)plVar22[2];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[3] = lVar16;
            }
            plVar30[2] = (long)plVar22;
            plVar22[2] = 0;
            plVar22[3] = (long)plVar30;
            plVar30 = plVar22;
          }
          if (plVar22 == plVar28) break;
          plVar27 = local_68;
          plVar22 = plVar29;
        } while (plVar29 != (long *)0x0);
      }
    }
    local_70 = plVar30;
    plVar28 = local_68;
    plVar27 = local_68;
    plVar22 = plVar30;
    if (local_68 != (long *)0x0) {
      do {
        local_68 = plVar27;
        if (plVar22 == (long *)0x0) break;
        plVar22 = (long *)plVar28[2];
        if ((((*(byte *)(*plVar28 + 0x24) >> 2 & 1) != 0) && ((int)plVar28[1] != 0)) &&
           (plVar28 != local_70)) {
          lVar16 = plVar28[3];
          local_68 = plVar22;
          if (plVar28 != plVar27) {
            local_68 = plVar27;
          }
          plVar27 = plVar22;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x10) = plVar22;
            plVar27 = (long *)plVar28[2];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[3] = lVar16;
          }
          local_70[2] = (long)plVar28;
          plVar28[2] = 0;
          plVar28[3] = (long)local_70;
          local_70 = plVar28;
        }
        bVar6 = plVar28 != plVar30;
        plVar28 = plVar22;
        plVar27 = local_68;
      } while (bVar6);
    }
  }
  iVar7 = FUN_004bef30(&local_68,&local_70);
  if (iVar7 == 0) {
    uVar14 = 0x5e8;
    goto LAB_004be584;
  }
  plVar30 = local_68;
  if ((local_68 != (long *)0x0) && (local_70 != (long *)0x0)) {
    plVar28 = local_70;
    plVar27 = local_70;
    do {
      plVar22 = (long *)plVar27[3];
      local_70 = plVar28;
      if (((*(int *)(*plVar27 + 0x2c) == 0x303) && ((int)plVar27[1] != 0)) && (plVar27 != plVar30))
      {
        lVar16 = plVar27[2];
        local_70 = plVar22;
        if (plVar27 != plVar28) {
          local_70 = plVar28;
        }
        plVar28 = plVar22;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 0x18) = plVar22;
          plVar28 = (long *)plVar27[3];
        }
        if (plVar28 != (long *)0x0) {
          plVar28[2] = lVar16;
        }
        plVar30[3] = (long)plVar27;
        plVar27[2] = (long)plVar30;
        plVar27[3] = 0;
        plVar30 = plVar27;
      }
      if (plVar27 == local_68) break;
      plVar28 = local_70;
      plVar27 = plVar22;
    } while (plVar22 != (long *)0x0);
  }
  if ((plVar30 != (long *)0x0) && (local_70 != (long *)0x0)) {
    plVar28 = local_70;
    plVar27 = plVar30;
    plVar22 = local_70;
    do {
      plVar29 = (long *)plVar22[3];
      local_70 = plVar28;
      if ((((*(byte *)(*plVar22 + 0x28) >> 6 & 1) != 0) && ((int)plVar22[1] != 0)) &&
         (plVar22 != plVar27)) {
        lVar16 = plVar22[2];
        local_70 = plVar29;
        if (plVar22 != plVar28) {
          local_70 = plVar28;
        }
        plVar28 = plVar29;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 0x18) = plVar29;
          plVar28 = (long *)plVar22[3];
        }
        if (plVar28 != (long *)0x0) {
          plVar28[2] = lVar16;
        }
        plVar27[3] = (long)plVar22;
        plVar22[2] = (long)plVar27;
        plVar22[3] = 0;
        plVar27 = plVar22;
      }
      if (plVar22 == plVar30) break;
      plVar28 = local_70;
      plVar22 = plVar29;
    } while (plVar29 != (long *)0x0);
    plVar30 = plVar27;
  }
  plVar28 = plVar30;
  if (plVar30 != (long *)0x0) {
    plVar27 = local_70;
    plVar22 = local_70;
    if (local_70 != (long *)0x0) {
      do {
        plVar29 = (long *)plVar22[3];
        local_70 = plVar27;
        if ((((*(byte *)(*plVar22 + 0x1c) & 6) != 0) && ((int)plVar22[1] != 0)) &&
           (plVar22 != plVar28)) {
          lVar16 = plVar22[2];
          local_70 = plVar29;
          if (plVar22 != plVar27) {
            local_70 = plVar27;
          }
          plVar27 = plVar29;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x18) = plVar29;
            plVar27 = (long *)plVar22[3];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[2] = lVar16;
          }
          plVar28[3] = (long)plVar22;
          plVar22[2] = (long)plVar28;
          plVar22[3] = 0;
          plVar28 = plVar22;
        }
        if (plVar22 == plVar30) break;
        plVar27 = local_70;
        plVar22 = plVar29;
      } while (plVar29 != (long *)0x0);
    }
  }
  plVar30 = plVar28;
  if (plVar28 != (long *)0x0) {
    plVar27 = local_70;
    plVar22 = local_70;
    if (local_70 != (long *)0x0) {
      do {
        plVar29 = (long *)plVar22[3];
        local_70 = plVar27;
        if ((((*(byte *)(*plVar22 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar22 + 0x28) >> 6 & 1) != 0)
            ) && (((int)plVar22[1] != 0 && (plVar22 != plVar30)))) {
          lVar16 = plVar22[2];
          local_70 = plVar29;
          if (plVar22 != plVar27) {
            local_70 = plVar27;
          }
          plVar27 = plVar29;
          if (lVar16 != 0) {
            *(long **)(lVar16 + 0x18) = plVar29;
            plVar27 = (long *)plVar22[3];
          }
          if (plVar27 != (long *)0x0) {
            plVar27[2] = lVar16;
          }
          plVar30[3] = (long)plVar22;
          plVar22[2] = (long)plVar30;
          plVar22[3] = 0;
          plVar30 = plVar22;
        }
        if (plVar22 == plVar28) break;
        plVar27 = local_70;
        plVar22 = plVar29;
      } while (plVar29 != (long *)0x0);
    }
  }
  plVar28 = plVar30;
  if (plVar30 != (long *)0x0) {
    plVar27 = local_70;
    plVar22 = local_70;
    if (local_70 != (long *)0x0) {
      do {
        plVar29 = (long *)plVar22[3];
        local_70 = plVar27;
        if ((int)plVar22[1] != 0) {
          if (plVar22 != plVar28) {
            lVar16 = plVar22[2];
            local_70 = plVar29;
            if (plVar22 != plVar27) {
              local_70 = plVar27;
            }
            plVar27 = plVar29;
            if (lVar16 != 0) {
              *(long **)(lVar16 + 0x18) = plVar29;
              plVar27 = (long *)plVar22[3];
            }
            if (plVar27 != (long *)0x0) {
              plVar27[2] = lVar16;
            }
            plVar28[3] = (long)plVar22;
            plVar22[2] = (long)plVar28;
            plVar22[3] = 0;
            plVar28 = plVar22;
          }
          *(undefined4 *)(plVar22 + 1) = 0;
        }
        if (plVar22 == plVar30) break;
        plVar27 = local_70;
        plVar22 = plVar29;
      } while (plVar29 != (long *)0x0);
    }
  }
  local_68 = plVar28;
  plVar27 = (long *)FUN_00400260(-(ulong)(uVar8 + 0x4d >> 0x1f) & 0xfffffff800000000 |
                                 (ulong)(uVar8 + 0x4d) << 3,"external/openssl/ssl/ssl_ciph.c",0x614)
  ;
  plVar30 = plVar27;
  if (plVar27 == (long *)0x0) {
    FUN_00400420(plVar10,"external/openssl/ssl/ssl_ciph.c",0x616);
    FUN_004014b0(0x14,0xa6,0x41,"external/openssl/ssl/ssl_ciph.c",0x617);
    return 0;
  }
  for (; plVar28 != (long *)0x0; plVar28 = (long *)plVar28[2]) {
    *plVar30 = *plVar28;
    plVar30 = plVar30 + 1;
  }
  lVar16 = 0x4c;
  puVar25 = &DAT_0417c660;
  do {
    plVar28 = plVar30;
    if (*(uint *)(puVar25 + 0x1c) == 0 || (*(uint *)(puVar25 + 0x1c) & ~uVar4) != 0) {
      if (((*(uint *)(puVar25 + 0x20) == 0) || ((*(uint *)(puVar25 + 0x20) & ~uVar5) != 0)) &&
         (((*(uint *)(puVar25 + 0x24) == 0 || ((*(uint *)(puVar25 + 0x24) & ~uVar18) != 0)) &&
          ((*(uint *)(puVar25 + 0x28) == 0 || ((*(uint *)(puVar25 + 0x28) & ~uVar3) != 0)))))) {
        plVar28 = plVar30 + 1;
        *plVar30 = (long)puVar25;
      }
    }
    lVar16 = lVar16 + -1;
    puVar25 = puVar25 + 0x50;
    plVar30 = plVar28;
  } while (lVar16 != 0);
  *plVar28 = 0;
  iVar7 = strncmp(param_5,"DEFAULT",7);
  pcVar31 = param_5;
  if (iVar7 == 0) {
    iVar7 = FUN_004bf0e0("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_68,&local_70,plVar27,param_6);
    pcVar31 = param_5 + 7;
    if (*pcVar31 == ':') {
      pcVar31 = param_5 + 8;
    }
    if (iVar7 != 0) goto LAB_004be388;
    FUN_00400420(plVar27,"external/openssl/ssl/ssl_ciph.c",0x62f);
  }
  else {
LAB_004be388:
    if (*pcVar31 == '\0') {
      FUN_00400420(plVar27,"external/openssl/ssl/ssl_ciph.c",0x62f);
LAB_004be454:
      lVar16 = FUN_004071e0();
      if (lVar16 == 0) {
        FUN_00400420(plVar10,"external/openssl/ssl/ssl_ciph.c",0x63b);
        return 0;
      }
      iVar7 = FUN_00407950(param_2);
      plVar30 = local_68;
      if (0 < iVar7) {
        iVar7 = 0;
        do {
          uVar14 = FUN_00407970(param_2,iVar7);
          iVar9 = FUN_00407800(lVar16,uVar14);
          if (iVar9 == 0) goto LAB_004be558;
          iVar7 = iVar7 + 1;
          iVar9 = FUN_00407950(param_2);
          plVar30 = local_68;
        } while (iVar7 < iVar9);
      }
      do {
        if (plVar30 == (long *)0x0) {
          FUN_00400420(plVar10,"external/openssl/ssl/ssl_ciph.c",0x658);
          lVar12 = FUN_00406f10(lVar16);
          if (lVar12 != 0) {
            FUN_00407010(*param_4);
            *param_4 = lVar12;
            FUN_00406ef0(lVar12,PTR_LAB_04374630);
            FUN_004079e0(*param_4);
            FUN_00407010(*param_3);
            *param_3 = lVar16;
            return lVar16;
          }
LAB_004be558:
          FUN_00407010(lVar16);
          return 0;
        }
        if (((int)plVar30[1] != 0) && (iVar7 = FUN_00407800(lVar16,*plVar30), iVar7 == 0)) {
          FUN_00400420(plVar10,"external/openssl/ssl/ssl_ciph.c",0x64f);
          goto LAB_004be558;
        }
        plVar30 = (long *)plVar30[2];
      } while( true );
    }
    iVar7 = FUN_004bf0e0(pcVar31,&local_68,&local_70,plVar27,param_6);
    FUN_00400420(plVar27,"external/openssl/ssl/ssl_ciph.c",0x62f);
    if (iVar7 != 0) goto LAB_004be454;
  }
  uVar14 = 0x632;
LAB_004be584:
  FUN_00400420(plVar10,"external/openssl/ssl/ssl_ciph.c",uVar14);
  return 0;
}


