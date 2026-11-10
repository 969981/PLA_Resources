/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00560cc4; name: FUN_00560cc4
 */


void FUN_00560cc4(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  
  puVar3 = *(undefined8 **)(param_1 + 8);
  lVar7 = *(long *)(param_1 + 0x10) - (long)puVar3;
  uVar5 = lVar7 >> 3;
  if (lVar7 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    uVar8 = *(ulong *)(param_1 + 0x20);
    plVar6 = (long *)((long)puVar3 + (uVar8 >> 4 & 0xffffffffffffff8));
    uVar1 = *(long *)(param_1 + 0x28) + uVar8;
    lVar7 = *plVar6 + (uVar8 & 0x7f) * 0x20;
    lVar2 = *(long *)((long)puVar3 + (uVar1 >> 4 & 0xffffffffffffff8)) + (uVar1 & 0x7f) * 0x20;
    while (lVar2 != lVar7) {
      while (lVar7 = lVar7 + 0x20, lVar7 - *plVar6 == 0x1000) {
        plVar6 = plVar6 + 1;
        lVar7 = *plVar6;
        if (lVar2 == lVar7) goto LAB_00560d3c;
      }
    }
LAB_00560d3c:
    *(long *)(param_1 + 0x28) = 0;
    while (2 < uVar5) {
      operator_delete((void *)*puVar3);
      puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
      *(undefined8 **)(param_1 + 8) = puVar3;
      uVar5 = *(long *)(param_1 + 0x10) - (long)puVar3 >> 3;
    }
  }
  if (uVar5 == 1) {
    uVar4 = 0x40;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    uVar4 = 0x80;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar4;
  return;
}


