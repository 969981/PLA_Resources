/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00415e20; name: FUN_00415e20
 */


undefined8 FUN_00415e20(long param_1,long param_2,long *param_3)

{
  char *pcVar1;
  ushort uVar2;
  byte bVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  size_t sVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  byte bVar17;
  int iVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte bVar22;
  uint uVar23;
  ulong uVar24;
  char *pcVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  long local_108;
  byte *local_100;
  char *local_f8;
  long local_f0;
  byte *local_e8;
  __dev_t local_e0;
  __ino_t _Stack_d8;
  __nlink_t local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  __dev_t _Stack_b8;
  __off_t _Stack_b0;
  __blksize_t _Stack_a8;
  __blkcnt_t local_a0;
  __time_t _Stack_98;
  long lStack_90;
  __time_t _Stack_88;
  long local_80;
  __time_t _Stack_78;
  long lStack_70;
  long lStack_68;
  
  local_f0 = 0;
  local_e8 = (byte *)0x0;
  lVar28 = *(long *)(param_1 + 0x10);
  lVar8 = FUN_00417420();
  if (lVar8 == 0) {
    uVar16 = 0xca;
    uVar14 = 7;
LAB_00416874:
    FUN_004014b0(0xe,0x79,uVar14,"external/openssl/crypto/conf/conf_def.c",uVar16);
  }
  else {
    pbVar9 = (byte *)FUN_00404f10("default","external/openssl/crypto/conf/conf_def.c",0xce);
    local_e8 = pbVar9;
    if (pbVar9 == (byte *)0x0) {
      uVar14 = 0x41;
      uVar16 = 0xd0;
    }
    else {
      iVar7 = FUN_00417ca0(param_1);
      if (iVar7 == 0) {
        uVar14 = 0x41;
        uVar16 = 0xd5;
        goto LAB_00416874;
      }
      local_108 = FUN_00417f00(param_1,pbVar9);
      if (local_108 != 0) {
        lVar10 = FUN_004174d0(lVar8,0x200);
        if (lVar10 != 0) {
          lVar26 = 0;
          lVar10 = 0;
          pcVar25 = (char *)0x0;
LAB_00415ec4:
          uVar27 = 0;
          bVar6 = false;
LAB_00415ef4:
          lVar29 = (long)(int)uVar27;
          pcVar1 = (char *)(*(long *)(lVar8 + 8) + lVar29);
          *pcVar1 = '\0';
          while( true ) {
            FUN_004046b0(param_2,pcVar1,0x1ff);
            pcVar1[0x1ff] = '\0';
            sVar11 = strlen(pcVar1);
            iVar7 = (int)sVar11;
            if (bVar6 || iVar7 != 0) break;
            if (local_f0 == 0) {
LAB_00415f08:
              lVar12 = FUN_00407890(lVar26);
              if (lVar12 == 0) {
                FUN_00417470(lVar8);
                FUN_00400420(local_e8,"external/openssl/crypto/conf/conf_def.c",0x1af);
                FUN_00407010(lVar26);
                return 1;
              }
            }
            else {
              lVar12 = FUN_00416c80(pcVar25,&local_f0);
              if (lVar12 == 0) {
                FUN_00400420(pcVar25,"external/openssl/crypto/conf/conf_def.c",0xfa);
                pcVar25 = (char *)0x0;
                goto LAB_00415f08;
              }
            }
            thunk_FUN_00403ee0(param_2);
            param_2 = lVar12;
          }
          uVar27 = sVar11 & 0xffffffff;
          if (0 < iVar7) {
            uVar27 = (ulong)iVar7;
            do {
              if (pcVar1[uVar27 - 1] != '\r' && pcVar1[uVar27 - 1] != '\n') break;
              uVar27 = uVar27 - 1;
            } while (0 < (long)uVar27);
          }
          iVar18 = (int)uVar27;
          if ((iVar7 == 0) || (iVar18 != iVar7)) {
            bVar6 = false;
            lVar10 = lVar10 + 1;
            pcVar1[iVar18] = '\0';
            uVar24 = lVar29 + iVar18;
            if (0 < (int)uVar24) goto LAB_00415fe4;
LAB_00415ed4:
            if (!bVar6) {
              pbVar9 = *(byte **)(lVar8 + 8);
              bVar17 = *pbVar9;
              pbVar19 = pbVar9;
              if ((char)bVar17 < '\0') {
                if (-1 < (char)bVar17) goto LAB_00416084;
                goto LAB_00416070;
              }
              do {
                uVar2 = *(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2);
                if ((uVar2 >> 0xb & 1) != 0) goto LAB_00416184;
                if ((uVar2 >> 4 & 1) == 0) break;
                pbVar19 = pbVar19 + 1;
                bVar17 = *pbVar19;
              } while (-1 < (char)bVar17);
              do {
                if ((char)bVar17 < '\0') {
LAB_00416070:
                  pbVar20 = pbVar19 + 1;
                }
                else {
LAB_00416084:
                  lVar29 = *(long *)(param_1 + 8);
                  uVar2 = *(ushort *)(lVar29 + (ulong)bVar17 * 2);
                  if ((uVar2 >> 7 & 1) != 0) goto LAB_00416184;
                  pbVar21 = pbVar19;
                  if ((uVar2 >> 10 & 1) == 0) {
                    if ((uVar2 >> 6 & 1) == 0) {
                      if ((uVar2 >> 5 & 1) != 0) {
                        bVar17 = pbVar19[1];
                        if (((char)bVar17 < '\0') ||
                           (pbVar20 = pbVar19 + 1,
                           (*(ushort *)(lVar29 + (ulong)bVar17 * 2) >> 3 & 1) == 0)) {
                          pbVar20 = pbVar19 + 2;
                        }
                        goto LAB_00416074;
                      }
                      if ((uVar2 >> 3 & 1) == 0) goto LAB_00416070;
                      goto LAB_00416188;
                    }
                    pbVar20 = pbVar19 + 1;
                    bVar22 = *pbVar20;
                    if (-1 < (char)bVar22) goto LAB_00416134;
                    while( true ) {
                      bVar3 = bVar17;
                      if (bVar22 == bVar17) break;
                      while( true ) {
                        pbVar19 = pbVar20;
                        pbVar20 = pbVar19 + 1;
                        bVar22 = *pbVar20;
                        if ((char)bVar22 < '\0') break;
LAB_00416134:
                        bVar3 = bVar22;
                        if ((bVar22 == bVar17) ||
                           (uVar2 = *(ushort *)(lVar29 + (ulong)bVar22 * 2), (uVar2 >> 3 & 1) != 0))
                        goto LAB_00416178;
                        if ((uVar2 >> 5 & 1) != 0) {
                          pbVar20 = pbVar19 + 2;
                          if (-1 < (char)*pbVar20) {
                            if ((*(ushort *)(lVar29 + (ulong)*pbVar20 * 2) >> 3 & 1) != 0)
                            goto LAB_00416074;
                          }
                        }
                      }
                    }
                  }
                  else {
                    do {
                      do {
                        pbVar19 = pbVar21;
                        pbVar20 = pbVar19 + 1;
                        bVar3 = *pbVar20;
                        if ((-1 < (char)bVar3) &&
                           ((*(ushort *)(lVar29 + (ulong)bVar3 * 2) >> 3 & 1) != 0))
                        goto LAB_00416178;
                        pbVar21 = pbVar20;
                      } while (bVar3 != bVar17);
                      pbVar21 = pbVar19 + 2;
                      bVar3 = bVar17;
                    } while (pbVar19[2] == bVar17);
                  }
LAB_00416178:
                  pbVar19 = pbVar19 + 2;
                  if (bVar3 != bVar17) {
                    pbVar19 = pbVar20;
                  }
                  pbVar20 = pbVar19;
                }
LAB_00416074:
                pbVar19 = pbVar20;
                bVar17 = *pbVar19;
              } while( true );
            }
            bVar6 = true;
            uVar27 = uVar24 & 0xffffffff;
          }
          else {
            bVar6 = true;
            uVar24 = lVar29 + iVar18;
            if ((int)uVar24 < 1) goto LAB_00415ed4;
LAB_00415fe4:
            uVar27 = uVar24 - 1;
            pbVar9 = (byte *)(*(long *)(lVar8 + 8) + uVar27);
            bVar17 = *pbVar9;
            if ((((char)bVar17 < '\0') ||
                ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) >> 5 & 1) == 0)) ||
               ((1 < (int)uVar24 &&
                ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)pbVar9[-1] * 2) >> 5 & 1) != 0))))
            goto LAB_00415ed4;
            bVar6 = true;
          }
          goto LAB_00415ee0;
        }
        lVar26 = 0;
        pcVar25 = (char *)0x0;
        lVar10 = 0;
