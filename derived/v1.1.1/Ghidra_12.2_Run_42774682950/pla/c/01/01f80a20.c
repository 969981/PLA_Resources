/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f80a20; name: FUN_01f80a20
 */


void FUN_01f80a20(undefined8 param_1,undefined8 param_2,undefined1 *param_3,uint *param_4)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar6 = param_4 + 1;
  uVar4 = *param_4;
  if (param_3 == &DAT_cbf29ce484222645) {
    if (uVar4 != 0) {
      lVar11 = (ulong)uVar4 << 2;
      do {
        local_40 = 0;
        FUN_01f72278(param_1,param_2,(long)puVar6 + (ulong)*puVar6,&local_40);
        lVar11 = lVar11 + -4;
        puVar6 = puVar6 + 1;
      } while (lVar11 != 0);
    }
  }
  else if (uVar4 != 0) {
    puVar1 = puVar6 + uVar4;
    lVar11 = (long)param_4 + 9;
    do {
      piVar2 = (int *)((long)puVar6 + (ulong)*puVar6);
      uVar9 = (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2));
      puVar3 = (uint *)((long)piVar2 + uVar9);
      uVar10 = (ulong)*puVar3;
      bVar5 = *(byte *)((long)puVar3 + uVar10 + 4);
      puVar8 = &DAT_cbf29ce484222645;
      if (bVar5 != 0) {
        puVar8 = &DAT_cbf29ce484222645;
        pbVar7 = (byte *)(lVar11 + uVar10 + uVar9 + (ulong)*puVar6);
        do {
          puVar8 = (undefined1 *)(((ulong)puVar8 ^ (ulong)bVar5) * 0x100000001b3);
          bVar5 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar5 != 0);
      }
      if (puVar8 == param_3) {
        local_38 = 0;
        FUN_01f72278(param_1,param_2,piVar2,&local_38);
        return;
      }
      puVar6 = puVar6 + 1;
      lVar11 = lVar11 + 4;
    } while (puVar6 != puVar1);
  }
  return;
}


