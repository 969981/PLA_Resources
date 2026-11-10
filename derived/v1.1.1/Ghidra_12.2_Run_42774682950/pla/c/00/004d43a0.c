/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d43a0; name: FUN_004d43a0
 */


ulong FUN_004d43a0(uint *param_1,long *param_2)

{
  void *__src;
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  size_t __n;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int *piVar22;
  byte bVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  ulong uVar26;
  byte *pbVar27;
  ulong uVar28;
  char *pcVar29;
  ulong uVar30;
  byte *pbVar31;
  long lVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  undefined1 auVar48 [16];
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  byte local_150 [48];
  byte abStack_120 [176];
  byte *local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  switch(param_1[0x17]) {
  case 0x14:
    break;
  default:
    FUN_004c99a0(param_1,0x50,0x25b,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x494);
    return 0;
  case 0x1b:
    param_1[0x20] = 0;
    lVar17 = FUN_004071e0();
    if (lVar17 == 0) {
      uVar12 = 0x50;
      iVar11 = 0x41;
      uVar18 = 0xe09;
      goto LAB_004d4d64;
    }
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) ||
        (iVar11 = **(int **)(param_1 + 2), iVar11 < 0x304)) || (iVar11 == 0x10000))
    goto LAB_004d4b44;
    if (param_2[1] == 0) {
LAB_004d4d4c:
      uVar12 = 0x32;
      iVar11 = 0x11a;
      uVar18 = 0xe12;
LAB_004d4d64:
      FUN_004c99a0(param_1,uVar12,0x17c,iVar11,"external/openssl/ssl/statem/statem_srvr.c",uVar18);
LAB_004d4d6c:
      lVar15 = 0;
    }
    else {
      uVar30 = param_2[1] - 1;
      bVar33 = *(byte *)*param_2;
      uVar14 = (ulong)bVar33;
      if (uVar30 < uVar14) goto LAB_004d4d4c;
      *param_2 = (long)((byte *)*param_2 + uVar14 + 1);
      param_2[1] = uVar30 - uVar14;
      if (*(long *)(param_1 + 0x1d4) == 0) {
        if (bVar33 != 0) goto LAB_004d4d4c;
      }
      else if ((*(ulong *)(param_1 + 0x1d6) != uVar14) || (iVar11 = FUN_00404df0(), iVar11 != 0))
      goto LAB_004d4d4c;
LAB_004d4b44:
      uVar14 = param_2[1] - 3;
      if ((ulong)param_2[1] < 3) {
LAB_004d4b84:
        uVar12 = 0x32;
        iVar11 = 0x9f;
        uVar18 = 0xe19;
        goto LAB_004d4d64;
      }
      pbVar31 = (byte *)*param_2;
      uVar30 = (ulong)*pbVar31 << 0x10 | (ulong)pbVar31[1] << 8 | (ulong)pbVar31[2];
      lVar32 = uVar14 - uVar30;
      if (uVar14 < uVar30) goto LAB_004d4b84;
      pbVar31 = pbVar31 + 3;
      *param_2 = (long)(pbVar31 + uVar30);
      param_2[1] = lVar32;
      if (lVar32 != 0) goto LAB_004d4b84;
      if (uVar30 != 0) {
        lVar32 = 0;
        do {
          uVar14 = uVar30 - 3;
          if (uVar30 < 3) {
LAB_004d4dac:
            uVar12 = 0x32;
            iVar11 = 0x87;
            uVar18 = 0xe22;
            goto LAB_004d4d64;
          }
          uVar26 = (ulong)*pbVar31 << 0x10 | (ulong)pbVar31[1] << 8 | (ulong)pbVar31[2];
          uVar30 = uVar14 - uVar26;
          if (uVar14 < uVar26) goto LAB_004d4dac;
          local_58 = pbVar31 + 3;
          lVar15 = FUN_00460a60(0,&local_58,uVar26);
          if (lVar15 == 0) {
            uVar18 = 0x32;
            uVar19 = 0xd;
            uVar20 = 0xe2a;
            goto LAB_004d4ea8;
          }
          pbVar31 = pbVar31 + 3 + uVar26;
          if (local_58 != pbVar31) {
            uVar18 = 0x32;
            uVar19 = 0x87;
            uVar20 = 0xe30;
            goto LAB_004d4ea8;
          }
          if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
              (iVar11 = **(int **)(param_1 + 2), 0x303 < iVar11)) && (iVar11 != 0x10000)) {
            uVar14 = uVar30 - 2;
            local_60 = 0;
            if (1 < uVar30) {
              uVar26 = (ulong)CONCAT11(*pbVar31,pbVar31[1]);
              uVar30 = uVar14 - uVar26;
              if (uVar26 <= uVar14) {
                local_70 = pbVar31 + 2;
                uStack_68 = uVar26;
                iVar11 = FUN_004e3f50(param_1,&local_70,0x1000,&local_60,0,lVar32 == 0);
                if ((iVar11 != 0) &&
                   (iVar11 = FUN_004e49f0(param_1,0x1000,local_60,lVar15,lVar32,uVar30 == 0),
                   iVar11 != 0)) {
                  pbVar31 = pbVar31 + 2 + uVar26;
                  FUN_00400420(local_60,"external/openssl/ssl/statem/statem_srvr.c",0xe47);
                  goto LAB_004d4cd0;
                }
                FUN_00400420(local_60,"external/openssl/ssl/statem/statem_srvr.c",0xe44);
                goto LAB_004d4d70;
              }
            }
            FUN_004c99a0(param_1,0x32,0x17c,0x10f,"external/openssl/ssl/statem/statem_srvr.c",0xe3b)
            ;
            goto LAB_004d4d70;
          }
LAB_004d4cd0:
          iVar11 = FUN_00407800(lVar17,lVar15);
          if (iVar11 == 0) {
            uVar18 = 0x50;
            uVar19 = 0x41;
            uVar20 = 0xe4d;
            goto LAB_004d4ea8;
          }
          lVar32 = lVar32 + 1;
        } while (uVar30 != 0);
      }
      iVar11 = FUN_00407950(lVar17);
      if (iVar11 < 1) {
        if (*param_1 == 0x300) {
          uVar12 = 0x28;
          iVar11 = 0xb0;
          uVar18 = 0xe58;
          goto LAB_004d4d64;
        }
        if ((~param_1[0x156] & 3) == 0) {
          uVar12 = 0x74;
          iVar11 = 199;
          uVar18 = 0xe60;
          goto LAB_004d4d64;
        }
        if ((*(long *)(*(long *)(param_1 + 0x2a) + 0xe0) == 0) ||
           (iVar11 = FUN_004e77f0(param_1,0), iVar11 != 0)) goto LAB_004d4ed0;
        goto LAB_004d4d6c;
      }
      iVar11 = FUN_004e25c0(param_1,lVar17);
      if (iVar11 < 1) {
        uVar12 = FUN_004da9c0(param_1[0x16a]);
        iVar11 = 0x86;
        uVar18 = 0xe6e;
        goto LAB_004d4d64;
      }
      if (iVar11 != 1) {
        uVar12 = 0x28;
        uVar18 = 0xe73;
        goto LAB_004d4d64;
      }
      FUN_00407970(lVar17,0);
      lVar32 = FUN_0044e660();
      if (lVar32 == 0) {
        uVar12 = 0x28;
        iVar11 = 0xf7;
        uVar18 = 0xe7a;
        goto LAB_004d4d64;
      }
