/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00467470; name: FUN_00467470
 */


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00467470(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  int *piVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  uint uVar21;
  undefined8 *puVar22;
  long lVar23;
  uint local_80;
  int local_7c;
  long local_70;
  int local_64;
  
  puVar22 = (undefined8 *)(param_1 + 0x98);
  lVar23 = *(long *)(param_1 + 0xe8);
  iVar2 = FUN_00407950(*puVar22);
  lVar9 = FUN_00407970(*puVar22,iVar2 + -1);
  FUN_00456b10(lVar9,0xffffffff,0);
  if ((iVar2 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: num == 1 && ctx->num_untrusted == num",
                 "external/openssl/crypto/x509/x509_vfy.c",0xb43);
  }
  lVar10 = *(long *)(param_1 + 0x10);
  uVar17 = *(uint *)(lVar9 + 0xe0);
  uVar21 = (uint)(lVar10 != 0);
  if ((lVar23 == 0) ||
     ((*(uint *)(lVar23 + 0x28) & 3) != 0 || (*(uint *)(lVar23 + 0x28) & 0xc) == 0)) {
    if ((lVar10 == 0) ||
       (uVar15 = (uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18), (uVar15 >> 0xf & 1) != 0))
    {
      uVar21 = uVar21 | 2;
      bVar1 = true;
      goto joined_r0x0046756c;
    }
    local_80 = (uVar15 >> 0x14 ^ 0xffffffff) & 1;
    uVar21 = 1;
    bVar1 = true;
    lVar9 = FUN_00406f10();
    if (lVar9 == 0) goto LAB_00467534;
joined_r0x004675c0:
    if (((lVar23 != 0) && (iVar2 = FUN_00407950(*(undefined8 *)(lVar23 + 8)), 0 < iVar2)) &&
       (plVar18 = (long *)(lVar23 + 0x10), *plVar18 != 0)) {
      if (lVar9 == 0) {
        lVar9 = FUN_004071e0();
        if (lVar9 == 0) {
          uVar14 = 0xb73;
          goto LAB_0046754c;
        }
        iVar2 = FUN_00407950(*plVar18);
      }
      else {
        iVar2 = FUN_00407950();
      }
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          uVar14 = FUN_00407970(*plVar18,iVar2);
          iVar6 = FUN_00407800(lVar9,uVar14);
          if (iVar6 == 0) {
            FUN_00407010(lVar9);
            uVar14 = 0xb7a;
            goto LAB_0046754c;
          }
          iVar2 = iVar2 + 1;
          iVar6 = FUN_00407950(*plVar18);
        } while (iVar2 < iVar6);
      }
    }
    uVar17 = uVar17 >> 0xd & 1;
    iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x28);
    if (0x3fffffff < iVar2) {
      iVar2 = 0x3fffffff;
      *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x28) = 0x3fffffff;
    }
    iVar2 = iVar2 + 1;
    if (uVar21 != 0) {
      iVar6 = 0;
      local_7c = 3;
      uVar15 = uVar21 >> 1;
joined_r0x00467658:
      local_70 = 0;
      uVar8 = uVar21;
      if (uVar15 == 0) goto joined_r0x004677f8;
      local_70 = 0;
      iVar3 = FUN_00407950(*puVar22);
      iVar5 = iVar6;
      if ((uVar21 & 4) == 0) {
        iVar5 = iVar3;
      }
      uVar14 = FUN_00407970(*puVar22,iVar5 + -1);
      if (iVar3 <= iVar2) {
        uVar20 = *(undefined8 *)(param_1 + 0x98);
        *(undefined8 *)(param_1 + 0x98) = 0;
        iVar4 = (**(code **)(param_1 + 0x40))(&local_70,param_1,uVar14);
        *(undefined8 *)(param_1 + 0x98) = uVar20;
        if (iVar4 < 0) {
          uVar16 = 0x46;
        }
        else {
          if (iVar4 == 0) goto joined_r0x00467830;
          if (uVar21 >> 2 == 0) {
            iVar5 = iVar3;
            if (uVar17 == 0) goto LAB_00467790;
            if (iVar3 == *(int *)(param_1 + 0x94)) {
              iVar5 = FUN_0044e550(uVar14,local_70);
              if (iVar5 != 0) {
                FUN_00460a80(local_70);
                goto joined_r0x00467830;
              }
              FUN_00460a80(uVar14);
              iVar3 = iVar3 + -1;
              *(int *)(param_1 + 0x94) = iVar3;
              FUN_004079a0(*(undefined8 *)(param_1 + 0x98),iVar3,local_70);
            }
            if (iVar3 < *(int *)(param_1 + 0x94)) goto LAB_00468544;
LAB_00467864:
            local_7c = FUN_00469b70(param_1,iVar3);
            if (1 < local_7c - 1U) {
              uVar21 = uVar21 & 0xfffffffe;
              if (uVar17 != 0) goto joined_r0x00467830;
              goto joined_r0x00467a24;
            }
            goto LAB_00467af4;
          }
          if (((uVar17 != 0) || (iVar3 <= iVar5)) || (iVar5 < 1)) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: num > i && i > 0 && ss == 0",
                         "external/openssl/crypto/x509/x509_vfy.c",0xbd0);
          }
          FUN_00407890(uVar20);
          FUN_00460a80();
          while (iVar3 = iVar3 + -1, iVar5 < iVar3) {
            FUN_00407890(*puVar22);
            FUN_00460a80();
          }
          uVar21 = uVar21 & 0xfffffffb;
          *(int *)(param_1 + 0x94) = iVar5;
          if (lVar23 != 0) {
            iVar3 = FUN_00407950(*(undefined8 *)(lVar23 + 8));
            if ((0 < iVar3) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar23 + 0x2c))) {
              *(undefined4 *)(lVar23 + 0x2c) = 0xffffffff;
              FUN_00460a80(*(undefined8 *)(lVar23 + 0x20));
              *(undefined8 *)(lVar23 + 0x20) = 0;
            }
            iVar3 = FUN_00407950(*(undefined8 *)(lVar23 + 8));
            if ((0 < iVar3) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar23 + 0x30))) {
              *(undefined4 *)(lVar23 + 0x30) = 0xffffffff;
            }
          }
