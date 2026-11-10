/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013f6df8; name: FUN_013f6df8
 */


void FUN_013f6df8(long param_1)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  int iVar19;
  
  piVar9 = *(int **)(param_1 + 0x38);
  if (((piVar9 != (int *)0x0) && (4 < *(ushort *)((long)piVar9 - (long)*piVar9))) &&
     (uVar10 = (ulong)((ushort *)((long)piVar9 - (long)*piVar9))[2], uVar10 != 0)) {
    puVar1 = (uint *)((long)piVar9 + uVar10);
    puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    uVar10 = (ulong)*puVar1;
    if (uVar10 != 0) {
      iVar19 = 0;
      uVar12 = 0;
      uVar14 = 0;
      iVar15 = 0;
      uVar13 = 0;
      puVar17 = (undefined2 *)0x0;
      puVar16 = puVar1 + 1;
      do {
        uVar11 = (uint)uVar12;
        if (0x752 < (uVar13 >> 4 & 0xfff)) goto LAB_013f6ed0;
        uVar6 = (ulong)*puVar16;
        piVar9 = (int *)((long)puVar16 + uVar6);
        lVar7 = (long)*piVar9;
        uVar3 = *(ushort *)((long)puVar16 + (uVar6 - lVar7));
        if (uVar3 < 5) {
          iVar5 = 0;
          if (iVar19 == 0) goto LAB_013f6ea4;
LAB_013f6f90:
          puVar18 = (undefined2 *)(param_1 + (long)iVar5 * 0x10 + 0x40);
          if (puVar17 != (undefined2 *)0x0) {
            *(ulong *)(puVar17 + 1) = *(ulong *)(puVar17 + 1) & 0xfffffffffffffff0 | uVar12 & 0xf;
          }
          *puVar18 = (short)uVar13;
          piVar9 = (int *)((long)puVar16 + (ulong)*puVar16);
          lVar7 = (long)*piVar9;
          uVar12 = 0;
          uVar11 = 0;
          uVar14 = 0;
          iVar15 = 0;
          iVar19 = iVar5;
          if (6 < *(ushort *)((long)puVar16 + ((ulong)*puVar16 - lVar7))) goto LAB_013f6ebc;
          goto switchD_013f6f1c_caseD_3;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar16 + (uVar6 - lVar7) + 4);
        if (uVar8 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)((long)puVar16 + uVar6 + uVar8);
          if (0x389 < iVar5) goto LAB_013f6ed0;
        }
        if (iVar19 != iVar5) goto LAB_013f6f90;
LAB_013f6ea4:
        if (9 < (uVar11 & 0xffff)) goto LAB_013f6ed0;
        puVar18 = puVar17;
        if (uVar3 < 7) goto switchD_013f6f1c_caseD_3;
LAB_013f6ebc:
        uVar11 = (uint)uVar12;
        uVar10 = (ulong)*(ushort *)((long)piVar9 + (6 - lVar7));
        if ((uVar10 == 0) || (iVar2 = *(int *)((long)piVar9 + uVar10), 9 < iVar2 - 1U))
        goto switchD_013f6f1c_caseD_3;
        lVar7 = (long)iVar5;
        switch(iVar2) {
        case 1:
          if (uVar14 < 4) {
            lVar7 = param_1 + lVar7 * 0x10;
            *(ulong *)(lVar7 + 0x42) =
                 *(ulong *)(lVar7 + 0x42) & (&DAT_038884a0)[(int)uVar14] |
                 (uVar12 & 0xf) << ((ulong)uVar14 * 4 + 0x10 & 0x3f);
          }
          uVar14 = uVar14 + 1;
          goto switchD_013f6f1c_caseD_3;
        case 2:
          if (iVar15 == 0) {
            puVar4 = (ulong *)(param_1 + lVar7 * 0x10 + 0x42);
            uVar10 = (ulong)((uVar11 & 0xf) << 4);
            uVar12 = *puVar4 & 0xffffffffffffff0f;
LAB_013f6f70:
            *puVar4 = uVar12 | uVar10 & 0xffff;
          }
          else {
            if (iVar15 == 1) {
              puVar4 = (ulong *)(param_1 + lVar7 * 0x10 + 0x42);
              uVar10 = (ulong)((uVar11 & 0xf) << 8);
              uVar12 = *puVar4 & 0xfffffffffffff0ff;
              goto LAB_013f6f70;
            }
            if (iVar15 == 2) {
              puVar4 = (ulong *)(param_1 + lVar7 * 0x10 + 0x42);
              uVar10 = (ulong)(uVar11 << 0xc);
              uVar12 = *puVar4 & 0xffffffffffff0fff;
              goto LAB_013f6f70;
            }
          }
          iVar15 = iVar15 + 1;
        default:
          goto switchD_013f6f1c_caseD_3;
        case 6:
          lVar7 = param_1 + lVar7 * 0x10;
          uVar10 = *(ulong *)(lVar7 + 0x42) & 0xfffffff000000000 |
                   *(ulong *)(lVar7 + 0x42) & 0xffffffff | (ulong)(uVar11 & 0xf) << 0x20;
          break;
        case 7:
          lVar7 = param_1 + lVar7 * 0x10;
          uVar10 = *(ulong *)(lVar7 + 0x42) & 0xffffff0000000000 |
                   *(ulong *)(lVar7 + 0x42) & 0xfffffffff | (ulong)(uVar11 & 0xf) << 0x24;
          break;
        case 8:
          lVar7 = param_1 + lVar7 * 0x10;
          uVar10 = *(ulong *)(lVar7 + 0x42) & 0xfffff00000000000 |
                   *(ulong *)(lVar7 + 0x42) & 0xffffffffff | (ulong)(uVar11 & 0xf) << 0x28;
          break;
        case 9:
          lVar7 = param_1 + lVar7 * 0x10;
          uVar10 = *(ulong *)(lVar7 + 0x42) & 0xffff000000000000 |
                   *(ulong *)(lVar7 + 0x42) & 0xfffffffffff | (ulong)(uVar11 & 0xf) << 0x2c;
          break;
        case 10:
          lVar7 = param_1 + lVar7 * 0x10;
          uVar10 = *(ulong *)(lVar7 + 0x42) & 0xfff0000000000000 |
                   *(ulong *)(lVar7 + 0x42) & 0xffffffffffff | (ulong)(uVar11 & 0xf) << 0x30;
        }
        *(ulong *)(lVar7 + 0x42) = uVar10;
switchD_013f6f1c_caseD_3:
        uVar10 = (ulong)*puVar1;
        uVar12 = (ulong)(uVar11 + 1);
        puVar17 = puVar18;
LAB_013f6ed0:
        puVar16 = puVar16 + 1;
        uVar13 = uVar13 + 1;
      } while (puVar16 != puVar1 + 1 + uVar10);
      if (puVar17 != (undefined2 *)0x0) {
        *(ulong *)(puVar17 + 1) = *(ulong *)(puVar17 + 1) & 0xfffffffffffffff0 | uVar12 & 0xf;
      }
    }
  }
  return;
}


