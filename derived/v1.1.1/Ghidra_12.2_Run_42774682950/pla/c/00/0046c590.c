/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c590; name: FUN_0046c590
 */


undefined4
FUN_0046c590(undefined8 *param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
            ulong param_5)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 *puVar20;
  long *plVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  long *plVar25;
  undefined8 *puVar26;
  uint uVar27;
  uint uVar28;
  long local_68;
  
  local_68 = 0;
  *param_1 = 0;
  *param_2 = 0;
  uVar3 = FUN_00407950(param_3);
  uVar6 = uVar3;
  if ((param_5 & 0x100) != 0) {
    uVar6 = 0;
  }
  uVar28 = uVar3;
  if ((param_5 & 0x200) != 0) {
    uVar28 = 0;
  }
  plVar21 = (long *)0x0;
  uVar27 = uVar3;
  if ((param_5 & 0x400) != 0) {
    uVar27 = 0;
  }
  iVar5 = uVar3 - 1;
  if (iVar5 == 0) {
LAB_0046c5f8:
    FUN_0046c4a0(plVar21);
    return 1;
  }
  iVar8 = uVar3 - 2;
  if (iVar8 < 0) {
    uVar23 = 1;
  }
  else {
    iVar9 = iVar5;
    do {
      iVar9 = iVar9 + -1;
      uVar10 = FUN_00407970(param_3,iVar9);
      FUN_00456b10(uVar10,0xffffffff,0);
      lVar11 = FUN_00461d60(uVar10);
      if (lVar11 == 0) {
        return 0;
      }
    } while (0 < iVar9);
    uVar22 = 1;
    do {
      iVar5 = iVar5 + -1;
      uVar10 = FUN_00407970(param_3,iVar5);
      uVar4 = FUN_00457510();
      if ((uVar4 >> 0xb & 1) != 0) {
        return 0xffffffff;
      }
      lVar11 = FUN_00461d60(uVar10);
      uVar23 = uVar22;
      if (((uVar22 & 1) != 0) && (uVar23 = 2, *(long *)(lVar11 + 8) != 0)) {
        uVar23 = uVar22;
      }
      if (0 < (int)uVar6) {
        uVar18 = *(ulong *)(lVar11 + 0x18);
        uVar22 = (uVar6 + (uVar4 >> 5 & 1)) - 1;
        uVar6 = (uint)uVar18;
        if ((long)(int)uVar22 <= (long)uVar18 || 0x7fffffffffffffff < uVar18) {
          uVar6 = uVar22;
        }
      }
    } while ((0 < iVar5) && ((uVar22 = uVar23, uVar23 >> 1 == 0 || (0 < (int)uVar6))));
  }
  uVar22 = uVar23 | 4;
  if (uVar6 != 0) {
    uVar22 = uVar23;
  }
  if ((uVar22 & 1) == 0) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = (long *)FUN_004002a0(0x30,"external/openssl/crypto/x509v3/pcy_tree.c",0xa6);
    if (plVar21 == (long *)0x0) {
      FUN_004014b0(0x22,0xac,0x41,"external/openssl/crypto/x509v3/pcy_tree.c",0xa7);
      return 0;
    }
    lVar11 = FUN_004002a0(-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5,
                          "external/openssl/crypto/x509v3/pcy_tree.c",0xb2);
    *plVar21 = lVar11;
    if (lVar11 == 0) {
      FUN_00400420(plVar21,"external/openssl/crypto/x509v3/pcy_tree.c",0xb3);
      FUN_004014b0(0x22,0xac,0x41,"external/openssl/crypto/x509v3/pcy_tree.c",0xb4);
      return 0;
    }
    *(uint *)(plVar21 + 1) = uVar3;
    uVar10 = FUN_00407cb0(0x2ea);
    puVar13 = (uint *)FUN_00462760(0,uVar10,0);
    if (puVar13 == (uint *)0x0) goto LAB_0046d028;
    lVar12 = FUN_0046d1b0(lVar11,puVar13,0,plVar21);
    if (lVar12 == 0) {
LAB_0046ce30:
      FUN_00462700(puVar13);
      goto LAB_0046d028;
    }
    if (-1 < iVar8) {
      puVar13 = (uint *)(lVar11 + 0x38);
      do {
        while( true ) {
          uVar10 = FUN_00407970(param_3,iVar8);
          uVar6 = FUN_00457510();
          plVar25 = (long *)FUN_00461d60(uVar10);
          FUN_00466c20(uVar10);
          *(undefined8 *)(puVar13 + -6) = uVar10;
          if (*plVar25 == 0) break;
          uVar3 = (uVar6 & 0x20) >> 5;
          if (uVar28 != 0) goto LAB_0046c8a4;
LAB_0046c8dc:
          if ((iVar8 == 0) || ((uVar6 & 0x20) == 0)) {
            *puVar13 = *puVar13 | 0x200;
            uVar28 = 0;
            goto joined_r0x0046c8bc;
          }
          uVar28 = 0;
          if (uVar27 != 0) goto LAB_0046c838;
LAB_0046c8ec:
          *puVar13 = *puVar13 | 0x400;
          bVar1 = iVar8 < 1;
          puVar13 = puVar13 + 8;
          iVar8 = iVar8 + -1;
          if (bVar1) goto LAB_0046c700;
        }
        *puVar13 = *puVar13 | 0x200;
        uVar3 = (uVar6 & 0x20) >> 5;
        if (uVar28 == 0) goto LAB_0046c8dc;
LAB_0046c8a4:
        uVar18 = plVar25[2];
        uVar6 = uVar28 - (uVar3 ^ 1);
        uVar28 = (uint)uVar18;
        if ((long)(int)uVar6 <= (long)uVar18 || 0x7fffffffffffffff < uVar18) {
          uVar28 = uVar6;
        }
joined_r0x0046c8bc:
        if (uVar27 == 0) goto LAB_0046c8ec;
LAB_0046c838:
        uVar18 = plVar25[4];
        uVar6 = uVar27 - (uVar3 ^ 1);
        uVar27 = (uint)uVar18;
        if ((long)(int)uVar6 <= (long)uVar18 || 0x7fffffffffffffff < uVar18) {
          uVar27 = uVar6;
        }
        puVar13 = puVar13 + 8;
        bVar1 = 0 < iVar8;
        iVar8 = iVar8 + -1;
      } while (bVar1);
    }
  }
