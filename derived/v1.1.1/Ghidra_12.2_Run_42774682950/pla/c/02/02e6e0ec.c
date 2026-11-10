/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e6e0ec; name: FUN_02e6e0ec
 */


/* WARNING: Removing unreachable block (ram,0x02e6e3d4) */

undefined8
FUN_02e6e0ec(long param_1,ulong *param_2,ulong param_3,uint param_4,ulong param_5,undefined4 param_6
            )

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    uVar7 = 1;
    goto LAB_02e6e2e0;
  }
  uVar9 = *(uint *)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x28);
  if (uVar9 == 0) {
    uVar11 = 0;
    bVar6 = false;
joined_r0x02e6e3e4:
    if (param_4 != 0xffffffff) goto LAB_02e6e184;
LAB_02e6e350:
    if (bVar6) {
      puVar10 = (undefined8 *)(*plVar1 + (ulong)uVar11 * 8);
      puVar8 = (undefined8 *)(*plVar1 + (ulong)uVar9 * 8 + -8);
      if (puVar10 < puVar8) {
        uVar18 = ((ulong)uVar9 * 8 + (ulong)uVar11 * -8) - 9;
        uVar9 = ((uint)(uVar18 >> 3) & 0x1fffffff) + 1;
        if ((uVar9 & 3) != 0) {
          lVar16 = -((ulong)uVar9 & 3);
          puVar12 = puVar10;
          do {
            puVar10 = puVar12 + 1;
            *puVar12 = *puVar10;
            bVar6 = lVar16 != -1;
            lVar16 = lVar16 + 1;
            puVar12 = puVar10;
          } while (bVar6);
        }
        if (0x17 < uVar18) {
          do {
            *puVar10 = puVar10[1];
            puVar10[1] = puVar10[2];
            puVar10[2] = puVar10[3];
            puVar12 = puVar10 + 4;
            puVar10[3] = *puVar12;
            puVar10 = puVar12;
          } while (puVar12 < puVar8);
        }
        uVar9 = *(uint *)(param_1 + 0x30);
      }
      *(uint *)(param_1 + 0x30) = uVar9 - 1;
    }
LAB_02e6e4b0:
    uVar7 = 2;
  }
  else {
    iVar17 = 0;
    iVar13 = uVar9 - 1;
    do {
      while( true ) {
        iVar5 = iVar13 - iVar17;
        if (iVar5 < 0) {
          iVar5 = iVar5 + 1;
        }
        uVar11 = iVar17 + (iVar5 >> 1);
        puVar19 = *(ulong **)(*plVar1 + (ulong)uVar11 * 8);
        if ((uint)param_2[4] < (uint)puVar19[4]) break;
        if ((uint)param_2[4] <= (uint)puVar19[4]) {
          if (*puVar19 < *param_2) break;
          if (*puVar19 <= *param_2) {
            if (param_2[1] < puVar19[1]) break;
            if (param_2[1] <= puVar19[1]) {
              bVar6 = true;
              goto joined_r0x02e6e3e4;
            }
          }
        }
        iVar17 = uVar11 + 1;
        if (iVar13 < iVar17) goto LAB_02e6e174;
      }
      iVar13 = uVar11 - 1;
    } while (iVar17 <= iVar13);
LAB_02e6e174:
    bVar6 = false;
    uVar11 = uVar9;
    if (param_4 == 0xffffffff) goto LAB_02e6e350;
LAB_02e6e184:
    if (!bVar6) {
      uVar14 = *(uint *)(param_1 + 0x34);
      if (uVar14 <= uVar9) {
        iVar17 = uVar14 + (uVar14 >> 1);
        if (uVar14 == 0) {
          iVar17 = 1;
        }
        uVar18 = FUN_02e6ebd4(plVar1,iVar17);
        if ((uVar18 & 1) != 0) {
          uVar14 = *(uint *)(param_1 + 0x34);
          goto joined_r0x02e6e448;
        }
        uVar7 = 2;
        goto LAB_02e6e2dc;
      }
joined_r0x02e6e448:
      if (uVar9 < uVar14) {
        plVar4 = (long *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(param_1 + 0x30) * 8);
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) + 1;
        if (plVar4 != (long *)0x0) {
          *plVar4 = (long)param_2;
          uVar9 = *(uint *)(param_1 + 0x30);
          goto LAB_02e6e188;
        }
      }
      goto LAB_02e6e4b0;
    }
