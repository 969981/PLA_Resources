/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043d910; name: FUN_0043d910
 */


undefined8 FUN_0043d910(long param_1,undefined8 param_2,byte *param_3,ulong param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  
  if (param_4 == 0) {
    uVar10 = 100;
    uVar11 = 0x118;
LAB_0043da4c:
    FUN_004014b0(0x10,0x67,uVar10,"external/openssl/crypto/ec/ecp_oct.c",uVar11);
    return 0;
  }
  bVar4 = *param_3;
  bVar1 = bVar4 & 0xfe;
  if (((bVar4 & 0xfc) != 0) && ((bVar1 | 2) != 6)) {
    uVar10 = 0x66;
    uVar11 = 0x121;
    goto LAB_0043da4c;
  }
  if ((bVar4 & 0xfffffffb) == 1) {
    uVar10 = 0x66;
    uVar11 = 0x125;
    goto LAB_0043da4c;
  }
  if ((bVar4 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar10 = FUN_0042e920(param_1,param_2);
      return uVar10;
    }
    uVar10 = 0x66;
    uVar11 = 299;
    goto LAB_0043da4c;
  }
  iVar6 = FUN_0040c070(*(undefined8 *)(param_1 + 0x40));
  uVar2 = iVar6 + 0xe;
  if (-1 < (int)(iVar6 + 7U)) {
    uVar2 = iVar6 + 7U;
  }
  uVar5 = (long)((ulong)uVar2 << 0x20) >> 0x23;
  uVar3 = uVar5 << 1 | 1;
  if (bVar1 == 2) {
    uVar3 = uVar5 + 1;
  }
  if (uVar3 != param_4) {
    uVar10 = 0x66;
    uVar11 = 0x138;
    goto LAB_0043da4c;
  }
  if (param_5 == 0) {
    param_5 = FUN_0040de30();
    lVar12 = param_5;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    lVar12 = 0;
  }
  FUN_0040e090(param_5);
  uVar10 = FUN_0040e240(param_5);
  lVar8 = FUN_0040e240(param_5);
  if (lVar8 != 0) {
    lVar9 = FUN_0040c710(param_3 + 1,uVar5 & 0xffffffff,uVar10);
    if (lVar9 != 0) {
      iVar6 = FUN_0040cc00(uVar10,*(undefined8 *)(param_1 + 0x40));
      if (iVar6 < 0) {
        uVar2 = bVar4 & 1;
        if (bVar1 == 2) {
          iVar6 = FUN_0043c330(param_1,param_2,uVar10,uVar2,param_5);
joined_r0x0043dba4:
          if (iVar6 != 0) {
            uVar10 = 1;
            goto LAB_0043daf4;
          }
        }
        else {
          lVar9 = FUN_0040c710(param_3 + 1 + uVar5,uVar5 & 0xffffffff,lVar8);
          if (lVar9 != 0) {
            iVar6 = FUN_0040cc00(lVar8,*(undefined8 *)(param_1 + 0x40));
            if (iVar6 < 0) {
              if ((bVar1 != 6) || (uVar7 = FUN_0040d2b0(lVar8), uVar2 == uVar7)) {
                iVar6 = FUN_0042ea00(param_1,param_2,uVar10,lVar8,param_5);
                goto joined_r0x0043dba4;
              }
              uVar10 = 0x15b;
            }
            else {
              uVar10 = 0x156;
            }
            goto LAB_0043dae8;
          }
        }
      }
      else {
        uVar10 = 0x14b;
LAB_0043dae8:
        FUN_004014b0(0x10,0x67,0x66,"external/openssl/crypto/ec/ecp_oct.c",uVar10);
      }
    }
  }
  uVar10 = 0;
LAB_0043daf4:
  FUN_0040e1b0(param_5);
  FUN_0040def0(lVar12);
  return uVar10;
}


