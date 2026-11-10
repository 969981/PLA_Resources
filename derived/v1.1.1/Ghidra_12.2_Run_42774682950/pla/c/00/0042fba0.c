/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042fba0; name: FUN_0042fba0
 */


/* WARNING: Removing unreachable block (ram,0x00430380) */

undefined8
FUN_0042fba0(long param_1,undefined8 param_2,long param_3,ulong param_4,undefined8 *param_5,
            long *param_6,undefined8 param_7)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  void *__dest;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  long *plVar26;
  ulong uVar27;
  void *__src;
  long lVar28;
  long local_b8;
  long local_b0;
  ulong local_a8;
  ulong local_a0;
  long local_98;
  long local_88;
  long local_70;
  ulong local_68;
  
  iVar6 = FUN_0040c130(*(undefined8 *)(param_1 + 0x10));
  if ((iVar6 == 0) && (iVar6 = FUN_0040c130(*(undefined8 *)(param_1 + 0x18)), iVar6 == 0)) {
    if ((param_4 == 0) && ((param_3 != 0 && (*(long *)(param_1 + 0x10) != param_3)))) {
      uVar16 = 0;
      lVar21 = param_3;
LAB_0042fcd4:
      uVar16 = FUN_0042f4e0(param_1,param_2,lVar21,uVar16,param_7);
      return uVar16;
    }
    if ((param_3 != 0) || (param_4 != 1)) goto LAB_0042fbf0;
    lVar21 = *param_6;
    if (lVar21 != *(long *)(param_1 + 0x10)) {
      uVar16 = *param_5;
      goto LAB_0042fcd4;
    }
LAB_0042fcf8:
    local_a0 = 0;
    local_98 = 0;
    uVar20 = 0;
    local_88 = 0;
    local_b8 = 0;
    local_b0 = 0;
LAB_0042fd08:
    local_a8 = uVar20 + param_4;
    lVar21 = local_a8 * 8;
    local_70 = FUN_00400260(lVar21,"external/openssl/crypto/ec/ec_mult.c",0x200);
    puVar8 = (ulong *)FUN_00400260(lVar21,"external/openssl/crypto/ec/ec_mult.c",0x201);
    plVar9 = (long *)FUN_00400260(lVar21 + 8,"external/openssl/crypto/ec/ec_mult.c",0x203);
    puVar10 = (undefined8 *)FUN_00400260(lVar21,"external/openssl/crypto/ec/ec_mult.c",0x204);
    if (((plVar9 == (long *)0x0) || (*plVar9 = 0, local_70 == 0)) ||
       ((puVar8 == (ulong *)0x0 || (puVar10 == (undefined8 *)0x0)))) {
      FUN_004014b0(0x10,0xbb,0x41,"external/openssl/crypto/ec/ec_mult.c",0x20b);
      plVar23 = (long *)0x0;
    }
    else {
      uVar24 = local_88 + param_4;
      if (uVar24 == 0) {
        uVar18 = 0;
        lVar21 = 0;
        if (uVar20 != 0) goto LAB_0042fe98;
      }
      else {
        lVar28 = 0;
        lVar21 = 0;
        lVar22 = 1;
        uVar27 = 0;
        do {
          lVar11 = param_3;
          if (lVar22 - 1U < param_4) {
            lVar11 = *(long *)((long)param_6 + lVar28);
          }
          uVar7 = FUN_0040c070(lVar11);
          if (uVar7 < 2000) {
            if (uVar7 < 800) {
              if (uVar7 < 300) {
                if (uVar7 < 0x46) {
                  lVar11 = 1;
                  if (0x13 < uVar7) {
                    lVar11 = 2;
                  }
                }
                else {
                  lVar11 = 3;
                }
              }
              else {
                lVar11 = 4;
              }
            }
            else {
              lVar11 = 5;
            }
          }
          else {
            lVar11 = 6;
          }
          *(long *)(local_70 + lVar28) = lVar11;
          *(undefined8 *)((long)plVar9 + lVar28 + 8) = 0;
          lVar12 = param_3;
          if (lVar22 - 1U < param_4) {
            lVar12 = *(long *)((long)param_6 + lVar28);
          }
          lVar12 = FUN_0042c9d0(lVar12,lVar11,(ulong *)((long)puVar8 + lVar28));
          *(long *)((long)plVar9 + lVar28) = lVar12;
          if (lVar12 == 0) {
            plVar14 = (long *)0x0;
            goto LAB_00430240;
          }
          lVar21 = (1L << (lVar11 - 1U & 0x3f)) + lVar21;
          uVar18 = *(ulong *)((long)puVar8 + lVar28);
          lVar22 = lVar22 + 1;
          lVar28 = lVar28 + 8;
          if (uVar18 <= uVar27) {
            uVar18 = uVar27;
          }
          uVar27 = uVar18;
        } while (lVar22 - uVar24 != 1);
        if (uVar20 != 0) {
LAB_0042fe98:
          if (local_98 == 0) {
            if ((int)local_88 != 0) goto LAB_00430168;
            uVar16 = 0x229;
LAB_0043007c:
            FUN_004014b0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",uVar16);
          }
          else {
            local_68 = 0;
            if ((int)local_88 != 0) {
              uVar16 = 0x232;
              goto LAB_0043007c;
            }
            uVar16 = *(undefined8 *)(local_98 + 0x18);
            *(undefined8 *)(local_70 + param_4 * 8) = uVar16;
            pvVar13 = (void *)FUN_0042c9d0(param_3,uVar16,&local_68);
            if (pvVar13 != (void *)0x0) {
              if (local_68 <= uVar18) {
                local_a8 = param_4 + 1;
                plVar9[param_4] = (long)pvVar13;
                plVar9[local_a8] = 0;
                puVar8[param_4] = local_68;
                puVar10[param_4] = *(undefined8 *)(local_98 + 0x20);
                goto LAB_00430168;
              }
              if (local_68 < uVar20 * local_a0) {
                local_a8 = 0;
                if (local_a0 != 0) {
                  local_a8 = ((local_a0 + local_68) - 1) / local_a0;
                }
                if (*(ulong *)(local_98 + 0x10) < local_a8) {
                  FUN_004014b0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x25d);
                  uVar16 = 0x25e;
LAB_00430130:
                  FUN_00400420(pvVar13,"external/openssl/crypto/ec/ec_mult.c",uVar16);
                  goto LAB_00430084;
                }
                local_a8 = local_a8 + param_4;
              }
              if (param_4 < local_a8) {
                plVar23 = *(long **)(local_98 + 0x20);
                __src = pvVar13;
                uVar20 = param_4;
                uVar27 = uVar18;
                plVar14 = plVar9 + param_4;
                do {
                  if (uVar20 < local_a8 - 1) {
                    puVar8[uVar20] = local_a0;
                    if (local_68 < local_a0) {
                      FUN_004014b0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x26c);
                      uVar16 = 0x26d;
                      goto LAB_00430130;
                    }
                    uVar18 = puVar8[uVar20];
                    local_68 = local_68 - local_a0;
                  }
                  else {
                    puVar8[uVar20] = local_68;
                    uVar18 = local_68;
                  }
                  plVar14[1] = 0;
                  __dest = (void *)FUN_00400260(uVar18,"external/openssl/crypto/ec/ec_mult.c",0x279)
                  ;
                  *plVar14 = (long)__dest;
                  if (__dest == (void *)0x0) {
                    FUN_004014b0(0x10,0xbb,0x41,"external/openssl/crypto/ec/ec_mult.c",0x27b);
                    FUN_00400420(pvVar13,"external/openssl/crypto/ec/ec_mult.c",0x27c);
                    goto LAB_00430084;
                  }
                  memcpy(__dest,__src,puVar8[uVar20]);
                  if (*plVar23 == 0) {
                    FUN_004014b0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x284);
                    FUN_00400420(pvVar13,"external/openssl/crypto/ec/ec_mult.c",0x285);
                    goto LAB_00430084;
                  }
                  uVar18 = puVar8[uVar20];
                  if (puVar8[uVar20] <= uVar27) {
                    uVar18 = uVar27;
                  }
                  puVar10[uVar20] = plVar23;
                  uVar20 = uVar20 + 1;
                  __src = (void *)((long)__src + local_a0);
                  plVar23 = plVar23 + local_b8;
                  uVar27 = uVar18;
                  plVar14 = plVar14 + 1;
                } while (local_a8 != uVar20);
              }
              FUN_00400420(pvVar13,"external/openssl/crypto/ec/ec_mult.c",0x28c);
              goto LAB_00430168;
            }
          }
LAB_00430084:
          plVar23 = (long *)0x0;
          goto LAB_0042fef4;
        }
      }
