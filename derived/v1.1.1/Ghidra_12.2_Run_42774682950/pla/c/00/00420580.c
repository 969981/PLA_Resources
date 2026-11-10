/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420580; name: FUN_00420580
 */


long FUN_00420580(byte *param_1,uint *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte bVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  
  if (param_4 == 0) {
    uVar6 = 0xde;
    uVar7 = 0x9a;
    goto LAB_004205dc;
  }
  bVar4 = *param_3;
  if (param_2 != (uint *)0x0) {
    *param_2 = bVar4 & 0x80;
  }
  uVar12 = param_4 - 1;
  if (uVar12 == 0) {
    if (param_1 == (byte *)0x0) {
      return 1;
    }
    if ((bVar4 & 0x80) == 0) {
      *param_1 = *param_3;
      return 1;
    }
    *param_1 = -*param_3;
    return 1;
  }
  if (*param_3 == 0) {
LAB_00420700:
    if ((bVar4 & 0x80) == (param_3[1] & 0x80)) {
      uVar6 = 0xdd;
      uVar7 = 0xbb;
LAB_004205dc:
      FUN_004014b0(0xd,0xe2,uVar6,"external/openssl/crypto/asn1/a_int.c",uVar7);
      return 0;
    }
    uVar12 = 1;
    lVar15 = param_4 + -1;
  }
  else {
    if (*param_3 == 0xff) {
      if (uVar12 < 4) {
        bVar11 = 0;
        uVar9 = 1;
LAB_00420694:
        uVar8 = (int)param_4 - (int)uVar9;
        uVar14 = ~uVar9;
        uVar12 = (ulong)uVar8 & 3;
        if ((uVar8 & 3) != 0) {
          do {
            pbVar10 = param_3 + uVar9;
            uVar9 = uVar9 + 1;
            bVar11 = bVar11 | *pbVar10;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
        }
        if (2 < uVar14 + param_4) {
          lVar15 = param_4 - uVar9;
          pbVar10 = param_3 + uVar9 + 1;
          do {
            pbVar3 = pbVar10 + -1;
            bVar18 = *pbVar10;
            pbVar1 = pbVar10 + 1;
            pbVar2 = pbVar10 + 2;
            pbVar10 = pbVar10 + 4;
            bVar11 = bVar11 | *pbVar3 | bVar18 | *pbVar1 | *pbVar2;
            lVar15 = lVar15 + -4;
          } while (lVar15 != 0);
        }
      }
      else {
        uVar16 = uVar12 & 0xfffffffffffffffc;
        bVar18 = 0;
        bVar19 = 0;
        bVar17 = 0;
        bVar11 = 0;
        uVar9 = uVar16 | 1;
        uVar14 = uVar16;
        pbVar10 = param_3;
        do {
          bVar18 = bVar18 | pbVar10[1];
          bVar19 = bVar19 | pbVar10[2];
          bVar17 = bVar17 | pbVar10[3];
          bVar11 = bVar11 | pbVar10[4];
          uVar14 = uVar14 - 4;
          pbVar10 = pbVar10 + 4;
        } while (uVar14 != 0);
        bVar11 = bVar11 | bVar17 | bVar19 | bVar18;
        if (uVar12 != uVar16) goto LAB_00420694;
      }
      if (bVar11 != 0) goto LAB_00420700;
    }
    uVar12 = 0;
    lVar15 = param_4;
  }
  if ((param_1 != (byte *)0x0) && (lVar15 != 0)) {
    uVar5 = -(uint)(bVar4 >> 7);
    uVar8 = (uint)(bVar4 >> 7);
    param_3 = param_3 + param_4;
    param_1 = param_1 + lVar15;
    lVar13 = lVar15;
    if (((int)param_4 - (int)uVar12 & 1U) != 0) {
      param_3 = param_3 + -1;
      uVar8 = (uint)(bVar4 >> 7) + ((uint)*param_3 ^ uVar5 & 0xff);
      param_1 = param_1 + -1;
      *param_1 = (byte)uVar8;
      uVar8 = uVar8 >> 8;
      lVar13 = lVar15 + -1;
    }
    if (~uVar12 + param_4 != 0) {
      param_1 = param_1 + -1;
      param_3 = param_3 + -1;
      do {
        uVar8 = uVar8 + ((*param_3 ^ uVar5) & 0xff);
        *param_1 = (byte)uVar8;
        uVar8 = (uVar8 >> 8) + ((param_3[-1] ^ uVar5) & 0xff);
        lVar13 = lVar13 + -2;
        param_1[-1] = (byte)uVar8;
        uVar8 = uVar8 >> 8;
        param_1 = param_1 + -2;
        param_3 = param_3 + -2;
      } while (lVar13 != 0);
    }
  }
  return lVar15;
}