LAB_00416a14:
        FUN_004014b0(0xe,0x79,7,"external/openssl/crypto/conf/conf_def.c",0xe3);
        lVar12 = 0;
        lVar29 = 0;
        goto LAB_004168b0;
      }
      uVar14 = 0x67;
      uVar16 = 0xdb;
    }
    FUN_004014b0(0xe,0x79,uVar14,"external/openssl/crypto/conf/conf_def.c",uVar16);
  }
  lVar10 = 0;
  pcVar25 = (char *)0x0;
  lVar12 = 0;
  lVar29 = 0;
  lVar26 = 0;
LAB_004168b0:
  FUN_00417470(lVar8);
  FUN_00400420(local_e8,"external/openssl/crypto/conf/conf_def.c",0x1b8);
  iVar7 = FUN_00407950(lVar26);
  while (0 < iVar7) {
    lVar8 = FUN_00407890(lVar26);
    thunk_FUN_00403ee0(param_2);
    iVar7 = FUN_00407950(lVar26);
    param_2 = lVar8;
  }
  FUN_00407010(lVar26);
  FUN_00400420(pcVar25,"external/openssl/crypto/conf/conf_def.c",0x1c5);
  if (local_f0 != 0) {
    FUN_00417a20(&local_f0);
  }
  if (param_3 != (long *)0x0) {
    *param_3 = lVar10;
  }
  FUN_00403120(&local_e0,0x18,&DAT_038aa48e,lVar10);
  FUN_00402170(2,"line ",&local_e0);
  if (lVar28 != *(long *)(param_1 + 0x10)) {
    FUN_00415c00();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (lVar29 != 0) {
    FUN_00400420(*(undefined8 *)(lVar29 + 8),"external/openssl/crypto/conf/conf_def.c",0x1d2);
    FUN_00400420(*(undefined8 *)(lVar29 + 0x10),"external/openssl/crypto/conf/conf_def.c",0x1d3);
    FUN_00400420(lVar12,"external/openssl/crypto/conf/conf_def.c",0x1d4);
  }
  return 0;
LAB_00416184:
  *pbVar19 = 0;
LAB_00416188:
  bVar17 = *pbVar9;
  if (-1 < (char)bVar17) {
    lVar29 = *(long *)(param_1 + 8);
    local_100 = pbVar9;
LAB_00416198:
    pbVar9 = local_100 + 1;
    uVar2 = *(ushort *)(lVar29 + (ulong)bVar17 * 2);
    if ((uVar2 & 0x18) == 0x10) goto code_r0x004161ac;
    if ((uVar2 >> 3 & 1) != 0) goto LAB_004163a4;
    pbVar19 = local_100;
    if (bVar17 != 0x5b) goto joined_r0x00416254;
    bVar17 = *pbVar9;
    while ((uVar27 = (ulong)(char)bVar17, -1 < (char)bVar17 &&
           ((*(ushort *)(lVar29 + (ulong)bVar17 * 2) & 0x18) == 0x10))) {
      pbVar9 = pbVar9 + 1;
      bVar17 = *pbVar9;
    }
    uVar24 = uVar27 & 0xffffffff;
    do {
      cVar4 = (char)uVar24;
      pbVar19 = pbVar9;
      if (-1 < cVar4) {
        uVar2 = *(ushort *)(lVar29 + (uVar24 & 0xff) * 2);
        pbVar21 = pbVar9;
        if ((uVar2 >> 5 & 1) == 0) goto LAB_00416700;
        do {
          pbVar19 = pbVar21 + 1;
          if (((char)*pbVar19 < '\0') || ((*(ushort *)(lVar29 + (ulong)*pbVar19 * 2) >> 3 & 1) == 0)
             ) {
            pbVar19 = pbVar21 + 2;
          }
          while( true ) {
            bVar17 = *pbVar19;
            uVar27 = (ulong)(char)bVar17;
            uVar24 = uVar27 & 0xffffffff;
            if ((char)bVar17 < '\0') goto LAB_004167b0;
            uVar2 = *(ushort *)(lVar29 + (ulong)bVar17 * 2);
            pbVar21 = pbVar19;
            if ((uVar2 >> 5 & 1) != 0) break;
LAB_00416700:
            if ((uVar2 & 0x307) == 0) {
              cVar4 = (char)uVar24;
              goto joined_r0x00416794;
            }
            pbVar19 = pbVar19 + 1;
          }
        } while( true );
      }
joined_r0x00416794:
      pbVar21 = pbVar19;
      if (-1 < cVar4) {
        if ((*(ushort *)(lVar29 + (uVar24 & 0xff) * 2) & 0x18) != 0x10) {
LAB_004167b0:
          uVar24 = uVar27 & 0xffffffff;
          uVar23 = (uint)uVar27;
          pbVar21 = pbVar19;
          uVar5 = uVar27;
          goto joined_r0x004167a0;
        }
        do {
          pbVar21 = pbVar21 + 1;
          bVar17 = *pbVar21;
          uVar27 = (ulong)(char)bVar17;
          if ((char)bVar17 < 0) break;
        } while ((*(ushort *)(lVar29 + (ulong)bVar17 * 2) & 0x18) == 0x10);
        uVar24 = (ulong)(uint)(int)(char)bVar17;
        uVar23 = (uint)bVar17;
        if (bVar17 != 0) goto LAB_004167b8;
LAB_00416af4:
        uVar14 = 100;
        uVar16 = 0x144;
        goto LAB_00416b08;
      }
      uVar23 = (uint)uVar24;
      uVar5 = uVar24;
joined_r0x004167a0:
      uVar23 = uVar23 & 0xff;
      pbVar19 = pbVar21;
      if ((uVar5 & 0xff) == 0) goto LAB_00416af4;
LAB_004167b8:
      if (uVar23 == 0x5d) goto LAB_004167d0;
      bVar6 = pbVar9 == pbVar21;
      pbVar9 = pbVar21;
      if (bVar6) goto LAB_00416af4;
    } while( true );
  }
LAB_004161b8:
  pbVar21 = pbVar9;
LAB_004161bc:
  local_100 = local_e8;
LAB_004161c4:
  pbVar19 = pbVar9;
LAB_004161cc:
  iVar7 = strncmp((char *)pbVar21,".include",8);
  if (iVar7 == 0) goto LAB_0041648c;
  if (bVar17 != 0x3d) goto LAB_00416a48;
  *pbVar19 = 0;
  pbVar19 = pbVar9 + 1;
  bVar17 = *pbVar19;
  if (-1 < (char)bVar17) {
    do {
      if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) & 0x18) != 0x10) break;
      pbVar19 = pbVar19 + 1;
      bVar17 = *pbVar19;
    } while (-1 < (char)bVar17);
    pbVar9 = pbVar19 + -1;
  }
  pbVar20 = pbVar19;
  if (-1 < (char)bVar17) goto LAB_004162d0;
  do {
    do {
      pbVar20 = pbVar20 + 1;
      bVar17 = *pbVar20;
      pbVar9 = pbVar9 + 1;
    } while ((char)bVar17 < '\0');
LAB_004162d0:
  } while ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) >> 3 & 1) == 0);
  do {
    pbVar20 = pbVar9;
    if ((pbVar20 < pbVar19) || ((char)*pbVar20 < '\0')) break;
    pbVar9 = pbVar20 + -1;
  } while ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)*pbVar20 * 2) >> 4 & 1) != 0);
  pbVar20[1] = 0;
  lVar12 = FUN_00400260(0x18,"external/openssl/crypto/conf/conf_def.c",399);
  if (lVar12 == 0) {
    FUN_004014b0(0xe,0x79,0x41,"external/openssl/crypto/conf/conf_def.c",400);
    lVar29 = 0;
    goto LAB_004168b0;
  }
  lVar29 = FUN_00404f10(pbVar21,"external/openssl/crypto/conf/conf_def.c",0x193);
  *(undefined8 *)(lVar12 + 0x10) = 0;
  *(long *)(lVar12 + 8) = lVar29;
  if (lVar29 == 0) {
    uVar14 = 0x41;
    uVar16 = 0x196;
  }
  else {
    iVar7 = FUN_00416e30(param_1,local_100,(undefined8 *)(lVar12 + 0x10),pbVar19);
    if (iVar7 == 0) goto LAB_00416ad0;
    iVar7 = strcmp((char *)local_100,(char *)local_e8);
    lVar29 = local_108;
    if (((iVar7 == 0) || (lVar29 = FUN_00417aa0(param_1,local_100), lVar29 != 0)) ||
       (lVar29 = FUN_00417f00(param_1,local_100), lVar29 != 0)) {
      iVar7 = FUN_00417b30(param_1,lVar29,lVar12);
      if (iVar7 != 0) {
LAB_004163a4:
        bVar6 = false;
        uVar27 = 0;
LAB_00415ee0:
        lVar29 = FUN_004174d0(lVar8,(long)((int)uVar27 + 0x200));
        if (lVar29 == 0) goto LAB_00416a14;
        goto LAB_00415ef4;
      }
      uVar14 = 0x41;
      uVar16 = 0x1a8;
    }
    else {
      uVar14 = 0x67;
      uVar16 = 0x1a2;
    }
  }
  FUN_004014b0(0xe,0x79,uVar14,"external/openssl/crypto/conf/conf_def.c",uVar16);