LAB_00430168:
      plVar14 = (long *)FUN_00400260(lVar21 * 8 + 8,"external/openssl/crypto/ec/ec_mult.c",0x296);
      plVar23 = plVar14;
      if (plVar14 != (long *)0x0) {
        plVar14[lVar21] = 0;
        plVar26 = plVar14;
        if (uVar24 != 0) {
          uVar20 = 0;
          do {
            uVar27 = 1;
            puVar10[uVar20] = plVar26;
            do {
              lVar22 = FUN_0042df90(param_1);
              *plVar26 = lVar22;
              if (lVar22 == 0) goto LAB_00430240;
              plVar26 = plVar26 + 1;
              uVar19 = uVar27 >> (*(long *)(local_70 + uVar20 * 8) - 1U & 0x3f);
              uVar27 = uVar27 + 1;
            } while (uVar19 == 0);
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar24);
        }
        if (plVar26 != plVar14 + lVar21) {
          FUN_004014b0(0x10,0xbb,0x44,"external/openssl/crypto/ec/ec_mult.c",0x2a9);
LAB_00430240:
          uVar16 = 0;
          lVar22 = 0;
          plVar23 = plVar14;
          goto LAB_0042fef8;
        }
        lVar22 = FUN_0042df90(param_1);
        if (lVar22 != 0) {
          if (uVar24 == 0) {
LAB_00430340:
            iVar6 = FUN_0042efe0(uVar24,param_1,lVar21,plVar14,param_7);
            if (iVar6 != 0) {
              uVar7 = (int)uVar18 - 1;
              if (-1 < (int)uVar7) {
                if (local_a8 != 0) {
                  uVar25 = 0;
                  uVar20 = (ulong)(int)uVar7;
                  uVar16 = 1;
                  do {
                    uVar24 = 0;
                    uVar18 = *puVar8;
                    while( true ) {
                      if (uVar20 < uVar18) {
                        cVar4 = *(char *)(plVar9[uVar24] + uVar20);
                        if ((int)cVar4 != 0) {
                          uVar17 = (uint)cVar4;
                          uVar1 = -uVar17;
                          if (-1 < (int)uVar17) {
                            uVar1 = uVar17;
                          }
                          if (uVar25 != ((int)cVar4 & 0x80U) >> 7) {
                            if (((int)uVar16 == 0) &&
                               (iVar6 = FUN_0042eee0(param_1,param_2,param_7), iVar6 == 0))
                            goto LAB_00430690;
                            uVar25 = (uint)(uVar25 == 0);
                          }
                          uVar15 = *(undefined8 *)(puVar10[uVar24] + (ulong)(uVar1 >> 1) * 8);
                          if ((int)uVar16 == 0) {
                            iVar6 = FUN_0042ed80(param_1,param_2,param_2,uVar15,param_7);
                          }
                          else {
                            iVar6 = FUN_0042e090(param_2,uVar15);
                            uVar16 = 0;
                          }
                          if (iVar6 == 0) goto LAB_0042fef8;
                        }
                      }
                      uVar24 = uVar24 + 1;
                      if (local_a8 == uVar24) break;
                      uVar18 = puVar8[uVar24];
                    }
                    uVar7 = uVar7 - 1;
                    uVar20 = uVar20 - 1;
                    if ((int)uVar7 < 0) {
                      if ((int)uVar16 != 0) goto LAB_00430674;
                      if ((uVar25 == 0) ||
                         (iVar6 = FUN_0042eee0(param_1,param_2,param_7), iVar6 != 0))
                      goto LAB_00430688;
                      goto LAB_004306c0;
                    }
                  } while (((int)uVar16 != 0) ||
                          (iVar6 = FUN_0042ee40(param_1,param_2,param_2,param_7), iVar6 != 0));
LAB_00430690:
                  uVar16 = 0;
                  goto LAB_0042fef8;
                }
                uVar25 = (int)uVar18 - (uVar7 & (int)uVar7 >> 0x1f);
                if (3 < uVar25) {
                  uVar17 = uVar25 & 0xfffffffc;
                  uVar1 = (uVar17 - 4 >> 2) + 1;
                  uVar3 = uVar1 & 7;
                  if (0x1b < uVar17 - 4) {
                    iVar6 = uVar1 - uVar3;
                    do {
                      iVar6 = iVar6 + -8;
                    } while (iVar6 != 0);
                  }
                  uVar7 = uVar7 - uVar17;
                  if (uVar3 != 0) {
                    iVar6 = -uVar3;
                    do {
                      bVar5 = iVar6 != -1;
                      iVar6 = iVar6 + 1;
                    } while (bVar5);
                  }
                  if (uVar25 == uVar17) goto LAB_00430674;
                }
                iVar6 = uVar7 + 1;
                do {
                  iVar6 = iVar6 + -1;
                } while (0 < iVar6);
              }
LAB_00430674:
              iVar6 = FUN_0042e920(param_1,param_2);
              if (iVar6 == 0) {
LAB_004306c0:
                uVar16 = 0;
              }
              else {
LAB_00430688:
                uVar16 = 1;
              }
              goto LAB_0042fef8;
            }
          }
          else {
            uVar20 = 0;
            uVar16 = *(undefined8 *)*puVar10;
            if (param_4 != 0) goto LAB_004302a0;
            while (iVar6 = FUN_0042e090(uVar16,local_b0), iVar6 != 0) {
              while( true ) {
                if (1 < *(ulong *)(local_70 + uVar20 * 8)) {
                  iVar6 = FUN_0042ee40(param_1,lVar22,*(undefined8 *)puVar10[uVar20],param_7);
                  if (iVar6 == 0) goto LAB_00430384;
                  if (*(long *)(local_70 + uVar20 * 8) != 1) {
                    lVar28 = 0;
                    do {
                      puVar2 = (undefined8 *)(puVar10[uVar20] + lVar28 * 8);
                      iVar6 = FUN_0042ed80(param_1,puVar2[1],*puVar2,lVar22,param_7);
                      if (iVar6 == 0) goto LAB_00430384;
                      uVar27 = lVar28 + 2;
                      lVar28 = lVar28 + 1;
                    } while (uVar27 >> (*(long *)(local_70 + uVar20 * 8) - 1U & 0x3f) == 0);
                  }
                }
                uVar20 = uVar20 + 1;
                if (uVar20 == uVar24) goto LAB_00430340;
                uVar16 = *(undefined8 *)puVar10[uVar20];
                if (param_4 <= uVar20) break;
LAB_004302a0:
                iVar6 = FUN_0042e090(uVar16,param_5[uVar20]);
                if (iVar6 == 0) goto LAB_00430384;
              }
            }
          }
        }
LAB_00430384:
        uVar16 = 0;
        goto LAB_0042fef8;
      }
      FUN_004014b0(0x10,0xbb,0x41,"external/openssl/crypto/ec/ec_mult.c",0x298);
    }
  }
  else {
LAB_0042fbf0:
    if (param_3 == 0) goto LAB_0042fcf8;
    local_b0 = FUN_0042e340(param_1);
    if (local_b0 != 0) {
      local_98 = *(long *)(param_1 + 0xa0);
      if (((local_98 == 0) || (*(long *)(local_98 + 0x10) == 0)) ||
         (iVar6 = FUN_0042e880(param_1,local_b0,**(undefined8 **)(local_98 + 0x20),param_7),
         iVar6 != 0)) {
        local_a0 = 0;
        local_98 = 0;
        uVar20 = 1;
        local_b8 = 0;
        local_88 = 1;
      }
      else {
        local_a0 = *(ulong *)(local_98 + 8);
        iVar6 = FUN_0040c070(param_3);
        uVar24 = 0;
        if (local_a0 != 0) {
          uVar24 = (ulong)(long)iVar6 / local_a0;
        }
        uVar18 = *(ulong *)(local_98 + 0x10);
        uVar20 = uVar18;
        if (uVar24 + 1 <= uVar18) {
          uVar20 = uVar24 + 1;
        }
        uVar24 = *(long *)(local_98 + 0x18) - 1;
        if (*(long *)(local_98 + 0x28) != uVar18 << (uVar24 & 0x3f)) {
          uVar16 = 0x44;
          uVar15 = 0x1f2;
          goto LAB_0042fc60;
        }
        local_b8 = 1L << (uVar24 & 0x3f);
        local_88 = 0;
      }
      goto LAB_0042fd08;
    }
    uVar16 = 0x71;
    uVar15 = 0x1d6;
LAB_0042fc60:
    FUN_004014b0(0x10,0xbb,uVar16,"external/openssl/crypto/ec/ec_mult.c",uVar15);
    local_70 = 0;
    plVar9 = (long *)0x0;
    puVar8 = (ulong *)0x0;
    puVar10 = (undefined8 *)0x0;
    plVar23 = (long *)0x0;
  }
