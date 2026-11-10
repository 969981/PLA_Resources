/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ab4fc; name: FUN_010ab4fc
 */


undefined8 FUN_010ab4fc(long param_1,long param_2,ulong param_3,undefined4 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int *piVar7;
  ulong uVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  ushort *puVar13;
  long lVar14;
  byte *pbVar15;
  
  uVar8 = *(ulong *)(param_1 + 0x4d08);
  if (uVar8 != 0) {
    uVar6 = param_2 << 0x20 | (param_3 & 0xffff) << 0x10;
    uVar10 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
    uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
    uVar10 = (uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar10 < 2) {
      uVar11 = uVar8 - 1 & uVar6;
    }
    else if (uVar6 < uVar8) {
      uVar11 = uVar6;
    }
    else {
      uVar11 = 0;
      if (uVar8 != 0) {
        uVar11 = uVar6 / uVar8;
      }
      uVar11 = uVar6 - uVar11 * uVar8;
    }
    plVar12 = *(long **)(*(long *)(param_1 + 0x4d00) + uVar11 * 8);
    if ((plVar12 != (long *)0x0) && (plVar12 = (long *)*plVar12, plVar12 != (long *)0x0)) {
      if (uVar10 < 2) {
        do {
          if (plVar12[1] == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_010ab5fc;
          }
          else if ((plVar12[1] & uVar8 - 1) != uVar11) break;
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
      else {
        do {
          uVar10 = plVar12[1];
          if (uVar10 == uVar6) {
            if (plVar12[2] == uVar6) goto LAB_010ab5fc;
          }
          else {
            if (uVar8 <= uVar10) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar10 / uVar8;
              }
              uVar10 = uVar10 - uVar4 * uVar8;
            }
            if (uVar10 != uVar11) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
  }
  plVar12 = *(long **)(param_1 + 0x4d30);
LAB_010ab5fc:
  piVar7 = (int *)plVar12[3];
  puVar1 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (8 - (long)*piVar7)));
  puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
  puVar9 = puVar1 + 1;
  uVar8 = (ulong)*puVar1;
  if (uVar8 != 0) {
    puVar1 = puVar9 + uVar8;
    do {
      piVar7 = (int *)((long)puVar9 + (ulong)*puVar9);
      puVar13 = (ushort *)((long)piVar7 - (long)*piVar7);
      if ((*puVar13 < 0x11) || ((ulong)puVar13[8] == 0)) {
        lVar14 = 0;
        bVar3 = DAT_00000004;
      }
      else {
        puVar2 = (uint *)((long)piVar7 + (ulong)puVar13[8]);
        lVar14 = (long)puVar2 + (ulong)*puVar2;
        bVar3 = *(byte *)(lVar14 + 4);
      }
      if (bVar3 != 0) {
        puVar5 = &DAT_cbf29ce484222645;
        pbVar15 = (byte *)(lVar14 + 5);
        do {
          puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar3) * 0x100000001b3);
          bVar3 = *pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (bVar3 != 0);
        if (puVar5 == (undefined1 *)0x898255d4ad0f6542) {
          if (*puVar13 < 7) {
            lVar14 = 0;
            bVar3 = DAT_00000004;
          }
          else {
            lVar14 = 0;
            if ((ulong)puVar13[3] != 0) {
              puVar2 = (uint *)((long)piVar7 + (ulong)puVar13[3]);
              lVar14 = (long)puVar2 + (ulong)*puVar2;
            }
            bVar3 = *(byte *)(lVar14 + 4);
          }
          if (bVar3 == 0) {
LAB_010ab7a0:
            *param_4 = 1;
            puVar9 = (uint *)((long)piVar7 + (ulong)*(ushort *)((long)piVar7 + (8 - (long)*piVar7)))
            ;
            param_4[1] = *(undefined4 *)((long)puVar9 + (ulong)*puVar9 + 4);
            return 1;
          }
          puVar5 = &DAT_cbf29ce484222645;
          pbVar15 = (byte *)(lVar14 + 5);
          do {
            puVar5 = (undefined1 *)(((ulong)puVar5 ^ (ulong)bVar3) * 0x100000001b3);
            bVar3 = *pbVar15;
            pbVar15 = pbVar15 + 1;
          } while (bVar3 != 0);
          if (puVar5 != (undefined1 *)0xd0abee268fd3cd32) {
            if (puVar5 == (undefined1 *)0x59d4a0f41d231dac) {
              *param_4 = 3;
              puVar9 = (uint *)((long)piVar7 +
                               (ulong)*(ushort *)((long)piVar7 + (8 - (long)*piVar7)));
              param_4[1] = *(undefined4 *)((long)puVar9 + (ulong)*puVar9 + 4);
              puVar9 = (uint *)((long)piVar7 +
                               (ulong)*(ushort *)((long)piVar7 + (8 - (long)*piVar7)));
              param_4[2] = *(undefined4 *)((long)puVar9 + (ulong)*puVar9 + 8);
              return 1;
            }
            goto LAB_010ab7a0;
          }
        }
      }
      puVar9 = puVar9 + 1;
    } while (puVar9 != puVar1);
  }
  return 0;
}


