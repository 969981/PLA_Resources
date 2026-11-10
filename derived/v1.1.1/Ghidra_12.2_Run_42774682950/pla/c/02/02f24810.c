/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f24810; name: FUN_02f24810
 */


void FUN_02f24810(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  lVar5 = *(long *)(param_1 + 0x20);
  if (lVar5 != 0) {
    do {
      while( true ) {
        lVar2 = *(long *)(lVar5 + 0x50);
        puVar9 = *(undefined8 **)(lVar2 + 0x28);
        if (puVar9 == (undefined8 *)0x0) break;
        plVar6 = puVar9 + 0xb;
        if (*plVar6 == param_1) {
          puVar4 = (undefined8 *)0x0;
          lVar5 = *(long *)(lVar2 + 8);
        }
        else {
          do {
            puVar4 = puVar9;
            puVar9 = (undefined8 *)puVar4[9];
            if (puVar9 == (undefined8 *)0x0) {
              if (lVar5 == 0) {
                return;
              }
              goto LAB_02f24984;
            }
          } while (puVar9[0xb] != param_1);
          plVar6 = puVar9 + 0xb;
          lVar5 = *(long *)(lVar2 + 8);
        }
        if (lVar5 != 0) {
          *(undefined4 *)(lVar5 + 0x110) = 0x42ca0000;
        }
        if ((*(byte *)(lVar2 + 0x50) >> 2 & 1) != 0) {
          DAT_0440ae44 = 1;
        }
        lVar5 = *plVar6;
        puVar7 = *(undefined8 **)(lVar5 + 0x20);
        puVar3 = puVar7 + 8;
        if (puVar7 == (undefined8 *)0x0 || puVar9 == puVar7) {
          puVar8 = puVar7;
          puVar7 = (undefined8 *)0x0;
        }
        else {
          puVar8 = (undefined8 *)*puVar3;
          puVar3 = puVar8 + 8;
          if (puVar8 != (undefined8 *)0x0 && puVar9 != puVar8) {
            do {
              puVar7 = puVar8;
              puVar8 = (undefined8 *)*puVar3;
              puVar3 = puVar8 + 8;
            } while (puVar8 != (undefined8 *)0x0 && puVar9 != puVar8);
          }
        }
        if (puVar8 != (undefined8 *)0x0) {
          puVar1 = (undefined8 *)(lVar5 + 0x20);
          if (*(undefined8 **)(lVar5 + 0x20) != puVar8) {
            puVar1 = puVar7 + 8;
          }
          *puVar1 = *puVar3;
          if (*(undefined8 **)(lVar5 + 0x18) == puVar8) {
            *(undefined8 **)(lVar5 + 0x18) = puVar7;
          }
        }
        puVar3 = (undefined8 *)(lVar2 + 0x28);
        if ((undefined8 *)*puVar3 != puVar9) {
          puVar3 = puVar4 + 9;
        }
        *puVar3 = puVar9[9];
        (**(code **)*puVar9)(puVar9);
        (*DAT_0442d158)(5,puVar9);
        lVar5 = *(long *)(param_1 + 0x20);
        if (lVar5 == 0) {
          return;
        }
      }
LAB_02f24984:
      lVar5 = *(long *)(lVar5 + 0x40);
      if (lVar5 == 0) {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        return;
      }
      *(long *)(param_1 + 0x20) = lVar5;
    } while (lVar5 != 0);
  }
  return;
}