LAB_004d4ed0:
      lVar32 = *(long *)(param_1 + 0x142);
      if (param_1[0x1d2] != 4) {
LAB_004d4f00:
        FUN_00460a80(*(undefined8 *)(lVar32 + 0x1b8));
        puVar9 = PTR_FUN_04374180;
        uVar18 = FUN_00407820(lVar17);
        lVar32 = *(long *)(param_1 + 0x142);
        *(undefined8 *)(lVar32 + 0x1b8) = uVar18;
        *(undefined8 *)(lVar32 + 0x1d0) = *(undefined8 *)(param_1 + 0x16a);
        FUN_004078c0(*(undefined8 *)(lVar32 + 0x1c8),puVar9);
        *(long *)(*(long *)(param_1 + 0x142) + 0x1c8) = lVar17;
        piVar22 = *(int **)(param_1 + 2);
        uVar10 = *(uint *)(*(long *)(piVar22 + 0x30) + 0x60);
        if ((((uVar10 >> 3 & 1) == 0) && (0x303 < *piVar22)) && (*piVar22 != 0x10000)) {
          iVar11 = FUN_004e77f0(param_1,1);
          if (iVar11 == 0) goto LAB_004d4d6c;
          piVar22 = *(int **)(param_1 + 2);
          uVar10 = *(uint *)(*(long *)(piVar22 + 0x30) + 0x60);
        }
        lVar15 = 0;
        if ((uVar10 >> 3 & 1) == 0) {
          uVar14 = 3;
          if (*piVar22 < 0x304) {
            lVar17 = 0;
            goto LAB_004d4d74;
          }
          lVar17 = 0;
          if (*piVar22 == 0x10000) goto LAB_004d4d74;
          iVar11 = FUN_004c5200(param_1,param_1 + 0x124,0x40,param_1 + 0x134);
          lVar15 = 0;
          if (iVar11 == 0) {
            uVar14 = 0;
            lVar17 = 0;
            goto LAB_004d4d74;
          }
          param_1[0x606] = 0;
          param_1[0x607] = 0;
        }
        lVar15 = 0;
        lVar17 = 0;
        uVar14 = 3;
        goto LAB_004d4d74;
      }
      lVar32 = FUN_003fec70(lVar32,0);
      if (lVar32 != 0) {
        FUN_003fef10(*(undefined8 *)(param_1 + 0x142));
        *(long *)(param_1 + 0x142) = lVar32;
        goto LAB_004d4f00;
      }
      uVar18 = 0x50;
      uVar19 = 0x41;
      uVar20 = 0xe8b;
      lVar15 = 0;
LAB_004d4ea8:
      FUN_004c99a0(param_1,uVar18,0x17c,uVar19,"external/openssl/ssl/statem/statem_srvr.c",uVar20);
    }
LAB_004d4d70:
    uVar14 = 0;
