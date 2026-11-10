/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 030a7e30; name: FUN_030a7e30
 */


void FUN_030a7e30(undefined4 *param_1,long param_2,long param_3)

{
  bool bVar1;
  ushort *puVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  
  lVar6 = *(long *)(param_2 + 0xd8);
  lVar8 = *(long *)(lVar6 + 0x40);
  lVar7 = *(long *)(lVar6 + 0x30) + (long)*(short *)(param_1 + 5) * 8;
  puVar2 = (ushort *)(*(long *)(lVar6 + 0x50) + (long)*(short *)(param_1 + 5) * 2);
  uVar9 = (ulong)*puVar2;
  bVar3 = *(byte *)((long)param_1 + 0x1a);
  lVar10 = (ulong)*(ushort *)(lVar7 + 2) * (ulong)bVar3;
  uVar4 = *(ushort *)(lVar8 + (*(byte *)(lVar7 + 7) + uVar9) * 8 + 4);
  sVar5 = *(short *)((long)param_1 + 0x16);
  lVar6 = lVar10 + (ulong)*(ushort *)(lVar8 + uVar9 * 8 + 4);
  lVar7 = lVar10 + (ulong)*(byte *)(lVar7 + 6) +
          (ulong)*(ushort *)(lVar8 + (ulong)puVar2[1] * 8 + -4) + -1;
  if ((int)lVar6 <= (int)lVar7) {
    do {
      *(undefined4 *)(param_3 + lVar6 * 4) = 0x28800000;
      bVar1 = lVar6 < lVar7;
      lVar6 = lVar6 + 1;
    } while (bVar1);
  }
  *(undefined4 *)(param_3 + ((ulong)uVar4 + (ulong)bVar3 + lVar10) * 4) = 0x3f800000;
  *(undefined4 *)(*(long *)(param_2 + 0xf0) + (long)sVar5 * 4) = *param_1;
  return;
}


