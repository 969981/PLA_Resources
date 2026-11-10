/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a1491c; name: FUN_02a1491c
 */


void FUN_02a1491c(long param_1,ulong param_2,uint param_3,uint param_4)

{
  long *plVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  byte bVar8;
  byte bVar9;
  long lVar10;
  byte *pbVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  
  bVar8 = FUN_02947e24(*(undefined8 *)(param_1 + 8),param_3);
  bVar9 = FUN_02947e24(*(undefined8 *)(param_1 + 8),(ulong)param_4);
  lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 8) + (param_2 & 0xff) * 0x38;
  lVar12 = lVar14 + 8;
  plVar1 = (long *)(lVar12 + (ulong)bVar8 * 8);
  lVar10 = *plVar1;
  *plVar1 = *(long *)(lVar12 + (ulong)bVar9 * 8);
  *(long *)(lVar12 + (ulong)bVar9 * 8) = lVar10;
  bVar4 = *(byte *)(lVar14 + 0x38);
  if (bVar8 < bVar4) {
    lVar12 = *plVar1;
  }
  else {
    lVar12 = 0;
  }
  if (bVar4 <= bVar9) {
    lVar10 = 0;
  }
  if (*(short *)(lVar12 + 0x74) != 0) {
    *(byte *)(lVar12 + 0x385) = *(byte *)(lVar12 + 0x385) | 0x10;
  }
  if (*(short *)(lVar10 + 0x74) != 0) {
    *(byte *)(lVar10 + 0x385) = *(byte *)(lVar10 + 0x385) | 0x10;
  }
  lVar12 = *(long *)(*(long *)(param_1 + 0x10) + 0xa8);
  puVar2 = (undefined2 *)(lVar12 + ((ulong)param_3 & 0xff) + (ulong)(byte)param_3 * 2);
  uVar6 = *puVar2;
  uVar5 = *(undefined1 *)(puVar2 + 1);
  uVar13 = (ulong)param_4 & 0xff;
  puVar3 = (undefined2 *)(lVar12 + uVar13 + (ulong)(byte)param_4 * 2);
  uVar7 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  *puVar2 = uVar7;
  *(undefined1 *)(puVar3 + 1) = uVar5;
  *puVar3 = uVar6;
  bVar4 = *(byte *)(puVar2 + 1);
  if (bVar4 != 0x1f) {
    if ((*(long *)(lVar12 + 0x30) == 0) ||
       (*(uint *)(lVar12 + 0x38) < (uint)bVar4 || *(uint *)(lVar12 + 0x38) == (uint)bVar4)) {
      pbVar11 = (byte *)(lVar12 + 0x3c);
    }
    else {
      pbVar11 = (byte *)(*(long *)(lVar12 + 0x30) + (ulong)bVar4);
    }
    *pbVar11 = (byte)param_3;
  }
  bVar4 = *(byte *)(lVar12 + uVar13 * 3 + 2);
  if (bVar4 != 0x1f) {
    if ((*(long *)(lVar12 + 0x30) == 0) ||
       (*(uint *)(lVar12 + 0x38) < (uint)bVar4 || *(uint *)(lVar12 + 0x38) == (uint)bVar4)) {
      pbVar11 = (byte *)(lVar12 + 0x3c);
    }
    else {
      pbVar11 = (byte *)(*(long *)(lVar12 + 0x30) + (ulong)bVar4);
    }
    *pbVar11 = (byte)param_4;
  }
  return;
}


