/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00426b60; name: FUN_00426b60
 */


bool FUN_00426b60(int param_1,undefined8 param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  long lVar9;
  byte local_44 [4];
  
  if (param_3 == 0) {
    if ((param_4 == -1) && (param_5 == 0)) {
      FUN_0040c6b0(param_2,0);
      return true;
    }
LAB_00426ca4:
    FUN_004014b0(3,0x7f,0x76,"external/openssl/crypto/bn/bn_rand.c",0x5d);
    return false;
  }
  if ((param_3 < 0) || ((uVar8 = param_3 - 1, uVar8 == 0 && (0 < param_4)))) goto LAB_00426ca4;
  uVar1 = param_3 + 0xe;
  if (-1 < (int)(param_3 + 7U)) {
    uVar1 = param_3 + 7U;
  }
  uVar2 = (long)((ulong)uVar1 << 0x20) >> 0x23;
  uVar1 = param_3 + 6;
  if (-1 < (int)uVar8) {
    uVar1 = uVar8;
  }
  pbVar6 = (byte *)FUN_00400260(uVar2,"external/openssl/crypto/bn/bn_rand.c",0x27);
  if (pbVar6 == (byte *)0x0) {
    FUN_004014b0(3,0x7f,0x41,"external/openssl/crypto/bn/bn_rand.c",0x29);
    bVar4 = false;
    goto LAB_00426d5c;
  }
  if (param_1 == 0) {
    iVar5 = FUN_00427c60(pbVar6,uVar2 & 0xffffffff);
  }
  else {
    iVar5 = FUN_00427b20();
  }
  if (iVar5 < 1) {
LAB_00426cf8:
    bVar4 = false;
    goto LAB_00426d5c;
  }
  if (param_1 == 1) {
    lVar9 = 0;
    do {
      iVar5 = FUN_00427c60(local_44,1);
      if (iVar5 < 1) goto LAB_00426cf8;
      if ((lVar9 == 0) || (-1 < (char)local_44[0])) {
        if (local_44[0] < 0x2a) {
          bVar7 = 0;
          goto LAB_00426c48;
        }
        if (local_44[0] < 0x54) {
          bVar7 = 0xff;
          goto LAB_00426c48;
        }
      }
      else {
        bVar7 = pbVar6[lVar9 + -1];
LAB_00426c48:
        pbVar6[lVar9] = bVar7;
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 < (long)uVar2);
  }
  uVar8 = uVar8 - (uVar1 & 0xfffffff8);
  bVar7 = (byte)(0xff << (ulong)(uVar8 + 1 & 0x1f));
  if (param_4 < 0) {
    *pbVar6 = *pbVar6 & (bVar7 ^ 0xff);
  }
  else {
    if (param_4 == 0) {
      iVar5 = 1;
    }
    else {
      if (uVar8 == 0) {
        *pbVar6 = 1;
        pbVar6[1] = pbVar6[1] | 0x80;
        *pbVar6 = 1;
        goto joined_r0x00426dac;
      }
      uVar8 = uVar8 - 1;
      iVar5 = 3;
    }
    bVar3 = *pbVar6 | (byte)(iVar5 << (ulong)(uVar8 & 0x1f));
    *pbVar6 = bVar3;
    *pbVar6 = bVar3 & (bVar7 ^ 0xff);
  }
joined_r0x00426dac:
  if (param_5 != 0) {
    pbVar6[uVar2 - 1] = pbVar6[uVar2 - 1] | 1;
  }
  lVar9 = FUN_0040c710(pbVar6,uVar2 & 0xffffffff,param_2);
  bVar4 = lVar9 != 0;
LAB_00426d5c:
  FUN_00400620(pbVar6,uVar2,"external/openssl/crypto/bn/bn_rand.c",0x58);
  return bVar4;
}


