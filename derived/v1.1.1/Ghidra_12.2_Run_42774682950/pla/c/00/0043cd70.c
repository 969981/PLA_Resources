/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043cd70; name: FUN_0043cd70
 */


undefined8 FUN_0043cd70(long *param_1,undefined8 param_2,byte *param_3,ulong param_4,long param_5)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  if (param_4 == 0) {
    uVar11 = 100;
    uVar12 = 0xf7;
LAB_0043cec0:
    FUN_004014b0(0x10,0xa0,uVar11,"external/openssl/crypto/ec/ec2_oct.c",uVar12);
    return 0;
  }
  bVar4 = *param_3;
  bVar1 = bVar4 & 0xfe;
  if (((bVar4 & 0xfc) != 0) && ((bVar1 | 2) != 6)) {
    uVar11 = 0x66;
    uVar12 = 0x100;
    goto LAB_0043cec0;
  }
  if ((bVar4 & 0xfffffffb) == 1) {
    uVar11 = 0x66;
    uVar12 = 0x104;
    goto LAB_0043cec0;
  }
  if ((bVar4 & 0xfe) == 0) {
    if (param_4 == 1) {
      uVar11 = FUN_0042e920(param_1,param_2);
      return uVar11;
    }
    uVar11 = 0x66;
    uVar12 = 0x10a;
    goto LAB_0043cec0;
  }
  iVar6 = FUN_0042e580(param_1);
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
    uVar11 = 0x66;
    uVar12 = 0x118;
    goto LAB_0043cec0;
  }
  if (param_5 == 0) {
    param_5 = FUN_0040de30();
    lVar13 = param_5;
    if (param_5 == 0) {
      return 0;
    }
  }
  else {
    lVar13 = 0;
  }
  FUN_0040e090(param_5);
  uVar11 = FUN_0040e240(param_5);
  uVar12 = FUN_0040e240(param_5);
  lVar9 = FUN_0040e240(param_5);
  if (lVar9 != 0) {
    lVar10 = FUN_0040c710(param_3 + 1,uVar5 & 0xffffffff,uVar11);
    if (lVar10 != 0) {
      iVar7 = FUN_0040c070(uVar11);
      if (iVar6 < iVar7) {
        FUN_004014b0(0x10,0xa0,0x66,"external/openssl/crypto/ec/ec2_oct.c",300);
      }
      else {
        uVar2 = bVar4 & 1;
        if (bVar1 == 2) {
          iVar6 = FUN_0043c330(param_1,param_2,uVar11,uVar2,param_5);
joined_r0x0043d064:
          if (iVar6 != 0) {
            uVar11 = 1;
            goto LAB_0043cf7c;
          }
        }
        else {
          lVar10 = FUN_0040c710(param_3 + 1 + uVar5,uVar5 & 0xffffffff,uVar12);
          if (lVar10 != 0) {
            iVar7 = FUN_0040c070(uVar12);
            if (iVar7 <= iVar6) {
              if (bVar1 == 6) {
                iVar6 = (**(code **)(*param_1 + 0x118))(param_1,lVar9,uVar12,uVar11,param_5);
                if (iVar6 == 0) goto LAB_0043cf78;
                uVar8 = FUN_0040d2b0(lVar9);
                if (uVar2 != uVar8) {
                  uVar11 = 0x13e;
                  goto LAB_0043d004;
                }
              }
              iVar6 = FUN_0042ea00(param_1,param_2,uVar11,uVar12,param_5);
              goto joined_r0x0043d064;
            }
            uVar11 = 0x137;
LAB_0043d004:
            FUN_004014b0(0x10,0xa0,0x66,"external/openssl/crypto/ec/ec2_oct.c",uVar11);
          }
        }
      }
    }
  }
LAB_0043cf78:
  uVar11 = 0;
LAB_0043cf7c:
  FUN_0040e1b0(param_5);
  FUN_0040def0(lVar13);
  return uVar11;
}


