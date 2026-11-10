/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c69ba8; name: FUN_02c69ba8
 */


undefined1 FUN_02c69ba8(long param_1)

{
  short *psVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  long lVar6;
  ushort *puVar7;
  uint *puVar8;
  short sVar9;
  int *piVar10;
  int iVar11;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    piVar10 = *(int **)(param_1 + 0x10);
    iVar11 = *piVar10;
    lVar6 = 0;
    do {
      lVar4 = lVar6 + 4;
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar10 + lVar6 + 8) =
           *(ushort *)((long)piVar10 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar10 + lVar6 + 10) =
           *(ushort *)((long)piVar10 + lVar6 + 10) ^ (ushort)((uint)iVar11 >> 0x10);
      lVar6 = lVar4;
    } while (lVar4 != 0x160);
    puVar7 = *(ushort **)(param_1 + 8);
    if (puVar7 != (ushort *)0x0) {
      iVar11 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      *puVar7 = *puVar7 ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar7[1] = puVar7[1] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      puVar7[2] = puVar7[2] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar7[3] = puVar7[3] ^ (ushort)((uint)iVar3 >> 0x10);
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      puVar7[4] = puVar7[4] ^ (ushort)((uint)iVar11 >> 0x10);
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      puVar7[5] = puVar7[5] ^ (ushort)((uint)iVar3 >> 0x10);
      puVar7[6] = puVar7[6] ^ (ushort)((uint)iVar11 >> 0x10);
      puVar7[7] = puVar7[7] ^ (ushort)((uint)(iVar11 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0x18) = 0;
    lVar6 = 0;
    sVar9 = 0;
    do {
      psVar1 = (short *)(lVar4 + 8 + lVar6);
      lVar6 = lVar6 + 8;
      sVar9 = psVar1[3] + psVar1[2] + psVar1[1] + *psVar1 + sVar9;
    } while (lVar6 != 0x160);
    if (*(short *)(lVar4 + 6) != sVar9) {
      *(ushort *)(lVar4 + 4) = *(ushort *)(lVar4 + 4) | 4;
    }
  }
  puVar8 = *(uint **)(param_1 + 0x10);
  if (((byte)puVar8[1] >> 2 & 1) == 0) {
    puVar5 = puVar8 + (ulong)(byte)(&DAT_03a84e59)[((ulong)(*puVar8 >> 0xd) & 0x1f) * 4] * 0x16 + 2;
  }
  else {
    puVar5 = (uint *)&DAT_044079e8;
  }
  uVar2 = *(undefined1 *)((long)puVar5 + 0x3a);
  if ((*(char *)(param_1 + 0x18) != '\0') || (*(char *)(param_1 + 0x19) != '\0')) {
    return uVar2;
  }
  if (puVar8 != (uint *)0x0) {
    lVar6 = 0;
    sVar9 = 0;
    do {
      psVar1 = (short *)((long)puVar8 + lVar6 + 8);
      lVar6 = lVar6 + 8;
      sVar9 = psVar1[3] + psVar1[2] + psVar1[1] + *psVar1 + sVar9;
    } while (lVar6 != 0x160);
    *(short *)((long)puVar8 + 6) = sVar9;
    piVar10 = *(int **)(param_1 + 0x10);
    iVar11 = *piVar10;
    lVar6 = 0;
    do {
      lVar4 = lVar6 + 4;
      iVar3 = iVar11 * 0x41c64e6d + 0x6073;
      iVar11 = iVar3 * 0x41c64e6d + 0x6073;
      *(ushort *)((long)piVar10 + lVar6 + 8) =
           *(ushort *)((long)piVar10 + lVar6 + 8) ^ (ushort)((uint)iVar3 >> 0x10);
      *(ushort *)((long)piVar10 + lVar6 + 10) =
           *(ushort *)((long)piVar10 + lVar6 + 10) ^ (ushort)((uint)iVar11 >> 0x10);
      lVar6 = lVar4;
    } while (lVar4 != 0x160);
  }
  puVar7 = *(ushort **)(param_1 + 8);
  if ((puVar7 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
    iVar11 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
    iVar3 = iVar11 * 0x41c64e6d + 0x6073;
    *puVar7 = *puVar7 ^ (ushort)((uint)iVar11 >> 0x10);
    iVar11 = iVar3 * 0x41c64e6d + 0x6073;
    puVar7[1] = puVar7[1] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar11 * 0x41c64e6d + 0x6073;
    puVar7[2] = puVar7[2] ^ (ushort)((uint)iVar11 >> 0x10);
    iVar11 = iVar3 * 0x41c64e6d + 0x6073;
    puVar7[3] = puVar7[3] ^ (ushort)((uint)iVar3 >> 0x10);
    iVar3 = iVar11 * 0x41c64e6d + 0x6073;
    puVar7[4] = puVar7[4] ^ (ushort)((uint)iVar11 >> 0x10);
    iVar11 = iVar3 * 0x41c64e6d + 0x6073;
    puVar7[5] = puVar7[5] ^ (ushort)((uint)iVar3 >> 0x10);
    puVar7[6] = puVar7[6] ^ (ushort)((uint)iVar11 >> 0x10);
    puVar7[7] = puVar7[7] ^ (ushort)((uint)(iVar11 * 0x41c64e6d + 0x6073) >> 0x10);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return uVar2;
}


