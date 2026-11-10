/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013d06b0; name: FUN_013d06b0
 */


void FUN_013d06b0(long param_1,long *param_2)

{
  byte *__s;
  int *piVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined1 *puVar10;
  uint *puVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar11 = *(uint **)(*(long *)(param_1 + 0x690) + 0x250);
  piVar1 = (int *)((long)puVar11 + (ulong)*puVar11);
  uVar13 = (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1));
  puVar2 = (uint *)((long)piVar1 + uVar13);
  uVar14 = (ulong)*puVar2;
  uVar8 = (ulong)*(uint *)((long)puVar2 + uVar14);
  if (uVar8 != 0) {
    lVar3 = *puVar11 + uVar14 + uVar13;
    lVar9 = 0;
    do {
      uVar13 = (ulong)*(uint *)((long)puVar11 + lVar9 + lVar3 + 4);
      lVar4 = lVar9 + (uVar13 - (long)*(int *)((long)puVar11 + lVar9 + uVar13 + lVar3 + 4)) + lVar3;
      if (*(ushort *)((long)puVar11 + lVar4 + 4) < 5) {
        if (*param_2 == 0) goto LAB_013d0770;
      }
      else {
        uVar14 = (ulong)*(ushort *)((long)puVar11 + lVar4 + 8);
        lVar15 = 0;
        if (uVar14 != 0) {
          lVar15 = *(long *)((long)puVar11 + lVar9 + uVar13 + uVar14 + lVar3 + 4);
        }
        if (*param_2 == lVar15) {
LAB_013d0770:
          uVar8 = (ulong)*(ushort *)((long)puVar11 + lVar4 + 10);
          lVar4 = uVar8 + *(uint *)((long)puVar11 + lVar9 + uVar8 + uVar13 + lVar3 + 4);
          if (uVar8 == 0) {
            lVar15 = 0;
          }
          else {
            lVar15 = (long)puVar11 + lVar9 + lVar4 + uVar13 + lVar3 + 4;
          }
          uVar5 = *(uint *)((long)puVar11 + lVar9 + lVar4 + uVar13 + lVar3 + 4);
          uVar8 = (ulong)uVar5;
          __s = (byte *)(lVar15 + 4);
          if (uVar5 == 0) {
            uVar8 = strlen((char *)__s);
          }
          bVar6 = *__s;
          puVar10 = &DAT_cbf29ce484222645;
          if (bVar6 != 0) {
            pbVar12 = (byte *)(lVar15 + 5);
            do {
              puVar10 = (undefined1 *)(((ulong)puVar10 ^ (ulong)bVar6) * 0x100000001b3);
              bVar6 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar6 != 0);
          }
          *(undefined1 **)(param_1 + 0x6b8) = puVar10;
          *(byte **)(param_1 + 0x6c0) = __s;
          *(ulong *)(param_1 + 0x6c8) = uVar8;
          goto LAB_013d0800;
        }
      }
      lVar9 = lVar9 + 4;
    } while (uVar8 * 4 != lVar9);
  }
  *(undefined8 *)(param_1 + 0x6c8) = 0;
  *(undefined1 **)(param_1 + 0x6b8) = &DAT_cbf29ce484222645;
  *(undefined1 **)(param_1 + 0x6c0) = &DAT_03996322;
LAB_013d0800:
  plVar7 = *(long **)(param_1 + 0x6d0);
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))();
  }
  *(undefined8 *)(param_1 + 0x6d0) = 0;
  return;
}