LAB_00467790:
          lVar10 = local_70;
          iVar3 = FUN_00407800(*puVar22,local_70);
          if (iVar3 != 0) {
            FUN_00456b10(lVar10,0xffffffff,0);
            uVar17 = *(uint *)(lVar10 + 0xe0) >> 0xd & 1;
            iVar3 = iVar5;
            if (iVar5 < *(int *)(param_1 + 0x94)) {
LAB_00468544:
                    /* WARNING: Subroutine does not return */
              FUN_00404dd0("Assertion failed: ctx->num_untrusted <= num",
                           "external/openssl/crypto/x509/x509_vfy.c",0xc16);
            }
            goto LAB_00467864;
          }
          FUN_00460a80(local_70);
          uVar14 = 0xbef;
LAB_00467adc:
          FUN_004014b0(0xb,0x6a,0x41,"external/openssl/crypto/x509/x509_vfy.c",uVar14);
          uVar16 = 0x11;
          uVar17 = 0;
        }
        *(undefined4 *)(param_1 + 0xb0) = uVar16;
        local_7c = 2;
        goto LAB_00467af4;
      }
joined_r0x00467830:
      uVar8 = uVar21;
      if ((uVar21 & 1) == 0) {
        if (uVar21 >> 2 == 0) {
          if ((local_80 != 0) && (1 < *(int *)(param_1 + 0x94))) {
            uVar17 = 0;
            iVar6 = *(int *)(param_1 + 0x94) + -1;
            uVar21 = uVar21 | 4;
            goto joined_r0x004677f8;
          }
          goto LAB_00467af4;
        }
        iVar6 = iVar6 + -1;
        if (iVar6 < 1) goto LAB_00467af4;
      }
      else {
joined_r0x004677f8:
        if ((uVar8 & 1) != 0) {
          iVar5 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
          if (iVar5 != *(int *)(param_1 + 0x94)) {
                    /* WARNING: Subroutine does not return */
            FUN_00404dd0("Assertion failed: num == ctx->num_untrusted",
                         "external/openssl/crypto/x509/x509_vfy.c",0xc43);
          }
          uVar14 = FUN_00407970(*puVar22,iVar5 + -1);
          if (((uVar17 == 0) && (iVar5 <= iVar2)) && (iVar5 = FUN_00407950(lVar9), 0 < iVar5)) {
            lVar19 = 0;
            lVar10 = 0;
            iVar5 = 0;
            do {
              lVar11 = FUN_00407970(lVar9,iVar5);
              iVar3 = (**(code **)(param_1 + 0x48))(param_1,uVar14,lVar11);
              if (iVar3 != 0) {
                iVar3 = FUN_00468560(param_1,lVar11,0xffffffff);
                lVar10 = lVar11;
                lVar19 = lVar11;
                if (iVar3 != 0) break;
              }
              iVar5 = iVar5 + 1;
              iVar3 = FUN_00407950(lVar9);
            } while (iVar5 < iVar3);
            local_70 = lVar19;
            if (lVar10 != 0) {
              FUN_004075d0(lVar9,lVar19);
              iVar5 = FUN_00407800(*puVar22,local_70);
              if (iVar5 == 0) {
                uVar14 = 0xc5c;
                goto LAB_00467adc;
              }
              FUN_00466c20(local_70);
              lVar10 = local_70;
              *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
              FUN_00456b10(local_70,0xffffffff,0);
              uVar17 = *(uint *)(lVar10 + 0xe0) >> 0xd & 1;
              if (*(long *)(param_1 + 0xe8) != 0) {
                iVar5 = *(int *)(param_1 + 0x94);
                iVar3 = iVar5 + -1;
                if (((iVar3 != 0) && ((*(uint *)(*(long *)(param_1 + 0xe8) + 0x28) & 5) != 0)) &&
                   (lVar10 = FUN_00407970(*puVar22,iVar3), lVar10 != 0)) {
                  iVar3 = FUN_00469e40(*(undefined4 *)(param_1 + 0x94),
                                       *(undefined8 *)(param_1 + 0xe8),lVar10,iVar3);
                  if (iVar3 < 0) {
                    local_7c = 2;
                    goto LAB_00467af4;
                  }
                  if (iVar3 != 0) {
                    local_7c = 1;
                    *(int *)(param_1 + 0x94) = iVar5 + -2;
                    goto LAB_00467af4;
                  }
                }
                local_7c = 3;
                goto joined_r0x00467a24;
              }
              local_7c = 3;
              goto joined_r0x00467a24;
            }
          }
          else {
            local_70 = 0;
          }
          uVar21 = uVar21 & 0xfffffffe;
          if (bVar1) {
            uVar21 = uVar21 | 2;
          }
        }
      }
