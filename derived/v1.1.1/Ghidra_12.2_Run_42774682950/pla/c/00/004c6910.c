/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c6910; name: FUN_004c6910
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_004c6910(int *param_1,int param_2,long param_3,long *param_4,ulong param_5,int param_6,
                long *param_7)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  ulong uVar14;
  int *piVar15;
  long lVar16;
  ulong uVar17;
  undefined1 *puVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  ulong *puVar22;
  undefined8 *puVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  ulong local_10b8;
  long local_1088;
  undefined1 local_1080;
  undefined7 uStack_107f;
  ulong local_1078;
  long local_1070;
  ulong local_1068;
  undefined8 local_1060 [320];
  undefined1 auStack_660 [1536];
  
  piVar24 = (int *)local_1060;
  puVar23 = local_1060;
  local_1068 = 0;
  if (param_5 == 0) {
    local_1088 = 0;
    uVar14 = *(ulong *)(param_1 + 0x204);
    if (uVar14 != 0) goto LAB_004c6974;
LAB_004c6a1c:
    if (*(int *)(*(long *)(param_1 + 0x2a) + 0xfc) != 0) {
      iVar2 = (**(code **)(*(long *)(param_1 + 2) + 0x78))(param_1);
      if (iVar2 < 1) {
        return iVar2;
      }
      uVar14 = *(ulong *)(param_1 + 0x204);
    }
    if ((param_5 <= uVar14) || (iVar2 = FUN_004c9650(param_1,param_5,0), iVar2 != 0)) {
      if ((param_6 == 0) && (local_1088 == 0)) {
        return 0;
      }
      if (((*(long *)(param_1 + 0x142) == 0) || (*(long *)(param_1 + 0x11a) == 0)) ||
         (lVar16 = FUN_0041cd10(*(undefined8 *)(param_1 + 0x120)), lVar16 == 0)) {
        iVar2 = 0;
        if (!(*(long *)(param_1 + 0x11a) == 0 || param_6 != 0)) goto LAB_004c6aac;
LAB_004c6b28:
        local_10b8 = 0;
joined_r0x004c6b2c:
        if (param_6 == 0) {
LAB_004c6ac0:
          if (local_10b8 != 0) {
            iVar3 = FUN_004cb030(auStack_660,*(undefined8 *)(param_1 + 0x210),
                                 *(undefined8 *)(param_1 + 0x214),0);
            if ((iVar3 == 0) ||
               (iVar3 = FUN_004ca940(auStack_660,*(long *)(param_1 + 0x216) + local_10b8,0),
               iVar3 == 0)) {
              uVar10 = 0x306;
              goto LAB_004c6d08;
            }
            goto LAB_004c6b6c;
          }
          uVar14 = 0;
          if (param_5 == 0) goto LAB_004c6b78;
          puVar22 = (ulong *)(param_1 + 0x216);
          puVar18 = auStack_660;
          do {
            uVar12 = (ulong)~((int)puVar22[-3] + 4U) & 7;
            *puVar22 = uVar12;
            iVar3 = FUN_004cb030(puVar18,puVar22[-3],puVar22[-1],0);
            if ((iVar3 == 0) || (iVar3 = FUN_004ca940(puVar18,uVar12,0), iVar3 == 0)) {
              uVar10 = 0x44;
              uVar11 = 0x318;
              goto LAB_004c7534;
            }
            uVar14 = uVar14 + 1;
            puVar18 = puVar18 + 0x30;
            puVar22 = puVar22 + 5;
          } while (param_5 != uVar14);
          uVar14 = param_5;
          if (*(long *)(param_1 + 0x11a) != 0) goto LAB_004c6b80;
          goto LAB_004c6d8c;
        }
LAB_004c6b30:
        uVar14 = (ulong)~((int)*(undefined8 *)(param_1 + 0x210) + 1U) & 7;
        *(ulong *)(param_1 + 0x216) = uVar14;
        iVar3 = FUN_004cb030(auStack_660,*(undefined8 *)(param_1 + 0x210),
                             *(undefined8 *)(param_1 + 0x214),0);
        if ((iVar3 == 0) || (iVar3 = FUN_004ca940(auStack_660,uVar14,0), iVar3 == 0)) {
          uVar10 = 0x2fa;
          goto LAB_004c6d08;
        }
LAB_004c6b6c:
        uVar14 = 1;
LAB_004c6b78:
        if (*(long *)(param_1 + 0x11a) == 0) {
LAB_004c6d8c:
          iVar3 = 0;
        }
        else {
LAB_004c6b80:
          uVar4 = *(uint *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
          if (((uVar4 & 1) == 0) ||
             (((((uVar4 >> 3 & 1) == 0 && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) &&
               (iVar3 != 0x10000)) || ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1))))))
          goto LAB_004c6d8c;
          FUN_0041c7c0();
          uVar4 = FUN_0041c7b0();
          if ((uVar4 & 0xf0007) - 6 < 2) {
            iVar3 = 8;
          }
          else {
            if ((uVar4 & 0xf0007) != 2) goto LAB_004c6d8c;
            iVar6 = FUN_0041ca80(*(undefined8 *)(param_1 + 0x11a));
            iVar3 = 0;
            if (1 < iVar6) {
              iVar3 = iVar6;
            }
          }
        }
        memset(local_1060,0,0xa00);
        if (param_5 == 0) {
          local_1088 = 0;
        }
        else {
          puVar18 = auStack_660;
          local_1088 = 0;
          uVar12 = param_5;
          do {
            local_1078 = 0;
            iVar6 = 0x303;
            if (*param_1 != 0x304) {
              iVar6 = *param_1;
            }
            if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
                  (iVar19 = **(int **)(param_1 + 2), 0x303 < iVar19)) && (iVar19 != 0x10000)) ||
                ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
               (*(long *)(param_1 + 0x11a) != 0)) {
              if (param_2 == 0x15) {
                iVar19 = 0x17;
                if (param_1[0x1f] == 2) goto LAB_004c6e48;
              }
              else {
                iVar19 = 0x17;
              }
            }
            else {
LAB_004c6e48:
              iVar19 = param_2;
            }
            piVar24[1] = iVar19;
            iVar5 = FUN_004c9910(param_1);
            iVar21 = iVar6;
            if ((((iVar5 == 0xc) && (param_1[0x1d0] == 0)) &&
                (uVar4 = FUN_004c4ae0(param_1), (uVar4 & 0xffffff00) == 0x300)) &&
               ((iVar5 = FUN_004c4ae0(param_1), 0x301 < iVar5 &&
                (iVar21 = 0x301, param_1[0x136] != 0)))) {
              iVar21 = iVar6;
            }
            *piVar24 = iVar21;
            lVar16 = *param_4;
            if (*(long *)(param_1 + 0x116) != 0) {
              lVar16 = *param_4 + 0x400;
            }
            iVar6 = FUN_004cb590(puVar18,iVar19,1);
            if ((((iVar6 == 0) || (iVar6 = FUN_004cb590(puVar18,iVar21,2), iVar6 == 0)) ||
                ((iVar6 = FUN_004cac70(puVar18,2), iVar6 == 0 ||
                 ((0 < iVar3 && (iVar6 = FUN_004ca940(puVar18,(long)iVar3,0), iVar6 == 0)))))) ||
               ((lVar16 != 0 && (iVar6 = FUN_004caa30(puVar18,lVar16,&local_1078), iVar6 == 0)))) {
              uVar10 = 0x44;
              uVar11 = 0x362;
              goto LAB_004c7534;
            }
            *(ulong *)(piVar24 + 8) = local_1078;
            lVar16 = *param_4;
            *(long *)(piVar24 + 2) = lVar16;
            *(long *)(piVar24 + 10) = param_3 + local_1088;
            if (*(long *)(param_1 + 0x116) == 0) {
              iVar6 = FUN_004cb7f0(puVar18,param_3 + local_1088,lVar16);
              if (iVar6 == 0) {
                uVar10 = 0x44;
                uVar11 = 0x37c;
                goto LAB_004c7534;
              }
              *(undefined8 *)(piVar24 + 10) = *(undefined8 *)(piVar24 + 8);
              piVar15 = *(int **)(param_1 + 2);
              bVar1 = *(byte *)(*(long *)(piVar15 + 0x30) + 0x60);
            }
            else {
              iVar6 = FUN_004cf3f0(param_1,piVar24);
              if ((iVar6 == 0) ||
                 (iVar6 = FUN_004ca940(puVar18,*(undefined8 *)(piVar24 + 2),0), iVar6 == 0)) {
                uVar10 = 0x8d;
                uVar11 = 0x376;
                goto LAB_004c7534;
              }
              piVar15 = *(int **)(param_1 + 2);
              bVar1 = *(byte *)(*(long *)(piVar15 + 0x30) + 0x60);
            }
            if ((((((bVar1 >> 3 & 1) == 0) && (0x303 < *piVar15)) && (*piVar15 != 0x10000)) ||
                ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
               ((*(long *)(param_1 + 0x11a) != 0 && ((param_2 != 0x15 || (param_1[0x1f] != 2)))))) {
              iVar6 = FUN_004cb590(puVar18,param_2,1);
              if (iVar6 == 0) {
                uVar10 = 0x44;
                uVar11 = 0x38a;
                goto LAB_004c7534;
              }
              *(long *)(piVar24 + 2) = *(long *)(piVar24 + 2) + 1;
              uVar7 = FUN_004c5ac0(param_1);
              uVar20 = *(ulong *)(piVar24 + 2);
              if (uVar20 < (uVar7 & 0xffffffff)) {
                if (*(code **)(param_1 + 0x5fa) == (code *)0x0) {
                  uVar8 = *(ulong *)(param_1 + 0x5fe);
                  if (uVar8 != 0) {
                    if ((uVar8 & uVar8 - 1) == 0) {
                      uVar17 = uVar8 - 1 & uVar20;
                    }
                    else {
                      uVar17 = 0;
                      if (uVar8 != 0) {
                        uVar17 = uVar20 / uVar8;
                      }
                      uVar17 = uVar20 - uVar17 * uVar8;
                    }
                    if (uVar17 != 0) {
                      uVar8 = uVar8 - uVar17;
                      goto joined_r0x004c70c0;
                    }
                  }
                }
                else {
                  uVar8 = (**(code **)(param_1 + 0x5fa))
                                    (param_1,param_2,uVar20,*(undefined8 *)(param_1 + 0x5fc));
joined_r0x004c70c0:
                  if (uVar8 != 0) {
                    uVar20 = (uVar7 & 0xffffffff) - uVar20;
                    if (uVar8 <= uVar20) {
                      uVar20 = uVar8;
                    }
                    iVar6 = FUN_004cb700(puVar18,0,uVar20);
                    if (iVar6 == 0) {
                      uVar10 = 0x44;
                      uVar11 = 0x3ac;
                      goto LAB_004c7534;
                    }
                    *(ulong *)(piVar24 + 2) = *(long *)(piVar24 + 2) + uVar20;
                  }
                }
              }
            }
            if (((iVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) == 0)) &&
               ((iVar6 = FUN_004ca940(puVar18,(long)iVar2,&local_1080), iVar6 == 0 ||
                (iVar6 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                                   (param_1,piVar24,CONCAT71(uStack_107f,local_1080),1), iVar6 == 0)
                ))) {
              uVar10 = 0x44;
              uVar11 = 0x3c0;
              goto LAB_004c7534;
            }
            iVar6 = FUN_004caa30(puVar18,0x10,0);
            if ((iVar6 == 0) || (iVar6 = FUN_004cbb30(puVar18,&local_1070), iVar6 == 0)) {
              uVar10 = 0x44;
              uVar11 = 0x3d2;
              goto LAB_004c7534;
            }
            local_1088 = lVar16 + local_1088;
            lVar16 = FUN_004caf10(puVar18);
            uVar12 = uVar12 - 1;
            param_4 = param_4 + 1;
            *(long *)(piVar24 + 8) = lVar16 - local_1070;
            *(long *)(piVar24 + 10) = lVar16 - local_1070;
            *(long *)(piVar24 + 2) = local_1070;
            piVar24 = piVar24 + 0x14;
            puVar18 = puVar18 + 0x30;
          } while (uVar12 != 0);
        }
        if (param_1[0x1f] == 2) {
          iVar3 = FUN_004f5570(param_1,local_1060,param_5,1);
          if (0 < iVar3) goto LAB_004c7210;
          iVar2 = FUN_004c9a20(param_1);
          if (iVar2 == 0) {
            uVar10 = 0x44;
            uVar11 = 0x3e6;
            goto LAB_004c7534;
          }
        }
        else {
          iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))
                            (param_1,local_1060,param_5,1);
          if (0 < iVar3) {
LAB_004c7210:
            if (param_5 != 0) {
              puVar18 = auStack_660;
              lVar16 = 0x860;
              do {
                iVar3 = FUN_004cbb30(puVar18,&local_1078);
                if (iVar3 == 0) {
LAB_004c7460:
                  uVar10 = 0x44;
                  uVar11 = 0x402;
                  goto LAB_004c7534;
                }
                lVar9 = *(ulong *)((long)puVar23 + 8) - local_1078;
                if ((*(ulong *)((long)puVar23 + 8) < local_1078) ||
                   ((lVar9 != 0 && (iVar3 = FUN_004ca940(puVar18,lVar9,0), iVar3 == 0))))
                goto LAB_004c7460;
                if ((iVar2 != 0) && (((uint)**(undefined8 **)(param_1 + 0x2a) >> 10 & 1) != 0)) {
                  iVar3 = FUN_004ca940(puVar18,(long)iVar2,&local_1080);
                  if ((iVar3 == 0) ||
                     (iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                                        (param_1,puVar23,CONCAT71(uStack_107f,local_1080),1),
                     iVar3 == 0)) {
                    uVar10 = 0x44;
                    uVar11 = 0x40b;
                    goto LAB_004c7534;
                  }
                  *(long *)((long)puVar23 + 8) = *(long *)((long)puVar23 + 8) + (long)iVar2;
                }
                iVar3 = FUN_004cbb30(puVar18,&local_1070);
                if ((iVar3 == 0) || (iVar3 = FUN_004cade0(puVar18), iVar3 == 0)) {
                  uVar10 = 0x44;
                  uVar11 = 0x414;
                  goto LAB_004c7534;
                }
                if (*(long *)(param_1 + 0x2e) != 0) {
                  lVar9 = FUN_004caf10(puVar18);
                  (**(code **)(param_1 + 0x2e))
                            (1,0,0x100,(lVar9 - local_1070) + -5,5,param_1,
                             *(undefined8 *)(param_1 + 0x30));
                  if ((((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0
                         ) && (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) &&
                       (iVar3 != 0x10000)) || ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1))))
                     && (*(long *)(param_1 + 0x11a) != 0)) {
                    local_1080 = (undefined1)param_2;
                    (**(code **)(param_1 + 0x2e))
                              (1,*param_1,0x101,&local_1080,1,param_1,
                               *(undefined8 *)(param_1 + 0x30));
                  }
                }
                iVar3 = FUN_004cb3b0(puVar18);
                if (iVar3 == 0) {
                  uVar10 = 0x44;
                  uVar11 = 0x429;
                  goto LAB_004c7534;
                }
                lVar9 = *(long *)((long)puVar23 + 8) + 5;
                *(int *)((long)puVar23 + 4) = param_2;
                *(long *)((long)puVar23 + 8) = lVar9;
                if (param_6 != 0) {
                  *param_7 = lVar9;
                  return 1;
                }
                param_5 = param_5 - 1;
                *(ulong *)((long)param_1 + lVar16) = local_10b8 + lVar9;
                puVar23 = (undefined8 *)((long)puVar23 + 0x50);
                puVar18 = puVar18 + 0x30;
                lVar16 = lVar16 + 0x28;
              } while (param_5 != 0);
            }
            *(long *)(param_1 + 0x5dc) = local_1088;
            *(long *)(param_1 + 0x5e2) = param_3;
            param_1[0x5de] = param_2;
            *(long *)(param_1 + 0x5e0) = local_1088;
            goto LAB_004c6998;
          }
          iVar2 = FUN_004c9a20(param_1);
          if (iVar2 == 0) {
            uVar10 = 0x44;
            uVar11 = 0x3ee;
LAB_004c7534:
            FUN_004c99a0(param_1,0x50,0x68,uVar10,"external/openssl/ssl/record/rec_layer_s3.c",
                         uVar11);
          }
        }
        if (uVar14 != 0) {
          puVar18 = auStack_660;
          do {
            FUN_004cbb80(puVar18);
            uVar14 = uVar14 - 1;
            puVar18 = puVar18 + 0x30;
          } while (uVar14 != 0);
          return -1;
        }
      }
      else {
        FUN_0041cd10(*(undefined8 *)(param_1 + 0x120));
        iVar2 = FUN_0041ccc0();
        if (-1 < iVar2) {
          if (param_6 != 0) goto LAB_004c6b28;
LAB_004c6aac:
          lVar16 = *(long *)(param_1 + 0x2a);
          if (*(int *)(lVar16 + 0xdc) == 0) {
            local_10b8 = 0;
            if ((param_2 == 0x17) && (*(int *)(lVar16 + 0xd8) != 0)) {
              local_1060[0] = 0;
              iVar3 = FUN_004c6910(param_1,0x17,param_3,local_1060,1,1,&local_1068);
              if (iVar3 < 1) goto LAB_004c6d10;
              if (0x55 < local_1068) {
                uVar10 = 0x2e2;
                goto LAB_004c6d08;
              }
              lVar16 = *(long *)(param_1 + 0x2a);
              local_10b8 = local_1068;
            }
            *(undefined4 *)(lVar16 + 0xdc) = 1;
            goto joined_r0x004c6b2c;
          }
          local_10b8 = 0;
          if (param_6 == 0) goto LAB_004c6ac0;
          goto LAB_004c6b30;
        }
        uVar10 = 0x2c0;
LAB_004c6d08:
        FUN_004c99a0(param_1,0x50,0x68,0x44,"external/openssl/ssl/record/rec_layer_s3.c",uVar10);
      }
    }
