/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5e718; name: FUN_02b5e718
 */


void FUN_02b5e718(undefined1 *param_1,long param_2,long *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint *puVar13;
  
  bVar2 = *(byte *)(param_2 + 0x161);
  uVar7 = (ulong)bVar2;
  uVar1 = uVar7 + *(byte *)(param_2 + 0x160);
  if ((int)uVar1 == 0) {
    lVar6 = *(long *)(param_2 + 0x128);
    *param_1 = 0;
    if (*(char *)(lVar6 + 0x38) == '\0') {
      return;
    }
  }
  else {
    puVar8 = (uint *)*param_3;
    puVar9 = (uint *)*param_4;
    if ((bVar2 != 0) && (uVar10 = param_3[1] - (long)puVar8 >> 2, uVar1 <= uVar10)) {
      uVar12 = 0;
      if (uVar1 != 0) {
        uVar12 = uVar10 / uVar1;
      }
      do {
        uVar11 = uVar12 >> 1;
        puVar5 = puVar8 + uVar11 * uVar1;
        uVar10 = uVar7;
        puVar13 = puVar9;
        do {
          if (*puVar5 != *puVar13) {
            if (*puVar5 < *puVar13) {
              puVar8 = puVar8 + uVar11 * uVar1 + uVar1;
              uVar11 = uVar12 + ~uVar11;
            }
            break;
          }
          puVar5 = puVar5 + 1;
          puVar13 = puVar13 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
        uVar12 = uVar11;
      } while (uVar11 != 0);
    }
    if ((uint *)param_3[1] == puVar8) {
LAB_02b5e800:
      *param_1 = 0;
      return;
    }
    if (bVar2 != 0) {
      puVar5 = puVar8;
      do {
        if (*puVar9 != *puVar5) {
          if (*puVar9 < *puVar5) goto LAB_02b5e800;
          break;
        }
        puVar9 = puVar9 + 1;
        puVar5 = puVar5 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    iVar3 = 0;
    if (uVar1 != 0) {
      iVar3 = (int)((ulong)((long)((long)puVar8 -
                                  (*(long *)(param_2 + 0xf0) + (ulong)*(byte *)(param_2 + 0x160) * 4
                                  )) >> 2) / uVar1);
    }
    lVar6 = *(long *)(param_2 + 0x128);
    *param_1 = 0;
    if (*(char *)(lVar6 + (long)iVar3 * 0x60 + 0x38) == '\0') {
      return;
    }
    lVar6 = lVar6 + (long)iVar3 * 0x60;
  }
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(lVar6 + 0x40);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar6 + 0x48);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar6 + 0x50);
  plVar4 = *(long **)(lVar6 + 0x58);
  *(long **)(param_1 + 0x20) = plVar4;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))();
  }
  *param_1 = 1;
  return;
}


