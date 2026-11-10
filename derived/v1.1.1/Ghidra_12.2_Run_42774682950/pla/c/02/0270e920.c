/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0270e920; name: FUN_0270e920
 */


void FUN_0270e920(long *param_1,long *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  uint *puVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  puVar4 = (uint *)*param_2;
  if (puVar4 != (uint *)*param_3) {
    do {
      piVar1 = (int *)((long)puVar4 + (ulong)*puVar4);
      uVar7 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
      puVar6 = &DAT_cbf29ce484222645;
      puVar2 = (uint *)((long)piVar1 + uVar7);
      uVar8 = (ulong)*puVar2;
      bVar3 = *(byte *)((long)puVar2 + uVar8 + 4);
      if (bVar3 != 0) {
        lVar5 = *puVar4 + uVar7 + uVar8 + 5;
        puVar6 = &DAT_cbf29ce484222645;
        do {
          puVar6 = (undefined1 *)(((ulong)puVar6 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *(byte *)((long)puVar4 + lVar5);
          lVar5 = lVar5 + 1;
        } while (bVar3 != 0);
      }
      if (puVar6 == param_4) break;
      puVar4 = puVar4 + 1;
      *param_2 = (long)puVar4;
    } while (puVar4 != (uint *)*param_3);
  }
  *param_1 = (long)puVar4;
  return;
}


