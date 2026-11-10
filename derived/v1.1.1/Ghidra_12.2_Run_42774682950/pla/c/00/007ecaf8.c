/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007ecaf8; name: FUN_007ecaf8
 */


ulong FUN_007ecaf8(byte *param_1,int param_2,long param_3,int param_4)

{
  long lVar1;
  uint uVar2;
  ushort *puVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  
  uVar9 = 0;
  if (((param_2 != 0) && (param_1 != (byte *)0x0)) && (param_3 != 0)) {
    uVar6 = param_2 - 1;
    if (param_2 == 1) {
      uVar9 = 0;
LAB_007ecc18:
      pbVar11 = param_1 + uVar9;
    }
    else {
      iVar4 = 0x7fffffff;
      if (param_4 != -1) {
        iVar4 = param_4;
      }
      uVar9 = 0;
      lVar10 = 0;
      pbVar11 = param_1;
      if (1 < (long)iVar4) {
        do {
          puVar3 = (ushort *)(param_3 + lVar10);
          bVar5 = (byte)*puVar3;
          uVar7 = *puVar3;
          if (uVar7 == 0) break;
          iVar8 = (int)uVar9;
          if (uVar7 < 0x80) {
            *pbVar11 = bVar5;
            uVar2 = iVar8 + 1;
          }
          else if (uVar7 < 0x800) {
            if (uVar6 <= iVar8 + 1U) goto LAB_007ecc18;
            *pbVar11 = (byte)(uVar7 >> 6) | 0xc0;
            pbVar11[1] = bVar5 & 0x3f | 0x80;
            uVar2 = iVar8 + 2;
          }
          else {
            if (uVar6 <= iVar8 + 2U) goto LAB_007ecc18;
            *pbVar11 = *(byte *)((long)puVar3 + 1) >> 4 | 0xe0;
            pbVar11[1] = (byte)(uVar7 >> 6) & 0x3f | 0x80;
            pbVar11[2] = bVar5 & 0x3f | 0x80;
            uVar2 = iVar8 + 3;
          }
          uVar9 = (ulong)uVar2;
          if (uVar6 <= uVar2) goto LAB_007ecc18;
          pbVar11 = param_1 + uVar9;
          lVar1 = lVar10 + 3;
          lVar10 = lVar10 + 2;
        } while (lVar1 < iVar4);
      }
    }
    *pbVar11 = 0;
  }
  return uVar9;
}


