/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010868dc; name: FUN_010868dc
 */


void FUN_010868dc(undefined8 *param_1,undefined8 *param_2,long *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  uint *puVar10;
  ushort *puVar11;
  uint uVar12;
  ushort *puVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  
  piVar9 = (int *)*param_2;
  if (piVar9 != (int *)0x0) {
    uVar12 = *(uint *)(param_2 + 1);
    if (uVar12 == 0xffffffff) {
LAB_01086a18:
      piVar9 = (int *)0x0;
      goto LAB_01086a50;
    }
    puVar13 = (ushort *)((long)piVar9 - (long)*piVar9);
    if ((4 < *puVar13) && (uVar14 = (ulong)puVar13[2], uVar14 != 0)) {
      uVar17 = (ulong)*(uint *)((long)piVar9 + uVar14);
      puVar10 = (uint *)((long)((long)piVar9 + uVar14) + (ulong)uVar12 * 4 + uVar17 + 4);
      uVar19 = (ulong)*puVar10;
      piVar1 = (int *)((long)puVar10 + uVar19);
      puVar11 = (ushort *)((long)piVar1 - (long)*piVar1);
      if ((*puVar11 < 0xb) || ((ulong)puVar11[5] == 0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = *(uint *)((long)piVar1 + (ulong)puVar11[5]);
        if (uVar16 == 0xffffffff) goto LAB_01086a5c;
      }
      puVar10 = (uint *)((long)piVar9 + (ulong)puVar13[4]);
      uVar5 = (ulong)*puVar10;
      puVar10 = (uint *)((long)puVar10 + (ulong)uVar16 * 4 + uVar5 + 4);
      uVar6 = (ulong)*puVar10;
      piVar2 = (int *)((long)puVar10 + uVar6);
      uVar7 = (ulong)*(ushort *)((long)piVar2 + (6 - (long)*piVar2));
      puVar10 = (uint *)((long)piVar2 + uVar7);
      uVar8 = (ulong)*puVar10;
      uVar3 = *(uint *)((long)puVar10 + uVar8);
      if (uVar3 != 0) {
        lVar15 = uVar14 + (ulong)uVar12 * 4 + uVar17 + uVar19 + 8;
        uVar14 = 0;
        lVar18 = (ulong)puVar13[4] + (ulong)uVar16 * 4 + uVar5 + uVar6 + uVar7 + uVar8;
        uVar12 = 0xffffffff;
        do {
          uVar17 = (ulong)*(uint *)((long)piVar9 + lVar18 + 8);
          lVar4 = lVar18 + (uVar17 - (long)*(int *)((long)piVar9 + lVar18 + uVar17 + 8));
          if ((*(ushort *)((long)piVar9 + lVar4 + 8) < 5) ||
             (uVar19 = (ulong)*(ushort *)((long)piVar9 + lVar4 + 0xc), uVar19 == 0)) {
            if (*param_3 == 0) goto LAB_01086a2c;
          }
          else if (*(long *)((long)piVar9 + lVar18 + uVar17 + uVar19 + 8) == *param_3) {
LAB_01086a2c:
            puVar10 = (uint *)((long)piVar1 + (ulong)puVar11[3]);
            uVar17 = (ulong)*puVar10;
            if (*(uint *)((long)puVar10 + uVar17) <= (uint)uVar14) goto LAB_01086a5c;
            uVar12 = *(uint *)((long)piVar9 + lVar15 + puVar11[3] + uVar17);
            goto LAB_01086a50;
          }
          uVar14 = uVar14 + 1;
          lVar15 = lVar15 + 4;
          lVar18 = lVar18 + 4;
        } while (uVar3 != uVar14);
        goto LAB_01086a18;
      }
    }
LAB_01086a5c:
    piVar9 = (int *)0x0;
  }
  uVar12 = 0xffffffff;
LAB_01086a50:
  *param_1 = piVar9;
  *(uint *)(param_1 + 1) = uVar12;
  return;
}