LAB_02e6e188:
    lVar16 = *plVar1;
    uVar14 = 0;
    uVar9 = uVar9 - 1;
    do {
      while( true ) {
        iVar17 = uVar9 - uVar14;
        if (iVar17 < 0) {
          iVar17 = iVar17 + 1;
        }
        uVar2 = uVar14 + (iVar17 >> 1);
        puVar19 = *(ulong **)(lVar16 + (ulong)uVar2 * 8);
        if (param_4 < (uint)puVar19[4]) break;
        if (param_4 <= (uint)puVar19[4]) {
          if (*puVar19 < param_5) break;
          if (*puVar19 <= param_5) {
            if (param_2[1] < puVar19[1]) break;
            if (param_2[1] <= puVar19[1]) {
              goto LAB_02e6e1f0;
            }
          }
        }
        uVar14 = uVar2 + 1;
        if ((int)uVar9 < (int)uVar14) goto LAB_02e6e1e8;
      }
      uVar9 = uVar2 - 1;
    } while ((int)uVar14 <= (int)uVar9);
LAB_02e6e1e8:
    uVar2 = uVar14;
    if ((int)uVar9 <= (int)uVar14) {
LAB_02e6e1f0:
      uVar9 = uVar2;
    }
    uVar15 = *(undefined8 *)(lVar16 + (ulong)uVar11 * 8);
    uVar18 = (ulong)uVar11;
    if (uVar11 < uVar9) {
      uVar9 = uVar9 - 1;
      if (uVar11 < uVar9) {
        *(undefined8 *)(lVar16 + uVar18 * 8) = *(undefined8 *)(lVar16 + (ulong)(uVar11 + 1) * 8);
        for (uVar11 = uVar11 + 2; uVar11 <= uVar9; uVar11 = uVar11 + 1) {
          *(undefined8 *)(*plVar1 + (ulong)(uVar11 - 1) * 8) =
               *(undefined8 *)(*plVar1 + (ulong)uVar11 * 8);
        }
      }
    }
    else if ((uVar9 < uVar11) &&
            (*(undefined8 *)(lVar16 + uVar18 * 8) =
                  *(undefined8 *)(lVar16 + (ulong)(uVar11 - 1) * 8), uVar9 < uVar11 - 1)) {
      if ((uVar11 + ~uVar9 & 1) != 0) {
        uVar18 = uVar18 - 1;
        *(undefined8 *)(*plVar1 + uVar18 * 8) = *(undefined8 *)(*plVar1 + (ulong)(uVar11 - 2) * 8);
      }
      if (uVar11 - 2 != uVar9) {
        lVar16 = uVar18 << 3;
        uVar11 = (int)uVar18 - 1;
        uVar18 = uVar18 + 0xfffffffe;
        do {
          uVar11 = uVar11 - 2;
          *(undefined8 *)(*plVar1 + lVar16 + -8) =
               *(undefined8 *)(*plVar1 + (uVar18 & 0xffffffff) * 8);
          uVar18 = uVar18 - 2;
          lVar3 = *plVar1 + lVar16;
          lVar16 = lVar16 + -0x10;
          *(undefined8 *)(lVar3 + -0x10) = *(undefined8 *)(*plVar1 + (ulong)uVar11 * 8);
        } while (uVar9 < uVar11);
      }
    }
    uVar7 = 1;
    *(undefined8 *)(*plVar1 + (ulong)uVar9 * 8) = uVar15;
  }
LAB_02e6e2dc:
  *(uint *)(param_2 + 4) = param_4;
LAB_02e6e2e0:
  *param_2 = param_5;
  *(undefined4 *)(param_2 + 3) = param_6;
  param_2[2] = param_3;
  return uVar7;
}


