/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a78d44; name: FUN_02a78d44
 */


undefined8 FUN_02a78d44(long param_1,ulong param_2)

{
  uint *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint *puVar5;
  int *piVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != (int *)0x0) {
    puVar8 = (ushort *)((long)piVar6 - (long)*piVar6);
    puVar5 = (uint *)0x0;
    if ((ulong)puVar8[2] != 0) {
      puVar5 = (uint *)((long)piVar6 + (ulong)puVar8[2]);
      puVar5 = (uint *)((long)puVar5 + (ulong)*puVar5);
    }
    if ((*puVar8 < 7) || ((ulong)puVar8[3] == 0)) {
      lVar7 = 0;
    }
    else {
      puVar1 = (uint *)((long)piVar6 + (ulong)puVar8[3]);
      lVar7 = (long)puVar1 + (ulong)*puVar1;
    }
    puVar4 = (ulong *)(puVar5 + 1);
    uVar9 = (ulong)*puVar5;
    puVar2 = puVar4 + uVar9;
    puVar3 = puVar4;
    if (uVar9 != 0) {
      puVar10 = puVar4;
      do {
        uVar11 = uVar9 >> 1;
        puVar3 = puVar10 + uVar11 + 1;
        uVar9 = uVar9 + ~uVar11;
        if (param_2 <= puVar10[uVar11]) {
          puVar3 = puVar10;
          uVar9 = uVar11;
        }
        puVar10 = puVar3;
      } while (uVar9 != 0);
    }
    if ((puVar3 != puVar2) && (*puVar3 == param_2)) {
      puVar5 = (uint *)(lVar7 + ((ulong)((long)puVar3 - (long)puVar4) >> 3 & 0xffffffff) * 4 + 4);
      piVar6 = (int *)((long)puVar5 + (ulong)*puVar5);
      if ((10 < *(ushort *)((long)piVar6 - (long)*piVar6)) &&
         (uVar9 = (ulong)((ushort *)((long)piVar6 - (long)*piVar6))[5], uVar9 != 0)) {
        return *(undefined8 *)((long)piVar6 + uVar9);
      }
    }
  }
  return 0;
}