joined_r0x00467a24:
      if (uVar21 == 0) goto LAB_00467af4;
      uVar15 = uVar21 >> 1 & 1;
      goto joined_r0x00467658;
    }
    local_7c = 3;
LAB_00467af4:
    FUN_00407010(lVar9);
    iVar6 = FUN_00407950(*puVar22);
    if (iVar2 < iVar6) {
LAB_00467c24:
      if (local_7c != 1) {
        if (local_7c == 2) goto LAB_00468168;
        goto LAB_00467c34;
      }
    }
    else {
      if ((lVar23 == 0) || (local_7c != 3)) {
        if (local_7c != 3) goto LAB_00467c24;
      }
      else if ((*(byte *)(lVar23 + 0x28) >> 2 & 1) != 0) {
        iVar5 = *(int *)(param_1 + 0x94) + -1;
        lVar9 = *(long *)(param_1 + 0xe8);
        uVar14 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),iVar5);
        iVar3 = FUN_00407950(*(undefined8 *)(lVar9 + 8));
        if (0 < iVar3) {
          iVar4 = 0;
          do {
            pcVar12 = (char *)FUN_00407970(*(undefined8 *)(lVar9 + 8),iVar4);
            if ((((*pcVar12 == '\x02') && (pcVar12[1] == '\x01')) && (pcVar12[2] == '\0')) &&
               (iVar7 = FUN_004648f0(uVar14,*(undefined8 *)(pcVar12 + 0x18)), 0 < iVar7)) {
              FUN_00460a80(*(undefined8 *)(lVar9 + 0x20));
              *(undefined8 *)(lVar9 + 0x20) = 0;
              *(undefined4 *)(param_1 + 0xf0) = 1;
              *(int *)(lVar9 + 0x2c) = iVar5;
              *(char **)(lVar9 + 0x18) = pcVar12;
              iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
              if (*(int *)(param_1 + 0x94) < iVar2) {
                do {
                  FUN_00407890(*(undefined8 *)(param_1 + 0x98));
                  FUN_00460a80();
                  iVar2 = iVar2 + -1;
                } while (*(int *)(param_1 + 0x94) < iVar2);
              }
              goto LAB_00467d2c;
            }
            iVar4 = iVar4 + 1;
          } while (iVar3 != iVar4);
        }
      }
      if (iVar6 == *(int *)(param_1 + 0x94)) {
        local_7c = FUN_00469b70(param_1,iVar6);
        goto LAB_00467c24;
      }
