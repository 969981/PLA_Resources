/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00409ce0; name: FUN_00409ce0
 */


byte FUN_00409ce0(long *param_1,ulong *param_2,undefined4 *param_3,uint *param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  byte bVar13;
  byte *pbVar14;
  byte bVar15;
  
  if (param_5 == 0) {
LAB_00409e90:
    FUN_004014b0(0xd,0x72,0x7b,"external/openssl/crypto/asn1/asn1_lib.c",0x65);
    return 0x80;
  }
  pbVar5 = (byte *)*param_1;
  pbVar6 = pbVar5 + 1;
  bVar4 = *pbVar5;
  uVar2 = bVar4 & 0x1f;
  uVar9 = (ulong)uVar2;
  lVar8 = param_5 + -1;
  if (uVar2 == 0x1f) {
    if (lVar8 != 0) {
      uVar9 = 0;
      pbVar6 = pbVar5 + 2;
      lVar8 = param_5 + -2;
      do {
        uVar9 = (ulong)pbVar6[-1] & 0x7f | uVar9 << 7;
        if (-1 < (char)pbVar6[-1]) goto LAB_00409d50;
        if (lVar8 == 0) break;
        pbVar6 = pbVar6 + 1;
        lVar8 = lVar8 + -1;
      } while ((long)uVar9 < 0x1000000);
    }
    goto LAB_00409e90;
  }
LAB_00409d50:
  if (lVar8 == 0) goto LAB_00409e90;
  *param_3 = (int)uVar9;
  *param_4 = bVar4 & 0xc0;
  if (lVar8 < 1) goto LAB_00409e90;
  bVar15 = *pbVar6;
  bVar13 = bVar4 & 0x20;
  if (bVar15 != 0x80) {
    uVar9 = (ulong)bVar15 & 0x7f;
    pbVar14 = pbVar6 + 1;
    if ((char)bVar15 < '\0') {
      lVar1 = uVar9 + 1;
      if (lVar8 <= lVar1) goto LAB_00409e90;
      iVar7 = (int)uVar9;
      if (iVar7 != 0) {
        lVar8 = 0;
        uVar10 = 1;
LAB_00409e1c:
        uVar9 = (ulong)pbVar6[uVar10];
        if (uVar9 == 0) goto code_r0x00409e24;
        iVar12 = (int)(lVar1 + lVar8);
        if (iVar12 + -1 < 9) {
          uVar11 = (lVar1 + lVar8) - 2;
          if (0 < (int)uVar11) {
            uVar3 = uVar9;
            uVar9 = uVar10;
            pbVar14 = pbVar6 + (1 - lVar8);
            if ((uVar11 & 1) != 0) {
              uVar11 = (ulong)(((int)lVar1 + (int)lVar8) - 3);
              uVar3 = (ulong)CONCAT11(pbVar6[uVar10],pbVar6[uVar10 + 1]);
              uVar9 = uVar3;
              pbVar14 = pbVar6 + (2 - lVar8);
            }
            if (iVar12 != 3) {
              uVar9 = uVar3;
              do {
                uVar2 = (int)uVar11 - 2;
                uVar11 = (ulong)uVar2;
                uVar9 = (ulong)pbVar14[2] | ((ulong)pbVar14[1] | (uVar9 & 0xffffffffffff) << 8) << 8
                ;
                pbVar14 = pbVar14 + 2;
              } while (0 < (int)uVar2);
            }
            if ((long)uVar9 < 0) goto LAB_00409e90;
          }
          pbVar14 = pbVar6 + (1 - lVar8) + (ulong)(iVar7 - 1) + lVar8 + 1;
          goto LAB_00409db0;
        }
        goto LAB_00409e90;
      }
      uVar9 = 0;
    }
    goto LAB_00409db0;
  }
  *param_2 = 0;
  if ((bVar4 & 0x20) == 0) goto LAB_00409e90;
  pbVar14 = pbVar6 + 1;
  bVar15 = 1;
  bVar4 = 1;
  if (pbVar5 + (param_5 - (long)pbVar14) < (byte *)0x8000000000000000) goto LAB_00409de8;
  goto LAB_00409dc8;
code_r0x00409e24:
  lVar8 = lVar8 + -1;
  uVar10 = uVar10 + 1;
  if ((int)lVar1 + -1 + (int)lVar8 < 1) goto code_r0x00409e38;
  goto LAB_00409e1c;
code_r0x00409e38:
  uVar9 = 0;
  pbVar14 = pbVar6 + (1 - lVar8);
LAB_00409db0:
  bVar15 = 0;
  *param_2 = uVar9;
  bVar4 = 0;
  if ((long)uVar9 <= (long)(pbVar5 + (param_5 - (long)pbVar14))) goto LAB_00409de8;
LAB_00409dc8:
  bVar15 = bVar4;
  FUN_004014b0(0xd,0x72,0x9b,"external/openssl/crypto/asn1/asn1_lib.c",0x5b);
  bVar13 = bVar13 | 0x80;
LAB_00409de8:
  *param_1 = (long)pbVar14;
  return bVar13 | bVar15;
}