LAB_0042fef4:
  plVar14 = (long *)0x0;
  lVar22 = 0;
  uVar16 = 0;
LAB_0042fef8:
  FUN_0042db80(lVar22);
  FUN_00400420(local_70,"external/openssl/crypto/ec/ec_mult.c",0x306);
  FUN_00400420(puVar8,"external/openssl/crypto/ec/ec_mult.c",0x307);
  if (plVar9 != (long *)0x0) {
    lVar21 = *plVar9;
    plVar26 = plVar9;
    while (lVar21 != 0) {
      plVar26 = plVar26 + 1;
      FUN_00400420(lVar21,"external/openssl/crypto/ec/ec_mult.c",0x30c);
      lVar21 = *plVar26;
    }
    FUN_00400420(plVar9,"external/openssl/crypto/ec/ec_mult.c",0x30e);
  }
  if (plVar14 != (long *)0x0) {
    lVar21 = *plVar14;
    while (lVar21 != 0) {
      plVar14 = plVar14 + 1;
      FUN_0042dc90();
      lVar21 = *plVar14;
    }
    FUN_00400420(plVar23,"external/openssl/crypto/ec/ec_mult.c",0x314);
  }
  FUN_00400420(puVar10,"external/openssl/crypto/ec/ec_mult.c",0x316);
  return uVar16;
}


