/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 019225b0; name: FUN_019225b0
 */


void FUN_019225b0(undefined8 *param_1,long param_2,ulong param_3)

{
  int *piVar1;
  byte bVar2;
  ulong uVar3;
  size_t sVar4;
  ulong uVar5;
  ulong uVar6;
  uint *puVar7;
  byte *pbVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined1 *puVar12;
  long lVar13;
  
  uVar9 = *(ulong *)(param_2 + 0x3b8);
  plVar10 = (long *)0x0;
  if (uVar9 != 0) {
    uVar5 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
    uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
    uVar5 = (uVar5 + (uVar5 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar5 < 2) {
      uVar6 = uVar9 - 1 & param_3;
    }
    else {
      uVar6 = param_3;
      if (uVar9 <= param_3) {
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = param_3 / uVar9;
        }
        uVar6 = param_3 - uVar6 * uVar9;
      }
    }
    plVar11 = *(long **)(*(long *)(param_2 + 0x3b0) + uVar6 * 8);
    if ((plVar11 != (long *)0x0) && (plVar11 = (long *)*plVar11, plVar11 != (long *)0x0)) {
      if (uVar5 < 2) {
        do {
          if (plVar11[1] == param_3) {
            plVar10 = plVar11;
            if (plVar11[2] == param_3) break;
          }
          else if ((plVar11[1] & uVar9 - 1) != uVar6) goto LAB_01922794;
          plVar11 = (long *)*plVar11;
          plVar10 = (long *)0x0;
        } while (plVar11 != (long *)0x0);
        goto LAB_01922674;
      }
      do {
        uVar5 = plVar11[1];
        if (uVar5 == param_3) {
          plVar10 = plVar11;
          if (plVar11[2] == param_3) goto LAB_01922674;
        }
        else {
          if (uVar9 <= uVar5) {
            uVar3 = 0;
            if (uVar9 != 0) {
              uVar3 = uVar5 / uVar9;
            }
            uVar5 = uVar5 - uVar3 * uVar9;
          }
          if (uVar5 != uVar6) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
LAB_01922794:
    plVar10 = (long *)0x0;
  }
LAB_01922674:
  param_1[2] = 0;
  param_1[3] = 0;
  puVar12 = &DAT_cbf29ce484222645;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
  if (plVar10 != (long *)0x0) {
    puVar7 = *(uint **)(*(long *)(param_2 + 0x70) + 0x250);
    piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
    puVar7 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar7 = (uint *)((long)puVar7 + (ulong)*(uint *)(plVar10 + 3) * 4 + (ulong)*puVar7 + 4);
    piVar1 = (int *)((long)puVar7 + (ulong)*puVar7);
    if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
       (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar9 == 0)) {
      lVar13 = 0;
    }
    else {
      puVar7 = (uint *)((long)piVar1 + uVar9);
      lVar13 = (long)puVar7 + (ulong)*puVar7;
    }
    sVar4 = strlen((char *)(lVar13 + 4));
    bVar2 = *(byte *)(lVar13 + 4);
    if (bVar2 != 0) {
      pbVar8 = (byte *)(lVar13 + 5);
      do {
        puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar2) * 0x100000001b3);
        bVar2 = *pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (bVar2 != 0);
    }
    *param_1 = puVar12;
    param_1[1] = (char *)(lVar13 + 4);
    param_1[2] = sVar4;
    param_1[3] = 0;
  }
  return;
}


