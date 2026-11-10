/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03263950; name: FUN_03263950
 */


undefined8 FUN_03263950(long param_1,ushort param_2)

{
  ushort uVar1;
  ushort *puVar2;
  short *psVar3;
  short *psVar4;
  long lVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  bool bVar9;
  short sVar10;
  bool bVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  uint uVar19;
  long lVar20;
  short sVar21;
  ulong uVar22;
  
  lVar13 = *(long *)(param_1 + 0x110);
  puVar2 = (ushort *)(lVar13 + (ulong)param_2 * 8);
  do {
    uVar6 = *puVar2;
    lVar20 = *(long *)(param_1 + 0x120);
    uVar7 = *(ushort *)(lVar20 + (ulong)uVar6 * 8 + 2);
    uVar16 = (ulong)uVar7;
    uVar18 = (uint)uVar6;
    if (uVar7 == uVar18) {
      return 0;
    }
    psVar3 = (short *)(lVar20 + uVar16 * 8);
    psVar4 = (short *)(lVar20 + (ulong)(ushort)psVar3[1] * 8);
    sVar21 = *psVar3;
    bVar12 = false;
    uVar17 = (ulong)(ushort)psVar3[1];
    bVar9 = (*(byte *)(psVar3 + 2) & 3) == 0;
    sVar10 = *psVar4;
    do {
      uVar15 = (uint)uVar16;
      uVar7 = psVar4[1];
      uVar22 = (ulong)uVar7;
      sVar8 = *(short *)(lVar20 + uVar22 * 8);
      bVar11 = (*(byte *)(psVar4 + 2) & 3) == 0;
      uVar19 = (uint)uVar6;
      if (((bool)(bVar9 & bVar11)) || (sVar8 != sVar21)) {
        psVar4 = (short *)(lVar20 + uVar22 * 8);
        uVar14 = uVar22;
        uVar16 = uVar17;
        uVar18 = uVar15;
        sVar21 = sVar10;
      }
      else {
        FUN_032638f0(param_1,uVar16,uVar17);
        if (uVar7 == uVar15) {
          return 0;
        }
        uVar1 = (ushort)uVar18;
        *(ushort *)(*(long *)(param_1 + 0x120) + (ulong)uVar1 * 8 + 2) = uVar7;
        if ((uVar19 == (uint)uVar17) || (uVar19 == uVar15)) {
          *puVar2 = uVar1;
          bVar12 = true;
          *(ushort *)(lVar13 + (ulong)param_2 * 8 + 2) = uVar1;
          break;
        }
        lVar5 = lVar20 + uVar22 * 8;
        lVar20 = *(long *)(param_1 + 0x120);
        uVar14 = (ulong)*(ushort *)(lVar5 + 2);
        psVar4 = (short *)(lVar20 + uVar14 * 8);
        sVar8 = *psVar4;
        bVar11 = (*(byte *)(lVar5 + 4) & 3) == 0;
        bVar12 = true;
        uVar16 = uVar22;
      }
      uVar17 = uVar14;
      bVar9 = bVar11;
      sVar10 = sVar8;
    } while (uVar19 != uVar18);
    if (!bVar12) {
      return 1;
    }
  } while( true );
}