LAB_004d4d74:
    FUN_00460a80(lVar15);
    FUN_004078c0(lVar17,PTR_FUN_04374180);
    return uVar14;
  case 0x1c:
    lVar17 = *(long *)(param_1 + 0x2a);
    uVar10 = *(uint *)(*(long *)(lVar17 + 0x238) + 0x1c);
    if ((uVar10 & 0x1c8) == 0) {
LAB_004d51fc:
      if ((uVar10 >> 3 & 1) == 0) {
        if ((uVar10 & 0x41) == 0) {
          if ((uVar10 & 0x102) != 0) {
            uVar30 = param_2[1];
            uVar14 = uVar30 - 2;
            if (uVar30 < 2) {
LAB_004d5394:
              uVar18 = 0x32;
              uVar19 = 0x19b;
              uVar20 = 0x94;
              uVar21 = 0xc53;
LAB_004d5a3c:
              FUN_004c99a0(param_1,uVar18,uVar19,uVar20,"external/openssl/ssl/statem/statem_srvr.c",
                           uVar21);
              lVar32 = 0;
            }
            else {
              puVar24 = (undefined1 *)*param_2;
              uVar2 = *puVar24;
              uVar3 = puVar24[1];
              *param_2 = (long)(puVar24 + 2);
              param_2[1] = uVar14;
              if (uVar14 != CONCAT11(uVar2,uVar3)) goto LAB_004d5394;
              lVar17 = *(long *)(lVar17 + 0x240);
              if (lVar17 == 0) {
                uVar18 = 0x50;
                uVar19 = 0x19b;
                uVar20 = 0xab;
                uVar21 = 0xc59;
                goto LAB_004d5a3c;
              }
              if (uVar14 == 0) {
                uVar18 = 0x32;
                uVar19 = 0x19b;
                uVar20 = 0xab;
                uVar21 = 0xc5f;
                goto LAB_004d5a3c;
              }
              *param_2 = (long)(puVar24 + uVar30);
              param_2[1] = 0;
              lVar32 = FUN_004230e0();
              if ((lVar32 == 0) || (iVar11 = FUN_00422d90(lVar32,lVar17), iVar11 == 0)) {
                FUN_004c99a0(param_1,0x50,0x19b,0x82,"external/openssl/ssl/statem/statem_srvr.c",
                             0xc6b);
              }
              else {
                lVar15 = FUN_00423a00(lVar32);
                lVar16 = FUN_0040c710(puVar24 + 2,(ulong)CONCAT11(uVar2,uVar3),0);
                if (((lVar15 == 0) || (lVar16 == 0)) ||
                   (iVar11 = FUN_004246c0(lVar15,lVar16,0), iVar11 == 0)) {
                  FUN_004c99a0(param_1,0x50,0x19b,0x44,"external/openssl/ssl/statem/statem_srvr.c",
                               0xc73);
                  FUN_0040c1e0(lVar16);
                }
                else {
LAB_004d571c:
                  iVar11 = FUN_004c2180(param_1,lVar17,lVar32,1);
                  if (iVar11 != 0) {
                    FUN_00423420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x240));
                    *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x240) = 0;
                    FUN_00423420(lVar32);
                    return 2;
                  }
                }
              }
            }
LAB_004d5a48:
            FUN_00423420(lVar32);
            goto LAB_004d5b5c;
          }
          if ((uVar10 & 0x84) != 0) {
            if (param_2[1] == 0) {
              uVar18 = 0x28;
              uVar19 = 0x19c;
              uVar20 = 0x137;
              uVar21 = 0xc95;
            }
            else {
              lVar17 = *(long *)(lVar17 + 0x240);
              uVar14 = param_2[1] - 1;
              pbVar31 = (byte *)*param_2 + 1;
              uVar30 = (ulong)*(byte *)*param_2;
              *param_2 = (long)pbVar31;
              param_2[1] = uVar14;
              if (uVar30 <= uVar14) {
                *param_2 = (long)(pbVar31 + uVar30);
                param_2[1] = uVar14 - uVar30;
                if (uVar14 - uVar30 == 0) {
                  if (lVar17 != 0) {
                    lVar32 = FUN_004230e0();
                    if ((lVar32 == 0) || (iVar11 = FUN_00422d90(lVar32,lVar17), iVar11 < 1)) {
                      FUN_004c99a0(param_1,0x50,0x19c,6,"external/openssl/ssl/statem/statem_srvr.c",
                                   0xcb0);
                    }
                    else {
                      iVar11 = FUN_00423a90(lVar32,pbVar31,uVar30);
                      if (iVar11 != 0) goto LAB_004d571c;
                      FUN_004c99a0(param_1,0x50,0x19c,0x10,
                                   "external/openssl/ssl/statem/statem_srvr.c",0xcb5);
                    }
                    goto LAB_004d5a48;
                  }
                  uVar18 = 0x50;
                  uVar19 = 0x19c;
                  uVar20 = 0x137;
                  uVar21 = 0xca9;
                  goto LAB_004d5a3c;
                }
              }
              uVar18 = 0x32;
              uVar19 = 0x19c;
              uVar20 = 0x9f;
              uVar21 = 0xca4;
            }
            goto LAB_004d5a3c;
          }
          if ((uVar10 >> 5 & 1) == 0) {
            if ((uVar10 >> 4 & 1) == 0) {
              uVar18 = 0x50;
              uVar19 = 0x17e;
              uVar20 = 0xf9;
              uVar21 = 0xda5;
            }
            else {
              uVar10 = *(uint *)(*(long *)(lVar17 + 0x238) + 0x20);
              if ((uVar10 >> 7 & 1) == 0) {
                if ((uVar10 >> 5 & 1) != 0) {
                  lVar32 = *(long *)(param_1 + 0x122);
LAB_004d5a58:
                  lVar17 = *(long *)(lVar32 + 200);
                  goto LAB_004d5a5c;
                }
                lVar17 = FUN_00422780(0,0);
              }
              else {
                lVar32 = *(long *)(param_1 + 0x122);
                lVar17 = *(long *)(lVar32 + 0x118);
                if ((lVar17 == 0) && (lVar17 = *(long *)(lVar32 + 0xf0), lVar17 == 0))
                goto LAB_004d5a58;
LAB_004d5a5c:
                lVar17 = FUN_00422780(lVar17,0);
              }
              if (lVar17 == 0) {
                uVar18 = 0x50;
                uVar19 = 0x19d;
                uVar20 = 0x41;
                uVar21 = 0xd1b;
              }
              else {
                iVar11 = FUN_00465770();
                if (0 < iVar11) {
                  lVar32 = FUN_0044e660(*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x1b8));
                  if ((lVar32 != 0) && (iVar11 = FUN_004659f0(lVar17,lVar32), iVar11 < 1)) {
                    FUN_004016d0();
                  }
                  lVar32 = param_2[1];
                  if (lVar32 == 0) {
LAB_004d5b10:
                    uVar18 = 0xd33;
LAB_004d5b28:
                    FUN_004c99a0(param_1,0x32,0x19d,0x93,"external/openssl/ssl/statem/statem_srvr.c"
                                 ,uVar18);
                  }
                  else {
                    pcVar29 = (char *)*param_2;
                    lVar15 = lVar32 + -1;
                    pbVar31 = (byte *)(pcVar29 + 1);
                    cVar1 = *pcVar29;
                    *param_2 = (long)pbVar31;
                    param_2[1] = lVar15;
                    if ((lVar15 == 0) || (cVar1 != '0')) goto LAB_004d5b10;
                    bVar33 = *pbVar31;
                    if (bVar33 != 0x81) {
                      if (-1 < (char)bVar33) {
                        if (lVar32 - 2U != (ulong)bVar33) goto LAB_004d5af4;
                        goto LAB_004d5bf4;
                      }
                      uVar18 = 0xd47;
                      goto LAB_004d5b28;
                    }
                    pbVar31 = (byte *)(pcVar29 + 2);
                    lVar15 = lVar32 + -2;
                    *param_2 = (long)pbVar31;
                    param_2[1] = lVar15;
                    if ((lVar15 == 0) || (lVar32 - 3U != (ulong)*pbVar31)) {
LAB_004d5af4:
                      uVar18 = 0xd4d;
                      goto LAB_004d5b28;
                    }
LAB_004d5bf4:
                    *param_2 = (long)(pbVar31 + lVar15);
                    param_2[1] = 0;
                    iVar11 = FUN_00465800(lVar17,local_150,abStack_120 + 0xd8,pbVar31 + 1);
                    if (iVar11 < 1) {
                      uVar18 = 0xd56;
                      goto LAB_004d5b28;
                    }
                    iVar11 = FUN_004c1c90(param_1,local_150,0x20,0);
                    if (iVar11 != 0) {
                      iVar11 = FUN_00422a60(lVar17,0xffffffff,0xffffffff,2,2,0);
                      if (0 < iVar11) {
                        param_1[0x1d] = 1;
                      }
                      FUN_00422a10(lVar17);
                      return 2;
                    }
                  }
                  FUN_00422a10(lVar17);
                  goto LAB_004d5b5c;
                }
                uVar18 = 0x50;
                uVar19 = 0x19d;
                uVar20 = 0x44;
                uVar21 = 0xd20;
              }
            }
          }
          else {
            uVar14 = param_2[1] - 2;
            if (1 < (ulong)param_2[1]) {
              puVar25 = (undefined1 *)*param_2;
              puVar24 = puVar25 + 2;
              uVar2 = *puVar25;
              uVar3 = puVar25[1];
              *param_2 = (long)puVar24;
              param_2[1] = uVar14;
              uVar30 = (ulong)CONCAT11(uVar2,uVar3);
              if (uVar30 <= uVar14) {
                *param_2 = (long)(puVar24 + uVar30);
                param_2[1] = uVar14 - uVar30;
                lVar17 = FUN_0040c710(puVar24,uVar30,0);
                *(long *)(param_1 + 0x1ee) = lVar17;
                if (lVar17 == 0) {
                  uVar18 = 0x50;
                  uVar19 = 0x1a0;
                  uVar21 = 0xcdc;
                  uVar20 = 3;
                }
                else {
                  iVar11 = FUN_0040cc00(lVar17,*(undefined8 *)(param_1 + 0x1e6));
                  if ((iVar11 < 0) &&
                     (iVar11 = FUN_0040c130(*(undefined8 *)(param_1 + 0x1ee)), iVar11 == 0)) {
                    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x288),
                                 "external/openssl/ssl/statem/statem_srvr.c",0xce4);
                    lVar17 = FUN_00404f10(*(undefined8 *)(param_1 + 0x1e4),
                                          "external/openssl/ssl/statem/statem_srvr.c",0xce5);
                    *(long *)(*(long *)(param_1 + 0x142) + 0x288) = lVar17;
                    if (lVar17 != 0) {
                      iVar11 = FUN_004d7620(param_1);
                      goto joined_r0x004d536c;
                    }
                    uVar18 = 0x50;
                    uVar19 = 0x1a0;
                    uVar20 = 0x41;
                    uVar21 = 0xce8;
                  }
                  else {
                    uVar18 = 0x2f;
                    uVar19 = 0x1a0;
                    uVar20 = 0x173;
                    uVar21 = 0xce1;
                  }
                }
                goto LAB_004d5b58;
              }
            }
            uVar18 = 0x32;
            uVar19 = 0x1a0;
            uVar20 = 0x15b;
            uVar21 = 0xcd7;
          }
        }
        else {
          lVar17 = FUN_00423740(*(undefined8 *)(*(long *)(param_1 + 0x122) + 0x28));
          if (lVar17 == 0) {
            uVar18 = 0x50;
            uVar19 = 0x19f;
            uVar20 = 0xa8;
            uVar21 = 0xbaa;
          }
          else if ((*param_1 | 0x200) == 0x300) {
            puVar24 = (undefined1 *)*param_2;
            uVar30 = param_2[1];
LAB_004d5234:
            iVar11 = FUN_00456840(lVar17);
            if (iVar11 < 0x30) {
              uVar18 = 0x50;
              uVar19 = 0x19f;
              uVar21 = 0xbc2;
              uVar20 = 0x78;
            }
            else {
              iVar11 = FUN_00456840(lVar17);
              pbVar31 = (byte *)FUN_00400260((long)iVar11,
                                             "external/openssl/ssl/statem/statem_srvr.c",0xbc6);
              if (pbVar31 != (byte *)0x0) {
                iVar11 = FUN_00427b20(local_150,0x30);
                if (iVar11 < 1) {
                  uVar18 = 0x50;
                  uVar19 = 0x44;
                  uVar20 = 0xbd8;
                }
                else {
                  iVar11 = FUN_00456890(uVar30 & 0xffffffff,puVar24,pbVar31,lVar17,3);
                  if (iVar11 < 0) {
                    uVar18 = 0x33;
                    uVar19 = 0x44;
                    uVar20 = 0xbe6;
                  }
                  else {
                    if (0x3a < iVar11) {
                      lVar17 = (long)iVar11;
                      uVar10 = (pbVar31[1] ^ 2) - 1 & *pbVar31 - 1;
                      uVar13 = (int)uVar10 >> 0x1f;
                      bVar33 = (byte)((int)uVar10 >> 0x1f);
                      if (2 < lVar17 - 0x31U) {
                        uVar14 = lVar17 - 0x33;
                        if (uVar14 < 0x20) {
                          uVar26 = 2;
                        }
                        else {
                          bVar40 = 0xff;
                          bVar41 = 0xff;
                          bVar42 = 0xff;
                          bVar43 = 0xff;
                          bVar44 = 0xff;
                          bVar45 = 0xff;
                          bVar46 = 0xff;
                          bVar47 = 0xff;
                          bVar23 = 0xff;
                          bVar34 = 0xff;
                          bVar35 = 0xff;
                          bVar36 = 0xff;
                          bVar37 = 0xff;
                          bVar38 = 0xff;
                          bVar39 = 0xff;
                          uVar19 = 0xffffffffffffffff;
                          uVar18 = 0xffffffffffffffff;
                          uVar28 = uVar14 & 0xffffffffffffffe0;
                          uVar26 = uVar28 | 2;
                          pbVar27 = pbVar31 + 0x12;
                          uVar30 = uVar28;
                          do {
                            uVar21 = *(undefined8 *)(pbVar27 + -8);
                            uVar20 = *(undefined8 *)(pbVar27 + -0x10);
                            uVar66 = *(undefined8 *)(pbVar27 + 8);
                            uVar65 = *(undefined8 *)pbVar27;
                            pbVar27 = pbVar27 + 0x20;
                            bVar50 = (byte)((ulong)uVar65 >> 8);
                            bVar52 = (byte)((ulong)uVar65 >> 0x18);
                            bVar54 = (byte)((ulong)uVar65 >> 0x28);
                            bVar58 = (byte)((ulong)uVar66 >> 8);
                            bVar62 = (byte)((ulong)uVar66 >> 0x28);
                            bVar49 = (byte)((ulong)uVar20 >> 8);
                            bVar53 = (byte)((ulong)uVar20 >> 0x18);
                            bVar55 = (byte)((ulong)uVar20 >> 0x28);
                            bVar51 = (byte)((ulong)uVar21 >> 8);
                            bVar56 = (byte)((ulong)uVar21 >> 0x28);
                            bVar33 = bVar33 & ~(byte)((int)((CONCAT12(bVar49,(ushort)(byte)uVar20) &
                                                            0xffff) - 1) >> 0x1f);
                            bVar23 = bVar23 & ~(byte)((int)(bVar49 - 1) >> 0x1f);
                            bVar34 = bVar34 & ~(byte)((int)((CONCAT12(bVar53,(ushort)(byte)((ulong)
                                                  uVar20 >> 0x10)) & 0xffff) - 1) >> 0x1f);
                            bVar35 = bVar35 & ~(byte)((int)(bVar53 - 1) >> 0x1f);
                            bVar36 = bVar36 & ~(byte)((int)((CONCAT12(bVar55,(ushort)(byte)((ulong)
                                                  uVar20 >> 0x20)) & 0xffff) - 1) >> 0x1f);
                            bVar37 = bVar37 & ~(byte)((int)(bVar55 - 1) >> 0x1f);
                            bVar38 = bVar38 & ~(byte)((int)((byte)((ulong)uVar20 >> 0x30) - 1) >>
                                                     0x1f);
                            bVar39 = bVar39 & ~(byte)((int)((byte)((ulong)uVar20 >> 0x38) - 1) >>
                                                     0x1f);
                            bVar40 = bVar40 & ~(byte)((int)(((CONCAT12(bVar51,(short)uVar21) &
                                                             0xff00ff) & 0xffff) - 1) >> 0x1f);
                            bVar41 = bVar41 & ~(byte)((int)(bVar51 - 1) >> 0x1f);
                            bVar42 = bVar42 & ~(byte)((int)((byte)((ulong)uVar21 >> 0x10) - 1) >>
                                                     0x1f);
                            bVar43 = bVar43 & ~(byte)((int)((byte)((ulong)uVar21 >> 0x18) - 1) >>
                                                     0x1f);
                            bVar44 = bVar44 & ~(byte)((int)((CONCAT12(bVar56,(ushort)(byte)((ulong)
                                                  uVar21 >> 0x20)) & 0xffff) - 1) >> 0x1f);
                            bVar45 = bVar45 & ~(byte)((int)(bVar56 - 1) >> 0x1f);
                            bVar46 = bVar46 & ~(byte)((int)((byte)((ulong)uVar21 >> 0x30) - 1) >>
                                                     0x1f);
                            bVar47 = bVar47 & ~(byte)((int)((byte)((ulong)uVar21 >> 0x38) - 1) >>
                                                     0x1f);
                            bVar49 = (byte)uVar18 &
                                     ~(byte)((int)((CONCAT12(bVar50,(ushort)(byte)uVar65) & 0xffff)
                                                  - 1) >> 0x1f);
                            bVar50 = (byte)((ulong)uVar18 >> 8) & ~(byte)((int)(bVar50 - 1) >> 0x1f)
                            ;
                            bVar51 = (byte)((ulong)uVar18 >> 0x10) &
                                     ~(byte)((int)((CONCAT12(bVar52,(ushort)(byte)((ulong)uVar65 >>
                                                                                  0x10)) & 0xffff) -
                                                  1) >> 0x1f);
                            bVar52 = (byte)((ulong)uVar18 >> 0x18) &
                                     ~(byte)((int)(bVar52 - 1) >> 0x1f);
                            bVar53 = (byte)((ulong)uVar18 >> 0x20) &
                                     ~(byte)((int)((CONCAT12(bVar54,(ushort)(byte)((ulong)uVar65 >>
                                                                                  0x20)) & 0xffff) -
                                                  1) >> 0x1f);
                            bVar54 = (byte)((ulong)uVar18 >> 0x28) &
                                     ~(byte)((int)(bVar54 - 1) >> 0x1f);
                            bVar55 = (byte)((ulong)uVar18 >> 0x30) &
                                     ~(byte)((int)((byte)((ulong)uVar65 >> 0x30) - 1) >> 0x1f);
                            bVar56 = (byte)((ulong)uVar18 >> 0x38) &
                                     ~(byte)((int)((byte)((ulong)uVar65 >> 0x38) - 1) >> 0x1f);
                            uVar18 = CONCAT17(bVar56,CONCAT16(bVar55,CONCAT15(bVar54,CONCAT14(bVar53
                                                  ,CONCAT13(bVar52,CONCAT12(bVar51,CONCAT11(bVar50,
                                                  bVar49)))))));
                            bVar57 = (byte)uVar19 &
                                     ~(byte)((int)(((CONCAT12(bVar58,(short)uVar66) & 0xff00ff) &
                                                   0xffff) - 1) >> 0x1f);
                            bVar58 = (byte)((ulong)uVar19 >> 8) & ~(byte)((int)(bVar58 - 1) >> 0x1f)
                            ;
                            bVar59 = (byte)((ulong)uVar19 >> 0x10) &
                                     ~(byte)((int)((byte)((ulong)uVar66 >> 0x10) - 1) >> 0x1f);
                            bVar60 = (byte)((ulong)uVar19 >> 0x18) &
                                     ~(byte)((int)((byte)((ulong)uVar66 >> 0x18) - 1) >> 0x1f);
                            bVar61 = (byte)((ulong)uVar19 >> 0x20) &
                                     ~(byte)((int)((CONCAT12(bVar62,(ushort)(byte)((ulong)uVar66 >>
                                                                                  0x20)) & 0xffff) -
                                                  1) >> 0x1f);
                            bVar62 = (byte)((ulong)uVar19 >> 0x28) &
                                     ~(byte)((int)(bVar62 - 1) >> 0x1f);
                            bVar63 = (byte)((ulong)uVar19 >> 0x30) &
                                     ~(byte)((int)((byte)((ulong)uVar66 >> 0x30) - 1) >> 0x1f);
                            bVar64 = (byte)((ulong)uVar19 >> 0x38) &
                                     ~(byte)((int)((byte)((ulong)uVar66 >> 0x38) - 1) >> 0x1f);
                            uVar19 = CONCAT17(bVar64,CONCAT16(bVar63,CONCAT15(bVar62,CONCAT14(bVar61
                                                  ,CONCAT13(bVar60,CONCAT12(bVar59,CONCAT11(bVar58,
                                                  bVar57)))))));
                            uVar30 = uVar30 - 0x20;
                          } while (uVar30 != 0);
                          bVar49 = bVar49 & bVar33;
                          bVar50 = bVar50 & bVar23;
                          bVar51 = bVar51 & bVar34;
                          bVar52 = bVar52 & bVar35;
                          bVar53 = bVar53 & bVar36;
                          bVar54 = bVar54 & bVar37;
                          bVar55 = bVar55 & bVar38;
                          bVar56 = bVar56 & bVar39;
                          bVar57 = bVar57 & bVar40;
                          bVar58 = bVar58 & bVar41;
                          bVar59 = bVar59 & bVar42;
                          bVar60 = bVar60 & bVar43;
                          bVar61 = bVar61 & bVar44;
                          bVar62 = bVar62 & bVar45;
                          bVar63 = bVar63 & bVar46;
                          bVar64 = bVar64 & bVar47;
                          auVar48[1] = bVar50;
                          auVar48[0] = bVar49;
                          auVar48[2] = bVar51;
                          auVar48[3] = bVar52;
                          auVar48[4] = bVar53;
                          auVar48[5] = bVar54;
                          auVar48[6] = bVar55;
                          auVar48[7] = bVar56;
                          auVar48[8] = bVar57;
                          auVar48[9] = bVar58;
                          auVar48[10] = bVar59;
                          auVar48[0xb] = bVar60;
                          auVar48[0xc] = bVar61;
                          auVar48[0xd] = bVar62;
                          auVar48[0xe] = bVar63;
                          auVar48[0xf] = bVar64;
                          auVar4[1] = bVar50;
                          auVar4[0] = bVar49;
                          auVar4[2] = bVar51;
                          auVar4[3] = bVar52;
                          auVar4[4] = bVar53;
                          auVar4[5] = bVar54;
                          auVar4[6] = bVar55;
                          auVar4[7] = bVar56;
                          auVar4[8] = bVar57;
                          auVar4[9] = bVar58;
                          auVar4[10] = bVar59;
                          auVar4[0xb] = bVar60;
                          auVar4[0xc] = bVar61;
                          auVar4[0xd] = bVar62;
                          auVar4[0xe] = bVar63;
                          auVar4[0xf] = bVar64;
                          auVar48 = NEON_ext(auVar48,auVar4,8,1);
                          bVar49 = bVar49 & auVar48[0];
                          bVar50 = bVar50 & auVar48[1];
                          bVar51 = bVar51 & auVar48[2];
                          bVar52 = bVar52 & auVar48[3];
                          bVar53 = bVar53 & auVar48[4];
                          bVar54 = bVar54 & auVar48[5];
                          bVar55 = bVar55 & auVar48[6];
                          bVar56 = bVar56 & auVar48[7];
                          bVar57 = bVar57 & auVar48[8];
                          bVar58 = bVar58 & auVar48[9];
                          bVar59 = bVar59 & auVar48[10];
                          bVar60 = bVar60 & auVar48[0xb];
                          bVar61 = bVar61 & auVar48[0xc];
                          bVar62 = bVar62 & auVar48[0xd];
                          bVar63 = bVar63 & auVar48[0xe];
                          bVar64 = bVar64 & auVar48[0xf];
                          auVar5[1] = bVar50;
                          auVar5[0] = bVar49;
                          auVar5[2] = bVar51;
                          auVar5[3] = bVar52;
                          auVar5[4] = bVar53;
                          auVar5[5] = bVar54;
                          auVar5[6] = bVar55;
                          auVar5[7] = bVar56;
                          auVar5[8] = bVar57;
                          auVar5[9] = bVar58;
                          auVar5[10] = bVar59;
                          auVar5[0xb] = bVar60;
                          auVar5[0xc] = bVar61;
                          auVar5[0xd] = bVar62;
                          auVar5[0xe] = bVar63;
                          auVar5[0xf] = bVar64;
                          auVar6[1] = bVar50;
                          auVar6[0] = bVar49;
                          auVar6[2] = bVar51;
                          auVar6[3] = bVar52;
                          auVar6[4] = bVar53;
                          auVar6[5] = bVar54;
                          auVar6[6] = bVar55;
                          auVar6[7] = bVar56;
                          auVar6[8] = bVar57;
                          auVar6[9] = bVar58;
                          auVar6[10] = bVar59;
                          auVar6[0xb] = bVar60;
                          auVar6[0xc] = bVar61;
                          auVar6[0xd] = bVar62;
                          auVar6[0xe] = bVar63;
                          auVar6[0xf] = bVar64;
                          auVar48 = NEON_ext(auVar5,auVar6,4,1);
                          bVar49 = bVar49 & auVar48[0];
                          bVar50 = bVar50 & auVar48[1];
                          bVar51 = bVar51 & auVar48[2];
                          bVar52 = bVar52 & auVar48[3];
                          bVar53 = bVar53 & auVar48[4];
                          bVar54 = bVar54 & auVar48[5];
                          bVar55 = bVar55 & auVar48[6];
                          bVar56 = bVar56 & auVar48[7];
                          bVar57 = bVar57 & auVar48[8];
                          bVar58 = bVar58 & auVar48[9];
                          bVar59 = bVar59 & auVar48[10];
                          bVar60 = bVar60 & auVar48[0xb];
                          bVar61 = bVar61 & auVar48[0xc];
                          bVar62 = bVar62 & auVar48[0xd];
                          bVar63 = bVar63 & auVar48[0xe];
                          bVar64 = bVar64 & auVar48[0xf];
                          auVar7[1] = bVar50;
                          auVar7[0] = bVar49;
                          auVar7[2] = bVar51;
                          auVar7[3] = bVar52;
                          auVar7[4] = bVar53;
                          auVar7[5] = bVar54;
                          auVar7[6] = bVar55;
                          auVar7[7] = bVar56;
                          auVar7[8] = bVar57;
                          auVar7[9] = bVar58;
                          auVar7[10] = bVar59;
                          auVar7[0xb] = bVar60;
                          auVar7[0xc] = bVar61;
                          auVar7[0xd] = bVar62;
                          auVar7[0xe] = bVar63;
                          auVar7[0xf] = bVar64;
                          auVar8[1] = bVar50;
                          auVar8[0] = bVar49;
                          auVar8[2] = bVar51;
                          auVar8[3] = bVar52;
                          auVar8[4] = bVar53;
                          auVar8[5] = bVar54;
                          auVar8[6] = bVar55;
                          auVar8[7] = bVar56;
                          auVar8[8] = bVar57;
                          auVar8[9] = bVar58;
                          auVar8[10] = bVar59;
                          auVar8[0xb] = bVar60;
                          auVar8[0xc] = bVar61;
                          auVar8[0xd] = bVar62;
                          auVar8[0xe] = bVar63;
                          auVar8[0xf] = bVar64;
                          auVar48 = NEON_ext(auVar7,auVar8,2,1);
                          bVar33 = bVar49 & auVar48[0] & bVar50 & auVar48[1];
                          uVar13 = (uint)bVar33;
                          if (uVar14 == uVar28) goto LAB_004d58c0;
                        }
                        lVar32 = ~uVar26 + lVar17 + -0x30;
                        pbVar27 = pbVar31 + uVar26;
                        do {
                          uVar13 = uVar13 & ((int)(*pbVar27 - 1) >> 0x1f ^ 0xffffffffU);
                          bVar33 = (byte)uVar13;
                          lVar32 = lVar32 + -1;
                          pbVar27 = pbVar27 + 1;
                        } while (lVar32 != 0);
                      }
LAB_004d58c0:
                      pbVar27 = pbVar31 + lVar17 + -0x30;
                      uVar10 = param_1[0x17b];
                      bVar23 = (byte)(((int)uVar10 >> 8 ^ (uint)*pbVar27) - 1 >> 0x18) &
                               ((byte)((int)uVar10 >> 0x1f) ^ 0xff) &
                               (byte)((uVar10 & 0xff ^ (uint)pbVar27[1]) - 1 >> 0x18);
                      if (*(char *)((long)param_1 + 0x5ce) < '\0') {
                        uVar10 = *param_1;
                        bVar23 = bVar23 | (byte)(((int)uVar10 >> 8 ^ (uint)*pbVar27) - 1 >> 0x18) &
                                          ((byte)((int)uVar10 >> 0x1f) ^ 0xff) &
                                          (byte)((uVar10 & 0xff ^ (uint)pbVar27[1]) - 1 >> 0x18);
                      }
                      bVar33 = bVar33 & (byte)((int)(pbVar31[lVar17 - 0x31U] - 1) >> 0x1f) &
                               (char)bVar23 >> 7;
                      bVar23 = ~bVar33;
                      if ((pbVar27 < abStack_120) && (local_150 < pbVar27 + 0x30)) {
                        lVar17 = 0;
                        do {
                          pbVar27[lVar17] = local_150[lVar17] & bVar23 | pbVar27[lVar17] & bVar33;
                          lVar17 = lVar17 + 1;
                        } while (lVar17 != 0x30);
                      }
                      else {
                        uVar19 = *(undefined8 *)(pbVar27 + 8);
                        uVar18 = *(undefined8 *)pbVar27;
                        uVar21 = *(undefined8 *)(pbVar27 + 0x18);
                        uVar20 = *(undefined8 *)(pbVar27 + 0x10);
                        *(ulong *)(pbVar27 + 8) =
                             CONCAT17(local_150[0xf] & bVar23 |
                                      (byte)((ulong)uVar19 >> 0x38) & bVar33,
                                      CONCAT16(local_150[0xe] & bVar23 |
                                               (byte)((ulong)uVar19 >> 0x30) & bVar33,
                                               CONCAT15(local_150[0xd] & bVar23 |
                                                        (byte)((ulong)uVar19 >> 0x28) & bVar33,
                                                        CONCAT14(local_150[0xc] & bVar23 |
                                                                 (byte)((ulong)uVar19 >> 0x20) &
                                                                 bVar33,CONCAT13(local_150[0xb] &
                                                                                 bVar23 | (byte)((
                                                  ulong)uVar19 >> 0x18) & bVar33,
                                                  CONCAT12(local_150[10] & bVar23 |
                                                           (byte)((ulong)uVar19 >> 0x10) & bVar33,
                                                           CONCAT11(local_150[9] & bVar23 |
                                                                    (byte)((ulong)uVar19 >> 8) &
                                                                    bVar33,local_150[8] & bVar23 |
                                                                           (byte)uVar19 & bVar33))))
                                                  )));
                        *(ulong *)pbVar27 =
                             CONCAT17(local_150[7] & bVar23 | (byte)((ulong)uVar18 >> 0x38) & bVar33
                                      ,CONCAT16(local_150[6] & bVar23 |
                                                (byte)((ulong)uVar18 >> 0x30) & bVar33,
                                                CONCAT15(local_150[5] & bVar23 |
                                                         (byte)((ulong)uVar18 >> 0x28) & bVar33,
                                                         CONCAT14(local_150[4] & bVar23 |
                                                                  (byte)((ulong)uVar18 >> 0x20) &
                                                                  bVar33,CONCAT13(local_150[3] &
                                                                                  bVar23 | (byte)((
                                                  ulong)uVar18 >> 0x18) & bVar33,
                                                  CONCAT12(local_150[2] & bVar23 |
                                                           (byte)((ulong)uVar18 >> 0x10) & bVar33,
                                                           CONCAT11(local_150[1] & bVar23 |
                                                                    (byte)((ulong)uVar18 >> 8) &
                                                                    bVar33,local_150[0] & bVar23 |
                                                                           (byte)uVar18 & bVar33))))
                                                  )));
                        *(ulong *)(pbVar27 + 0x18) =
                             CONCAT17(local_150[0x1f] & bVar23 |
                                      (byte)((ulong)uVar21 >> 0x38) & bVar33,
                                      CONCAT16(local_150[0x1e] & bVar23 |
                                               (byte)((ulong)uVar21 >> 0x30) & bVar33,
                                               CONCAT15(local_150[0x1d] & bVar23 |
                                                        (byte)((ulong)uVar21 >> 0x28) & bVar33,
                                                        CONCAT14(local_150[0x1c] & bVar23 |
                                                                 (byte)((ulong)uVar21 >> 0x20) &
                                                                 bVar33,CONCAT13(local_150[0x1b] &
                                                                                 bVar23 | (byte)((
                                                  ulong)uVar21 >> 0x18) & bVar33,
                                                  CONCAT12(local_150[0x1a] & bVar23 |
                                                           (byte)((ulong)uVar21 >> 0x10) & bVar33,
                                                           CONCAT11(local_150[0x19] & bVar23 |
                                                                    (byte)((ulong)uVar21 >> 8) &
                                                                    bVar33,local_150[0x18] & bVar23
                                                                           | (byte)uVar21 & bVar33))
                                                  )))));
                        *(ulong *)(pbVar27 + 0x10) =
                             CONCAT17(local_150[0x17] & bVar23 |
                                      (byte)((ulong)uVar20 >> 0x38) & bVar33,
                                      CONCAT16(local_150[0x16] & bVar23 |
                                               (byte)((ulong)uVar20 >> 0x30) & bVar33,
                                               CONCAT15(local_150[0x15] & bVar23 |
                                                        (byte)((ulong)uVar20 >> 0x28) & bVar33,
                                                        CONCAT14(local_150[0x14] & bVar23 |
                                                                 (byte)((ulong)uVar20 >> 0x20) &
                                                                 bVar33,CONCAT13(local_150[0x13] &
                                                                                 bVar23 | (byte)((
                                                  ulong)uVar20 >> 0x18) & bVar33,
                                                  CONCAT12(local_150[0x12] & bVar23 |
                                                           (byte)((ulong)uVar20 >> 0x10) & bVar33,
                                                           CONCAT11(local_150[0x11] & bVar23 |
                                                                    (byte)((ulong)uVar20 >> 8) &
                                                                    bVar33,local_150[0x10] & bVar23
                                                                           | (byte)uVar20 & bVar33))
                                                  )))));
                        uVar19 = *(undefined8 *)(pbVar27 + 0x28);
                        uVar18 = *(undefined8 *)(pbVar27 + 0x20);
                        *(ulong *)(pbVar27 + 0x28) =
                             CONCAT17(local_150[0x2f] & bVar23 |
                                      (byte)((ulong)uVar19 >> 0x38) & bVar33,
                                      CONCAT16(local_150[0x2e] & bVar23 |
                                               (byte)((ulong)uVar19 >> 0x30) & bVar33,
                                               CONCAT15(local_150[0x2d] & bVar23 |
                                                        (byte)((ulong)uVar19 >> 0x28) & bVar33,
                                                        CONCAT14(local_150[0x2c] & bVar23 |
                                                                 (byte)((ulong)uVar19 >> 0x20) &
                                                                 bVar33,CONCAT13(local_150[0x2b] &
                                                                                 bVar23 | (byte)((
                                                  ulong)uVar19 >> 0x18) & bVar33,
                                                  CONCAT12(local_150[0x2a] & bVar23 |
                                                           (byte)((ulong)uVar19 >> 0x10) & bVar33,
                                                           CONCAT11(local_150[0x29] & bVar23 |
                                                                    (byte)((ulong)uVar19 >> 8) &
                                                                    bVar33,local_150[0x28] & bVar23
                                                                           | (byte)uVar19 & bVar33))
                                                  )))));
                        *(ulong *)(pbVar27 + 0x20) =
                             CONCAT17(local_150[0x27] & bVar23 |
                                      (byte)((ulong)uVar18 >> 0x38) & bVar33,
                                      CONCAT16(local_150[0x26] & bVar23 |
                                               (byte)((ulong)uVar18 >> 0x30) & bVar33,
                                               CONCAT15(local_150[0x25] & bVar23 |
                                                        (byte)((ulong)uVar18 >> 0x28) & bVar33,
                                                        CONCAT14(local_150[0x24] & bVar23 |
                                                                 (byte)((ulong)uVar18 >> 0x20) &
                                                                 bVar33,CONCAT13(local_150[0x23] &
                                                                                 bVar23 | (byte)((
                                                  ulong)uVar18 >> 0x18) & bVar33,
                                                  CONCAT12(local_150[0x22] & bVar23 |
                                                           (byte)((ulong)uVar18 >> 0x10) & bVar33,
                                                           CONCAT11(local_150[0x21] & bVar23 |
                                                                    (byte)((ulong)uVar18 >> 8) &
                                                                    bVar33,local_150[0x20] & bVar23
                                                                           | (byte)uVar18 & bVar33))
                                                  )))));
                      }
                      iVar11 = FUN_004c1c90(param_1,pbVar27,0x30,0);
                      FUN_00400420(pbVar31,"external/openssl/ssl/statem/statem_srvr.c",0xc3c);
                      goto joined_r0x004d536c;
                    }
                    uVar18 = 0x33;
                    uVar19 = 0x93;
                    uVar20 = 0xbf3;
                  }
                }
                FUN_004c99a0(param_1,uVar18,0x19f,uVar19,"external/openssl/ssl/statem/statem_srvr.c"
                             ,uVar20);
                FUN_00400420(pbVar31,"external/openssl/ssl/statem/statem_srvr.c",0xc3c);
                goto LAB_004d5b5c;
              }
              uVar18 = 0x50;
              uVar19 = 0x19f;
              uVar20 = 0x41;
              uVar21 = 0xbc9;
            }
          }
          else {
            uVar14 = param_2[1] - 2;
            if (1 < (ulong)param_2[1]) {
              puVar24 = (undefined1 *)*param_2;
              uVar30 = (ulong)CONCAT11(*puVar24,puVar24[1]);
              lVar32 = uVar14 - uVar30;
              if (uVar30 <= uVar14) {
                puVar24 = puVar24 + 2;
                *param_2 = (long)(puVar24 + uVar30);
                param_2[1] = lVar32;
                if (lVar32 == 0) goto LAB_004d5234;
              }
            }
            uVar18 = 0x32;
            uVar19 = 0x19f;
            uVar20 = 0x9f;
            uVar21 = 0xbb5;
          }
        }
      }
      else {
        if (param_2[1] == 0) {
          iVar11 = FUN_004c1c90(param_1,0,0,0);
joined_r0x004d536c:
          if (iVar11 != 0) {
            return 2;
          }
          goto LAB_004d5b5c;
        }
        uVar18 = 0x32;
        uVar19 = 0x17e;
        uVar20 = 0x9f;
        uVar21 = 0xd81;
      }
    }
    else {
      uVar14 = param_2[1] - 2;
      if (1 < (ulong)param_2[1]) {
        puVar24 = (undefined1 *)*param_2;
        uVar30 = (ulong)CONCAT11(*puVar24,puVar24[1]);
        if (uVar30 <= uVar14) {
          *param_2 = (long)(puVar24 + 2 + uVar30);
          param_2[1] = uVar14 - uVar30;
          if (uVar30 < 0x81) {
            if (*(long *)(param_1 + 0x160) == 0) {
              uVar18 = 0x50;
              uVar19 = 0x19e;
              uVar20 = 0xe1;
              uVar21 = 0xb6b;
            }
            else {
              lVar32 = *(long *)(param_1 + 0x142);
              FUN_00400420(*(undefined8 *)(lVar32 + 0x1a8),
                           "external/openssl/ssl/statem/../packet_locl.h",0x1c1);
              lVar17 = FUN_00404f60(puVar24 + 2,uVar30,
                                    "external/openssl/ssl/statem/../packet_locl.h",0x1c4);
              *(long *)(lVar32 + 0x1a8) = lVar17;
              if (lVar17 == 0) {
                uVar18 = 0x50;
                uVar19 = 0x19e;
                uVar20 = 0x44;
                uVar21 = 0xb71;
              }
              else {
                uVar13 = (**(code **)(param_1 + 0x160))
                                   (param_1,*(undefined8 *)(*(long *)(param_1 + 0x142) + 0x1a8),
                                    local_150,0x100);
                if (uVar13 < 0x101) {
                  uVar14 = (ulong)uVar13;
                  if (uVar13 == 0) {
                    uVar18 = 0x73;
                    uVar19 = 0x19e;
                    uVar20 = 0xdf;
                    uVar21 = 0xb82;
                  }
                  else {
                    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8),
                                 "external/openssl/ssl/statem/statem_srvr.c",0xb86);
                    uVar18 = FUN_00405020(local_150,uVar14,
                                          "external/openssl/ssl/statem/statem_srvr.c",0xb87);
                    *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8) = uVar18;
                    FUN_004006a0(local_150,uVar14);
                    lVar17 = *(long *)(param_1 + 0x2a);
                    if (*(long *)(lVar17 + 0x2c8) != 0) {
                      *(ulong *)(lVar17 + 0x2d0) = uVar14;
                      goto LAB_004d51fc;
                    }
                    uVar18 = 0x50;
                    uVar19 = 0x19e;
                    uVar20 = 0x41;
                    uVar21 = 0xb8c;
                  }
                }
                else {
                  uVar18 = 0x50;
                  uVar19 = 0x19e;
                  uVar20 = 0x44;
                  uVar21 = 0xb7a;
                }
              }
            }
          }
          else {
            uVar18 = 0x32;
            uVar19 = 0x19e;
            uVar20 = 0x92;
            uVar21 = 0xb66;
          }
          goto LAB_004d5b58;
        }
      }
      uVar18 = 0x32;
      uVar19 = 0x19e;
      uVar20 = 0x9f;
      uVar21 = 0xb61;
    }
