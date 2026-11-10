/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02607138; name: FUN_02607138
 */


void FUN_02607138(long param_1,undefined8 *param_2)

{
  int *piVar1;
  uint *puVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  undefined8 *puVar10;
  int *piVar11;
  uint *puVar12;
  long *plVar13;
  ushort *puVar14;
  byte *pbVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  
  piVar11 = (int *)*param_2;
  puVar14 = (ushort *)((long)piVar11 - (long)*piVar11);
  if ((*puVar14 < 0xd) || ((ulong)puVar14[6] == 0)) {
    puVar12 = (uint *)0x0;
  }
  else {
    puVar12 = (uint *)((long)piVar11 + (ulong)puVar14[6]);
    puVar12 = (uint *)((long)puVar12 + (ulong)*puVar12);
  }
  puVar4 = &DAT_cbf29ce484222645;
  if (*puVar12 == 0) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    do {
      piVar1 = (int *)((long)(puVar12 + uVar17 + 1) + (ulong)puVar12[uVar17 + 1]);
      if (*(ushort *)((long)piVar1 - (long)*piVar1) < 5) {
        lVar16 = 0;
        bVar3 = DAT_00000004;
      }
      else {
        uVar18 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[2];
        lVar16 = 0;
        if (uVar18 != 0) {
          puVar2 = (uint *)((long)piVar1 + uVar18);
          lVar16 = (long)puVar2 + (ulong)*puVar2;
        }
        bVar3 = *(byte *)(lVar16 + 4);
      }
      if (bVar3 != 0) {
        puVar19 = &DAT_cbf29ce484222645;
        pbVar15 = (byte *)(lVar16 + 5);
        do {
          puVar19 = (undefined1 *)(((ulong)puVar19 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar3 != 0);
        if (puVar19 == (undefined1 *)0x6df28b3a059ebca2) break;
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != *puVar12);
  }
  puVar12 = (uint *)((long)((long)piVar11 + (ulong)puVar14[6]) +
                    (uVar17 & 0xffffffff) * 4 + (ulong)*(uint *)((long)piVar11 + (ulong)puVar14[6])
                    + 4);
  piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
  puVar12 = (uint *)((long)piVar11 + (ulong)*(ushort *)((long)piVar11 + (8 - (long)*piVar11)));
  piVar11 = (int *)((long)puVar12 + (ulong)*puVar12);
  if (*(ushort *)((long)piVar11 - (long)*piVar11) < 5) {
    lVar16 = 0;
    bVar3 = DAT_00000004;
  }
  else {
    uVar17 = (ulong)((ushort *)((long)piVar11 - (long)*piVar11))[2];
    lVar16 = 0;
    if (uVar17 != 0) {
      puVar12 = (uint *)((long)piVar11 + uVar17);
      lVar16 = (long)puVar12 + (ulong)*puVar12;
    }
    bVar3 = *(byte *)(lVar16 + 4);
  }
  if (bVar3 != 0) {
    pbVar15 = (byte *)(lVar16 + 5);
    do {
      puVar4 = (undefined1 *)(((ulong)puVar4 ^ (ulong)bVar3) * 0x100000001b3);
      bVar3 = *pbVar15;
      pbVar15 = pbVar15 + 1;
    } while (bVar3 != 0);
    if (puVar4 == (undefined1 *)0xab52af59e0ea7c32) {
      lVar5 = *(long *)(param_1 + 0x108);
      lVar16 = *(long *)(lVar5 + 0x70);
      if (*(long *)(lVar5 + 0x78) != lVar16) {
        uVar18 = *(ulong *)(lVar5 + 0xa8);
        uVar17 = *(long *)(lVar5 + 0xb0) + uVar18;
        puVar6 = (ulong *)(*(long *)(lVar16 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48);
        puVar9 = (ulong *)(*(long *)(lVar16 + (uVar17 / 0x38) * 8) + (uVar17 % 0x38) * 0x48);
        if (puVar9 != puVar6) {
          plVar13 = (long *)(lVar16 + (uVar18 / 0x38) * 8);
          do {
            *puVar6 = *puVar6 & 0xffffbfffffffffff;
            puVar6[2] = puVar6[2] & 0xffffbfffffffffff;
            puVar6[3] = puVar6[3] & 0xffffbfffffffffff;
            puVar6[1] = puVar6[1] & 0xffffbfffffffffff;
            puVar6 = puVar6 + 9;
            if ((long)puVar6 - *plVar13 == 0xfc0) {
              plVar13 = plVar13 + 1;
              puVar6 = (ulong *)*plVar13;
            }
          } while (puVar9 != puVar6);
        }
      }
    }
    else if ((long)puVar4 < 0x6895d3ccc184ea31) {
      if (puVar4 == (undefined1 *)0x89e45ac27a67a207) {
        lVar5 = *(long *)(param_1 + 0x108);
        lVar16 = *(long *)(lVar5 + 0x70);
        if (*(long *)(lVar5 + 0x78) != lVar16) {
          uVar18 = *(ulong *)(lVar5 + 0xa8);
          uVar17 = *(long *)(lVar5 + 0xb0) + uVar18;
          puVar6 = (ulong *)(*(long *)(lVar16 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48);
          puVar9 = (ulong *)(*(long *)(lVar16 + (uVar17 / 0x38) * 8) + (uVar17 % 0x38) * 0x48);
          if (puVar9 != puVar6) {
            plVar13 = (long *)(lVar16 + (uVar18 / 0x38) * 8);
            do {
              *puVar6 = *puVar6 & 0xffdfffffffffffff;
              puVar6[2] = puVar6[2] & 0xffdfffffffffffff;
              puVar6[3] = puVar6[3] & 0xffdfffffffffffff;
              puVar6[1] = puVar6[1] & 0xffdfffffffffffff;
              puVar6 = puVar6 + 9;
              if ((long)puVar6 - *plVar13 == 0xfc0) {
                plVar13 = plVar13 + 1;
                puVar6 = (ulong *)*plVar13;
              }
            } while (puVar9 != puVar6);
          }
        }
      }
      else if (puVar4 == (undefined1 *)0xb74f5b2681a3c2e4) {
        lVar5 = *(long *)(param_1 + 0x108);
        uVar17 = *(ulong *)(lVar5 + 0xa8);
        lVar16 = *(long *)(lVar5 + 0x70);
        if (*(long *)(lVar5 + 0x78) != lVar16) {
          uVar18 = *(long *)(lVar5 + 0xb0) + uVar17;
          puVar7 = (undefined8 *)(*(long *)(lVar16 + (uVar17 / 0x38) * 8) + (uVar17 % 0x38) * 0x48);
          puVar10 = (undefined8 *)(*(long *)(lVar16 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48)
          ;
          if (puVar10 != puVar7) {
            plVar13 = (long *)(lVar16 + (uVar17 / 0x38) * 8);
            do {
              puVar7[7] = 0;
              puVar7[8] = 0;
              puVar7[5] = 0;
              puVar7[6] = 0;
              puVar7[3] = 0;
              puVar7[4] = 0;
              puVar7[1] = 0;
              puVar7[2] = 0;
              puVar8 = puVar7 + 9;
              *puVar7 = 0;
              if ((long)puVar8 - *plVar13 == 0xfc0) {
                plVar13 = plVar13 + 1;
                puVar8 = (undefined8 *)*plVar13;
              }
              puVar7 = puVar8;
            } while (puVar10 != puVar8);
          }
        }
      }
    }
    else if (puVar4 == (undefined1 *)0x6895d3ccc184ea31) {
      lVar5 = *(long *)(param_1 + 0x108);
      lVar16 = *(long *)(lVar5 + 0x70);
      if (*(long *)(lVar5 + 0x78) != lVar16) {
        uVar18 = *(ulong *)(lVar5 + 0xa8);
        uVar17 = *(long *)(lVar5 + 0xb0) + uVar18;
        puVar6 = (ulong *)(*(long *)(lVar16 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48);
        puVar9 = (ulong *)(*(long *)(lVar16 + (uVar17 / 0x38) * 8) + (uVar17 % 0x38) * 0x48);
        if (puVar9 != puVar6) {
          plVar13 = (long *)(lVar16 + (uVar18 / 0x38) * 8);
          do {
            *puVar6 = *puVar6 & 0xfff7ffffffffffff;
            puVar6[2] = puVar6[2] & 0xfff7ffffffffffff;
            puVar6[3] = puVar6[3] & 0xfff7ffffffffffff;
            puVar6[1] = puVar6[1] & 0xfff7ffffffffffff;
            puVar6 = puVar6 + 9;
            if ((long)puVar6 - *plVar13 == 0xfc0) {
              plVar13 = plVar13 + 1;
              puVar6 = (ulong *)*plVar13;
            }
          } while (puVar9 != puVar6);
        }
      }
    }
    else if (puVar4 == (undefined1 *)0x7a4551aa7bc1b5b5) {
      lVar5 = *(long *)(param_1 + 0x108);
      lVar16 = *(long *)(lVar5 + 0x70);
      if (*(long *)(lVar5 + 0x78) != lVar16) {
        uVar18 = *(ulong *)(lVar5 + 0xa8);
        uVar17 = *(long *)(lVar5 + 0xb0) + uVar18;
        puVar6 = (ulong *)(*(long *)(lVar16 + (uVar18 / 0x38) * 8) + (uVar18 % 0x38) * 0x48);
        puVar9 = (ulong *)(*(long *)(lVar16 + (uVar17 / 0x38) * 8) + (uVar17 % 0x38) * 0x48);
        if (puVar9 != puVar6) {
          plVar13 = (long *)(lVar16 + (uVar18 / 0x38) * 8);
          do {
            *puVar6 = *puVar6 & 0xdfffffffffffffff;
            puVar6[2] = puVar6[2] & 0xdfffffffffffffff;
            puVar6[3] = puVar6[3] & 0xdfffffffffffffff;
            puVar6[1] = puVar6[1] & 0xdfffffffffffffff;
            puVar6 = puVar6 + 9;
            if ((long)puVar6 - *plVar13 == 0xfc0) {
              plVar13 = plVar13 + 1;
              puVar6 = (ulong *)*plVar13;
            }
          } while (puVar9 != puVar6);
        }
      }
    }
  }
  return;
}


