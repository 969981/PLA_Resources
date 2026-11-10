/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004ce4d0; name: FUN_004ce4d0
 */


int FUN_004ce4d0(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  long lVar18;
  byte *pbVar19;
  uint *puVar20;
  undefined1 *puVar21;
  ulong uVar22;
  undefined1 auStack_f0 [64];
  undefined1 auStack_b0 [64];
  undefined1 auStack_68 [8];
  
  uVar7 = DAT_0388a698;
  uVar12 = *(ulong *)(param_1 + 0x180);
  lVar14 = *(long *)(param_1 + 0x142);
  uVar22 = 1;
  lVar6 = 0;
  if (uVar12 == 0) {
    uVar12 = 1;
  }
  do {
    lVar18 = lVar6;
    uVar10 = uVar22;
    if ((param_1[0x201] != 0xf1) || (*(ulong *)(param_1 + 0x5d2) < 5)) {
      iVar3 = FUN_004c5e40(param_1,5,*(undefined8 *)(param_1 + 0x20a),0,uVar10 == 1,auStack_68);
      if (iVar3 < 1) {
        return iVar3;
      }
      uVar22 = *(ulong *)(param_1 + 0x5d2);
      param_1[0x201] = 0xf1;
      if ((long)uVar22 < 0) {
        uVar7 = 0x50;
        uVar8 = 0x44;
        uVar9 = 0xda;
        goto LAB_004cf218;
      }
      if ((uVar22 < 2) || (uVar22 == 2)) {
        uVar7 = 0x32;
        uVar8 = 0x44;
        uVar9 = 0xe1;
        goto LAB_004cf218;
      }
      pbVar19 = *(byte **)(param_1 + 0x5d0);
      bVar1 = *pbVar19;
      uVar15 = (ulong)pbVar19[1];
      bVar2 = pbVar19[2];
      if ((((param_1[0xe] != 0) && (param_1[0x5e8] != 0)) && ((char)bVar1 < '\0')) && (bVar2 == 1))
      {
        *(undefined8 *)((long)param_1 + lVar18 + 0xd40) = uVar7;
        uVar15 = ((ulong)bVar1 & 0x7f) << 8 | uVar15;
        *(ulong *)((long)param_1 + lVar18 + 0xd48) = uVar15;
        if (*(long *)(param_1 + 0x20a) - 2U < uVar15) {
          uVar7 = 0x16;
          uVar8 = 0xc6;
          uVar9 = 0xfb;
        }
        else {
          if (8 < uVar15) goto LAB_004ce72c;
          uVar7 = 0x32;
          uVar8 = 0xa0;
          uVar9 = 0x101;
        }
        goto LAB_004cf218;
      }
      if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
        (**(code **)(param_1 + 0x2e))(0,0,0x100,pbVar19,5,param_1,*(undefined8 *)(param_1 + 0x30));
        bVar1 = *pbVar19;
        uVar15 = (ulong)pbVar19[1];
        bVar2 = pbVar19[2];
      }
      uVar4 = (uint)bVar1;
      if (uVar22 - 3 < 2) {
        uVar7 = 0x32;
        uVar8 = 0x44;
        uVar9 = 0x10f;
        goto LAB_004cf218;
      }
      bVar1 = pbVar19[3];
      iVar3 = (int)uVar15;
      uVar16 = (uint)bVar2 | iVar3 << 8;
      bVar2 = pbVar19[4];
      *(uint *)((long)param_1 + lVar18 + 0xd44) = uVar4;
      *(uint *)((long)param_1 + lVar18 + 0xd40) = uVar16;
      *(ulong *)((long)param_1 + lVar18 + 0xd48) = (ulong)CONCAT11(bVar1,bVar2);
      if ((param_1[0x17a] == 0) &&
         (((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0 ||
            (iVar5 = **(int **)(param_1 + 2), iVar5 < 0x304)) || (iVar5 == 0x10000)) &&
          ((param_1[0x136] != 1 && (uVar16 != *param_1)))))) {
        if (((*param_1 & 0xff00) == iVar3 * 0x100) &&
           ((*(long *)(param_1 + 0x11a) == 0 && (*(long *)(param_1 + 0x120) == 0)))) {
          if (uVar4 == 0x15) {
            uVar7 = 0x10b;
            uVar8 = 299;
            goto LAB_004cf000;
          }
          *param_1 = uVar16;
        }
        uVar7 = 0x46;
        uVar8 = 0x10b;
        uVar9 = 0x134;
        goto LAB_004cf218;
      }
      if (iVar3 != 3) {
        if (param_1[0x5e8] != 0) {
          pcVar17 = *(char **)(param_1 + 0x5d0);
          iVar3 = strncmp(pcVar17,"GET ",4);
          if ((((iVar3 == 0) || (iVar3 = strncmp(pcVar17,"POST ",5), iVar3 == 0)) ||
              (iVar3 = strncmp(pcVar17,"HEAD ",5), iVar3 == 0)) ||
             (iVar3 = strncmp(pcVar17,"PUT ",4), iVar3 == 0)) {
            uVar7 = 0x9c;
            uVar8 = 0x142;
          }
          else {
            iVar3 = strncmp(pcVar17,"CONNE",5);
            if (iVar3 == 0) {
              uVar7 = 0x9b;
              uVar8 = 0x146;
            }
            else {
              uVar7 = 0x10b;
              uVar8 = 0x14c;
            }
          }
LAB_004cf000:
          FUN_004c99a0(param_1,0xffffffff,0x8f,uVar7,"external/openssl/ssl/record/ssl3_record.c",
                       uVar8);
          return -1;
        }
        uVar7 = 0x46;
        uVar8 = 0x10b;
        uVar9 = 0x151;
        goto LAB_004cf218;
      }
      if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
          (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) &&
         ((iVar3 != 0x10000 && (*(long *)(param_1 + 0x10e) != 0)))) {
        if (uVar4 != 0x17) {
          if (uVar4 == 0x15) {
            if (param_1[0x20] != 1) goto LAB_004cf0d4;
          }
          else if ((uVar4 != 0x14) ||
                  ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) != 0 &&
                   (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) != 0)))) {
LAB_004cf0d4:
            uVar7 = 10;
            uVar8 = 0x1bb;
            uVar9 = 0x15e;
            goto LAB_004cf218;
          }
        }
        if (uVar16 != 0x303) {
          uVar7 = 0x32;
          uVar8 = 0x10b;
          uVar9 = 0x163;
          goto LAB_004cf218;
        }
      }
      if (*(long *)(param_1 + 0x20a) - 5U < (ulong)CONCAT11(bVar1,bVar2)) {
        uVar7 = 0x16;
        uVar8 = 0xc6;
        uVar9 = 0x16b;
        goto LAB_004cf218;
      }
    }
