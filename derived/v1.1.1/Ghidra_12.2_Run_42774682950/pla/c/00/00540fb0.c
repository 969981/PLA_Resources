/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00540fb0; name: FUN_00540fb0
 */


undefined8 FUN_00540fb0(long *param_1,long param_2,long *param_3,long *param_4)

{
  long *plVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  void *pvVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  size_t sVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  long *plVar17;
  ulong *puVar18;
  ulong uVar19;
  byte *pbVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  int *piVar26;
  long lVar27;
  undefined1 auVar28 [16];
  ulong local_b8;
  undefined8 local_b0 [3];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined8 *local_68;
  
  plVar16 = param_1 + 3;
  lVar12 = *plVar16;
  plVar17 = param_1 + 2;
  lVar13 = *plVar17;
  pvVar5 = (void *)FUN_0053ef50(param_2,&local_b8);
  if ((pvVar5 != (void *)0x0) && (local_b8 != 0)) {
    lVar27 = param_1[1];
    lVar14 = param_1[2];
    if ((ulong)(lVar14 - lVar27) < local_b8) {
      uVar23 = 0x80;
      do {
        uVar22 = uVar23;
        uVar23 = uVar22 << 1;
      } while (uVar22 < (local_b8 - lVar14) + *plVar16);
      puVar6 = (undefined8 *)*param_1;
      if (puVar6 == (undefined8 *)0x0) {
LAB_00541f78:
                    /* WARNING: Subroutine does not return */
        __assert_fail("alloc","external/upb\\upb/upb.h",0x5f,"upb_realloc");
      }
      sVar10 = *plVar16 - lVar27;
      lVar27 = (*(code *)*puVar6)(puVar6,lVar27,sVar10,uVar22);
      if (lVar27 == 0) goto LAB_0054103c;
      if (sVar10 != 0) {
        memmove((void *)((lVar27 + uVar22) - sVar10),(void *)param_1[1],sVar10);
      }
      param_1[1] = lVar27;
      lVar14 = lVar27 + uVar22 + (param_1[2] - param_1[3]);
      param_1[2] = lVar14;
      param_1[3] = lVar27 + uVar22;
    }
    *plVar17 = (long)(lVar14 - local_b8);
    memcpy((void *)(lVar14 - local_b8),pvVar5,local_b8);
  }
LAB_0054103c:
  uVar23 = (ulong)*(ushort *)((long)param_3 + 0x12);
  if (uVar23 != 0) {
    plVar1 = param_1 + 1;
    do {
      lVar14 = param_3[1];
      uVar23 = uVar23 - 1;
      piVar26 = (int *)(lVar14 + uVar23 * 0xc);
      bVar3 = *(byte *)((long)piVar26 + 0xb);
      if ((~bVar3 & 3) != 0) {
        if (bVar3 == 4) {
          lVar14 = lVar14 + uVar23 * 0xc;
          pbVar20 = *(byte **)(param_2 + (ulong)*(ushort *)(lVar14 + 4));
          if (pbVar20 != (byte *)0x0) {
            lVar14 = *(long *)(*param_3 + (ulong)*(ushort *)(lVar14 + 8) * 8);
            lVar27 = *(long *)(lVar14 + 8);
            FUN_0053f9f0(auStack_78,pbVar20 + 8);
            uVar22 = FUN_0053fa50(auStack_78);
            if ((uVar22 & 1) == 0) {
              do {
                lVar21 = *plVar16;
                lVar24 = *plVar17;
                auVar28 = FUN_0053faa0(auStack_78);
                puVar6 = (undefined8 *)FUN_0053fc50(auStack_78);
                if ((ulong)*pbVar20 == 0) {
                  sVar10 = (size_t)pbVar20[1];
                  local_98 = auVar28;
                  if (sVar10 != 0) goto LAB_005411ec;
LAB_00541210:
                  uStack_80 = puVar6[1];
                  local_88 = *puVar6;
                  local_68 = puVar6;
                }
                else {
                  memcpy(local_98,auVar28._0_8_,(ulong)*pbVar20);
                  sVar10 = (size_t)pbVar20[1];
                  auVar28 = local_98;
                  if (sVar10 == 0) goto LAB_00541210;
LAB_005411ec:
                  local_68 = puVar6;
                  local_98 = auVar28;
                  memcpy(&local_88,&local_68,sVar10);
                }
                uVar22 = FUN_00541fa0(param_1,&local_88,lVar14,lVar27 + 0xc,0);
                if ((uVar22 & 1) == 0) {
                  return 0;
                }
                uVar22 = FUN_00541fa0(param_1,local_98,lVar14,lVar27,0);
                if ((uVar22 & 1) == 0) {
                  return 0;
                }
                uVar22 = FUN_00542620(param_1,((lVar24 - lVar21) + param_1[3]) - param_1[2]);
                if ((uVar22 & 1) == 0) {
                  return 0;
                }
                uVar22 = FUN_00542620(param_1,(long)(int)(*piVar26 << 3 | 2));
                if ((uVar22 & 1) == 0) {
                  return 0;
                }
                FUN_0053fcd0(auStack_78);
                uVar22 = FUN_0053fa50(auStack_78);
              } while ((uVar22 & 1) == 0);
            }
          }
          goto LAB_00541084;
        }
        sVar4 = *(short *)(lVar14 + uVar23 * 0xc + 6);
        uVar22 = (ulong)sVar4;
        if (uVar22 != 0) {
          if (sVar4 < 1) {
            if (*(int *)(param_2 + ~(int)sVar4) == *piVar26) goto LAB_005412f8;
          }
          else if ((1 << (uVar22 & 7) & (uint)*(byte *)(param_2 + (uVar22 >> 3))) != 0) {
LAB_005412f8:
            uVar11 = 0;
            goto LAB_005412fc;
          }
          goto LAB_00541084;
        }
        uVar11 = 1;
LAB_005412fc:
        uVar22 = FUN_00541fa0(param_1,param_2 + (ulong)*(ushort *)(lVar14 + uVar23 * 0xc + 4),
                              param_3,piVar26,uVar11);
        goto joined_r0x00541318;
      }
      puVar18 = *(ulong **)(param_2 + (ulong)*(ushort *)(lVar14 + uVar23 * 0xc + 4));
      if ((puVar18 == (ulong *)0x0) || (uVar22 = puVar18[1], uVar22 == 0)) goto LAB_00541084;
      switch(*(undefined1 *)(lVar14 + uVar23 * 0xc + 10)) {
      case 1:
        uVar15 = uVar22 * 8;
        puVar6 = (undefined8 *)(*puVar18 & 0xfffffffffffffff8);
        if (bVar3 != 7) {
          iVar25 = *piVar26;
          puVar9 = puVar6 + uVar22;
          do {
            lVar14 = *plVar17;
            lVar27 = *plVar1;
            if ((ulong)(lVar14 - lVar27) < 8) {
              uVar22 = 0x80;
              do {
                uVar15 = uVar22;
                uVar22 = uVar15 << 1;
              } while (uVar15 < (*plVar16 - lVar14) + 8U);
              puVar7 = (undefined8 *)*param_1;
              if (puVar7 == (undefined8 *)0x0) goto LAB_00541f78;
              sVar10 = *plVar16 - lVar27;
              lVar27 = (*(code *)*puVar7)(puVar7,lVar27,sVar10,uVar15);
              if (lVar27 == 0) {
                return 0;
              }
              if (sVar10 != 0) {
                memmove((void *)((lVar27 + uVar15) - sVar10),(void *)*plVar1,sVar10);
              }
              lVar14 = lVar27 + uVar15 + (*plVar17 - *plVar16);
              *plVar17 = lVar14;
              *plVar16 = lVar27 + uVar15;
              *plVar1 = lVar27;
            }
            puVar9 = puVar9 + -1;
            param_1[2] = lVar14 + -8;
            *(undefined8 *)(lVar14 + -8) = *puVar9;
            uVar22 = FUN_00542620(param_1,iVar25 << 3 | 1);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
          } while (puVar9 != puVar6);
          goto switchD_005410ec_default;
        }
        if (uVar15 != 0) {
          lVar14 = *plVar17;
          lVar27 = *plVar1;
          if ((ulong)(lVar14 - lVar27) < uVar15) {
            lVar21 = *plVar16;
            uVar22 = 0x80;
            do {
              uVar8 = uVar22;
              uVar22 = uVar8 << 1;
            } while (uVar8 < (uVar15 - lVar14) + lVar21);
            puVar9 = (undefined8 *)*param_1;
            if (puVar9 == (undefined8 *)0x0) goto LAB_00541f78;
LAB_00541e40:
            sVar10 = lVar21 - lVar27;
            lVar27 = (*(code *)*puVar9)(puVar9,lVar27,sVar10,uVar8);
            if (lVar27 == 0) {
              return 0;
            }
            if (sVar10 != 0) {
              memmove((void *)((lVar27 + uVar8) - sVar10),(void *)*plVar1,sVar10);
            }
            lVar14 = lVar27 + uVar8 + (*plVar17 - *plVar16);
            *plVar17 = lVar14;
            *plVar16 = lVar27 + uVar8;
            *plVar1 = lVar27;
          }
LAB_005419b8:
          *plVar17 = (long)(lVar14 - uVar15);
          memcpy((void *)(lVar14 - uVar15),puVar6,uVar15);
        }
LAB_005419cc:
        uVar22 = FUN_00542620(param_1,uVar15);
        goto joined_r0x00541bd8;
      case 2:
        uVar15 = uVar22 * 4;
        puVar6 = (undefined8 *)(*puVar18 & 0xfffffffffffffff8);
        if (bVar3 != 7) {
          iVar25 = *piVar26;
          puVar9 = (undefined8 *)((long)puVar6 + uVar15);
          do {
            lVar14 = *plVar17;
            lVar27 = *plVar1;
            if ((ulong)(lVar14 - lVar27) < 4) {
              uVar22 = 0x80;
              do {
                uVar15 = uVar22;
                uVar22 = uVar15 << 1;
              } while (uVar15 < (*plVar16 - lVar14) + 4U);
              puVar7 = (undefined8 *)*param_1;
              if (puVar7 == (undefined8 *)0x0) goto LAB_00541f78;
              sVar10 = *plVar16 - lVar27;
              lVar27 = (*(code *)*puVar7)(puVar7,lVar27,sVar10,uVar15);
              if (lVar27 == 0) {
                return 0;
              }
              if (sVar10 != 0) {
                memmove((void *)((lVar27 + uVar15) - sVar10),(void *)*plVar1,sVar10);
              }
              lVar14 = lVar27 + uVar15 + (*plVar17 - *plVar16);
              *plVar17 = lVar14;
              *plVar16 = lVar27 + uVar15;
              *plVar1 = lVar27;
            }
            puVar9 = (undefined8 *)((long)puVar9 + -4);
            param_1[2] = lVar14 + -4;
            *(undefined4 *)(lVar14 + -4) = *(undefined4 *)puVar9;
            uVar22 = FUN_00542620(param_1,iVar25 << 3 | 5);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
          } while (puVar9 != puVar6);
          goto switchD_005410ec_default;
        }
        if (uVar15 == 0) goto LAB_005419cc;
        lVar14 = *plVar17;
        lVar27 = *plVar1;
        if (uVar15 <= (ulong)(lVar14 - lVar27)) goto LAB_005419b8;
        lVar21 = *plVar16;
        uVar22 = 0x80;
        do {
          uVar8 = uVar22;
          uVar22 = uVar8 << 1;
        } while (uVar8 < (uVar15 - lVar14) + lVar21);
LAB_00541e34:
        puVar9 = (undefined8 *)*param_1;
        if (puVar9 != (undefined8 *)0x0) goto LAB_00541e40;
        goto LAB_00541f78;
      case 3:
      case 4:
        uVar15 = *puVar18;
        lVar27 = *plVar16;
        lVar21 = *plVar17;
        if ((bVar3 == 7) || (iVar25 = *piVar26 << 3, iVar25 == 0)) {
          lVar14 = uVar22 << 3;
          do {
            uVar22 = FUN_00542620(param_1,*(undefined8 *)
                                           (((uVar15 & 0xfffffffffffffff8) - 8) + lVar14));
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
        }
        else {
          lVar14 = uVar22 << 3;
          do {
            uVar22 = FUN_00542620(param_1,*(undefined8 *)
                                           (((uVar15 & 0xfffffffffffffff8) - 8) + lVar14));
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            uVar22 = FUN_00542620(param_1,iVar25);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
LAB_00541b24:
          if (iVar25 != 0) goto switchD_005410ec_default;
        }
        break;
      case 5:
      case 0xe:
        uVar15 = *puVar18;
        lVar27 = *plVar16;
        lVar21 = *plVar17;
        if ((bVar3 != 7) && (iVar25 = *piVar26 << 3, iVar25 != 0)) {
          lVar14 = uVar22 << 2;
          do {
            uVar22 = FUN_00542620(param_1,(long)*(int *)(((uVar15 & 0xfffffffffffffff8) - 4) +
                                                        lVar14));
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            uVar22 = FUN_00542620(param_1,iVar25);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
          goto LAB_00541b24;
        }
        lVar14 = uVar22 << 2;
        do {
          uVar22 = FUN_00542620(param_1,(long)*(int *)(((uVar15 & 0xfffffffffffffff8) - 4) + lVar14)
                               );
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          lVar14 = lVar14 + -4;
        } while (lVar14 != 0);
        break;
      case 6:
      case 0x10:
        uVar15 = uVar22 * 8;
        puVar6 = (undefined8 *)(*puVar18 & 0xfffffffffffffff8);
        if (bVar3 == 7) {
          if (uVar15 != 0) {
            lVar14 = *plVar17;
            lVar27 = *plVar1;
            if ((ulong)(lVar14 - lVar27) < uVar15) {
              lVar21 = *plVar16;
              uVar22 = 0x80;
              do {
                uVar8 = uVar22;
                uVar22 = uVar8 << 1;
              } while (uVar8 < (uVar15 - lVar14) + lVar21);
              goto LAB_00541e34;
            }
            goto LAB_005419b8;
          }
          goto LAB_005419cc;
        }
        iVar25 = *piVar26;
        puVar9 = puVar6 + uVar22;
        do {
          lVar14 = *plVar17;
          lVar27 = *plVar1;
          if ((ulong)(lVar14 - lVar27) < 8) {
            uVar22 = 0x80;
            do {
              uVar15 = uVar22;
              uVar22 = uVar15 << 1;
            } while (uVar15 < (*plVar16 - lVar14) + 8U);
            puVar7 = (undefined8 *)*param_1;
            if (puVar7 == (undefined8 *)0x0) goto LAB_00541f78;
            sVar10 = *plVar16 - lVar27;
            lVar27 = (*(code *)*puVar7)(puVar7,lVar27,sVar10,uVar15);
            if (lVar27 == 0) {
              return 0;
            }
            if (sVar10 != 0) {
              memmove((void *)((lVar27 + uVar15) - sVar10),(void *)*plVar1,sVar10);
            }
            lVar14 = lVar27 + uVar15 + (*plVar17 - *plVar16);
            *plVar17 = lVar14;
            *plVar16 = lVar27 + uVar15;
            *plVar1 = lVar27;
          }
          puVar9 = puVar9 + -1;
          param_1[2] = lVar14 + -8;
          *(undefined8 *)(lVar14 + -8) = *puVar9;
          uVar22 = FUN_00542620(param_1,iVar25 << 3 | 1);
          if ((uVar22 & 1) == 0) {
            return 0;
          }
        } while (puVar9 != puVar6);
        goto switchD_005410ec_default;
      case 7:
      case 0xf:
        uVar15 = uVar22 * 4;
        puVar6 = (undefined8 *)(*puVar18 & 0xfffffffffffffff8);
        if (bVar3 == 7) {
          if (uVar15 != 0) {
            lVar14 = *plVar17;
            lVar27 = *plVar1;
            if ((ulong)(lVar14 - lVar27) < uVar15) {
              lVar21 = *plVar16;
              uVar22 = 0x80;
              do {
                uVar8 = uVar22;
                uVar22 = uVar8 << 1;
              } while (uVar8 < (uVar15 - lVar14) + lVar21);
              goto LAB_00541e34;
            }
            goto LAB_005419b8;
          }
          goto LAB_005419cc;
        }
        iVar25 = *piVar26;
        puVar9 = (undefined8 *)((long)puVar6 + uVar15);
        do {
          lVar14 = *plVar17;
          lVar27 = *plVar1;
          if ((ulong)(lVar14 - lVar27) < 4) {
            uVar22 = 0x80;
            do {
              uVar15 = uVar22;
              uVar22 = uVar15 << 1;
            } while (uVar15 < (*plVar16 - lVar14) + 4U);
            puVar7 = (undefined8 *)*param_1;
            if (puVar7 == (undefined8 *)0x0) goto LAB_00541f78;
            sVar10 = *plVar16 - lVar27;
            lVar27 = (*(code *)*puVar7)(puVar7,lVar27,sVar10,uVar15);
            if (lVar27 == 0) {
              return 0;
            }
            if (sVar10 != 0) {
              memmove((void *)((lVar27 + uVar15) - sVar10),(void *)*plVar1,sVar10);
            }
            lVar14 = lVar27 + uVar15 + (*plVar17 - *plVar16);
            *plVar17 = lVar14;
            *plVar16 = lVar27 + uVar15;
            *plVar1 = lVar27;
          }
          puVar9 = (undefined8 *)((long)puVar9 + -4);
          param_1[2] = lVar14 + -4;
          *(undefined4 *)(lVar14 + -4) = *(undefined4 *)puVar9;
          uVar22 = FUN_00542620(param_1,iVar25 << 3 | 5);
          if ((uVar22 & 1) == 0) {
            return 0;
          }
        } while (puVar9 != puVar6);
        goto switchD_005410ec_default;
      case 8:
        uVar15 = *puVar18;
        lVar27 = *plVar16;
        lVar21 = *plVar17;
        if ((bVar3 != 7) && (iVar25 = *piVar26 << 3, iVar25 != 0)) {
          do {
            uVar8 = FUN_00542620(param_1,*(undefined1 *)
                                          (((uVar15 & 0xfffffffffffffff8) - 1) + uVar22));
            if ((uVar8 & 1) == 0) {
              return 0;
            }
            uVar8 = FUN_00542620(param_1,iVar25);
            if ((uVar8 & 1) == 0) {
              return 0;
            }
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
          goto LAB_00541b24;
        }
        do {
          uVar8 = FUN_00542620(param_1,*(undefined1 *)(((uVar15 & 0xfffffffffffffff8) - 1) + uVar22)
                              );
          if ((uVar8 & 1) == 0) {
            return 0;
          }
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
        break;
      case 9:
      case 0xc:
        uVar15 = *puVar18;
        puVar6 = (undefined8 *)(uVar15 & 0xfffffffffffffff8) + uVar22 * 2;
        do {
          puVar9 = puVar6 + -2;
          pvVar5 = (void *)*puVar9;
          uVar22 = puVar6[-1];
          if (uVar22 == 0) {
            uVar22 = FUN_00542620(param_1,0);
          }
          else {
            lVar14 = *plVar17;
            if ((ulong)(lVar14 - *plVar1) < uVar22) {
              uVar8 = 0x80;
              do {
                uVar19 = uVar8;
                uVar8 = uVar19 << 1;
              } while (uVar19 < (uVar22 - lVar14) + *plVar16);
              if ((undefined8 *)*param_1 == (undefined8 *)0x0) goto LAB_00541f78;
              sVar10 = *plVar16 - *plVar1;
              lVar27 = (**(code **)*param_1)();
              if (lVar27 == 0) {
                return 0;
              }
              if (sVar10 != 0) {
                memmove((void *)((lVar27 + uVar19) - sVar10),(void *)*plVar1,sVar10);
              }
              lVar14 = lVar27 + uVar19 + (*plVar17 - *plVar16);
              *plVar17 = lVar14;
              *plVar16 = lVar27 + uVar19;
              *plVar1 = lVar27;
            }
            *plVar17 = (long)(lVar14 - uVar22);
            memcpy((void *)(lVar14 - uVar22),pvVar5,uVar22);
            uVar22 = FUN_00542620(param_1,puVar6[-1]);
          }
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          uVar22 = FUN_00542620(param_1,(long)(int)(*piVar26 << 3 | 2));
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          puVar6 = puVar9;
        } while (puVar9 != (undefined8 *)(uVar15 & 0xfffffffffffffff8));
        goto LAB_00541084;
      case 10:
        lVar27 = uVar22 << 3;
        uVar22 = *puVar18;
        uVar11 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar14 + uVar23 * 0xc + 8) * 8);
        do {
          uVar15 = FUN_00542620(param_1,(long)(int)(*piVar26 << 3 | 4));
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          uVar15 = FUN_00540fb0(param_1,*(undefined8 *)
                                         (((uVar22 & 0xfffffffffffffff8) - 8) + lVar27),uVar11,
                                local_b0);
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          uVar15 = FUN_00542620(param_1,(long)(int)(*piVar26 << 3 | 3));
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          lVar27 = lVar27 + -8;
        } while (lVar27 != 0);
        goto LAB_00541084;
      case 0xb:
        lVar27 = uVar22 << 3;
        uVar22 = *puVar18;
        uVar11 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(lVar14 + uVar23 * 0xc + 8) * 8);
        do {
          uVar15 = FUN_00540fb0(param_1,*(undefined8 *)
                                         (((uVar22 & 0xfffffffffffffff8) - 8) + lVar27),uVar11,
                                local_b0);
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          uVar15 = FUN_00542620(param_1,local_b0[0]);
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          uVar15 = FUN_00542620(param_1,(long)(int)(*piVar26 << 3 | 2));
          if ((uVar15 & 1) == 0) {
            return 0;
          }
          lVar27 = lVar27 + -8;
        } while (lVar27 != 0);
        goto LAB_00541084;
      case 0xd:
        uVar15 = *puVar18;
        lVar27 = *plVar16;
        lVar21 = *plVar17;
        if ((bVar3 != 7) && (iVar25 = *piVar26 << 3, iVar25 != 0)) {
          lVar14 = uVar22 << 2;
          do {
            uVar22 = FUN_00542620(param_1,*(undefined4 *)
                                           (((uVar15 & 0xfffffffffffffff8) - 4) + lVar14));
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            uVar22 = FUN_00542620(param_1,iVar25);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
          goto LAB_00541b24;
        }
        lVar14 = uVar22 << 2;
        do {
          uVar22 = FUN_00542620(param_1,*(undefined4 *)
                                         (((uVar15 & 0xfffffffffffffff8) - 4) + lVar14));
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          lVar14 = lVar14 + -4;
        } while (lVar14 != 0);
        break;
      case 0x11:
        uVar15 = *puVar18;
        lVar27 = *plVar16;
        lVar21 = *plVar17;
        if ((bVar3 != 7) && (iVar25 = *piVar26 << 3, iVar25 != 0)) {
          lVar14 = uVar22 << 2;
          do {
            iVar2 = *(int *)(((uVar15 & 0xfffffffffffffff8) - 4) + lVar14);
            uVar22 = FUN_00542620(param_1,iVar2 << 1 ^ iVar2 >> 0x1f);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            uVar22 = FUN_00542620(param_1,iVar25);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            lVar14 = lVar14 + -4;
          } while (lVar14 != 0);
          goto LAB_00541b24;
        }
        lVar14 = uVar22 << 2;
        do {
          iVar25 = *(int *)(((uVar15 & 0xfffffffffffffff8) - 4) + lVar14);
          uVar22 = FUN_00542620(param_1,iVar25 << 1 ^ iVar25 >> 0x1f);
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          lVar14 = lVar14 + -4;
        } while (lVar14 != 0);
        break;
      case 0x12:
        uVar15 = *puVar18;
        lVar27 = *plVar16;
        lVar21 = *plVar17;
        lVar14 = uVar22 << 3;
        if ((bVar3 != 7) && (iVar25 = *piVar26 << 3, iVar25 != 0)) {
          do {
            lVar24 = *(long *)(((uVar15 & 0xfffffffffffffff8) - 8) + lVar14);
            uVar22 = FUN_00542620(param_1,lVar24 << 1 ^ lVar24 >> 0x3f);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            uVar22 = FUN_00542620(param_1,iVar25);
            if ((uVar22 & 1) == 0) {
              return 0;
            }
            lVar14 = lVar14 + -8;
          } while (lVar14 != 0);
          goto LAB_00541b24;
        }
        do {
          lVar24 = *(long *)(((uVar15 & 0xfffffffffffffff8) - 8) + lVar14);
          uVar22 = FUN_00542620(param_1,lVar24 << 1 ^ lVar24 >> 0x3f);
          if ((uVar22 & 1) == 0) {
            return 0;
          }
          lVar14 = lVar14 + -8;
        } while (lVar14 != 0);
        break;
      default:
        goto switchD_005410ec_default;
      }
      uVar22 = FUN_00542620(param_1,((lVar21 - lVar27) + param_1[3]) - param_1[2]);
joined_r0x00541bd8:
      if ((uVar22 & 1) == 0) {
        return 0;
      }
switchD_005410ec_default:
      if (bVar3 == 7) {
        uVar22 = FUN_00542620(param_1,(long)(int)(*piVar26 << 3 | 2));
joined_r0x00541318:
        if ((uVar22 & 1) == 0) {
          return 0;
        }
      }
LAB_00541084:
    } while (0 < (long)uVar23);
  }
  *param_4 = ((lVar13 - lVar12) + *plVar16) - *plVar17;
  return 1;
}


