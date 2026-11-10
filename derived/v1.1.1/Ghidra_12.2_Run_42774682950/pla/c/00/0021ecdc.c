/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0021ecdc; name: FUN_0021ecdc
 */


void FUN_0021ecdc(long param_1,long *param_2,ushort param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  short sVar7;
  uint uVar8;
  long lVar9;
  ushort *puVar10;
  
  pbVar1 = (byte *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0xc));
  uVar2 = (uint)param_3;
  uVar8 = 0;
  if ((uint)*(ushort *)(pbVar1 + 0xe) * (uint)*(ushort *)(pbVar1 + 0xc) != 0) {
    uVar8 = uVar2 / ((uint)*(ushort *)(pbVar1 + 0xe) * (uint)*(ushort *)(pbVar1 + 0xc));
  }
  if (*(uint *)(pbVar1 + 0x14) == 0) {
    *param_2 = 0;
    lVar9 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(lVar9 + 0x10);
  }
  else {
    *param_2 = *(long *)(param_1 + 0x18) + (ulong)*(uint *)(pbVar1 + 0x14) +
               (ulong)(*(int *)(pbVar1 + 4) * uVar8);
    lVar9 = *(long *)(param_1 + 0x20);
    uVar3 = *(uint *)(lVar9 + 0x10);
  }
  if (uVar3 != 0) {
    puVar10 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)uVar3);
    uVar6 = *puVar10;
    if (uVar6 <= param_3) goto LAB_0021ed68;
    do {
      do {
        if (*(uint *)(puVar10 + 2) == 0) goto LAB_0021ed84;
        puVar10 = (ushort *)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(puVar10 + 2));
        uVar6 = *puVar10;
      } while (param_3 < uVar6);
LAB_0021ed68:
    } while (puVar10[1] < param_3);
    lVar9 = (long)puVar10 + ((ulong)param_3 - (ulong)uVar6) * 3;
  }
LAB_0021ed84:
  *(short *)(param_2 + 1) = (short)*(char *)(lVar9 + 8);
  *(ushort *)((long)param_2 + 10) = (ushort)*(byte *)(lVar9 + 9);
  *(ushort *)((long)param_2 + 0xc) = (ushort)*(byte *)(lVar9 + 10);
  *(ushort *)((long)param_2 + 0xe) = (ushort)*(byte *)(lVar9 + 9);
  param_2[4] = param_1 + 0x28;
  *(char *)((long)param_2 + 0x1f) = (char)uVar8;
  *(undefined1 *)((long)param_2 + 0x1e) = 0;
  *(undefined2 *)(param_2 + 5) = 0;
  uVar6 = *(ushort *)(pbVar1 + 0xc);
  uVar8 = (uint)*(ushort *)(pbVar1 + 0xe) * (uint)uVar6;
  uVar3 = 0;
  if (uVar8 != 0) {
    uVar3 = uVar2 / uVar8;
  }
  uVar2 = uVar2 - uVar3 * uVar8;
  sVar7 = 0;
  if (uVar6 != 0) {
    sVar7 = (short)(uVar2 / uVar6);
  }
  bVar4 = pbVar1[1];
  bVar5 = *pbVar1;
  *(ushort *)(param_2 + 2) = (ushort)bVar4;
  *(ushort *)((long)param_2 + 0x12) = (ushort)pbVar1[1];
  *(ushort *)((long)param_2 + 0x1c) = *(ushort *)(pbVar1 + 10) & 0x3fff;
  *(undefined2 *)((long)param_2 + 0x14) = *(undefined2 *)(pbVar1 + 0x10);
  *(undefined2 *)((long)param_2 + 0x16) = *(undefined2 *)(pbVar1 + 0x12);
  *(ushort *)(param_2 + 3) = (bVar5 + 1) * ((short)uVar2 - sVar7 * uVar6) + 1;
  *(ushort *)((long)param_2 + 0x1a) = (bVar4 + 1) * sVar7 + 1;
  return;
}


