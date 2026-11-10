/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e9280; name: FUN_002e9280
 */


/* WARNING: Removing unreachable block (ram,0x002e9360) */

uint FUN_002e9280(double param_1,byte *param_2,undefined8 param_3)

{
  long lVar1;
  char *__n;
  byte bVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined1 auVar5 [16];
  int *piVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  ulong uVar17;
  undefined2 *puVar18;
  char cVar19;
  int iVar20;
  undefined **ppuVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  char cVar25;
  int iVar26;
  char *__dest;
  double dVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  int local_e0 [9];
  undefined1 local_b9 [2];
  int local_b7 [11];
  undefined1 auStack_8b [11];
  int *local_80;
  uint local_74;
  
  if ((long)param_1 < 0) {
    bVar2 = param_2[1];
    dVar27 = -param_1;
    cVar25 = '-';
    bVar3 = *param_2;
    uVar11 = *(undefined4 *)(param_2 + 4);
LAB_002e92e0:
    piVar13 = (int *)((ulong)local_e0 | 1);
    local_e0[0] = CONCAT31(local_e0[0]._1_3_,cVar25);
  }
  else {
    bVar2 = param_2[1];
    cVar25 = '+';
    if ((bVar2 & 4) == 0) {
      cVar25 = (bVar2 & 8) << 2;
    }
    bVar3 = *param_2;
    piVar13 = local_e0;
    uVar11 = *(undefined4 *)(param_2 + 4);
    dVar27 = param_1;
    if (cVar25 != '\0') goto LAB_002e92e0;
  }
  if ((ulong)ABS(dVar27) < 0x7ff0000000000001) {
    if (ABS(dVar27) == INFINITY) {
      if (bVar3 - 9 < 9) {
        ppuVar21 = &PTR_DAT_04152f30;
        goto LAB_002e9338;
      }
      puVar18 = &DAT_038a0528;
      goto LAB_002e9378;
    }
LAB_002e93b0:
    iVar26 = 6;
    if (-1 < *(int *)(param_2 + 8)) {
      iVar26 = *(int *)(param_2 + 8);
    }
    local_74 = 0;
    dVar27 = frexp(dVar27,local_e0);
    dVar27 = ldexp(dVar27,0x35);
    iVar20 = local_e0[0];
    if (7 < *param_2 - 10) {
      uVar8 = 0;
      goto LAB_002e9b0c;
    }
    uVar8 = local_e0[0] - 0x35;
    uVar9 = (ulong)uVar8;
    switch((uint)*param_2) {
    default:
      if (iVar26 < 0x28) {
        uVar14 = (ulong)dVar27;
        piVar13 = (int *)(local_b9 + 1);
        auStack_8b._3_8_ = piVar13;
        local_80 = piVar13;
        if (-1 < (int)uVar8) {
          if ((int)uVar8 < 0xc) {
            uVar14 = uVar14 << (uVar9 & 0x3f);
            if (uVar14 != 0) {
              piVar16 = piVar13;
              do {
                auStack_8b._3_8_ = (long)piVar16 + -1;
                *(byte *)((long)piVar16 + -1) = (char)uVar14 + (char)(uVar14 / 10) * -10 | 0x30;
                if (uVar14 < 10) {
                  if (piVar13 < auStack_8b) goto joined_r0x002e9668;
                  goto LAB_002e9d44;
                }
                uVar14 = uVar14 / 10;
                piVar16 = (int *)auStack_8b._3_8_;
              } while (local_e0 < (ulong)auStack_8b._3_8_);
              goto LAB_002e9878;
            }
            auStack_8b._3_8_ = local_b9;
            local_b9 = (undefined1  [2])0x2e30;
joined_r0x002e9668:
            local_80 = local_b7;
            if (0 < iVar26) {
              local_80 = local_b7;
              do {
                if (auStack_8b <= local_80) goto LAB_002e9d44;
                iVar26 = iVar26 + -1;
                piVar13 = (int *)((long)local_80 + 1);
                *(char *)local_80 = '0';
                local_80 = piVar13;
              } while (0 < iVar26);
            }
          }
          else {
            if (0x4b < (int)uVar8) break;
            auVar28 = __fixunsdfti();
            uVar14 = 0;
            if (uVar9 != 0) {
              uVar14 = auVar28._0_8_ >> (-uVar9 & 0x3f);
            }
            bVar7 = (long)(uVar9 - 0x40) < 0;
            uVar15 = auVar28._0_8_ << (uVar9 & 0x3f);
            uVar22 = uVar15;
            if (bVar7) {
              uVar22 = uVar14 | auVar28._8_8_ << (uVar9 & 0x3f);
            }
            uVar9 = 0;
            if (bVar7) {
              uVar9 = uVar15;
            }
            auVar28._8_8_ = uVar22;
            auVar28._0_8_ = uVar9;
            if (uVar9 != 0 || uVar22 != 0) {
              do {
                auVar29 = __udivti3(auVar28._0_8_,auVar28._8_8_,10,0);
                auStack_8b._3_8_ = (long)piVar13 + -1;
                *(byte *)((long)piVar13 + -1) = auVar28[0] + auVar29[0] * -10 | 0x30;
                if (auVar28._8_8_ == 0 && auVar28._0_8_ < 10) {
                  if (auStack_8b <= local_80) goto LAB_002e9d44;
                  piVar13 = (int *)((long)local_80 + 1);
                  *(char *)local_80 = '.';
                  local_80 = piVar13;
                  goto joined_r0x002e97b0;
                }
                piVar13 = (int *)auStack_8b._3_8_;
                auVar28 = auVar29;
              } while (local_e0 < (ulong)auStack_8b._3_8_);
              goto LAB_002e9878;
            }
            auStack_8b._3_8_ = local_b9;
            local_80 = local_b7;
            local_b9 = (undefined1  [2])0x2e30;
joined_r0x002e97b0:
            if (0 < iVar26) {
              do {
                if (auStack_8b <= local_80) goto LAB_002e9d44;
                iVar26 = iVar26 + -1;
                piVar13 = (int *)((long)local_80 + 1);
                *(char *)local_80 = '0';
                local_80 = piVar13;
              } while (0 < iVar26);
            }
          }
          goto LAB_002e9cf4;
        }
        if ((int)uVar8 < -0x3c) {
          auVar28 = __fixunsdfti();
          uVar9 = auVar28._8_8_;
          auStack_8b._3_8_ = piVar13;
          local_80 = piVar13;
          if ((int)uVar8 < -0x7c) break;
          uVar15 = (ulong)(0x35 - iVar20);
          uVar22 = -1L << (uVar15 & 0x3f);
          uVar14 = 0;
          if (uVar15 != 0) {
            uVar14 = 0xffffffffffffffff >> (-uVar15 & 0x3f);
          }
          uVar23 = 0;
          if (uVar15 != 0) {
            uVar23 = uVar9 << (-uVar15 & 0x3f);
          }
          bVar7 = (long)(uVar15 - 0x40) < 0;
          uVar17 = -1L << (uVar15 & 0x3f);
          uVar12 = 0;
          if (bVar7) {
            uVar17 = uVar14 | uVar22;
            uVar12 = uVar22;
          }
          uVar14 = 0;
          if (bVar7) {
            uVar14 = uVar9 >> (uVar15 & 0x3f);
          }
          uVar22 = uVar9 >> (uVar15 & 0x3f);
          if (bVar7) {
            uVar22 = auVar28._0_8_ >> (uVar15 & 0x3f) | uVar23;
          }
          auVar29._8_8_ = uVar14;
          auVar29._0_8_ = uVar22;
          if (uVar22 != 0 || uVar14 != 0) {
            do {
              uVar10 = auStack_8b._3_8_;
              auVar30 = __udivti3(auVar29._0_8_,auVar29._8_8_,10,0);
              auStack_8b._3_8_ = uVar10 + -1;
              *(byte *)(uVar10 + -1) = auVar29[0] + auVar30[0] * -10 | 0x30;
              if (auVar29._8_8_ == 0 && auVar29._0_8_ < 10) {
                if (auStack_8b <= local_80) goto LAB_002e9d44;
                piVar13 = (int *)((long)local_80 + 1);
                *(char *)local_80 = '.';
                local_80 = piVar13;
                goto LAB_002e9b7c;
              }
              auVar29 = auVar30;
            } while (local_e0 < (ulong)auStack_8b._3_8_);
            goto LAB_002e9878;
          }
          auStack_8b._3_8_ = local_b9;
          local_80 = local_b7;
          local_b9 = (undefined1  [2])0x2e30;
LAB_002e9b7c:
          uVar12 = ~uVar12;
          uVar17 = ~uVar17;
          uVar14 = uVar12 & auVar28._0_8_;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar14;
          uVar14 = uVar14 * 10;
          uVar22 = SUB168(auVar30 * ZEXT816(10),8) + (uVar17 & uVar9) * 10;
          uVar9 = 0;
          if (uVar15 != 0) {
            uVar9 = uVar22 << (-uVar15 & 0x3f);
          }
          uVar23 = uVar22 & uVar17;
          uVar22 = uVar22 >> (uVar15 & 0x3f);
          if ((long)(uVar15 - 0x40) < 0) {
            uVar22 = uVar14 >> (uVar15 & 0x3f) | uVar9;
          }
          iVar20 = (int)uVar22;
          uVar14 = uVar14 & uVar12;
          if (0 < iVar26) {
            do {
              if (auStack_8b <= local_80) {
LAB_002e9d44:
                    /* WARNING: Subroutine does not return */
                __assert_fail("end < data + sizeof(data)",
                              "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc"
                              ,0x47,"push_back");
              }
              piVar13 = (int *)((long)local_80 + 1);
              *(char *)local_80 = (char)uVar22 + '0';
              local_80 = piVar13;
              auVar5._8_8_ = 0;
              auVar5._0_8_ = uVar14;
              uVar24 = uVar14 * 10;
              uVar14 = uVar24 & uVar12;
              uVar22 = SUB168(auVar5 * ZEXT816(10),8) + uVar23 * 10;
              uVar9 = 0;
              if (uVar15 != 0) {
                uVar9 = uVar22 << (-uVar15 & 0x3f);
              }
              iVar26 = iVar26 + -1;
              uVar23 = uVar22 & uVar17;
              uVar22 = uVar22 >> (uVar15 & 0x3f);
              if ((long)(uVar15 - 0x40) < 0) {
                uVar22 = uVar24 >> (uVar15 & 0x3f) | uVar9;
              }
              iVar20 = (int)uVar22;
            } while (0 < iVar26);
          }
          if (iVar20 < 6) {
            if (iVar20 != 5) goto LAB_002e9cf4;
            if (uVar14 == 0 && uVar23 == 0) {
              bVar2 = *(byte *)((long)local_80 + -1);
              if (bVar2 == 0x2e) {
                bVar2 = *(byte *)((long)local_80 + -2);
              }
              if ((bVar2 & 1) == 0) goto LAB_002e9cf4;
            }
          }
          if (local_80 <= (ulong)auStack_8b._3_8_) goto LAB_002e9a84;
          piVar13 = (int *)((long)local_80 + -1);
          if ((ulong)auStack_8b._3_8_ <= piVar13) {
            cVar19 = *(char *)piVar13;
            piVar16 = piVar13;
            while( true ) {
              if (cVar19 != '.') {
                if (cVar19 != '9') goto LAB_002e9cec;
                *(char *)piVar16 = '0';
              }
              piVar13 = (int *)((long)piVar16 + -1);
              if (piVar13 < (ulong)auStack_8b._3_8_) break;
              piVar16 = (int *)((long)piVar16 + -1);
              cVar19 = *(char *)piVar16;
            }
          }
LAB_002e9cd4:
          *(char *)piVar13 = '1';
          bVar2 = param_2[1];
          auStack_8b._3_8_ = piVar13;
        }
        else {
          uVar22 = (ulong)-uVar8;
          uVar9 = uVar14 >> (uVar22 & 0x3f);
          if (uVar9 != 0) {
            piVar16 = piVar13;
            do {
              auStack_8b._3_8_ = (long)piVar16 + -1;
              *(byte *)((long)piVar16 + -1) = (char)uVar9 + (char)(uVar9 / 10) * -10 | 0x30;
              if (uVar9 < 10) {
                if (auStack_8b <= piVar13) goto LAB_002e9d44;
                goto LAB_002e98b0;
              }
              uVar9 = uVar9 / 10;
              piVar16 = (int *)auStack_8b._3_8_;
            } while (local_e0 < (ulong)auStack_8b._3_8_);
LAB_002e9878:
                    /* WARNING: Subroutine does not return */
            __assert_fail("begin > data",
                          "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc"
                          ,0x43,"push_front");
          }
          auStack_8b._3_8_ = local_b9;
          local_b9 = (undefined1  [2])0x2e30;
LAB_002e98b0:
          local_80 = local_b7;
          uVar15 = ~(-1L << (uVar22 & 0x3f));
          uVar9 = (uVar15 & uVar14) * 10;
          uVar14 = uVar9 >> (uVar22 & 0x3f);
          iVar20 = (int)uVar14;
          uVar9 = uVar9 & uVar15;
          if (0 < iVar26) {
            do {
              if (auStack_8b <= local_80) goto LAB_002e9d44;
              piVar13 = (int *)((long)local_80 + 1);
              iVar26 = iVar26 + -1;
              *(char *)local_80 = (char)uVar14 + '0';
              uVar14 = uVar9 * 10 >> (uVar22 & 0x3f);
              iVar20 = (int)uVar14;
              uVar9 = uVar9 * 10 & uVar15;
              local_80 = piVar13;
            } while (0 < iVar26);
          }
          if (5 < iVar20) {
LAB_002e9940:
            if (local_80 <= (ulong)auStack_8b._3_8_) goto LAB_002e9a84;
            piVar13 = (int *)((long)local_80 + -1);
            if ((ulong)auStack_8b._3_8_ <= piVar13) {
              cVar19 = *(char *)piVar13;
              piVar16 = piVar13;
              while( true ) {
                if (cVar19 != '.') {
                  if (cVar19 != '9') goto LAB_002e9cec;
                  *(char *)piVar16 = '0';
                }
                piVar13 = (int *)((long)piVar16 + -1);
                if (piVar13 < (ulong)auStack_8b._3_8_) break;
                piVar16 = (int *)((long)piVar16 + -1);
                cVar19 = *(char *)piVar16;
              }
            }
            goto LAB_002e9cd4;
          }
          if (iVar20 == 5) {
            if (uVar9 == 0) {
              bVar2 = *(byte *)((long)local_80 + -1);
              if (bVar2 == 0x2e) {
                bVar2 = *(byte *)((long)local_80 + -2);
              }
              if ((bVar2 & 1) == 0) goto LAB_002e9cf4;
            }
            goto LAB_002e9940;
          }
LAB_002e9cf4:
          bVar2 = param_2[1];
        }
        if ((bVar2 >> 4 & 1) == 0) {
          if (local_80 <= (ulong)auStack_8b._3_8_) {
LAB_002e9a84:
                    /* WARNING: Subroutine does not return */
            __assert_fail("begin < end",
                          "external/com_google_absl/absl/strings/internal/str_format/float_conversion.cc"
                          ,0x50,"back");
          }
          piVar13 = (int *)((long)local_80 + -1);
          if (*(char *)piVar13 != '.') goto LAB_002e9ae8;
          lVar1 = (long)piVar13 - auStack_8b._3_8_;
          local_80 = piVar13;
        }
        else {
LAB_002e9ae8:
          lVar1 = (long)local_80 - auStack_8b._3_8_;
        }
        if (lVar1 < 0) {
LAB_002e9d24:
                    /* WARNING: Subroutine does not return */
          __assert_fail("false && \"len <= kMaxSize\"",
                        "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
        }
        FUN_002e9ef0(cVar25,auStack_8b._3_8_,lVar1,param_2[1],*(undefined4 *)(param_2 + 4),param_3);
        goto LAB_002e9b08;
      }
      break;
    case 0xc:
    case 0xd:
      uVar9 = FUN_002ea600(dVar27,uVar9,iVar26,local_e0,&local_74);
      if ((uVar9 & 1) != 0) {
        if ((param_2[1] >> 4 & 1) == 0) {
          if (local_80 <= (ulong)auStack_8b._3_8_) goto LAB_002e9a84;
          if (*(char *)((long)local_80 + -1) == '.') {
            local_80 = (int *)((long)local_80 + -1);
          }
        }
        uVar10 = 0x65;
        if ((*param_2 < 0x12) && ((1 << (ulong)(*param_2 & 0x1f) & 0x2aa00U) != 0)) {
          uVar10 = 0x45;
        }
LAB_002e9ae4:
        FUN_002e9d70(local_74,uVar10,local_e0);
        goto LAB_002e9ae8;
      }
      break;
    case 0xe:
    case 0xf:
      if (iVar26 < 2) {
        iVar26 = 1;
      }
      uVar9 = FUN_002ea600(dVar27,uVar9,iVar26 + -1,local_e0,&local_74);
      if ((uVar9 & 1) != 0) {
        if (((int)local_74 < iVar26) && (-5 < (int)local_74)) {
          if ((int)local_74 < 0) {
            *(char *)(auStack_8b._3_8_ + 1) = *(char *)auStack_8b._3_8_;
            piVar16 = (int *)(auStack_8b._3_8_ + -1);
            piVar13 = (int *)auStack_8b._3_8_;
            if (local_74 != 0xffffffff) {
              piVar6 = piVar16;
              uVar8 = local_74;
              if ((local_74 & 1) == 0) {
                *(char *)auStack_8b._3_8_ = '0';
                piVar6 = (int *)(auStack_8b._3_8_ + -2);
                piVar13 = piVar16;
                uVar8 = local_74 + 1;
              }
              auStack_8b._3_8_ = piVar6;
              piVar16 = (int *)auStack_8b._3_8_;
              if (local_74 != 0xfffffffe) {
                iVar26 = uVar8 + 1;
                do {
                  *(char *)piVar13 = '0';
                  piVar13 = (int *)(auStack_8b._3_8_ + -1);
                  *(char *)auStack_8b._3_8_ = '0';
                  auStack_8b._3_8_ = auStack_8b._3_8_ + -2;
                  iVar26 = iVar26 + 2;
                  piVar16 = (int *)auStack_8b._3_8_;
                } while (iVar26 != 0);
              }
            }
            auStack_8b._3_8_ = piVar16;
            *(char *)piVar13 = '.';
            *(char *)auStack_8b._3_8_ = '0';
          }
          else if (local_74 != 0) {
            __dest = (char *)(auStack_8b._3_8_ + 1);
            cVar19 = *__dest;
            __n = (char *)(auStack_8b._3_8_ + ((long)(int)local_74 - (auStack_8b._3_8_ + 2)) + 2);
            if (__n != (char *)0x0) {
              memmove(__dest,(char *)(auStack_8b._3_8_ + 2),(size_t)__n);
            }
            __dest[(long)__n] = cVar19;
          }
          local_74 = 0;
        }
        piVar13 = local_80;
        if ((param_2[1] >> 4 & 1) == 0) {
          do {
            local_80 = piVar13;
            if (local_80 <= (ulong)auStack_8b._3_8_) goto LAB_002e9a84;
            piVar13 = (int *)((long)local_80 + -1);
          } while (*(char *)piVar13 == '0');
          if (*(char *)piVar13 == '.') {
            local_80 = piVar13;
          }
        }
        if (local_74 != 0) {
          uVar10 = 0x65;
          if ((*param_2 < 0x12) && ((1 << (ulong)(*param_2 & 0x1f) & 0x2aa00U) != 0)) {
            uVar10 = 0x45;
          }
          goto LAB_002e9ae4;
        }
        goto LAB_002e9ae8;
      }
      break;
    case 0x10:
    case 0x11:
      break;
    }
    uVar8 = FUN_002ea210(param_1,param_2,param_3);
  }
  else {
    if (bVar3 - 9 < 9) {
      ppuVar21 = &PTR_DAT_04152ee8;
LAB_002e9338:
      puVar18 = (undefined2 *)ppuVar21[(char)(bVar3 - 9)];
    }
    else {
      puVar18 = &DAT_03936d20;
    }
LAB_002e9378:
    uVar4 = *puVar18;
    *(undefined1 *)((long)piVar13 + 2) = *(undefined1 *)(puVar18 + 1);
    *(undefined2 *)piVar13 = uVar4;
    lVar1 = (long)piVar13 + (3 - (long)local_e0);
    if (lVar1 < 0) goto LAB_002e9d24;
    uVar9 = FUN_002e9018(param_3,local_e0,lVar1,uVar11,0xffffffff,bVar2 >> 1 & 1);
    if ((uVar9 & 1) == 0) goto LAB_002e93b0;
LAB_002e9b08:
    uVar8 = 1;
  }
LAB_002e9b0c:
  return uVar8 & 1;
LAB_002e9cec:
  *(char *)piVar16 = cVar19 + '\x01';
  goto LAB_002e9cf4;
}