LAB_004d5b58:
    FUN_004c99a0(param_1,uVar18,uVar19,uVar20,"external/openssl/ssl/statem/statem_srvr.c",uVar21);
LAB_004d5b5c:
    FUN_00400620(*(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8),
                 *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2d0),
                 "external/openssl/ssl/statem/statem_srvr.c",0xdac);
    *(undefined8 *)(*(long *)(param_1 + 0x2a) + 0x2c8) = 0;
    return 0;
  case 0x1d:
    uVar14 = FUN_004d9200();
    return uVar14;
  case 0x1e:
    if (param_2[1] != 0) {
      uVar14 = param_2[1] - 1;
      pbVar31 = (byte *)*param_2 + 1;
      bVar33 = *(byte *)*param_2;
      uVar30 = (ulong)bVar33;
      lVar17 = uVar14 - uVar30;
      if (uVar30 <= uVar14) {
        pbVar27 = pbVar31 + uVar30;
        *param_2 = (long)pbVar27;
        param_2[1] = lVar17;
        if (lVar17 != 0) {
          uVar14 = (ulong)*pbVar27;
          lVar32 = (lVar17 - 1U) - uVar14;
          if (uVar14 <= lVar17 - 1U) {
            *param_2 = (long)(pbVar27 + uVar14 + 1);
            param_2[1] = lVar32;
            if (lVar32 == 0) {
              FUN_00400420(*(undefined8 *)(param_1 + 0x1b6),
                           "external/openssl/ssl/statem/../packet_locl.h",0x1a4);
              param_1[0x1b6] = 0;
              param_1[0x1b7] = 0;
              if (bVar33 == 0) {
LAB_004d5dd0:
                *(ulong *)(param_1 + 0x1b8) = uVar30;
                return 3;
              }
              lVar17 = FUN_00405020(pbVar31,uVar30,"external/openssl/ssl/statem/../packet_locl.h",
                                    0x1ad);
              *(long *)(param_1 + 0x1b6) = lVar17;
              if (lVar17 != 0) goto LAB_004d5dd0;
              param_1[0x1b8] = 0;
              param_1[0x1b9] = 0;
              uVar18 = 0x50;
              uVar19 = 0x44;
              uVar20 = 0x107d;
              goto LAB_004d5d7c;
            }
          }
        }
      }
    }
    uVar18 = 0x32;
    uVar19 = 0x9f;
    uVar20 = 0x1076;