LAB_00416ad0:
  lVar29 = lVar12;
  goto LAB_004168b0;
code_r0x004161ac:
  bVar17 = *pbVar9;
  local_100 = pbVar9;
  if ((char)bVar17 < '\0') goto LAB_004161b8;
  goto LAB_00416198;
joined_r0x00416254:
  pbVar21 = local_100;
  if ((uVar2 >> 5 & 1) == 0) {
    if ((uVar2 & 0x307) == 0) {
      if ((bVar17 != 0x3a) || (pbVar19[1] != 0x3a)) {
        local_100 = local_e8;
        goto LAB_0041644c;
      }
      *pbVar19 = 0;
      pbVar21 = pbVar19 + 2;
      bVar17 = *pbVar21;
      pbVar19 = pbVar21;
      if ((char)bVar17 < '\0') {
        pbVar9 = pbVar21;
        goto LAB_004161cc;
      }
      lVar29 = *(long *)(param_1 + 8);
      uVar2 = *(ushort *)(lVar29 + (ulong)bVar17 * 2);
      goto joined_r0x004163ec;
    }
    pbVar9 = pbVar19 + 1;
    bVar17 = *pbVar9;
  }
  else {
    pbVar9 = pbVar19 + 1;
    if (((char)*pbVar9 < '\0') || ((*(ushort *)(lVar29 + (ulong)*pbVar9 * 2) >> 3 & 1) == 0)) {
      pbVar9 = pbVar19 + 2;
    }
    bVar17 = *pbVar9;
  }
  if ((char)bVar17 < '\0') goto LAB_004161bc;
  uVar2 = *(ushort *)(lVar29 + (ulong)bVar17 * 2);
  pbVar19 = pbVar9;
  goto joined_r0x00416254;
