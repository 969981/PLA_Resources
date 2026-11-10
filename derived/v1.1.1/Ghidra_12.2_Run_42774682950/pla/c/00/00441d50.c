/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00441d50; name: FUN_00441d50
 */


ulong FUN_00441d50(undefined8 param_1,long *param_2)

{
  ulong uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  undefined1 auStack_78 [4];
  int local_74;
  ulong local_70;
  long local_68;
  
  lVar5 = FUN_00417420();
  if (lVar5 == 0) {
    FUN_004014b0(0xd,0x6b,0x41,"external/openssl/crypto/asn1/a_d2i_fp.c",0x6e);
  }
  else {
    FUN_004016d0();
    iVar13 = 0;
    uVar9 = 0;
    uVar14 = 0;
    do {
      uVar10 = uVar14 - uVar9;
      while( true ) {
        if (uVar10 < 9) {
          uVar12 = 8 - uVar10;
          if ((CARRY8(uVar12,uVar14)) || (lVar6 = FUN_00417620(lVar5,uVar12 + uVar14), lVar6 == 0))
          {
            uVar7 = 0x41;
            uVar8 = 0x78;
            goto LAB_00441f58;
          }
          iVar3 = FUN_00404070(param_1,*(long *)(lVar5 + 8) + uVar14,uVar12 & 0xffffffff);
          if ((uVar10 == 0) && (iVar3 < 0)) {
            uVar7 = 0x8e;
            uVar8 = 0x7d;
            goto LAB_00441f58;
          }
          if (0 < iVar3) {
            bVar2 = CARRY8(uVar14,(long)iVar3);
            uVar14 = uVar14 + (long)iVar3;
            if (bVar2) {
              uVar7 = 0x9b;
              uVar8 = 0x82;
              goto LAB_00441f58;
            }
            uVar10 = uVar14 - uVar9;
          }
        }
        lVar6 = *(long *)(lVar5 + 8) + uVar9;
        local_68 = lVar6;
        uVar4 = FUN_00409ce0(&local_68,&local_70,&local_74,auStack_78,uVar10);
        if ((uVar4 >> 7 & 1) != 0) {
          uVar10 = FUN_00401a50();
          if ((uVar10 & 0xfff) != 0x9b) goto LAB_00441f5c;
          FUN_004016d0();
        }
        uVar9 = uVar9 + (long)((int)local_68 - (int)lVar6);
        if ((uVar4 & 1) == 0) break;
        if (iVar13 == -1) {
          uVar7 = 0x7b;
          uVar8 = 0x9c;
          goto LAB_00441f58;
        }
        iVar13 = iVar13 + 1;
        uVar10 = uVar14 - uVar9;
      }
      if (((iVar13 == 0) || (local_70 != 0)) || (local_74 != 0)) {
        uVar10 = local_70 - (uVar14 - uVar9);
        if (uVar14 - uVar9 <= local_70 && uVar10 != 0) {
          if ((uVar10 >> 0x1f != 0) || (~uVar14 < uVar10)) {
            uVar7 = 0x9b;
            uVar8 = 0xb1;
            goto LAB_00441f58;
          }
          if (uVar10 != 0) {
            uVar12 = 0x4000;
            do {
              uVar1 = uVar12;
              if (uVar10 <= uVar12) {
                uVar1 = uVar10;
              }
              lVar6 = FUN_00417620(lVar5,uVar1 + uVar14);
              if (lVar6 == 0) {
                uVar7 = 0x41;
                uVar8 = 0xbe;
                goto LAB_00441f58;
              }
              if (uVar1 != 0) {
                uVar11 = uVar1;
                do {
                  iVar3 = FUN_00404070(param_1,*(long *)(lVar5 + 8) + uVar14,uVar11 & 0xffffffff);
                  if (iVar3 < 1) {
                    uVar7 = 0x8e;
                    uVar8 = 0xc6;
                    goto LAB_00441f58;
                  }
                  uVar14 = uVar14 + (long)iVar3;
                  uVar11 = uVar11 - (long)iVar3;
                } while (uVar11 != 0);
              }
              uVar10 = uVar10 - uVar1;
              uVar12 = uVar12 << (ulong)(uVar12 < 0x3fffffff);
            } while (uVar10 != 0);
          }
        }
        bVar2 = CARRY8(local_70,uVar9);
        uVar9 = local_70 + uVar9;
        if (bVar2) {
          uVar7 = 0x9b;
          uVar8 = 0xd5;
          goto LAB_00441f58;
        }
      }
      else {
        iVar13 = iVar13 + -1;
      }
    } while (iVar13 != 0);
    if (uVar9 >> 0x1f == 0) {
      *param_2 = lVar5;
      goto LAB_00441f88;
    }
    uVar7 = 0x9b;
    uVar8 = 0xe1;
LAB_00441f58:
    FUN_004014b0(0xd,0x6b,uVar7,"external/openssl/crypto/asn1/a_d2i_fp.c",uVar8);
LAB_00441f5c:
    FUN_00417470(lVar5);
  }
  uVar9 = 0xffffffff;
LAB_00441f88:
  return uVar9 & 0xffffffff;
}