LAB_004d5d7c:
    FUN_004c99a0(param_1,uVar18,0x17f,uVar19,"external/openssl/ssl/statem/statem_srvr.c",uVar20);
    return 0;
  case 0x1f:
    uVar14 = FUN_004d9ac0();
    return uVar14;
  case 0x20:
    uVar14 = FUN_004d9bf0();
    return uVar14;
  case 0x2c:
    uVar14 = FUN_004d9980();
    return uVar14;
  case 0x31:
    if (param_2[1] == 0) {
      if ((param_1[0x21] & 0xfffffffe) == 10) {
        iVar11 = FUN_004c5d60(param_1 + 0x1fe);
        if (iVar11 == 0) {
          param_1[0x21] = 0xc;
          iVar11 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa1);
          uVar10 = 0;
          if (iVar11 != 0) {
            uVar10 = 3;
          }
          return (ulong)uVar10;
        }
        uVar18 = 10;
        uVar19 = 0xb6;
        uVar20 = 0x10a8;
      }
      else {
        uVar18 = 0x50;
        uVar19 = 0x44;
        uVar20 = 0x109d;
      }
    }
    else {
      uVar18 = 0x32;
      uVar19 = 0x9f;
      uVar20 = 0x1096;
    }
    FUN_004c99a0(param_1,uVar18,0x219,uVar19,"external/openssl/ssl/statem/statem_srvr.c",uVar20);
    return 0;
  }
  if (((param_1[0x1d0] == 0) && (lVar17 = *(long *)(param_1 + 0x2a), *(long *)(lVar17 + 0x198) != 0)
      ) && (*(long *)(lVar17 + 0x220) != 0)) {
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar11 = **(int **)(param_1 + 2), 0x303 < iVar11)) && (iVar11 != 0x10000)) {
                    /* WARNING: Subroutine does not return */
      FUN_00404dd0("Assertion failed: !SSL_IS_TLS13(s)","external/openssl/ssl/statem/statem_srvr.c",
                   0x55d);
    }
    if (((param_1[0x173] >> 0x1e & 1) != 0) ||
       (*(int *)(lVar17 + 0x3d8) == 0 && (param_1[0x173] & 0x40000) == 0)) {
      FUN_004e6030(param_1,1,100);
      return 1;
    }
    param_1[0x1d0] = 1;
    param_1[0xf] = 1;
  }
  piVar22 = (int *)FUN_004002a0(0x290,"external/openssl/ssl/statem/statem_srvr.c",0x56d);
  if (piVar22 == (int *)0x0) {
    FUN_004c99a0(param_1,0x50,0x17d,0x44,"external/openssl/ssl/statem/statem_srvr.c",0x570);
    goto LAB_004d46d4;
  }
  iVar11 = FUN_004c8110(param_1 + 0x1fe);
  *piVar22 = iVar11;
  if (iVar11 == 0) {
    uVar14 = param_2[1];
LAB_004d454c:
    if (uVar14 < 2) {
      uVar18 = 0x32;
      uVar19 = 0xa0;
      uVar20 = 0x5a2;
      goto LAB_004d46b8;
    }
    pbVar31 = (byte *)*param_2;
    bVar33 = *pbVar31;
    piVar22[1] = (uint)bVar33 << 8;
    piVar22[1] = (uint)CONCAT11(bVar33,pbVar31[1]);
    uVar30 = uVar14 - 2;
    *param_2 = (long)(pbVar31 + 2);
    param_2[1] = uVar30;
    if (iVar11 == 0) {
      if (0x1f < uVar30) {
        uVar19 = *(undefined8 *)(pbVar31 + 10);
        uVar18 = *(undefined8 *)(pbVar31 + 2);
        uVar20 = *(undefined8 *)(pbVar31 + 0x12);
        *(undefined8 *)(piVar22 + 8) = *(undefined8 *)(pbVar31 + 0x1a);
        *(undefined8 *)(piVar22 + 6) = uVar20;
        *(undefined8 *)(piVar22 + 4) = uVar19;
        *(undefined8 *)(piVar22 + 2) = uVar18;
        lVar17 = *param_2;
        lVar32 = param_2[1];
        *param_2 = lVar17 + 0x20;
        lVar15 = lVar32 + -0x20;
        param_2[1] = lVar15;
        if (lVar15 != 0) {
          bVar33 = *(byte *)(lVar17 + 0x20);
          uVar14 = (ulong)bVar33;
          uVar30 = lVar32 - 0x21;
          if (uVar14 <= uVar30) {
            *param_2 = lVar17 + 0x21 + uVar14;
            param_2[1] = uVar30 - uVar14;
            if (bVar33 < 0x21) {
              *(ulong *)(piVar22 + 10) = uVar14;
              memcpy(piVar22 + 0xc,(void *)(lVar17 + 0x21),uVar14);
              if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
LAB_004d47d4:
                uVar14 = param_2[1] - 2;
                if (1 < (ulong)param_2[1]) {
                  puVar24 = (undefined1 *)*param_2;
                  uVar30 = (ulong)CONCAT11(*puVar24,puVar24[1]);
                  if (uVar30 <= uVar14) {
                    *param_2 = (long)(puVar24 + 2 + uVar30);
                    param_2[1] = uVar14 - uVar30;
                    *(undefined1 **)(piVar22 + 0x56) = puVar24 + 2;
                    *(ulong *)(piVar22 + 0x58) = uVar30;
                    if (param_2[1] != 0) {
                      uVar14 = param_2[1] - 1;
                      pbVar31 = (byte *)*param_2 + 1;
                      __n = (size_t)*(byte *)*param_2;
                      if (__n <= uVar14) {
                        pbVar27 = pbVar31 + __n;
                        lVar17 = uVar14 - __n;
                        *param_2 = (long)pbVar27;
                        param_2[1] = lVar17;
                        if (lVar17 == 0) goto LAB_004d497c;
                        if (lVar17 != 1) {
                          uVar14 = (ulong)CONCAT11(*pbVar27,pbVar27[1]);
                          if (uVar14 <= lVar17 - 2U) {
                            *param_2 = (long)(pbVar27 + 2 + uVar14);
                            param_2[1] = (lVar17 - 2U) - uVar14;
                            *(byte **)(piVar22 + 0x9c) = pbVar27 + 2;
                            *(ulong *)(piVar22 + 0x9e) = uVar14;
                            if (param_2[1] == 0) goto LAB_004d4980;
                          }
                        }
                        uVar18 = 0x32;
                        uVar19 = 0x9f;
                        uVar20 = 0x616;
                        goto LAB_004d46b8;
                      }
                    }
                    uVar18 = 0x32;
                    uVar19 = 0x9f;
                    uVar20 = 0x60b;
                    goto LAB_004d46b8;
                  }
                }
                uVar18 = 0x32;
                uVar19 = 0x9f;
                uVar20 = 0x605;
              }
              else {
                if (param_2[1] != 0) {
                  uVar30 = param_2[1] - 1;
                  pbVar31 = (byte *)*param_2 + 1;
                  uVar14 = (ulong)*(byte *)*param_2;
                  if (uVar14 <= uVar30) {
                    *param_2 = (long)(pbVar31 + uVar14);
                    param_2[1] = uVar30 - uVar14;
                    *(ulong *)(piVar22 + 0x14) = uVar14;
                    memcpy(piVar22 + 0x16,pbVar31,uVar14);
                    uVar10 = FUN_004c5320(param_1);
                    if (((uVar10 >> 0xd & 1) != 0) && (*(long *)(piVar22 + 0x14) == 0)) {
                      FUN_00400420(piVar22,"external/openssl/ssl/statem/statem_srvr.c",0x5fd);
                      return 1;
                    }
                    goto LAB_004d47d4;
                  }
                }
                uVar18 = 0x32;
                uVar19 = 0x9f;
                uVar20 = 0x5ec;
              }
              goto LAB_004d46b8;
            }
            piVar22[10] = 0;
            piVar22[0xb] = 0;
          }
        }
      }
      uVar18 = 0x32;
      uVar19 = 0x9f;
      uVar20 = 0x5e5;
      goto LAB_004d46b8;
    }
    if (uVar30 < 2) {
LAB_004d45dc:
      uVar18 = 0x32;
      uVar19 = 0xd5;
      uVar20 = 0x5b4;
      goto LAB_004d46b8;
    }
    bVar33 = pbVar31[2];
    bVar23 = pbVar31[3];
    *param_2 = (long)(pbVar31 + 4);
    param_2[1] = uVar14 - 4;
    if (uVar14 - 4 < 2) goto LAB_004d45dc;
    bVar34 = pbVar31[4];
    bVar35 = pbVar31[5];
    *param_2 = (long)(pbVar31 + 6);
    param_2[1] = uVar14 - 6;
    if (uVar14 - 6 < 2) goto LAB_004d45dc;
    uVar30 = (ulong)CONCAT11(bVar34,bVar35);
    bVar36 = pbVar31[6];
    bVar37 = pbVar31[7];
    *param_2 = (long)(pbVar31 + 8);
    param_2[1] = uVar14 - 8;
    if (0x20 < CONCAT11(bVar34,bVar35)) {
      uVar18 = 0x2f;
      uVar19 = 0x9f;
      uVar20 = 0x5ba;
      goto LAB_004d46b8;
    }
    uVar26 = (ulong)CONCAT11(bVar33,bVar23);
    if (uVar14 - 8 < uVar26) {
LAB_004d479c:
      uVar18 = 0x32;
      uVar19 = 0xd5;
      uVar20 = 0x5c5;
      goto LAB_004d46b8;
    }
    *(byte **)(piVar22 + 0x56) = pbVar31 + 8;
    *(ulong *)(piVar22 + 0x58) = uVar26;
    lVar17 = *param_2;
    lVar32 = param_2[1];
    *param_2 = (long)(lVar17 + uVar26);
    param_2[1] = lVar32 - uVar26;
    if (lVar32 - uVar26 < uVar30) goto LAB_004d479c;
    uVar14 = (ulong)CONCAT11(bVar36,bVar37);
    memcpy(piVar22 + 0xc,(void *)(lVar17 + uVar26),uVar30);
    __src = (void *)(*param_2 + uVar30);
    uVar26 = param_2[1] - uVar30;
    *param_2 = (long)__src;
    param_2[1] = uVar26;
    if (uVar26 < uVar14) goto LAB_004d479c;
    *param_2 = (long)__src + uVar14;
    param_2[1] = uVar26 - uVar14;
    if (uVar26 - uVar14 != 0) goto LAB_004d479c;
    uVar10 = (uint)CONCAT11(bVar36,bVar37);
    if (0x1f < uVar10) {
      uVar10 = 0x20;
    }
    *(ulong *)(piVar22 + 10) = uVar30;
    piVar22[4] = 0;
    piVar22[5] = 0;
    piVar22[2] = 0;
    piVar22[3] = 0;
    piVar22[8] = 0;
    piVar22[9] = 0;
    piVar22[6] = 0;
    piVar22[7] = 0;
    memcpy((void *)((long)(piVar22 + 10) - (ulong)uVar10),__src,(ulong)uVar10);
    __n = 1;
    pbVar31 = &DAT_03a270fb;
