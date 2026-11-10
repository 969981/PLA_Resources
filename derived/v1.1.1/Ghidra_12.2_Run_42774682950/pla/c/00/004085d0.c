/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004085d0; name: FUN_004085d0
 */


ulong FUN_004085d0(byte *param_1,int param_2,long param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  char *__s;
  size_t sVar6;
  undefined8 uVar7;
  byte bVar8;
  byte *pbVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  char acStack_98 [16];
  uint local_88;
  undefined4 local_70 [2];
  char *local_68;
  
  if ((param_1 != (byte *)0x0) && (0 < param_2)) {
    *param_1 = 0;
  }
  if ((param_3 == 0) || (*(long *)(param_3 + 0x18) == 0)) {
    uVar11 = 0;
    goto LAB_00408a34;
  }
  if ((param_4 == 0) && (uVar5 = FUN_00407f40(param_3), uVar5 != 0)) {
    if (uVar5 < 0x4ab) {
      if (*(int *)(&DAT_04157c60 + (long)(int)uVar5 * 0x28) == 0) {
        uVar7 = 0x119;
LAB_00408958:
        FUN_004014b0(8,0x66,0x65,"external/openssl/crypto/objects/obj_dat.c",uVar7);
        goto LAB_00408960;
      }
      pcVar13 = (&PTR_s_undefined_04157c58)[(long)(int)uVar5 * 5];
      if (pcVar13 == (char *)0x0) goto LAB_00408960;
    }
    else {
      if (DAT_0439e6e8 != 0) {
        local_70[0] = 3;
        local_68 = acStack_98;
        local_88 = uVar5;
        lVar12 = FUN_00405c90(DAT_0439e6e8,local_70);
        if (lVar12 == 0) {
          uVar7 = 0x127;
          goto LAB_00408958;
        }
        pcVar13 = *(char **)(*(long *)(lVar12 + 8) + 8);
        if (pcVar13 != (char *)0x0) goto LAB_004089d0;
      }
LAB_00408960:
      if (uVar5 < 0x4ab) {
        if (*(int *)(&DAT_04157c60 + (long)(int)uVar5 * 0x28) != 0) {
          pcVar13 = (&PTR_s_UNDEF_04157c50)[(long)(int)uVar5 * 5];
          goto joined_r0x004089cc;
        }
        uVar7 = 0xfe;
LAB_00408a00:
        FUN_004014b0(8,0x68,0x65,"external/openssl/crypto/objects/obj_dat.c",uVar7);
        iVar14 = *(int *)(param_3 + 0x14);
        goto joined_r0x00408a20;
      }
      if (DAT_0439e6e8 == 0) goto LAB_00408618;
      local_70[0] = 3;
      local_68 = acStack_98;
      local_88 = uVar5;
      lVar12 = FUN_00405c90(DAT_0439e6e8,local_70);
      if (lVar12 == 0) {
        uVar7 = 0x10c;
        goto LAB_00408a00;
      }
      pcVar13 = (char *)**(undefined8 **)(lVar12 + 8);
joined_r0x004089cc:
      if (pcVar13 == (char *)0x0) goto LAB_00408618;
    }
LAB_004089d0:
    if (param_1 != (byte *)0x0) {
      FUN_004050b0(param_1,pcVar13,(long)param_2);
    }
    uVar11 = strlen(pcVar13);
  }
  else {
LAB_00408618:
    iVar14 = *(int *)(param_3 + 0x14);
joined_r0x00408a20:
    if (iVar14 < 1) {
      uVar11 = 0;
      lVar12 = 0;
    }
    else {
      pcVar13 = *(char **)(param_3 + 0x18);
      lVar12 = 0;
      uVar11 = 0;
      bVar3 = true;
LAB_0040863c:
      do {
        iVar10 = (int)uVar11;
        iVar14 = iVar14 + -1;
        uVar5 = (uint)*pcVar13;
        if ((iVar14 == 0) && ((int)uVar5 < 0)) {
LAB_00408898:
          FUN_0040c1e0(lVar12);
          uVar11 = 0xffffffff;
          goto LAB_00408a34;
        }
        uVar11 = 0;
        bVar2 = false;
        uVar15 = uVar5 >> 0x1f;
        pcVar13 = pcVar13 + 1;
LAB_004086f8:
        uVar11 = uVar11 | uVar5 & 0x7f;
        if (uVar15 != 0) {
          do {
            if ((bVar2) || (uVar11 >> 0x39 == 0)) {
              if (bVar2) goto LAB_004086d0;
              uVar11 = uVar11 << 7;
              cVar1 = *pcVar13;
            }
            else {
              if (((lVar12 == 0) && (lVar12 = FUN_0040c260(), lVar12 == 0)) ||
                 (iVar4 = FUN_0040c6b0(lVar12,uVar11 & 0xffffffff), iVar4 == 0)) goto LAB_00408898;
              bVar2 = true;
LAB_004086d0:
              iVar4 = FUN_00410600(lVar12,lVar12,7);
              if (iVar4 == 0) goto LAB_00408898;
              cVar1 = *pcVar13;
            }
            uVar5 = (uint)cVar1;
            uVar15 = -((int)cVar1 >> 0x1f);
            if ((iVar14 == 1) && ((int)uVar5 < 0)) goto LAB_00408898;
            iVar14 = iVar14 + -1;
            pcVar13 = pcVar13 + 1;
            if (!bVar2) goto LAB_004086f8;
            iVar4 = FUN_0040bd20(lVar12);
            if (iVar4 == 0) goto LAB_00408898;
            if (uVar15 == 0) break;
          } while( true );
        }
        if (bVar3) {
          if (uVar11 < 0x50) {
            uVar5 = (uint)uVar11 & 0xff;
            bVar8 = (byte)(uVar5 / 0x28);
            uVar11 = uVar11 + (ulong)((uVar5 / 0x28) * 5) * -8;
          }
          else if (bVar2) {
            iVar4 = FUN_0040be30(lVar12,0x50);
            if (iVar4 == 0) goto LAB_00408898;
            bVar8 = 2;
          }
          else {
            bVar8 = 2;
            uVar11 = uVar11 - 0x50;
          }
          if ((1 < param_2) && (param_1 != (byte *)0x0)) {
            param_2 = param_2 + -1;
            *param_1 = bVar8 | 0x30;
            param_1[1] = 0;
            param_1 = param_1 + 1;
          }
          iVar10 = iVar10 + 1;
        }
        if (bVar2) {
          __s = (char *)FUN_00413c40(lVar12);
          if (__s == (char *)0x0) goto LAB_00408898;
          sVar6 = strlen(__s);
          iVar4 = (int)sVar6;
          if (param_1 != (byte *)0x0) {
            pbVar9 = param_1;
            if (1 < param_2) {
              param_2 = param_2 + -1;
              pbVar9 = param_1 + 1;
              param_1[0] = 0x2e;
              param_1[1] = 0;
            }
            lVar16 = (long)param_2;
            FUN_004050b0(pbVar9,__s,lVar16);
            if (param_2 < iVar4) {
              param_2 = 0;
              param_1 = pbVar9 + lVar16;
            }
            else {
              param_1 = pbVar9 + iVar4;
              param_2 = param_2 - iVar4;
            }
          }
          uVar5 = iVar10 + iVar4 + 1;
          FUN_00400420(__s,"external/openssl/crypto/objects/obj_dat.c",0x1f7);
joined_r0x00408870:
          bVar3 = false;
          uVar11 = (ulong)uVar5;
          if (iVar14 < 1) break;
          goto LAB_0040863c;
        }
        FUN_00403120(acStack_98,0x25,&DAT_038be56c,uVar11);
        sVar6 = strlen(acStack_98);
        iVar17 = (int)sVar6;
        iVar4 = param_2;
        if ((param_2 < 1) || (param_1 == (byte *)0x0)) {
LAB_0040887c:
          uVar5 = iVar10 + iVar17;
          param_2 = iVar4;
          goto joined_r0x00408870;
        }
        lVar16 = (long)param_2;
        FUN_004050b0(param_1,acStack_98,lVar16);
        iVar4 = param_2 - iVar17;
        if (iVar17 <= param_2) {
          param_1 = param_1 + iVar17;
          goto LAB_0040887c;
        }
        param_2 = 0;
        param_1 = param_1 + lVar16;
        uVar11 = (ulong)(uint)(iVar10 + iVar17);
        bVar3 = false;
      } while (0 < iVar14);
    }
    FUN_0040c1e0(lVar12);
  }
LAB_00408a34:
  return uVar11 & 0xffffffff;
}


