/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0044c650; name: FUN_0044c650
 */


undefined8 FUN_0044c650(undefined8 param_1)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  size_t sVar6;
  size_t sVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *__s;
  byte *pbVar11;
  undefined8 local_48;
  
  local_48 = 0;
  pbVar5 = (byte *)FUN_00404f10(param_1,"external/openssl/crypto/x509v3/v3_utl.c",0x127);
  if (pbVar5 != (byte *)0x0) {
    iVar3 = 1;
    __s = (byte *)0x0;
    pbVar10 = pbVar5;
    pbVar11 = pbVar5;
LAB_0044c6e0:
    do {
      bVar2 = *pbVar11;
      if (!(0xd < bVar2 || (1 << (ulong)(bVar2 & 0x1f) & 0x2401U) == 0)) goto LAB_0044c930;
      if (iVar3 != 2) {
        if (iVar3 == 1) {
          if (bVar2 == 0x2c) {
            *pbVar11 = 0;
            bVar2 = *pbVar10;
            if (bVar2 != 0) {
              __s = pbVar10;
              while (iVar3 = FUN_00405430(bVar2,8), iVar3 != 0) {
                __s = __s + 1;
                bVar2 = *__s;
                if (bVar2 == 0) goto LAB_0044c8d4;
              }
              if (*__s != 0) {
                sVar6 = strlen((char *)__s);
                do {
                  sVar7 = sVar6;
                  if (sVar7 - 1 == 0) goto LAB_0044c87c;
                  iVar3 = FUN_00405430(__s[sVar7 - 1],8);
                  sVar6 = sVar7 - 1;
                } while (iVar3 != 0);
                __s[sVar7] = 0;
LAB_0044c87c:
                if (*__s != 0) {
                  pbVar10 = pbVar11 + 1;
                  FUN_0044be00(__s,0,&local_48);
                  goto LAB_0044c6d8;
                }
              }
            }
LAB_0044c8d4:
            uVar8 = 0x6c;
            uVar9 = 0x144;
            goto LAB_0044c8ec;
          }
          if (bVar2 == 0x3a) {
            *pbVar11 = 0;
            bVar2 = *pbVar10;
            if (bVar2 != 0) {
              while (iVar3 = FUN_00405430(bVar2,8), iVar3 != 0) {
                pbVar10 = pbVar10 + 1;
                bVar2 = *pbVar10;
                if (bVar2 == 0) goto LAB_0044c8b8;
              }
              if (*pbVar10 != 0) {
                sVar6 = strlen((char *)pbVar10);
                do {
                  sVar7 = sVar6;
                  if (sVar7 - 1 == 0) goto LAB_0044c828;
                  iVar3 = FUN_00405430(pbVar10[sVar7 - 1],8);
                  sVar6 = sVar7 - 1;
                } while (iVar3 != 0);
                pbVar10[sVar7] = 0;
LAB_0044c828:
                if (*pbVar10 != 0) {
                  pbVar1 = pbVar11 + 1;
                  iVar3 = 2;
                  pbVar11 = pbVar11 + 1;
                  __s = pbVar10;
                  pbVar10 = pbVar1;
                  goto LAB_0044c6e0;
                }
              }
            }
LAB_0044c8b8:
            uVar8 = 0x6c;
            uVar9 = 0x13a;
            goto LAB_0044c8ec;
          }
LAB_0044c6d8:
          iVar3 = 1;
        }
        pbVar11 = pbVar11 + 1;
        goto LAB_0044c6e0;
      }
      if (bVar2 == 0x2c) {
        *pbVar11 = 0;
        bVar2 = *pbVar10;
        if (bVar2 != 0) {
          while (iVar3 = FUN_00405430(bVar2,8), iVar3 != 0) {
            pbVar10 = pbVar10 + 1;
            bVar2 = *pbVar10;
            if (bVar2 == 0) goto LAB_0044c89c;
          }
          if (*pbVar10 != 0) {
            sVar6 = strlen((char *)pbVar10);
            do {
              sVar7 = sVar6;
              if (sVar7 - 1 == 0) goto LAB_0044c6b8;
              iVar3 = FUN_00405430(pbVar10[sVar7 - 1],8);
              sVar6 = sVar7 - 1;
            } while (iVar3 != 0);
            pbVar10[sVar7] = 0;
LAB_0044c6b8:
            if (*pbVar10 != 0) {
              FUN_0044be00(__s,pbVar10,&local_48);
              __s = (byte *)0x0;
              pbVar10 = pbVar11 + 1;
              goto LAB_0044c6d8;
            }
          }
        }
LAB_0044c89c:
        uVar9 = 0x152;
        uVar8 = 0x6d;
        goto LAB_0044c8ec;
      }
      iVar3 = 2;
      pbVar11 = pbVar11 + 1;
    } while( true );
  }
  uVar8 = 0x41;
  uVar9 = 0x129;
  goto LAB_0044c8ec;
LAB_0044c930:
  bVar2 = *pbVar10;
  while (bVar2 != 0) {
    iVar4 = FUN_00405430(bVar2,8);
    if (iVar4 == 0) {
      if (*pbVar10 != 0) {
        sVar6 = strlen((char *)pbVar10);
        goto LAB_0044c964;
      }
      break;
    }
    pbVar10 = pbVar10 + 1;
    bVar2 = *pbVar10;
  }
  pbVar11 = (byte *)0x0;
  goto joined_r0x0044c9a0;
  while( true ) {
    iVar4 = FUN_00405430(pbVar10[sVar7 - 1],8);
    sVar6 = sVar7 - 1;
    if (iVar4 == 0) break;
LAB_0044c964:
    sVar7 = sVar6;
    if (sVar7 - 1 == 0) goto LAB_0044c990;
  }
  pbVar10[sVar7] = 0;
LAB_0044c990:
  pbVar11 = (byte *)0x0;
  if (*pbVar10 != 0) {
    pbVar11 = pbVar10;
  }
joined_r0x0044c9a0:
  if (iVar3 == 2) {
    if (pbVar11 != (byte *)0x0) {
      pbVar10 = pbVar11;
      goto LAB_0044c9d0;
    }
    uVar9 = 0x161;
    uVar8 = 0x6d;
  }
  else {
    if (pbVar11 != (byte *)0x0) {
      pbVar10 = (byte *)0x0;
      __s = pbVar11;
LAB_0044c9d0:
      FUN_0044be00(__s,pbVar10,&local_48);
      FUN_00400420(pbVar5,"external/openssl/crypto/x509v3/v3_utl.c",0x16d);
      return local_48;
    }
    uVar8 = 0x6c;
    uVar9 = 0x168;
  }
LAB_0044c8ec:
  FUN_004014b0(0x22,0x6d,uVar8,"external/openssl/crypto/x509v3/v3_utl.c",uVar9);
  FUN_00400420(pbVar5,"external/openssl/crypto/x509v3/v3_utl.c",0x171);
  FUN_004078c0(local_48,PTR_LAB_043742b0);
  return 0;
}