LAB_00467c34:
      iVar6 = FUN_00407950(*puVar22);
      if (iVar2 < iVar6) {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar14 = FUN_00407970(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar14;
        uVar16 = 0x16;
      }
      else if (((lVar23 == 0) || (iVar2 = FUN_00407950(*(undefined8 *)(lVar23 + 8)), iVar2 < 1)) ||
              (((*(byte *)(lVar23 + 0x28) & 3) != 0 && (*(int *)(lVar23 + 0x30) < 0)))) {
        if (uVar17 == 0) {
          *(int *)(param_1 + 0xac) = iVar6 + -1;
          iVar2 = *(int *)(param_1 + 0x94);
          uVar14 = FUN_00407970(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar14;
          if (iVar2 < iVar6) {
            uVar16 = 2;
          }
          else {
            uVar16 = 0x14;
          }
        }
        else {
          iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
          *(int *)(param_1 + 0xac) = iVar6 + -1;
          uVar14 = FUN_00407970(*(undefined8 *)(param_1 + 0x98));
          *(undefined8 *)(param_1 + 0xb8) = uVar14;
          if (iVar2 == 1) {
            uVar16 = 0x12;
          }
          else {
            uVar16 = 0x13;
          }
        }
      }
      else {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar14 = FUN_00407970(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar14;
        uVar16 = 0x41;
      }
      *(undefined4 *)(param_1 + 0xb0) = uVar16;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 == 0) goto LAB_00468168;
    }
LAB_00467d2c:
    uVar21 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
    if (*(long *)(param_1 + 0xd8) == 0) {
      iVar2 = *(int *)(*(long *)(param_1 + 0x20) + 0x20);
      uVar17 = *(uint *)(*(long *)(param_1 + 0x20) + 0x18) >> 6 & 1;
    }
    else {
      uVar17 = 0;
      iVar2 = 6;
    }
    if (0 < (int)uVar21) {
      iVar6 = 0;
      uVar15 = 0;
      iVar5 = 0;
      iVar3 = -1;
LAB_00467d98:
      do {
        lVar9 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),uVar15);
        if (((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 4 & 1) == 0) &&
           ((*(byte *)(lVar9 + 0xe1) >> 1 & 1) != 0)) {
          *(long *)(param_1 + 0xb8) = lVar9;
          *(uint *)(param_1 + 0xac) = uVar15;
          *(undefined4 *)(param_1 + 0xb0) = 0x22;
          iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar4 == 0) goto LAB_00468168;
        }
        if ((uVar17 == 0) && ((*(byte *)(lVar9 + 0xe1) >> 2 & 1) != 0)) {
          *(long *)(param_1 + 0xb8) = lVar9;
          *(uint *)(param_1 + 0xac) = uVar15;
          *(undefined4 *)(param_1 + 0xb0) = 0x28;
          iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar4 == 0) goto LAB_00468168;
        }
        uVar8 = FUN_004572d0(lVar9);
        if (iVar3 == 0) {
          if (uVar8 != 0) {
            *(uint *)(param_1 + 0xac) = uVar15;
            *(undefined4 *)(param_1 + 0xb0) = 0x25;
joined_r0x00467e44:
            lVar23 = lVar9;
            if (lVar9 == 0) {
              lVar23 = FUN_00407970(*puVar22,uVar15);
            }
            *(long *)(param_1 + 0xb8) = lVar23;
            iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar4 == 0) goto LAB_00468168;
          }
        }
        else if (iVar3 == -1) {
          if (1 < uVar8) {
LAB_00467e24:
            if (((uint)*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)
            goto LAB_00467fd0;
          }
        }
        else {
          if (uVar8 == 0) {
LAB_00467fd0:
            *(uint *)(param_1 + 0xac) = uVar15;
            *(undefined4 *)(param_1 + 0xb0) = 0x18;
            goto joined_r0x00467e44;
          }
          if ((int)(uVar15 + 1) < (int)uVar21) {
            if (uVar8 != 1) goto LAB_00467fd0;
          }
          else if (uVar8 != 1) goto LAB_00467e24;
        }
        if (0 < iVar2) {
          if (((int)uVar15 < *(int *)(param_1 + 0x94)) ||
             (*(int *)(*(long *)(param_1 + 0x20) + 0x20) != iVar2)) {
LAB_00467ea4:
            iVar3 = FUN_00456b10(lVar9,iVar2,0 < iVar3);
            if ((iVar3 == 0) ||
               ((iVar3 != 1 && ((*(byte *)(*(long *)(param_1 + 0x20) + 0x18) >> 5 & 1) != 0)))) {
LAB_00467ed0:
              *(uint *)(param_1 + 0xac) = uVar15;
              lVar23 = lVar9;
              if (lVar9 == 0) {
                lVar23 = FUN_00407970(*puVar22,uVar15);
              }
              *(long *)(param_1 + 0xb8) = lVar23;
              *(undefined4 *)(param_1 + 0xb0) = 0x1a;
              iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
              if (iVar3 == 0) goto LAB_00468168;
            }
          }
          else {
            iVar4 = FUN_0046c1c0(lVar9,*(undefined4 *)(*(long *)(param_1 + 0x20) + 0x24),4);
            if (iVar4 != 1) {
              if (iVar4 != 2) goto LAB_00467ea4;
              goto LAB_00467ed0;
            }
          }
        }
        if (uVar15 < 2) {
          if (uVar15 != 0) goto LAB_00467f50;
          if ((*(uint *)(lVar9 + 0xe0) >> 10 & 1) != 0) goto LAB_00467f64;
LAB_00467d88:
          iVar3 = 1;
          uVar15 = uVar15 + 1;
          if (uVar21 == uVar15) break;
          goto LAB_00467d98;
        }
        if ((*(long *)(lVar9 + 0xd0) != -1) && (*(long *)(lVar9 + 0xd0) + (long)iVar6 < (long)iVar5)
           ) {
          *(long *)(param_1 + 0xb8) = lVar9;
          *(uint *)(param_1 + 0xac) = uVar15;
          *(undefined4 *)(param_1 + 0xb0) = 0x19;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) goto LAB_00468168;
        }