LAB_004c6d10:
    iVar2 = -1;
  }
  else {
    if (param_5 < 8) {
      uVar12 = 0;
      local_1088 = 0;
LAB_004c69fc:
      lVar16 = param_5 - uVar12;
      plVar13 = param_4 + uVar12;
      do {
        local_1088 = *plVar13 + local_1088;
        lVar16 = lVar16 + -1;
        plVar13 = plVar13 + 1;
      } while (lVar16 != 0);
    }
    else {
      lVar16 = 0;
      lVar9 = 0;
      lVar26 = 0;
      lVar25 = 0;
      lVar28 = 0;
      lVar27 = 0;
      lVar30 = 0;
      lVar29 = 0;
      uVar12 = param_5 & 0xfffffffffffffff8;
      plVar13 = param_4 + 4;
      uVar14 = uVar12;
      do {
        lVar25 = plVar13[-2] + lVar25;
        lVar26 = plVar13[-1] + lVar26;
        lVar16 = plVar13[-4] + lVar16;
        lVar9 = plVar13[-3] + lVar9;
        uVar14 = uVar14 - 8;
        lVar27 = *plVar13 + lVar27;
        lVar28 = plVar13[1] + lVar28;
        lVar29 = plVar13[2] + lVar29;
        lVar30 = plVar13[3] + lVar30;
        plVar13 = plVar13 + 8;
      } while (uVar14 != 0);
      local_1088 = lVar29 + lVar27 + lVar25 + lVar16 + lVar30 + lVar28 + lVar26 + lVar9;
      if (uVar12 != param_5) goto LAB_004c69fc;
    }
    uVar14 = *(ulong *)(param_1 + 0x204);
    if (uVar14 == 0) goto LAB_004c6a1c;
LAB_004c6974:
    if (*(long *)(param_1 + uVar14 * 10 + 0x20e) == 0) goto LAB_004c6a1c;
LAB_004c6998:
    iVar2 = FUN_004c6770(param_1,param_2,param_3,local_1088,param_7);
  }
  return iVar2;
}