LAB_004ce72c:
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
        (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
      uVar15 = *(ulong *)((long)param_1 + lVar18 + 0xd48);
      if (0x4100 < uVar15) {
        uVar7 = 0x16;
        uVar8 = 0x96;
        uVar9 = 0x176;
        goto LAB_004cf218;
      }
    }
    else {
      uVar15 = *(ulong *)((long)param_1 + lVar18 + 0xd48);
      uVar22 = 0x4140;
      if (*(long *)(param_1 + 0x118) != 0) {
        uVar22 = 0x4540;
      }
      if (uVar22 < uVar15) {
        uVar7 = 0x16;
        uVar8 = 0x96;
        uVar9 = 0x187;
        goto LAB_004cf218;
      }
    }
    iVar3 = *(int *)((long)param_1 + lVar18 + 0xd40);
    uVar22 = uVar15 - 3;
    if (iVar3 != 2) {
      uVar22 = uVar15;
    }
    if (uVar22 != 0) {
      iVar3 = FUN_004c5e40(param_1,uVar22,uVar22,1,0,auStack_68);
      if (iVar3 < 1) {
        return iVar3;
      }
      iVar3 = *(int *)((long)param_1 + lVar18 + 0xd40);
    }
    param_1[0x201] = 0xf0;
    lVar13 = *(long *)(param_1 + 0x5d0);
    lVar6 = 2;
    if (iVar3 != 2) {
      lVar6 = 5;
    }
    *(undefined4 *)((long)param_1 + lVar18 + 0xd78) = 0;
    *(long *)((long)param_1 + lVar18 + 0xd68) = lVar13 + lVar6;
    *(long *)((long)param_1 + lVar18 + 0xd60) = lVar13 + lVar6;
    *(undefined8 *)((long)param_1 + lVar18 + 0xd50) =
         *(undefined8 *)((long)param_1 + lVar18 + 0xd48);
    param_1[0x5d2] = 0;
    param_1[0x5d3] = 0;
    param_1[0x5e8] = 0;
    if (((uVar12 <= uVar10) || (*(int *)((long)param_1 + lVar18 + 0xd44) != 0x17)) ||
       (((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0 ||
        (*(long *)(param_1 + 0x10e) == 0)))) break;
    FUN_0041c7c0();
    uVar4 = FUN_0041c7b0();
    if ((((uVar4 >> 0x17 & 1) == 0) || (*(long *)(param_1 + 0x206) == 0)) ||
       ((*(ulong *)(param_1 + 0x20e) < 5 ||
        (pcVar17 = (char *)(*(long *)(param_1 + 0x206) + *(long *)(param_1 + 0x20c)),
        *pcVar17 != '\x17')))) break;
    uVar22 = uVar10 + 1;
    lVar6 = lVar18 + 0x50;
    if (*(ulong *)(param_1 + 0x20e) < (ulong)CONCAT11(pcVar17[3],pcVar17[4]) + 5) break;
  } while( true );
  if (((uVar10 == 1) && (param_1[0x351] == 0x14)) &&
     (((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0 &&
        ((iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3 && (iVar3 != 0x10000)))) ||
       (param_1[0x136] != 0)) &&
      ((*(long *)(*(long *)(param_1 + 0x2a) + 0x198) == 0 ||
       (*(long *)(*(long *)(param_1 + 0x2a) + 0x220) == 0)))))) {
    if ((*(long *)((long)param_1 + lVar18 + 0xd48) == 1) &&
       (**(char **)((long)param_1 + lVar18 + 0xd60) == '\x01')) {
      param_1[0x351] = 0x16;
      lVar6 = *(long *)(param_1 + 0x5da);
      *(ulong *)(param_1 + 0x5da) = lVar6 + 1U;
      if (lVar6 + 1U < 0x21) {
        *(undefined4 *)((long)param_1 + lVar18 + 0xd78) = 1;
        param_1[0x202] = 1;
        param_1[0x203] = 0;
        return 1;
      }
      uVar7 = 10;
      uVar8 = 0x106;
      uVar9 = 0x1e5;
    }
    else {
      uVar7 = 0x2f;
      uVar8 = 0x104;
      uVar9 = 0x1d9;
    }
  }
  else {
    if (((*(byte *)(*(long *)(param_1 + 0x2a) + 1) & 1) != 0) && (*(long *)(param_1 + 0x114) != 0))
    {
      FUN_0041cd10();
      uVar4 = FUN_0041ccc0();
      if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: imac_size >= 0 && imac_size <= EVP_MAX_MD_SIZE",
                     "external/openssl/ssl/record/ssl3_record.c",0x1f6);
      }
      uVar22 = (ulong)(int)uVar4;
      puVar20 = param_1 + 0x350;
      uVar12 = uVar10;
      do {
        lVar6 = *(ulong *)(puVar20 + 2) - uVar22;
        if (*(ulong *)(puVar20 + 2) < uVar22) {
          uVar7 = 0x32;
          uVar8 = 0xa0;
          uVar9 = 0x201;
          goto LAB_004cf218;
        }
        *(long *)(puVar20 + 2) = lVar6;
        lVar18 = *(long *)(puVar20 + 8);
        iVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                          (param_1,puVar20,auStack_b0,0);
        if ((iVar3 == 0) || (iVar3 = FUN_00404df0(auStack_b0,lVar18 + lVar6,uVar22), iVar3 != 0)) {
          uVar7 = 0x14;
          uVar8 = 0x119;
          uVar9 = 0x209;
          goto LAB_004cf218;
        }
        uVar12 = uVar12 - 1;
        puVar20 = puVar20 + 0x14;
      } while (uVar12 != 0);
    }
    uVar7 = *(undefined8 *)(param_1 + 0x352);
    iVar3 = (*(code *)**(undefined8 **)(*(long *)(param_1 + 2) + 0xc0))
                      (param_1,param_1 + 0x350,uVar10,0);
    if (iVar3 == 0) {
      iVar3 = FUN_004c9a20(param_1);
      if (iVar3 != 0) {
        return -1;
      }
      if ((uVar10 == 1) && (iVar3 = FUN_004c9a70(param_1), iVar3 != 0)) {
        iVar3 = FUN_004ce3e0(param_1,*(undefined8 *)(param_1 + 0x352),0x68,0);
joined_r0x004ced1c:
        if (iVar3 == 0) {
          return -1;
        }
        param_1[0x352] = 0;
        param_1[0x353] = 0;
        param_1[0x35e] = 1;
        param_1[0x202] = 1;
        param_1[0x203] = 0;
        FUN_004c5cf0(param_1 + 0x1fe);
        return 1;
      }
      uVar7 = 0x15;
      uVar8 = 0x81;
      uVar9 = 0x233;
    }
    else if ((((lVar14 == 0) || (*(long *)(param_1 + 0x10e) == 0)) ||
             ((*(byte *)(*(long *)(param_1 + 0x2a) + 1) & 1) != 0)) ||
            (lVar6 = FUN_0041cd10(*(undefined8 *)(param_1 + 0x114)), lVar6 == 0)) {
LAB_004ceac4:
      if (-1 < iVar3) {
        uVar12 = 0;
        lVar6 = *(long *)(param_1 + 0x118);
        do {
          if (lVar6 != 0) {
            uVar22 = *(ulong *)(param_1 + uVar12 * 0x14 + 0x352);
            if (uVar22 < 0x4401) {
              lVar14 = *(long *)(param_1 + uVar12 * 0x14 + 0x35c);
              if (lVar14 == 0) {
                lVar14 = FUN_00400260(0x4540,"external/openssl/ssl/record/ssl3_record.c",799);
                *(long *)(param_1 + uVar12 * 0x14 + 0x35c) = lVar14;
                if (lVar14 != 0) {
                  lVar6 = *(long *)(param_1 + 0x118);
                  uVar22 = *(ulong *)(param_1 + uVar12 * 0x14 + 0x352);
                  goto LAB_004ceb5c;
                }
              }
              else {
LAB_004ceb5c:
                iVar3 = FUN_004bfc20(lVar6,lVar14,0x4000,
                                     *(undefined8 *)(param_1 + uVar12 * 0x14 + 0x358),uVar22);
                if (-1 < iVar3) {
                  *(long *)(param_1 + uVar12 * 0x14 + 0x352) = (long)iVar3;
                  *(undefined8 *)(param_1 + uVar12 * 0x14 + 0x358) =
                       *(undefined8 *)(param_1 + uVar12 * 0x14 + 0x35c);
                  goto LAB_004ceb84;
                }
              }
              uVar8 = 0x6b;
              uVar9 = 0x2b5;
              uVar7 = 0x1e;
            }
            else {
              uVar7 = 0x16;
              uVar8 = 0x8c;
              uVar9 = 0x2b0;
            }
            goto LAB_004cf218;
          }
LAB_004ceb84:
          piVar11 = *(int **)(param_1 + 2);
          uVar4 = *(uint *)(*(long *)(piVar11 + 0x30) + 0x60);
          if (((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar11)) && (*piVar11 != 0x10000)) &&
             ((*(long *)(param_1 + 0x10e) != 0 && (param_1[uVar12 * 0x14 + 0x351] != 0x15)))) {
            if ((param_1[uVar12 * 0x14 + 0x351] != 0x17) ||
               (lVar6 = *(long *)(param_1 + uVar12 * 0x14 + 0x352), lVar6 == 0)) {
              uVar7 = 10;
              uVar8 = 0x1bb;
              uVar9 = 0x2c2;
              goto LAB_004cf218;
            }
            do {
              lVar6 = lVar6 + -1;
              if (lVar6 == 0) break;
            } while (*(char *)(*(long *)(param_1 + uVar12 * 0x14 + 0x358) + lVar6) == '\0');
            *(long *)(param_1 + uVar12 * 0x14 + 0x352) = lVar6;
            pbVar19 = (byte *)(*(long *)(param_1 + uVar12 * 0x14 + 0x358) + lVar6);
            uVar16 = (uint)*pbVar19;
            param_1[uVar12 * 0x14 + 0x351] = uVar16;
            if (2 < uVar16 - 0x15) {
              uVar7 = 10;
              uVar8 = 0x1bb;
              uVar9 = 0x2d1;
              goto LAB_004cf218;
            }
            if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
              (**(code **)(param_1 + 0x2e))
                        (0,*param_1,0x101,pbVar19,1,param_1,*(undefined8 *)(param_1 + 0x30));
              piVar11 = *(int **)(param_1 + 2);
              uVar4 = *(uint *)(*(long *)(piVar11 + 0x30) + 0x60);
            }
          }
          if ((((uVar4 >> 3 & 1) == 0) && (0x303 < *piVar11)) &&
             ((*piVar11 != 0x10000 &&
              ((param_1[uVar12 * 0x14 + 0x351] - 0x15 < 2 &&
               (*(long *)(param_1 + uVar12 * 0x14 + 0x352) == 0)))))) {
            uVar7 = 10;
            uVar8 = 0x10f;
            uVar9 = 0x2e2;
            goto LAB_004cf218;
          }
          uVar22 = *(ulong *)(param_1 + uVar12 * 0x14 + 0x352);
          if (0x4000 < uVar22) {
            uVar7 = 0x16;
            uVar8 = 0x92;
            uVar9 = 0x2e8;
            goto LAB_004cf218;
          }
          if (((*(long *)(param_1 + 0x142) != 0) &&
              (uVar4 = *(byte *)(*(long *)(param_1 + 0x142) + 0x280) - 1, uVar4 < 4)) &&
             ((uint)(0x200 << (ulong)(uVar4 & 0x1f)) < uVar22)) {
            uVar7 = 0x16;
            uVar8 = 0x92;
            uVar9 = 0x2f0;
            goto LAB_004cf218;
          }
          (param_1 + uVar12 * 0x14 + 0x356)[0] = 0;
          (param_1 + uVar12 * 0x14 + 0x356)[1] = 0;
          if (uVar22 == 0) {
            lVar6 = *(long *)(param_1 + 0x5da);
            *(ulong *)(param_1 + 0x5da) = lVar6 + 1U;
            if (0x20 < lVar6 + 1U) {
              uVar7 = 10;
              uVar8 = 0x12a;
              uVar9 = 0x303;
              goto LAB_004cf218;
            }
          }
          else {
            param_1[0x5da] = 0;
            param_1[0x5db] = 0;
          }
          uVar12 = uVar12 + 1;
          if (uVar10 == uVar12) {
            if (((param_1[0x21] == 0xb) && (param_1[0x351] == 0x17)) &&
               (iVar3 = FUN_004ce3e0(param_1,*(undefined8 *)(param_1 + 0x352),0,0), iVar3 == 0)) {
              return -1;
            }
            *(ulong *)(param_1 + 0x202) = uVar10;
            return 1;
          }
          lVar6 = *(long *)(param_1 + 0x118);
        } while( true );
      }
      iVar3 = FUN_004c9a20(param_1);
      if (iVar3 != 0) {
        return -1;
      }
      if ((uVar10 == 1) && (iVar3 = FUN_004c9a70(param_1), iVar3 != 0)) {
        iVar3 = FUN_004ce3e0(param_1,uVar7,0x68,0);
        goto joined_r0x004ced1c;
      }
      uVar7 = 0x14;
      uVar8 = 0x119;
      uVar9 = 0x2a5;
    }
    else {
      FUN_0041cd10(*(undefined8 *)(param_1 + 0x114));
      uVar4 = FUN_0041ccc0();
      if (0x40 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: mac_size <= EVP_MAX_MD_SIZE",
                     "external/openssl/ssl/record/ssl3_record.c",0x249);
      }
      uVar15 = (ulong)(int)uVar4;
      uVar22 = *(ulong *)(param_1 + 0x354);
      puVar20 = param_1 + 0x350;
      uVar12 = uVar10;
      while (uVar15 <= uVar22) {
        FUN_0041c7c0(*(undefined8 *)(param_1 + 0x10e));
        uVar22 = FUN_0041c7b0();
        if (((uVar22 & 0xf0007) == 2) && (*(ulong *)(puVar20 + 4) < uVar15 + 1)) break;
        FUN_0041c7c0(*(undefined8 *)(param_1 + 0x10e));
        uVar22 = FUN_0041c7b0();
        if ((uVar22 & 0xf0007) == 2) {
          iVar5 = FUN_004cf280(auStack_f0,puVar20,uVar15);
          if (iVar5 == 0) {
            uVar7 = 0x50;
            uVar8 = 0x44;
            uVar9 = 0x26a;
            goto LAB_004cf218;
          }
          lVar6 = *(long *)(puVar20 + 2) - uVar15;
          puVar21 = auStack_f0;
        }
        else {
          lVar6 = *(long *)(puVar20 + 2) - uVar15;
          puVar21 = (undefined1 *)(*(long *)(puVar20 + 8) + lVar6);
        }
        *(long *)(puVar20 + 2) = lVar6;
        iVar5 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 8))
                          (param_1,puVar20,auStack_b0,0);
        if (((puVar21 == (undefined1 *)0x0) || (iVar5 == 0)) ||
           (iVar5 = FUN_00404df0(auStack_b0,puVar21,uVar15), iVar5 != 0)) {
          iVar3 = -1;
        }
        if (uVar15 + 0x4400 < *(ulong *)(puVar20 + 2)) {
          iVar3 = -1;
        }
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_004ceac4;
        uVar22 = *(ulong *)(puVar20 + 0x18);
        puVar20 = puVar20 + 0x14;
      }
      uVar7 = 0x32;
      uVar8 = 0xa0;
      uVar9 = 0x25c;
    }
  }
LAB_004cf218:
  FUN_004c99a0(param_1,uVar7,0x8f,uVar8,"external/openssl/ssl/record/ssl3_record.c",uVar9);
  return -1;
}