LAB_0046c700:
  if (uVar22 == 0) {
    return 0;
  }
  if (uVar22 >> 2 == 0) {
    if ((uVar22 >> 1 & 1) != 0) goto LAB_0046c5f8;
    bVar1 = true;
    iVar5 = (int)plVar21[1];
    puVar26 = (undefined8 *)*plVar21;
    if (1 < iVar5) goto LAB_0046c948;
  }
  else {
    *param_2 = 1;
    if ((uVar22 >> 1 & 1) != 0) {
      return 0xfffffffe;
    }
    bVar1 = false;
    iVar5 = (int)plVar21[1];
    puVar26 = (undefined8 *)*plVar21;
    if (1 < iVar5) {
LAB_0046c948:
      iVar8 = 1;
      puVar20 = puVar26;
      do {
        puVar24 = puVar20 + 4;
        plVar25 = (long *)FUN_00461d60(*puVar24);
        iVar5 = FUN_00407950(plVar25[1]);
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            lVar11 = FUN_00407970(plVar25[1],iVar5);
            iVar9 = FUN_00407950(puVar20[1]);
            if (iVar9 < 1) {
LAB_0046ca28:
              if ((puVar20[2] != 0) &&
                 (lVar11 = FUN_0046d1b0(puVar24,lVar11,puVar20[2],0), lVar11 == 0))
              goto LAB_0046d028;
            }
            else {
              bVar2 = false;
              iVar9 = 0;
              do {
                uVar10 = FUN_00407970(puVar20[1],iVar9);
                iVar7 = FUN_0046d310(puVar20,uVar10,*(undefined8 *)(lVar11 + 8));
                if (iVar7 != 0) {
                  lVar12 = FUN_0046d1b0(puVar24,lVar11,uVar10,0);
                  if (lVar12 == 0) goto LAB_0046d028;
                  bVar2 = true;
                }
                iVar9 = iVar9 + 1;
                iVar7 = FUN_00407950(puVar20[1]);
              } while (iVar9 < iVar7);
              if (!bVar2) goto LAB_0046ca28;
            }
            iVar5 = iVar5 + 1;
            iVar9 = FUN_00407950(plVar25[1]);
          } while (iVar5 < iVar9);
        }
        if ((*(byte *)((long)puVar20 + 0x39) >> 1 & 1) == 0) {
          iVar5 = FUN_00407950(puVar20[1]);
          if (0 < iVar5) {
            iVar5 = 0;
            do {
              puVar26 = (undefined8 *)FUN_00407970(puVar20[1],iVar5);
              if (((*(byte *)((long)puVar20 + 0x19) >> 2 & 1) == 0) &&
                 ((*(byte *)*puVar26 & 1) != 0)) {
                uVar10 = *(undefined8 *)((byte *)*puVar26 + 0x18);
                iVar9 = *(int *)(puVar26 + 2);
                iVar7 = FUN_00407950(uVar10);
                if ((iVar9 != iVar7) && (iVar9 = FUN_00407950(uVar10), 0 < iVar9)) {
                  iVar9 = 0;
                  do {
                    lVar11 = FUN_00407970(uVar10,iVar9);
                    lVar12 = FUN_0046d120(puVar24,puVar26,lVar11);
                    if (lVar12 == 0) {
                      if (lVar11 == 0) {
                        lVar11 = *(long *)((uint *)*puVar26 + 2);
                      }
                      puVar13 = (uint *)FUN_00462760(0,lVar11,*(uint *)*puVar26 & 0x10);
                      if (puVar13 == (uint *)0x0) goto LAB_0046d028;
                      *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(*plVar25 + 0x10);
                      *puVar13 = *puVar13 | 4;
                      lVar11 = FUN_0046d1b0(puVar24,puVar13,puVar26,plVar21);
                      if (lVar11 == 0) goto LAB_0046ce30;
                    }
                    iVar9 = iVar9 + 1;
                    iVar7 = FUN_00407950(uVar10);
                  } while (iVar9 < iVar7);
                }
              }
              else if (*(int *)(puVar26 + 2) == 0) {
                puVar13 = (uint *)FUN_00462760(0,*(undefined8 *)((uint *)*puVar26 + 2),
                                               *(uint *)*puVar26 & 0x10);
                if (puVar13 == (uint *)0x0) goto LAB_0046d028;
                *(undefined8 *)(puVar13 + 4) = *(undefined8 *)(*plVar25 + 0x10);
                *puVar13 = *puVar13 | 4;
                lVar11 = FUN_0046d1b0(puVar24,puVar13,puVar26,plVar21);
                if (lVar11 == 0) goto LAB_0046ce30;
              }
              iVar5 = iVar5 + 1;
              iVar9 = FUN_00407950(puVar20[1]);
            } while (iVar5 < iVar9);
          }
          if ((puVar20[2] != 0) &&
             (lVar11 = FUN_0046d1b0(puVar24,*plVar25,puVar20[2],0), lVar11 == 0)) goto LAB_0046d028;
        }
        if ((*(byte *)((long)puVar20 + 0x39) >> 2 & 1) != 0) {
          uVar10 = puVar20[5];
          iVar5 = FUN_00407950(uVar10);
          if (0 < iVar5) {
            do {
              iVar5 = iVar5 + -1;
              puVar26 = (undefined8 *)FUN_00407970(uVar10,iVar5);
              if ((*(byte *)*puVar26 & 3) != 0) {
                *(int *)(puVar26[1] + 0x10) = *(int *)(puVar26[1] + 0x10) + -1;
                FUN_00400420(puVar26,"external/openssl/crypto/x509v3/pcy_tree.c",0x193);
                FUN_00407680(uVar10,iVar5);
              }
            } while (0 < iVar5);
          }
        }
        puVar20 = puVar24;
        do {
          uVar10 = puVar20[-3];
          iVar5 = FUN_00407950(uVar10);
          if (0 < iVar5) {
            do {
              iVar5 = iVar5 + -1;
              lVar11 = FUN_00407970(uVar10,iVar5);
              if (*(int *)(lVar11 + 0x10) == 0) {
                *(int *)(*(long *)(lVar11 + 8) + 0x10) = *(int *)(*(long *)(lVar11 + 8) + 0x10) + -1
                ;
                FUN_00400420(lVar11,"external/openssl/crypto/x509v3/pcy_tree.c",0x1a0);
                FUN_00407680(uVar10,iVar5);
              }
            } while (0 < iVar5);
          }
          lVar11 = puVar20[-2];
          puVar26 = puVar20 + -4;
          if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) == 0)) {
            lVar12 = *(long *)(lVar11 + 8);
            if (lVar12 != 0) {
              *(int *)(lVar12 + 0x10) = *(int *)(lVar12 + 0x10) + -1;
            }
            FUN_00400420(lVar11,"external/openssl/crypto/x509v3/pcy_tree.c",0x1a7);
            lVar11 = 0;
            puVar20[-2] = 0;
          }
          puVar20 = puVar26;
        } while (puVar26 != (undefined8 *)*plVar21);
        if (lVar11 == 0) {
          FUN_0046c4a0(plVar21);
          uVar17 = 1;
          if (!bVar1) {
            uVar17 = 0xfffffffe;
          }
          return uVar17;
        }
        iVar8 = iVar8 + 1;
        iVar5 = (int)plVar21[1];
        puVar20 = puVar24;
      } while (iVar8 < iVar5);
    }
  }
  plVar25 = plVar21 + 3;
  lVar11 = puVar26[(long)iVar5 * 4 + -2];
  plVar19 = plVar25;
  if (lVar11 != 0) {
    lVar12 = *plVar25;
    if (lVar12 == 0) {
      lVar12 = FUN_0046d0b0();
      *plVar25 = lVar12;
      if (lVar12 == 0) goto LAB_0046d028;
    }
    iVar5 = FUN_00407710(lVar12,lVar11);
    if ((iVar5 < 0) && (iVar5 = FUN_00407800(*plVar25,lVar11), iVar5 == 0)) goto LAB_0046d028;
    plVar19 = &local_68;
  }
  if (1 < (int)plVar21[1]) {
    iVar5 = 1;
    lVar12 = *(long *)(*plVar21 + 0x10);
    lVar11 = *plVar21;
    while (lVar12 != 0) {
      iVar8 = FUN_00407950(*(undefined8 *)(lVar11 + 0x28));
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          lVar16 = FUN_00407970(*(undefined8 *)(lVar11 + 0x28),iVar8);
          if (*(long *)(lVar16 + 8) == lVar12) {
            lVar14 = *plVar19;
            if (lVar14 == 0) {
              lVar14 = FUN_0046d0b0();
              *plVar19 = lVar14;
              if (lVar14 != 0) goto LAB_0046cdc4;
            }
            else {
LAB_0046cdc4:
              iVar9 = FUN_00407710(lVar14,lVar16);
              if ((-1 < iVar9) || (iVar9 = FUN_00407800(*plVar19,lVar16), iVar9 != 0))
              goto LAB_0046cd80;
            }
            if (plVar19 == &local_68) {
              FUN_00407010(local_68);
              local_68 = 0;
            }
            goto LAB_0046d028;
          }
LAB_0046cd80:
          iVar8 = iVar8 + 1;
          iVar9 = FUN_00407950(*(undefined8 *)(lVar11 + 0x28));
        } while (iVar8 < iVar9);
      }
      iVar5 = iVar5 + 1;
      if ((int)plVar21[1] <= iVar5) break;
      lVar12 = *(long *)(lVar11 + 0x30);
      lVar11 = lVar11 + 0x20;
    }
  }
  if (plVar19 == &local_68) {
    iVar5 = 2;
  }
  else {
    local_68 = *plVar25;
    iVar5 = 1;
  }
  lVar11 = local_68;
  iVar8 = FUN_00407950(param_4);
  if (0 < iVar8) {
    plVar25 = *(long **)(*plVar21 + (long)(int)plVar21[1] * 0x20 + -0x10);
    iVar8 = FUN_00407950(param_4);
    if (0 < iVar8) {
      iVar8 = 0;
      do {
        FUN_00407970(param_4,iVar8);
        iVar9 = FUN_00407f40();
        if (iVar9 == 0x2ea) {
          *(uint *)(plVar21 + 5) = *(uint *)(plVar21 + 5) | 2;
          goto LAB_0046cfe4;
        }
        iVar8 = iVar8 + 1;
        iVar9 = FUN_00407950(param_4);
      } while (iVar8 < iVar9);
    }
    iVar8 = FUN_00407950(param_4);
    if (0 < iVar8) {
      iVar8 = 0;
      if (plVar25 == (long *)0x0) {
        do {
          uVar10 = FUN_00407970(param_4,iVar8);
          lVar12 = FUN_0046d0e0(lVar11,uVar10);
          if (lVar12 != 0) {
            lVar16 = plVar21[4];
            if (lVar16 == 0) {
              lVar16 = FUN_004071e0();
              plVar21[4] = lVar16;
              if (lVar16 == 0) break;
            }
            iVar9 = FUN_00407800(lVar16,lVar12);
            if (iVar9 == 0) goto LAB_0046d058;
          }
          iVar8 = iVar8 + 1;
          iVar9 = FUN_00407950(param_4);
        } while (iVar8 < iVar9);
      }
      else {
        do {
          uVar10 = FUN_00407970(param_4,iVar8);
          lVar12 = FUN_0046d0e0(lVar11,uVar10);
          if (lVar12 == 0) {
            puVar15 = (undefined4 *)FUN_00462760(0,uVar10,*(uint *)*plVar25 & 0x10);
            if (puVar15 == (undefined4 *)0x0) goto LAB_0046d058;
            *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(*plVar25 + 0x10);
            *puVar15 = 0xc;
            lVar12 = FUN_0046d1b0(0,puVar15,plVar25[1],plVar21);
          }
          lVar16 = plVar21[4];
          if (lVar16 == 0) {
            lVar16 = FUN_004071e0();
            plVar21[4] = lVar16;
            if (lVar16 == 0) break;
          }
          iVar9 = FUN_00407800(lVar16,lVar12);
          if (iVar9 == 0) goto LAB_0046d058;
          iVar8 = iVar8 + 1;
          iVar9 = FUN_00407950(param_4);
        } while (iVar8 < iVar9);
      }
    }
  }
LAB_0046cfe4:
  bVar2 = true;
joined_r0x0046d060:
  if (iVar5 == 2) {
    FUN_00407010(local_68);
  }
  if (bVar2) {
    *param_1 = plVar21;
    if (!bVar1) {
      FUN_0046d090(plVar21);
      iVar5 = FUN_00407950();
      if (iVar5 < 1) {
        return 0xfffffffe;
      }
    }
    return 1;
  }
LAB_0046d028:
  FUN_0046c4a0(plVar21);
  return 0;
LAB_0046d058:
  bVar2 = false;
  goto joined_r0x0046d060;
}


