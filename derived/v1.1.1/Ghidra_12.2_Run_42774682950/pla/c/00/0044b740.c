/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044b740; name: FUN_0044b740
 */


char * FUN_0044b740(undefined8 *param_1,char *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  char *__s;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint *puVar15;
  long lVar16;
  char *pcVar17;
  byte *pbVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  int *piVar22;
  ulong uVar23;
  long lVar24;
  uint uVar25;
  ulong extraout_x17;
  uint uVar26;
  ulong extraout_x18;
  ulong uVar27;
  ulong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  char *__dest;
  long local_d8;
  char acStack_d0 [80];
  int local_80 [4];
  
  if (param_2 == (char *)0x0) {
    local_d8 = FUN_00417420();
    if (local_d8 == 0) {
      local_d8 = 0;
    }
    else {
      lVar16 = FUN_004174d0(local_d8,200);
      if (lVar16 != 0) {
        param_3 = 200;
        **(undefined1 **)(local_d8 + 8) = 0;
        goto joined_r0x0044bce8;
      }
    }
LAB_0044bd5c:
    uVar13 = 0x41;
    uVar14 = 0xb1;
LAB_0044bd74:
    FUN_004014b0(0xb,0x74,uVar13,"external/openssl/crypto/x509/x509_obj.c",uVar14);
    FUN_00417470(local_d8);
  }
  else {
    local_d8 = 0;
    if (param_3 != 0) {
joined_r0x0044bce8:
      if (param_1 == (undefined8 *)0x0) {
        if (local_d8 != 0) {
          param_2 = *(char **)(local_d8 + 8);
          FUN_00400420(local_d8,"external/openssl/crypto/x509/x509_obj.c",0x35);
        }
        strncpy(param_2,"NO X509_NAME",(long)param_3);
        param_2[(long)param_3 - 1] = '\0';
        return param_2;
      }
      iVar9 = FUN_00407950(*param_1);
      if (iVar9 < 1) {
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        iVar31 = 0;
        do {
          puVar11 = (undefined8 *)FUN_00407970(*param_1,iVar9);
          iVar10 = FUN_00407f40(*puVar11);
          if ((iVar10 == 0) || (__s = (char *)FUN_00407d80(), __s == (char *)0x0)) {
            __s = acStack_d0;
            FUN_00409690(acStack_d0,0x50,*puVar11);
          }
          sVar12 = strlen(__s);
          puVar15 = (uint *)puVar11[1];
          uVar2 = *puVar15;
          uVar28 = (ulong)uVar2;
          if (0x100000 < (int)uVar2) {
            uVar13 = 0x86;
            uVar14 = 0x4a;
            goto LAB_0044bd74;
          }
          lVar16 = *(long *)(puVar15 + 2);
          if ((uVar2 & 3) == 0 && puVar15[1] == 0x1b) {
            local_80[0] = 0;
            local_80[1] = 0;
            local_80[2] = 0;
            local_80[3] = 0;
            if (0 < (int)uVar2) {
              uVar19 = 0;
              if ((uVar2 < 4) || (3 < uVar28 - 1)) {
LAB_0044b904:
                uVar21 = ~uVar19;
                uVar23 = uVar28 & 3;
                if ((uVar2 & 3) != 0) {
                  cVar5 = *(char *)(lVar16 + uVar19);
                  piVar22 = local_80;
                  while( true ) {
                    if (cVar5 != '\0') {
                      *piVar22 = 1;
                    }
                    uVar23 = uVar23 - 1;
                    uVar19 = uVar19 + 1;
                    if (uVar23 == 0) break;
                    piVar22 = piVar22 + 1;
                    cVar5 = *(char *)(lVar16 + uVar19);
                  }
                }
                if (2 < uVar21 + uVar28) {
                  lVar24 = uVar28 - uVar19;
                  cVar5 = *(char *)(lVar16 + uVar19);
                  pcVar17 = (char *)(lVar16 + uVar19) + 3;
                  while( true ) {
                    if (cVar5 != '\0') {
                      local_80[uVar19 & 3] = 1;
                    }
                    if (pcVar17[-2] != '\0') {
                      local_80[(ulong)((int)uVar19 + 1) & 3] = 1;
                    }
                    if (pcVar17[-1] != '\0') {
                      local_80[uVar19 & 3 ^ 2] = 1;
                    }
                    if (*pcVar17 != '\0') {
                      local_80[(ulong)((int)uVar19 - 1) & 3] = 1;
                    }
                    lVar24 = lVar24 + -4;
                    if (lVar24 == 0) break;
                    cVar5 = pcVar17[1];
                    pcVar17 = pcVar17 + 4;
                  }
                }
              }
              else {
                uVar19 = uVar28 & 0xfffffffc;
                pcVar17 = (char *)(lVar16 + 3);
                uVar23 = uVar19;
                do {
                  if (pcVar17[-3] != '\0') {
                    local_80[0] = 1;
                  }
                  if (pcVar17[-2] != '\0') {
                    local_80[1] = 1;
                  }
                  if (pcVar17[-1] != '\0') {
                    local_80[2] = 1;
                  }
                  if (*pcVar17 != '\0') {
                    local_80[3] = 1;
                  }
                  pcVar17 = pcVar17 + 4;
                  uVar23 = uVar23 - 4;
                } while (uVar23 != 0);
                if (uVar19 != uVar28) goto LAB_0044b904;
              }
              if ((local_80[1] != 0 || local_80[0] != 0) || local_80[2] != 0) goto LAB_0044b9d8;
            }
            local_80[2] = 0;
            local_80[0] = 0;
            local_80[1] = 0;
            if ((int)uVar2 < 1) goto LAB_0044b8f4;
LAB_0044b9f0:
            iVar10 = 0;
            uVar19 = 0;
            if ((uVar2 != 1) && (uVar28 - 1 < 4)) {
              uVar23 = 0;
              iVar20 = 0;
              iVar10 = 0;
              uVar19 = uVar28 & 0xfffffffe;
              uVar21 = extraout_x17;
              uVar27 = extraout_x18;
              do {
                uVar26 = (uint)uVar27;
                uVar25 = (uint)uVar21;
                iVar3 = local_80[uVar23 & 2];
                iVar4 = local_80[(ulong)((int)uVar23 + 1) & 3];
                if (iVar3 != 0) {
                  uVar25 = (uint)*(byte *)(lVar16 + uVar23);
                }
                if (iVar4 != 0) {
                  uVar26 = (uint)*(byte *)(lVar16 + uVar23 + 1);
                }
                bVar7 = (uVar25 - 0x20 & 0xff) < 0x5f;
                uVar21 = (ulong)bVar7;
                bVar8 = (uVar26 - 0x20 & 0xff) < 0x5f;
                uVar27 = (ulong)bVar8;
                iVar29 = 4;
                if (bVar7 && iVar3 != 0) {
                  iVar29 = 1;
                }
                iVar30 = 4;
                if (bVar8 && iVar4 != 0) {
                  iVar30 = 1;
                }
                iVar1 = 0;
                if (iVar3 != 0) {
                  iVar1 = iVar29;
                }
                iVar3 = 0;
                if (iVar4 != 0) {
                  iVar3 = iVar30;
                }
                uVar23 = uVar23 + 2;
                iVar20 = iVar20 + iVar1;
                iVar10 = iVar10 + iVar3;
              } while (uVar19 != uVar23);
              iVar10 = iVar10 + iVar20;
              if (uVar19 == uVar28) goto LAB_0044bb88;
            }
            uVar23 = ~uVar19;
            if ((uVar2 & 1) != 0) {
              if (local_80[uVar19 & 2] != 0) {
                if ((*(byte *)(lVar16 + uVar19) < 0x20) || (0x7e < *(byte *)(lVar16 + uVar19))) {
                  iVar10 = iVar10 + 4;
                }
                else {
                  iVar10 = iVar10 + 1;
                }
              }
              uVar19 = uVar19 | 1;
            }
            if (uVar23 + uVar28 != 0) {
LAB_0044bb10:
              do {
                if (local_80[uVar19 & 3] == 0) {
LAB_0044bb34:
                  iVar20 = local_80[(ulong)((int)uVar19 + 1) & 3];
                }
                else {
                  if ((*(byte *)(lVar16 + uVar19) < 0x20) || (0x7e < *(byte *)(lVar16 + uVar19))) {
                    iVar10 = iVar10 + 4;
                    goto LAB_0044bb34;
                  }
                  iVar10 = iVar10 + 1;
                  iVar20 = local_80[(ulong)((int)uVar19 + 1) & 3];
                }
                if (iVar20 != 0) {
                  bVar6 = *(byte *)(lVar16 + uVar19 + 1);
                  if ((0x1f < bVar6) && (bVar6 < 0x7f)) {
                    iVar10 = iVar10 + 1;
                    uVar19 = uVar19 + 2;
                    if (uVar28 == uVar19) break;
                    goto LAB_0044bb10;
                  }
                  iVar10 = iVar10 + 4;
                }
                uVar19 = uVar19 + 2;
              } while (uVar28 != uVar19);
            }
          }
          else {
LAB_0044b9d8:
            local_80[3] = 1;
            local_80[1] = 1;
            local_80[2] = 1;
            local_80[0] = 1;
            if (0 < (int)uVar2) goto LAB_0044b9f0;
LAB_0044b8f4:
            iVar10 = 0;
          }
LAB_0044bb88:
          local_80[3] = 1;
          iVar10 = iVar31 + (int)sVar12 + iVar10;
          iVar20 = iVar10 + 2;
          if (0x100000 < iVar20) {
            uVar13 = 0x86;
            uVar14 = 0x7b;
            goto LAB_0044bd74;
          }
          if (local_d8 == 0) {
            pcVar17 = param_2;
            if (param_3 <= iVar20) goto joined_r0x0044bdb0;
          }
          else {
            lVar16 = FUN_004174d0(local_d8,(long)(iVar10 + 3));
            if (lVar16 == 0) goto LAB_0044bd5c;
            pcVar17 = *(char **)(local_d8 + 8);
          }
          pcVar17 = pcVar17 + iVar31;
          __dest = pcVar17 + 1;
          *pcVar17 = '/';
          memcpy(__dest,__s,sVar12 & 0xffffffff);
          pbVar18 = (byte *)(__dest + (int)sVar12 + 1);
          __dest[(int)sVar12] = '=';
          if (0 < (int)uVar2) {
            uVar19 = 0;
            lVar16 = *(long *)(puVar11[1] + 8);
            iVar31 = local_80[0];
            while( true ) {
              if (iVar31 != 0) {
                bVar6 = *(byte *)(lVar16 + uVar19);
                if ((byte)(bVar6 - 0x20) < 0x5f) {
                  *pbVar18 = bVar6;
                  pbVar18 = pbVar18 + 1;
                }
                else {
                  pbVar18[0] = 0x5c;
                  pbVar18[1] = 0x78;
                  pbVar18[2] = "0123456789ABCDEF"[bVar6 >> 4];
                  pbVar18[3] = "0123456789ABCDEF"[(ulong)bVar6 & 0xf];
                  pbVar18 = pbVar18 + 4;
                }
              }
              if (uVar28 == uVar19 + 1) break;
              uVar19 = uVar19 + 1;
              iVar31 = local_80[uVar19 & 3];
            }
          }
          *pbVar18 = 0;
          iVar9 = iVar9 + 1;
          iVar10 = FUN_00407950(*param_1);
          iVar31 = iVar20;
        } while (iVar9 < iVar10);
      }
      if (local_d8 != 0) {
        param_2 = *(char **)(local_d8 + 8);
        FUN_00400420(local_d8,"external/openssl/crypto/x509/x509_obj.c",0xaa);
      }
joined_r0x0044bdb0:
      if (iVar9 == 0) {
        *param_2 = '\0';
        return param_2;
      }
      return param_2;
    }
  }
  return (char *)0x0;
}


