/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fbb80; name: FUN_001fbb80
 */


/* WARNING: Removing unreachable block (ram,0x001fc144) */

int FUN_001fbb80(byte *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  byte *pbVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  long lVar11;
  size_t sVar12;
  long *plVar13;
  byte bVar14;
  uint uVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  char *pcVar19;
  char acStack_78 [8];
  long local_70;
  long local_68;
  char *local_60;
  char local_54 [4];
  
  if (param_1 == (byte *)0x0) goto LAB_001fbf60;
  sVar5 = strlen((char *)param_1);
  pbVar6 = (byte *)FUN_002044c4(sVar5 * 2 + 2);
  param_2[9] = (long)pbVar6;
  if (pbVar6 == (byte *)0x0) {
LAB_001fc2a0:
    iVar3 = 7;
  }
  else {
    pbVar17 = pbVar6 + sVar5 + 1;
    *pbVar17 = 0;
    uVar7 = FUN_001fac58(param_1,acStack_78,8);
    if ((uVar7 & 1) == 0) {
      *pbVar6 = 0;
      if ((param_3 & 0x204) != 0) {
        pcVar19 = (char *)0x0;
        if ((param_3 & 4) != 0) {
          pcVar19 = "https";
        }
LAB_001fbc78:
        for (pbVar18 = param_1;
            0x3f < *pbVar18 || (1L << ((ulong)*pbVar18 & 0x3f) & 0x8000800800000001U) == 0;
            pbVar18 = pbVar18 + 1) {
        }
        sVar5 = (long)pbVar18 - (long)param_1;
        if (sVar5 != 0) {
          memcpy(pbVar17,param_1,sVar5);
          pbVar17[sVar5] = 0;
          if (((param_3 >> 9 & 1) != 0) && (pcVar19 == (char *)0x0)) {
            iVar3 = thunk_FUN_001f8bec(&DAT_038da626,pbVar17,4);
            if (iVar3 == 0) {
              iVar3 = thunk_FUN_001f8bec("dict.",pbVar17,5);
              if (iVar3 == 0) {
                iVar3 = thunk_FUN_001f8bec("ldap.",pbVar17,5);
                if (iVar3 == 0) {
                  iVar3 = thunk_FUN_001f8bec("imap.",pbVar17,5);
                  if (iVar3 == 0) {
                    iVar3 = thunk_FUN_001f8bec("smtp.",pbVar17,5);
                    if (iVar3 == 0) {
                      iVar3 = thunk_FUN_001f8bec("pop3.",pbVar17,5);
                      pcVar19 = "http";
                      if (iVar3 != 0) {
                        pcVar19 = "pop3";
                      }
                    }
                    else {
                      pcVar19 = "smtp";
                    }
                  }
                  else {
                    pcVar19 = "imap";
                  }
                }
                else {
                  pcVar19 = "ldap";
                }
              }
              else {
                pcVar19 = "dict";
              }
            }
            else {
              pcVar19 = "ftp";
            }
          }
          sVar5 = strlen((char *)pbVar18);
          memcpy(pbVar6,pbVar18,sVar5);
          pbVar6[sVar5] = 0;
          lVar8 = FUN_002044f4(pcVar19);
          *param_2 = lVar8;
          if (lVar8 == 0) goto LAB_001fc2a0;
          goto LAB_001fbf48;
        }
      }
    }
    else {
      sVar5 = strlen(acStack_78);
      iVar3 = FUN_001f8b48(acStack_78,&DAT_039b069a);
      if (iVar3 == 0) {
        *pbVar6 = 0;
        param_1 = param_1 + sVar5 + 1;
        if (*param_1 == 0x2f) {
          uVar15 = 0xffffffff;
          do {
            param_1 = param_1 + 1;
            uVar1 = uVar15 + 2;
            uVar15 = uVar15 + 1;
            if (3 < uVar1) break;
          } while (*param_1 == 0x2f);
          if (uVar15 < 3) {
            lVar8 = FUN_001fd4b8(acStack_78);
            if (((param_3 >> 3 & 1) == 0) && (lVar8 == 0)) {
              iVar3 = 5;
              goto LAB_001fc2a4;
            }
            pcVar19 = acStack_78;
            iVar3 = FUN_001fc2dc(acStack_78);
            if (iVar3 == 0) goto LAB_001fbc78;
          }
        }
      }
      else {
        strcpy((char *)pbVar6,(char *)(param_1 + 5));
        lVar8 = FUN_002044f4(&DAT_039b069a);
        *param_2 = lVar8;
        if (lVar8 == 0) goto LAB_001fc2a0;
        bVar14 = *pbVar6;
        pbVar18 = pbVar6;
        if (bVar14 == 0x2f) {
          if (pbVar6[1] == 0x2f) {
            pbVar18 = pbVar6 + 2;
            bVar14 = *pbVar18;
            if (bVar14 != 0x2f) {
              if (((0x19 < (byte)((bVar14 & 0xdf) + 0xbf)) ||
                  ((pbVar6[3] != 0x7c && (pbVar6[3] != 0x3a)))) ||
                 ((bVar2 = pbVar6[4], bVar2 != 0 && ((bVar2 != 0x2f && (bVar2 != 0x5c)))))) {
                iVar3 = thunk_FUN_001f8bec("localhost/",pbVar18,10);
                if ((iVar3 == 0) &&
                   (iVar3 = thunk_FUN_001f8bec("127.0.0.1/",pbVar18,10), iVar3 == 0))
                goto LAB_001fbf60;
                pbVar18 = pbVar6 + 0xb;
                bVar14 = *pbVar18;
                if (bVar14 == 0x2f) goto LAB_001fbe00;
              }
              goto LAB_001fbe34;
            }
          }
LAB_001fbe00:
          if (((byte)((pbVar18[1] & 0xdf) + 0xbf) < 0x1a) &&
             ((pbVar18[2] == 0x7c || (pbVar18[2] == 0x3a)))) {
            bVar14 = pbVar18[3];
            goto LAB_001fbe60;
          }
        }
        else {
LAB_001fbe34:
          if (((byte)((bVar14 & 0xdf) + 0xbf) < 0x1a) &&
             ((pbVar18[1] == 0x7c || (pbVar18[1] == 0x3a)))) {
            bVar14 = pbVar18[2];
LAB_001fbe60:
            iVar3 = 3;
            if (((bVar14 == 0) || (bVar14 == 0x2f)) || (bVar14 == 0x5c)) goto LAB_001fc2a4;
          }
        }
        pbVar17 = (byte *)0x0;
        pbVar6 = pbVar18;
LAB_001fbf48:
        lVar8 = FUN_001fd4b8(*param_2);
        iVar3 = FUN_001fc2dc(pbVar6);
        if (iVar3 == 0) {
          pbVar9 = (byte *)strchr((char *)pbVar6,0x3f);
          pbVar18 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            pbVar18 = pbVar9 + 1;
            *pbVar9 = 0;
          }
          pbVar9 = pbVar18;
          if (pbVar18 == (byte *)0x0) {
            pbVar9 = pbVar6;
          }
          pcVar10 = strchr((char *)pbVar9,0x23);
          pcVar19 = pcVar10;
          if (pcVar10 != (char *)0x0) {
            pcVar19 = pcVar10 + 1;
            *pcVar10 = '\0';
          }
          if (*pbVar6 != 0) {
            if ((param_3 >> 4 & 1) == 0) {
              pcVar10 = (char *)FUN_001fc400(pbVar6);
              if (pcVar10 == (char *)0x0) goto LAB_001fc2a0;
              iVar3 = strcmp(pcVar10,(char *)pbVar6);
              if (iVar3 != 0) {
                param_2[6] = (long)pcVar10;
                goto joined_r0x001fbfc8;
              }
              FUN_002044d4(pcVar10);
            }
            lVar11 = FUN_002044f4(pbVar6);
            param_2[6] = lVar11;
            if (lVar11 == 0) goto LAB_001fc2a0;
          }
joined_r0x001fbfc8:
          if (pbVar17 != (byte *)0x0) {
            iVar3 = FUN_001fc2dc(pbVar17);
            if (iVar3 != 0) goto LAB_001fbf60;
            local_70 = 0;
            local_68 = 0;
            local_60 = (char *)0x0;
            pcVar10 = strchr((char *)pbVar17,0x40);
            if (pcVar10 == (char *)0x0) {
              iVar3 = 0;
              pbVar6 = pbVar17;
LAB_001fc060:
              FUN_002044d4();
              FUN_002044d4(local_68);
              FUN_002044d4(local_70);
              if (iVar3 != 0) goto LAB_001fc2a4;
            }
            else {
              pbVar6 = (byte *)(pcVar10 + 1);
              if ((lVar8 == 0) || ((*(byte *)(lVar8 + 0x85) >> 2 & 1) == 0)) {
                plVar13 = (long *)0x0;
              }
              else {
                plVar13 = &local_70;
              }
              iVar3 = FUN_001fd52c(pbVar17,pbVar6 + ~(ulong)pbVar17,&local_60,&local_68,plVar13);
              if (iVar3 != 0) {
                iVar3 = 3;
LAB_001fc05c:
                goto LAB_001fc060;
              }
              if (local_60 != (char *)0x0) {
                if ((param_3 >> 5 & 1) != 0) {
                  iVar3 = 8;
                  goto LAB_001fc05c;
                }
                param_2[1] = (long)local_60;
              }
              if (local_68 != 0) {
                param_2[2] = local_68;
              }
              if (local_70 != 0) {
                param_2[3] = local_70;
              }
            }
            iVar3 = sscanf((char *)pbVar6,"[%*45[0123456789abcdefABCDEF:.]%c%n",local_54,&local_70);
            if (iVar3 == 1) {
              iVar16 = (int)local_70;
              if (local_54[0] == '%') {
                iVar4 = sscanf((char *)(pbVar6 + (int)local_70),"25%*[^]]%c%n",local_54,&local_70);
                iVar3 = 3;
                if ((iVar4 != 1) || (local_54[0] != ']')) goto LAB_001fc2a4;
                iVar16 = (int)local_70 + iVar16;
              }
              else {
                if (local_54[0] != ']') goto LAB_001fbf60;
              }
              pbVar17 = pbVar6 + iVar16;
              if ((pbVar17 != (byte *)0x0) && (*pbVar17 != 0)) {
                if (*pbVar17 != 0x3a) goto LAB_001fbf60;
                goto LAB_001fc0fc;
              }
            }
            else {
              pbVar17 = (byte *)strchr((char *)pbVar6,0x3a);
              if (pbVar17 != (byte *)0x0) {
LAB_001fc0fc:
                if (pbVar17[1] == 0) {
                  *pbVar17 = 0;
                }
                else {
                  iVar3 = FUN_001e3418();
                  if (((iVar3 == 0) ||
                      (lVar8 = strtol((char *)(pbVar17 + 1),&local_60,10), 0xfffe < lVar8 - 1U)) ||
                     (*local_60 != '\0')) {
                    iVar3 = 4;
                    goto LAB_001fc2a4;
                  }
                  *pbVar17 = 0;
                  *local_60 = '\0';
                  iVar3 = 7;
                  FUN_001e64cc(&local_68,7,&DAT_038aa48e,lVar8);
                  param_2[10] = lVar8;
                  lVar8 = FUN_002044f4(&local_68);
                  param_2[5] = lVar8;
                  if (lVar8 == 0) goto LAB_001fc2a4;
                }
              }
            }
            sVar5 = strlen((char *)pbVar6);
            if (*pbVar6 == 0x5b) {
              sVar12 = strspn((char *)(pbVar6 + 1),"0123456789abcdefABCDEF::.%");
              sVar5 = sVar5 - 2;
            }
            else {
              sVar12 = strcspn((char *)pbVar6," ");
            }
            if (sVar5 != sVar12) goto LAB_001fbf60;
            lVar8 = FUN_002044f4(pbVar6);
            param_2[4] = lVar8;
            if (lVar8 == 0) goto LAB_001fc2a0;
          }
          if (pbVar18 != (byte *)0x0) {
            lVar8 = FUN_002044f4(pbVar18);
            param_2[7] = lVar8;
            if (lVar8 == 0) goto LAB_001fc2a0;
          }
          if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) {
LAB_001fc28c:
            FUN_002044d4(param_2[9]);
            param_2[9] = 0;
            return 0;
          }
          lVar8 = FUN_002044f4(pcVar19);
          param_2[8] = lVar8;
          if (lVar8 != 0) goto LAB_001fc28c;
          goto LAB_001fc2a0;
        }
      }
    }
LAB_001fbf60:
    iVar3 = 3;
  }
LAB_001fc2a4:
  FUN_001fad50(param_2);
  memset(param_2,0,0x58);
  return iVar3;
}


