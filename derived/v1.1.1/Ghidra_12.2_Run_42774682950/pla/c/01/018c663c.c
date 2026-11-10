/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c663c; name: FUN_018c663c
 */


void FUN_018c663c(undefined8 *param_1,long param_2,undefined1 *param_3)

{
  byte bVar1;
  ulong uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint *puVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  
  puVar12 = &DAT_cbf29ce484222645;
  if ((param_3 != &DAT_cbf29ce484222645) &&
     (puVar4 = *(undefined1 **)(param_2 + 0xa0), puVar4 != (undefined1 *)0x0)) {
    uVar8 = (long)puVar4 - ((ulong)puVar4 >> 1 & 0x5555555555555555);
    uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
    uVar8 = (uVar8 + (uVar8 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38;
    if (uVar8 < 2) {
      puVar9 = (undefined1 *)((ulong)(puVar4 + -1) & (ulong)param_3);
    }
    else {
      puVar9 = param_3;
      if (puVar4 <= param_3) {
        uVar2 = 0;
        if (puVar4 != (undefined1 *)0x0) {
          uVar2 = (ulong)param_3 / (ulong)puVar4;
        }
        puVar9 = param_3 + -(uVar2 * (long)puVar4);
      }
    }
    plVar10 = *(long **)(*(long *)(param_2 + 0x98) + (long)puVar9 * 8);
    if ((plVar10 != (long *)0x0) && (plVar10 = (long *)*plVar10, plVar10 != (long *)0x0)) {
      if (uVar8 < 2) {
        do {
          if ((undefined1 *)plVar10[1] == param_3) {
            if ((undefined1 *)plVar10[2] == param_3) goto LAB_018c6780;
          }
          else if ((undefined1 *)((ulong)plVar10[1] & (ulong)(puVar4 + -1)) != puVar9) break;
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
      else {
        do {
          puVar11 = (undefined1 *)plVar10[1];
          if (puVar11 == param_3) {
            if ((undefined1 *)plVar10[2] == param_3) goto LAB_018c6780;
          }
          else {
            if (puVar4 <= puVar11) {
              uVar8 = 0;
              if (puVar4 != (undefined1 *)0x0) {
                uVar8 = (ulong)puVar11 / (ulong)puVar4;
              }
              puVar11 = puVar11 + -(uVar8 * (long)puVar4);
            }
            if (puVar11 != puVar9) break;
          }
          plVar10 = (long *)*plVar10;
        } while (plVar10 != (long *)0x0);
      }
    }
  }
  param_1[2] = 0;
  *param_1 = &DAT_cbf29ce484222645;
  param_1[1] = &DAT_03996322;
LAB_018c6678:
  param_1[3] = 0;
  return;
LAB_018c6780:
  piVar5 = (int *)plVar10[3];
  puVar6 = (uint *)((long)piVar5 + (ulong)*(ushort *)((long)piVar5 + (8 - (long)*piVar5)));
  puVar6 = (uint *)((long)puVar6 + (ulong)*puVar6 + 4);
  piVar5 = (int *)((long)puVar6 + (ulong)*puVar6);
  if ((*(ushort *)((long)piVar5 - (long)*piVar5) < 9) ||
     (uVar8 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[4], uVar8 == 0)) {
    lVar13 = 0;
  }
  else {
    puVar6 = (uint *)((long)piVar5 + uVar8);
    lVar13 = (long)puVar6 + (ulong)*puVar6;
  }
  sVar3 = strlen((char *)(lVar13 + 4));
  bVar1 = *(byte *)(lVar13 + 4);
  if (bVar1 != 0) {
    pbVar7 = (byte *)(lVar13 + 5);
    do {
      puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
  }
  *param_1 = puVar12;
  param_1[1] = (char *)(lVar13 + 4);
  param_1[2] = sVar3;
  goto LAB_018c6678;
}


