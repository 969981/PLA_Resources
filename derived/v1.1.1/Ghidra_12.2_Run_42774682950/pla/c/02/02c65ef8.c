/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c65ef8; name: FUN_02c65ef8
 */


void FUN_02c65ef8(long param_1,void *param_2,undefined8 *param_3)

{
  short *psVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  ushort *puVar7;
  long lVar8;
  short sVar9;
  int iVar10;
  
  cVar3 = *(char *)(param_1 + 0x19);
  if ((cVar3 != '\0') && (*(undefined1 *)(param_1 + 0x19) = 0, *(char *)(param_1 + 0x18) == '\0')) {
    lVar5 = *(long *)(param_1 + 0x10);
    if (lVar5 != 0) {
      lVar8 = 0;
      sVar9 = 0;
      do {
        psVar1 = (short *)(lVar5 + 8 + lVar8);
        lVar8 = lVar8 + 8;
        sVar9 = psVar1[3] + psVar1[2] + psVar1[1] + *psVar1 + sVar9;
      } while (lVar8 != 0x160);
      *(short *)(lVar5 + 6) = sVar9;
      piVar6 = *(int **)(param_1 + 0x10);
      iVar10 = *piVar6;
      lVar5 = 0;
      do {
        lVar8 = lVar5 + 4;
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar6 + lVar5 + 8) =
             *(ushort *)((long)piVar6 + lVar5 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar6 + lVar5 + 10) =
             *(ushort *)((long)piVar6 + lVar5 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
        lVar5 = lVar8;
      } while (lVar8 != 0x160);
    }
    puVar7 = *(ushort **)(param_1 + 8);
    if ((puVar7 != (ushort *)0x0) && (*(int **)(param_1 + 0x10) != (int *)0x0)) {
      iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
      iVar4 = iVar10 * 0x41c64e6d + 0x6073;
      *puVar7 = *puVar7 ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar4 * 0x41c64e6d + 0x6073;
      puVar7[1] = puVar7[1] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar10 * 0x41c64e6d + 0x6073;
      puVar7[2] = puVar7[2] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar4 * 0x41c64e6d + 0x6073;
      puVar7[3] = puVar7[3] ^ (ushort)((uint)iVar4 >> 0x10);
      iVar4 = iVar10 * 0x41c64e6d + 0x6073;
      puVar7[4] = puVar7[4] ^ (ushort)((uint)iVar10 >> 0x10);
      iVar10 = iVar4 * 0x41c64e6d + 0x6073;
      puVar7[5] = puVar7[5] ^ (ushort)((uint)iVar4 >> 0x10);
      puVar7[6] = puVar7[6] ^ (ushort)((uint)iVar10 >> 0x10);
      puVar7[7] = puVar7[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  if (param_2 != (void *)0x0) {
    memcpy(param_2,*(void **)(param_1 + 0x10),0x168);
  }
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = (*(undefined8 **)(param_1 + 8))[1];
    *param_3 = **(undefined8 **)(param_1 + 8);
    param_3[1] = uVar2;
  }
  if (cVar3 != '\0') {
    if (*(char *)(param_1 + 0x18) != '\0') {
      piVar6 = *(int **)(param_1 + 0x10);
      iVar10 = *piVar6;
      lVar5 = 0;
      do {
        lVar8 = lVar5 + 4;
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        *(ushort *)((long)piVar6 + lVar5 + 8) =
             *(ushort *)((long)piVar6 + lVar5 + 8) ^ (ushort)((uint)iVar4 >> 0x10);
        *(ushort *)((long)piVar6 + lVar5 + 10) =
             *(ushort *)((long)piVar6 + lVar5 + 10) ^ (ushort)((uint)iVar10 >> 0x10);
        lVar5 = lVar8;
      } while (lVar8 != 0x160);
      puVar7 = *(ushort **)(param_1 + 8);
      if (puVar7 != (ushort *)0x0) {
        iVar10 = **(int **)(param_1 + 0x10) * 0x41c64e6d + 0x6073;
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        *puVar7 = *puVar7 ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        puVar7[1] = puVar7[1] ^ (ushort)((uint)iVar4 >> 0x10);
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        puVar7[2] = puVar7[2] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        puVar7[3] = puVar7[3] ^ (ushort)((uint)iVar4 >> 0x10);
        iVar4 = iVar10 * 0x41c64e6d + 0x6073;
        puVar7[4] = puVar7[4] ^ (ushort)((uint)iVar10 >> 0x10);
        iVar10 = iVar4 * 0x41c64e6d + 0x6073;
        puVar7[5] = puVar7[5] ^ (ushort)((uint)iVar4 >> 0x10);
        puVar7[6] = puVar7[6] ^ (ushort)((uint)iVar10 >> 0x10);
        puVar7[7] = puVar7[7] ^ (ushort)((uint)(iVar10 * 0x41c64e6d + 0x6073) >> 0x10);
      }
      lVar8 = *(long *)(param_1 + 0x10);
      *(undefined1 *)(param_1 + 0x18) = 0;
      lVar5 = 0;
      sVar9 = 0;
      do {
        psVar1 = (short *)(lVar8 + 8 + lVar5);
        lVar5 = lVar5 + 8;
        sVar9 = psVar1[3] + psVar1[2] + psVar1[1] + *psVar1 + sVar9;
      } while (lVar5 != 0x160);
      if (*(short *)(lVar8 + 6) != sVar9) {
        *(ushort *)(lVar8 + 4) = *(ushort *)(lVar8 + 4) | 4;
      }
    }
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  return;
}


