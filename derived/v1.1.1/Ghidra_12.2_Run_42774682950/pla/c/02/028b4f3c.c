/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028b4f3c; name: FUN_028b4f3c
 */


ulong FUN_028b4f3c(undefined8 *param_1,undefined8 *param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  int *piVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined1 *puVar10;
  
  piVar4 = (int *)*param_1;
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[6], uVar5 == 0)) {
    puVar6 = (uint *)0x0;
    uVar2 = uRam0000000000000000;
  }
  else {
    puVar6 = (uint *)((long)piVar4 + uVar5);
    puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6);
    uVar2 = *puVar6;
  }
  if (uVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    do {
      piVar4 = (int *)((long)(puVar6 + uVar5 + 1) + (ulong)puVar6[uVar5 + 1]);
      if (*(ushort *)((long)piVar4 - (long)*piVar4) < 5) {
        lVar9 = 0;
      }
      else {
        uVar7 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[2];
        lVar9 = 0;
        if (uVar7 != 0) {
          puVar1 = (uint *)((long)piVar4 + uVar7);
          lVar9 = (long)puVar1 + (ulong)*puVar1;
        }
      }
      bVar3 = *(byte *)(lVar9 + 4);
      puVar10 = &DAT_cbf29ce484222645;
      if (bVar3 != 0) {
        puVar10 = &DAT_cbf29ce484222645;
        pbVar8 = (byte *)(lVar9 + 5);
        do {
          puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar3 != 0);
      }
      if ((undefined1 *)*param_2 == puVar10) {
        return uVar5 << 0x20 | 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar2);
  }
  return uVar5 << 0x20;
}