LAB_004d497c:
    piVar22[0x9c] = 0;
    piVar22[0x9d] = 0;
    piVar22[0x9e] = 0;
    piVar22[0x9f] = 0;
LAB_004d4980:
    *(size_t *)(piVar22 + 0x5a) = __n;
    memcpy(piVar22 + 0x5c,pbVar31,__n);
    iVar11 = FUN_004e3f50(param_1,abStack_120 + 0xe0,0x80,piVar22 + 0xa2,piVar22 + 0xa0,1);
    if (iVar11 != 0) {
      *(int **)(param_1 + 0x1c6) = piVar22;
      return 2;
    }
  }
  else {
    if (((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0) ||
        (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)) && (param_1[0x136] == 0)) {
      if (param_2[1] != 0) {
        uVar14 = param_2[1] - 1;
        cVar1 = *(char *)*param_2;
        *param_2 = (long)((char *)*param_2 + 1);
        param_2[1] = uVar14;
        if (cVar1 == '\x01') goto LAB_004d454c;
      }
      uVar18 = 0x50;
      uVar19 = 0x44;
      uVar20 = 0x59b;
    }
    else {
      uVar18 = 10;
      uVar19 = 0xf4;
      uVar20 = 0x580;
    }
LAB_004d46b8:
    FUN_004c99a0(param_1,uVar18,0x17d,uVar19,"external/openssl/ssl/statem/statem_srvr.c",uVar20);
  }
  FUN_00400420(*(undefined8 *)(piVar22 + 0xa2),"external/openssl/ssl/statem/statem_srvr.c",0x632);
LAB_004d46d4:
  FUN_00400420(piVar22,"external/openssl/ssl/statem/statem_srvr.c",0x633);
  return 0;
}


