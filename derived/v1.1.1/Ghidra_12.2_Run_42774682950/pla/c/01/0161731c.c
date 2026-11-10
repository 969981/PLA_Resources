/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0161731c; name: FUN_0161731c
 */


void FUN_0161731c(long param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  long *plVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  float fVar13;
  undefined1 *local_58;
  
  puVar9 = *(uint **)(*(long *)(*(long *)(param_1 + 0x58) + 8) + 0x250);
  uVar3 = *puVar9;
  piVar1 = (int *)((long)puVar9 + (ulong)uVar3);
  if ((4 < *(ushort *)((long)piVar1 - (long)*piVar1)) &&
     (uVar11 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2], uVar11 != 0)) {
    uVar12 = (ulong)*(uint *)((long)piVar1 + uVar11);
    puVar2 = (uint *)((long)((long)piVar1 + uVar11) + uVar12);
    if (puVar2 != (uint *)0x0) {
      fVar13 = (float)NEON_ucvtf(*puVar2);
      FUN_01618394(param_1 + 0x78,(long)(fVar13 / *(float *)(param_1 + 0xd8)));
      if (*puVar2 != 0) {
        uVar8 = 0;
        lVar10 = (long)puVar9 + uVar12 + uVar11 + (ulong)uVar3 + 9;
        do {
          uVar11 = (ulong)puVar2[uVar8 + 1];
          piVar1 = (int *)((long)(puVar2 + uVar8 + 1) + uVar11);
          uVar12 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
          puVar9 = (uint *)((long)piVar1 + uVar12);
          uVar7 = (ulong)*puVar9;
          bVar4 = *(byte *)((long)puVar9 + uVar7 + 4);
          local_58 = &DAT_cbf29ce484222645;
          if (bVar4 != 0) {
            local_58 = &DAT_cbf29ce484222645;
            pbVar6 = (byte *)(lVar10 + uVar7 + uVar12 + uVar11);
            do {
              local_58 = (undefined1 *)(((ulong)local_58 ^ (ulong)bVar4) * 0x100000001b3);
              bVar4 = *pbVar6;
              pbVar6 = pbVar6 + 1;
            } while (bVar4 != 0);
          }
          plVar5 = (long *)FUN_01617a30(param_1 + 0x78,&local_58);
          *plVar5 = (long)piVar1;
          uVar8 = uVar8 + 1;
          lVar10 = lVar10 + 4;
        } while (uVar8 < *puVar2);
      }
    }
  }
  return;
}