LAB_00467f50:
        iVar5 = ((*(uint *)(lVar9 + 0xe0) >> 5 ^ 0xffffffff) & 1) + iVar5;
        if ((*(uint *)(lVar9 + 0xe0) >> 10 & 1) == 0) goto LAB_00467d88;
LAB_00467f64:
        lVar23 = *(long *)(lVar9 + 0xd8);
        if (lVar23 != -1) {
          if (lVar23 < iVar6) {
            *(long *)(param_1 + 0xb8) = lVar9;
            *(uint *)(param_1 + 0xac) = uVar15;
            *(undefined4 *)(param_1 + 0xb0) = 0x26;
            iVar6 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar6 == 0) goto LAB_00468168;
            lVar23 = *(long *)(lVar9 + 0xd8);
          }
          iVar6 = (int)lVar23;
        }
        iVar3 = 0;
        iVar6 = iVar6 + 1;
        uVar15 = uVar15 + 1;
      } while (uVar21 != uVar15);
    }
    piVar13 = (int *)(param_1 + 0xac);
    iVar2 = FUN_00407950(*(undefined8 *)(param_1 + 0x98));
    if ((0 < iVar2) && (0 < *(int *)(*(long *)(param_1 + 0x20) + 0x2c))) {
      iVar6 = 0;
      do {
        lVar9 = FUN_00407970(*puVar22,iVar6);
        if (iVar6 != 0) {
          lVar23 = FUN_0044e660(lVar9);
          iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
          if (0 < iVar5) {
            if (lVar23 != 0) {
              if (4 < iVar5) {
                iVar5 = 5;
              }
              iVar3 = FUN_00422d50();
              if (*(int *)(&BYTE_03a0c8d4 + (long)iVar5 * 4) <= iVar3) goto LAB_004680f8;
            }
            *piVar13 = iVar6;
            lVar23 = lVar9;
            if (lVar9 == 0) {
              lVar23 = FUN_00407970(*puVar22,iVar6);
            }
            *(long *)(param_1 + 0xb8) = lVar23;
            *(undefined4 *)(param_1 + 0xb0) = 0x43;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) goto LAB_00468168;
          }
        }
LAB_004680f8:
        if (iVar6 < iVar2 + -1) {
          iVar5 = *(int *)(*(long *)(param_1 + 0x20) + 0x2c);
          local_64 = -1;
          if (0 < iVar5) {
            iVar3 = FUN_00466cc0(lVar9,0,0,&local_64,0);
            if (iVar3 != 0) {
              if (4 < iVar5) {
                iVar5 = 5;
              }
              if (*(int *)(&BYTE_03a0c8d4 + (long)iVar5 * 4) <= local_64) goto LAB_0046806c;
            }
            *piVar13 = iVar6;
            if (lVar9 == 0) {
              lVar9 = FUN_00407970(*puVar22,iVar6);
            }
            *(long *)(param_1 + 0xb8) = lVar9;
            *(undefined4 *)(param_1 + 0xb0) = 0x44;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) goto LAB_00468168;
          }
        }