joined_r0x004163ec:
  if ((uVar2 >> 5 & 1) == 0) {
    if ((uVar2 & 0x307) == 0) goto LAB_0041644c;
    pbVar9 = pbVar19 + 1;
    bVar17 = *pbVar9;
  }
  else {
    pbVar9 = pbVar19 + 1;
    if (((char)*pbVar9 < '\0') || ((*(ushort *)(lVar29 + (ulong)*pbVar9 * 2) >> 3 & 1) == 0)) {
      pbVar9 = pbVar19 + 2;
    }
    bVar17 = *pbVar9;
  }
  if ((char)bVar17 < '\0') goto LAB_004161c4;
  uVar2 = *(ushort *)(lVar29 + (ulong)bVar17 * 2);
  pbVar19 = pbVar9;
  goto joined_r0x004163ec;
LAB_0041644c:
  pbVar9 = pbVar19;
  do {
    if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) & 0x18) != 0x10) break;
    pbVar9 = pbVar9 + 1;
    bVar17 = *pbVar9;
  } while (-1 < (char)bVar17);
  goto LAB_004161cc;
LAB_004167d0:
  *pbVar19 = 0;
  iVar7 = FUN_00416e30(param_1,0,&local_e8);
  pbVar9 = local_e8;
  if (iVar7 == 0) goto LAB_00416b10;
  local_108 = FUN_00417aa0(param_1,local_e8);
  if ((local_108 == 0) && (local_108 = FUN_00417f00(param_1,pbVar9), local_108 == 0)) {
    uVar14 = 0x67;
    uVar16 = 0x14e;
    goto LAB_00416b08;
  }
  lVar29 = FUN_004174d0(lVar8,0x200);
  if (lVar29 == 0) goto LAB_00416a14;
  goto LAB_00415ec4;
