/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce726c; name: FUN_00ce726c
 */


void FUN_00ce726c(undefined1 *param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  ulong uVar12;
  
  uVar12 = *(ulong *)(param_2 + 0xa8);
  lVar3 = *(long *)(param_2 + 0x70);
  plVar8 = (long *)(lVar3 + (uVar12 >> 4 & 0xffffffffffffff8));
  if (*(long *)(param_2 + 0x78) == lVar3) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(long *)(param_2 + 0xb0) + uVar12;
    puVar9 = (undefined8 *)(*plVar8 + (uVar12 & 0x7f) * 0x20);
    puVar2 = (undefined8 *)
             (*(long *)(lVar3 + (uVar1 >> 4 & 0xffffffffffffff8)) + (uVar1 & 0x7f) * 0x20);
    if (puVar2 != puVar9) {
      puVar11 = (undefined1 *)*param_3;
      if ((undefined1 *)*param_4 == &DAT_cbf29ce484222645) {
        if (puVar11 != &DAT_cbf29ce484222645) {
          do {
            if (puVar11 == (undefined1 *)puVar9[1]) break;
            puVar9 = puVar9 + 4;
            if ((long)puVar9 - *plVar8 == 0x1000) {
              plVar8 = plVar8 + 1;
              puVar9 = (undefined8 *)*plVar8;
            }
          } while (puVar2 != puVar9);
        }
      }
      else {
        do {
          while( true ) {
            if ((puVar11 == &DAT_cbf29ce484222645 || puVar11 == (undefined1 *)puVar9[1]) &&
               ((undefined1 *)*param_4 == (undefined1 *)puVar9[3])) goto LAB_00ce7338;
            puVar9 = puVar9 + 4;
            if ((long)puVar9 - *plVar8 == 0x1000) break;
            if (puVar2 == puVar9) goto LAB_00ce7338;
          }
          plVar8 = plVar8 + 1;
          puVar9 = (undefined8 *)*plVar8;
        } while (puVar2 != puVar9);
      }
    }
  }
LAB_00ce7338:
  if (*(long *)(param_2 + 0x78) == lVar3) {
    if (puVar9 == (undefined8 *)0x0) goto LAB_00ce73b0;
  }
  else {
    uVar12 = *(long *)(param_2 + 0xb0) + uVar12;
    if ((undefined8 *)
        (*(long *)(lVar3 + (uVar12 >> 4 & 0xffffffffffffff8)) + (uVar12 & 0x7f) * 0x20) == puVar9) {
LAB_00ce73b0:
      uVar10 = 0;
      goto LAB_00ce7390;
    }
  }
  uVar4 = *puVar9;
  uVar6 = puVar9[1];
  uVar5 = puVar9[2];
  uVar7 = puVar9[3];
  FUN_00ce7418(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  *(undefined8 *)(param_1 + 0x20) = uVar7;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  uVar10 = 1;
LAB_00ce7390:
  *param_1 = uVar10;
  return;
}