LAB_0046806c:
        iVar6 = iVar6 + 1;
      } while (iVar2 != iVar6);
    }
    iVar2 = FUN_004699d0(param_1);
    FUN_004687d0(0,*(undefined8 *)(param_1 + 0x98));
    if (iVar2 != 0) {
      uVar14 = (**(code **)(param_1 + 0x50))(param_1);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      iVar2 = FUN_0044e740(piVar13,0,*(undefined8 *)(param_1 + 0x98),
                           *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18));
      if (iVar2 != 0) {
        uVar14 = FUN_00407970(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
        *(undefined8 *)(param_1 + 0xb8) = uVar14;
        *(int *)(param_1 + 0xb0) = iVar2;
        uVar14 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar14 == 0) {
          return uVar14;
        }
      }
      if (*(code **)(param_1 + 0x30) == (code *)0x0) {
        uVar14 = FUN_00468f10(param_1);
        iVar2 = (int)uVar14;
      }
      else {
        uVar14 = (**(code **)(param_1 + 0x30))(param_1);
        iVar2 = (int)uVar14;
      }
      if (iVar2 == 0) {
        return uVar14;
      }
      iVar2 = FUN_00407950(*puVar22);
      if (0 < iVar2) {
        do {
          iVar6 = iVar2 + -1;
          lVar9 = FUN_00407970(*puVar22,iVar6);
          if ((iVar6 == 0) || ((*(uint *)(lVar9 + 0xe0) >> 5 & 1) == 0)) {
            if ((*(uint *)(lVar9 + 0xe0) >> 10 & 1) != 0) {
              uVar14 = FUN_0044e530(lVar9);
              uVar20 = FUN_0044e490(lVar9);
              iVar5 = FUN_0044a130(uVar14);
              iVar3 = 0x48;
              if (1 < iVar5) {
                iVar4 = FUN_0044a130(uVar14);
                iVar7 = FUN_0044a130(uVar20);
                iVar3 = 0x48;
                if (iVar4 == iVar7 + 1) {
                  FUN_0044a0e0(uVar14,iVar5 + -1);
                  iVar4 = FUN_0044a670();
                  FUN_0044a0e0(uVar14,iVar5 + -2);
                  iVar7 = FUN_0044a670();
                  iVar3 = 0x48;
                  if (iVar4 != iVar7) {
                    lVar23 = FUN_0044ac00(uVar14);
                    if (lVar23 == 0) {
                      FUN_004014b0(0xb,0x95,0x41,"external/openssl/crypto/x509/x509_vfy.c",0x288);
                      *(undefined4 *)(param_1 + 0xb0) = 0x11;
                      return 0;
                    }
                    uVar14 = FUN_0044a1e0(lVar23,iVar5 + -1);
                    FUN_0044a660();
                    iVar5 = FUN_00407f40();
                    if ((iVar5 == 0xd) && (iVar5 = FUN_0044e250(lVar23,uVar20), iVar5 == 0)) {
                      iVar3 = 0;
                    }
                    else {
                      iVar3 = 0x48;
                    }
                    FUN_0044ab90(uVar14);
                    FUN_0044abf0(lVar23);
                    if (iVar3 == 0) goto LAB_00468374;
                  }
                }
              }
              *(long *)(param_1 + 0xb8) = lVar9;
              *(int *)(param_1 + 0xac) = iVar6;
              *(int *)(param_1 + 0xb0) = iVar3;
              uVar14 = (**(code **)(param_1 + 0x38))(0,param_1);
              if ((int)uVar14 == 0) {
                return uVar14;
              }
            }
LAB_00468374:
            iVar5 = FUN_00407950(*puVar22);
            if (iVar2 < iVar5) {
              do {
                iVar5 = iVar5 + -1;
                lVar23 = FUN_00407970(*puVar22,iVar5);
                lVar23 = *(long *)(lVar23 + 0x118);
                if (lVar23 != 0) {
                  iVar3 = FUN_00460f00(lVar9,lVar23);
                  if (iVar3 == 0 && iVar6 == 0) {
                    uVar21 = *(uint *)(*(long *)(param_1 + 0x20) + 0x40);
                    if ((uVar21 >> 5 & 1) != 0) goto LAB_00468394;
                    if (((uVar21 & 1) == 0) && (lVar10 = FUN_0045e200(lVar9,0x55,0,0), lVar10 != 0))
                    {
                      iVar3 = FUN_00407950();
                      if (0 < iVar3) {
                        iVar3 = 0;
                        do {
                          piVar13 = (int *)FUN_00407970(lVar10,iVar3);
                          if (*piVar13 == 2) {
                            FUN_0044e140(lVar10);
                            goto LAB_00468394;
                          }
                          iVar3 = iVar3 + 1;
                          iVar4 = FUN_00407950(lVar10);
                        } while (iVar3 < iVar4);
                      }
                      FUN_0044e140(lVar10);
                    }
                    iVar3 = FUN_004611f0(lVar9,lVar23);
                  }
                  if (iVar3 != 0) {
                    if (iVar3 == 0x11) {
                      return 0;
                    }
                    *(int *)(param_1 + 0xac) = iVar6;
                    *(int *)(param_1 + 0xb0) = iVar3;
                    *(long *)(param_1 + 0xb8) = lVar9;
                    uVar14 = (**(code **)(param_1 + 0x38))(0,param_1);
                    if ((int)uVar14 == 0) {
                      return uVar14;
                    }
                  }
                }
LAB_00468394:
              } while (iVar2 < iVar5);
            }
          }
          iVar2 = iVar6;
        } while (0 < iVar6);
      }
      uVar14 = FUN_0045f090(param_1);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      uVar14 = FUN_0045d1d0(param_1);
      if ((int)uVar14 == 0) {
        return uVar14;
      }
      if (*(char *)(*(long *)(param_1 + 0x20) + 0x18) < '\0') {
        uVar14 = (**(code **)(param_1 + 0x70))(param_1);
        return uVar14;
      }
      return uVar14;
    }
  }
  else {
    bVar1 = false;
joined_r0x0046756c:
    if (lVar10 == 0) {
      local_80 = 0;
      lVar9 = 0;
      goto joined_r0x004675c0;
    }
    local_80 = 0;
    lVar9 = FUN_00406f10();
    if (lVar9 != 0) goto joined_r0x004675c0;
LAB_00467534:
    uVar14 = 0xb62;
LAB_0046754c:
    FUN_004014b0(0xb,0x6a,0x41,"external/openssl/crypto/x509/x509_vfy.c",uVar14);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
LAB_00468168:
    FUN_004687d0(0,*puVar22);
  }
  return 0;
}