LAB_0041648c:
  if ((pbVar9 == pbVar21 + 8) && (bVar17 != 0x3d)) {
LAB_00416a48:
    FUN_004014b0(0xe,0x79,0x65,"external/openssl/crypto/conf/conf_def.c",0x187);
    lVar12 = 0;
    lVar29 = 0;
    goto LAB_004168b0;
  }
  local_f8 = (char *)0x0;
  bVar17 = *pbVar9;
  if (bVar17 == 0x3d) {
    pbVar9 = pbVar9 + 1;
    bVar17 = *pbVar9;
    if (-1 < (char)bVar17) {
      do {
        if ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) & 0x18) != 0x10) break;
        pbVar9 = pbVar9 + 1;
        bVar17 = *pbVar9;
      } while (-1 < (char)bVar17);
    }
  }
  pbVar19 = pbVar9 + -1;
  pbVar21 = pbVar9;
  if (-1 < (char)bVar17) goto LAB_00416518;
  do {
    do {
      pbVar21 = pbVar21 + 1;
      bVar17 = *pbVar21;
      pbVar19 = pbVar19 + 1;
    } while ((char)bVar17 < '\0');
LAB_00416518:
  } while ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)bVar17 * 2) >> 3 & 1) == 0);
  do {
    pbVar21 = pbVar19;
    if ((pbVar21 < pbVar9) || ((char)*pbVar21 < '\0')) break;
    pbVar19 = pbVar21 + -1;
  } while ((*(ushort *)(*(long *)(param_1 + 8) + (ulong)*pbVar21 * 2) >> 4 & 1) != 0);
  pbVar21[1] = 0;
  iVar7 = FUN_00416e30(param_1,local_100,&local_f8,pbVar9);
  pcVar1 = local_f8;
  if (iVar7 == 0) goto LAB_00416b10;
  _Stack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  lStack_70 = 0;
  _Stack_98 = 0;
  local_a0 = 0;
  _Stack_88 = 0;
  lStack_90 = 0;
  _Stack_b8 = 0;
  local_c0._0_4_ = 0;
  local_c0._4_4_ = 0;
  _Stack_a8 = 0;
  _Stack_b0 = 0;
  _Stack_d8 = 0;
  local_e0 = 0;
  uStack_c8._0_4_ = 0;
  uStack_c8._4_4_ = 0;
  local_d0 = 0;
  iVar7 = stat(local_f8,(stat *)&local_e0);
  if (iVar7 < 0) {
    piVar13 = __errno_location();
    iVar7 = *piVar13;
    uVar14 = 2;
    uVar16 = 0x16;
    uVar15 = 0x2a4;
LAB_004165d8:
    FUN_004014b0(uVar14,uVar16,iVar7,"external/openssl/crypto/conf/conf_def.c",uVar15);
    FUN_00402170(1,pcVar1);
    lVar29 = 0;
joined_r0x004165f0:
    if (pcVar1 != pcVar25) {
      FUN_00400420(pcVar1,"external/openssl/crypto/conf/conf_def.c",0x170);
    }
    pcVar1 = pcVar25;
    if (lVar29 == 0) {
      lVar29 = param_2;
      goto LAB_00416650;
    }
  }
  else {
    if (((uint)local_d0 & 0xf000) != 0x4000) {
      lVar29 = FUN_00414570(pcVar1,&DAT_03948cf6);
      goto joined_r0x004165f0;
    }
    if (local_f0 != 0) {
      uVar14 = 0xe;
      uVar16 = 0x74;
      iVar7 = 0x6f;
      uVar15 = 0x2ad;
      goto LAB_004165d8;
    }
    lVar29 = FUN_00416c80(pcVar1,&local_f0);
    if (lVar29 == 0) goto joined_r0x004165f0;
  }
  pcVar25 = pcVar1;
  if ((lVar26 == 0) && (lVar26 = FUN_004071e0(), lVar26 == 0)) {
    uVar16 = 0x17a;
  }
  else {
    iVar7 = FUN_00407800(lVar26,param_2);
    if (iVar7 != 0) {
LAB_00416650:
      param_2 = lVar29;
      lVar29 = FUN_004174d0(lVar8,0x200);
      if (lVar29 == 0) goto LAB_00416a14;
      goto LAB_00415ec4;
    }
    uVar16 = 0x17f;
  }
  uVar14 = 0x41;
LAB_00416b08:
  FUN_004014b0(0xe,0x79,uVar14,"external/openssl/crypto/conf/conf_def.c",uVar16);
LAB_00416b10:
  lVar12 = 0;
  lVar29 = 0;
  goto LAB_004168b0;
}


