/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0294c7c4; name: FUN_0294c7c4
 */


void FUN_0294c7c4(long param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  char cVar17;
  ushort uVar18;
  
  if ((*(uint *)(param_2 + 0x110) < 2) && (**(int **)(param_2 + 0x58) == 3)) {
    lVar13 = *(long *)(param_3 + 8);
    lVar12 = 0;
    do {
      pbVar16 = (byte *)(lVar13 + lVar12 * 0x38 + 0x38);
      bVar7 = *pbVar16;
      if (bVar7 != 0) {
        uVar5 = 0;
        if (bVar7 != 0) goto LAB_0294c85c;
LAB_0294c86c:
        lVar6 = 0;
        do {
          bVar4 = *(byte *)(lVar6 + 0x7d);
          uVar15 = (uint)bVar4;
          if (bVar4 < 6) {
            uVar8 = 0;
          }
          else if (bVar4 < 0xc) {
            uVar8 = 2;
          }
          else {
            uVar2 = 3;
            if (0x17 < uVar15) {
              uVar2 = (uint)(uVar15 < 0x1e) << 2;
            }
            uVar3 = 1;
            if (0x11 < uVar15) {
              uVar3 = uVar2;
            }
            uVar8 = (ulong)uVar3;
          }
          iVar14 = *(int *)(param_2 + 0x110);
          bVar4 = *(byte *)(param_2 + 0x130);
          uVar15 = uVar15 - (byte)(&DAT_03a7eb48)[uVar8] &
                   ((int)(uVar15 - (byte)(&DAT_03a7eb48)[uVar8]) >> 0x1f ^ 0xffffffffU);
          if (iVar14 == 2) {
LAB_0294c8d8:
            cVar17 = (&DAT_03a7ebe0)[uVar8];
            if (bVar4 < 5) {
              if (cVar17 == (&DAT_03a7ebe0)[bVar4]) goto LAB_0294c938;
            }
            else {
LAB_0294c92c:
              if (cVar17 == '\x02') goto LAB_0294c938;
            }
LAB_0294c8f0:
            iVar14 = 3;
            if ((uint)uVar8 < 2) {
              iVar14 = 0;
            }
            uVar15 = iVar14 + uVar15;
            if (4 < (uVar15 & 0xff)) {
              uVar15 = 5;
            }
            lVar9 = param_1 + ((ulong)uVar15 & 0xff) * 0x1a + 0x9c;
            bVar4 = *(byte *)(lVar6 + 0x368);
          }
          else {
            if (iVar14 == 1) {
              cVar17 = (&DAT_03a7ebe5)[uVar8];
              if (bVar4 < 5) {
                if (cVar17 == (&DAT_03a7ebe5)[bVar4]) goto LAB_0294c938;
                goto LAB_0294c8f0;
              }
              goto LAB_0294c92c;
            }
            if (iVar14 == 0) goto LAB_0294c8d8;
LAB_0294c938:
            iVar14 = 0;
            if ((uint)uVar8 != (uint)bVar4) {
              iVar14 = 3;
            }
            uVar15 = iVar14 + uVar15;
            if (4 < (uVar15 & 0xff)) {
              uVar15 = 5;
            }
            lVar9 = param_1 + ((ulong)uVar15 & 0xff) * 0x1a;
            bVar4 = *(byte *)(lVar6 + 0x368);
          }
          if (bVar4 != 0) {
            uVar11 = (ulong)bVar4;
            uVar8 = 0;
            pbVar10 = (byte *)(lVar6 + 0x309);
            do {
              if (((uint)uVar8 & 0xff) < (uint)uVar11) {
                uVar18 = (ushort)pbVar10[-1];
              }
              else {
                uVar18 = 0;
              }
              lVar1 = lVar9 + uVar8 * 2;
              *(ushort *)(lVar1 + 10) = uVar18;
              if (((uint)uVar8 & 0xff) < (uint)*(byte *)(lVar6 + 0x368)) {
                uVar18 = (ushort)*pbVar10;
              }
              else {
                uVar18 = 0;
              }
              *(ushort *)(lVar1 + 0x12) = uVar18;
              uVar11 = (ulong)*(byte *)(lVar6 + 0x368);
              uVar8 = uVar8 + 1;
              pbVar10 = pbVar10 + 0x1c;
            } while (uVar8 < uVar11);
            bVar7 = *pbVar16;
          }
          uVar5 = uVar5 + 1;
          if (bVar7 <= uVar5) break;
          if (bVar7 <= uVar5) goto LAB_0294c86c;
LAB_0294c85c:
          lVar6 = *(long *)(lVar13 + lVar12 * 0x38 + uVar5 * 8 + 8);
        } while( true );
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 5);
  }
  return;
}


