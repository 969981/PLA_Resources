/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00420ec0; name: FUN_00420ec0
 */


/* WARNING: Removing unreachable block (ram,0x00420f08) */

undefined8 FUN_00420ec0(ulong *param_1,undefined8 param_2,undefined8 *param_3,ulong param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  undefined8 uVar6;
  byte *pbVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  byte bVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte local_28 [8];
  
  if (param_4 == 0) {
    uVar6 = 0xe2;
    uVar8 = 0xde;
    uVar9 = 0x9a;
    goto LAB_004210c4;
  }
  pbVar7 = (byte *)*param_3;
  uVar13 = param_4 - 1;
  if (uVar13 == 0) {
    param_4 = 1;
  }
  else {
    bVar4 = *pbVar7;
    if (bVar4 == 0) {
LAB_0042106c:
      if (-1 < (char)(pbVar7[1] ^ bVar4)) {
        uVar6 = 0xe2;
        uVar8 = 0xdd;
        uVar9 = 0xbb;
        goto LAB_004210c4;
      }
      param_4 = param_4 - 1;
    }
    else if (bVar4 == 0xff) {
      if (uVar13 < 4) {
        bVar12 = 0;
        uVar14 = 1;
LAB_00421000:
        uVar5 = (int)param_4 - (int)uVar14;
        uVar15 = ~uVar14;
        uVar13 = (ulong)uVar5 & 3;
        if ((uVar5 & 3) != 0) {
          do {
            pbVar11 = pbVar7 + uVar14;
            uVar14 = uVar14 + 1;
            bVar12 = bVar12 | *pbVar11;
            uVar13 = uVar13 - 1;
          } while (uVar13 != 0);
        }
        if (2 < uVar15 + param_4) {
          lVar16 = param_4 - uVar14;
          pbVar11 = pbVar7 + uVar14 + 1;
          do {
            pbVar3 = pbVar11 + -1;
            bVar19 = *pbVar11;
            pbVar1 = pbVar11 + 1;
            pbVar2 = pbVar11 + 2;
            pbVar11 = pbVar11 + 4;
            bVar12 = bVar12 | *pbVar3 | bVar19 | *pbVar1 | *pbVar2;
            lVar16 = lVar16 + -4;
          } while (lVar16 != 0);
        }
      }
      else {
        uVar17 = uVar13 & 0xfffffffffffffffc;
        bVar19 = 0;
        bVar20 = 0;
        bVar18 = 0;
        bVar12 = 0;
        uVar14 = uVar17 | 1;
        uVar15 = uVar17;
        pbVar11 = pbVar7;
        do {
          bVar19 = bVar19 | pbVar11[1];
          bVar20 = bVar20 | pbVar11[2];
          bVar18 = bVar18 | pbVar11[3];
          bVar12 = bVar12 | pbVar11[4];
          uVar15 = uVar15 - 4;
          pbVar11 = pbVar11 + 4;
        } while (uVar15 != 0);
        bVar12 = bVar12 | bVar18 | bVar20 | bVar19;
        if (uVar13 != uVar17) goto LAB_00421000;
      }
      if (bVar12 != 0) goto LAB_0042106c;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (8 < param_4) {
      uVar6 = 0x65;
      uVar8 = 0xdf;
      uVar9 = 0x267;
LAB_004210c4:
      FUN_004014b0(0xd,uVar6,uVar8,"external/openssl/crypto/asn1/a_int.c",uVar9);
      return 0;
    }
  }
  FUN_00420580(local_28);
  if (param_4 == 1) {
    uVar14 = 0;
    lVar10 = 0;
  }
  else {
    uVar13 = 0;
    lVar16 = 0;
    do {
      lVar10 = lVar16 + 2;
      uVar13 = (ulong)local_28[lVar16 + 1] |
               ((ulong)local_28[lVar16] | (uVar13 & 0xffffffffffff) << 8) << 8;
      lVar16 = lVar10;
    } while (param_4 - (param_4 & 1) != lVar10);
    uVar14 = uVar13 << 8;
    if ((param_4 & 1) == 0) goto LAB_00420f8c;
  }
  uVar13 = uVar14 | local_28[lVar10];
LAB_00420f8c:
  *param_1 = uVar13;
  return 1;
}


