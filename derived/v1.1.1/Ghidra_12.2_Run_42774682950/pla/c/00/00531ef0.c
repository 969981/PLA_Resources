/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00531ef0; name: FUN_00531ef0
 */


void FUN_00531ef0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar7;
  long lVar6;
  ulong uVar8;
  long *plVar9;
  
  puVar4 = *(undefined8 **)(param_1 + 8);
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (puVar7 != puVar4) {
    uVar8 = *(ulong *)(param_1 + 0x20);
    plVar9 = (long *)((long)puVar4 + (uVar8 >> 5 & 0x7fffffffffffff8));
    uVar2 = *(long *)(param_1 + 0x28) + uVar8;
    lVar6 = *plVar9 + (uVar8 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar4 + (uVar2 >> 5 & 0x7fffffffffffff8)) + (uVar2 & 0xff) * 0x10;
    if (lVar1 != lVar6) {
      do {
        FUN_0052ea88(lVar6 + 8);
        lVar6 = lVar6 + 0x10;
        if (lVar6 - *plVar9 == 0x1000) {
          plVar9 = plVar9 + 1;
          lVar6 = *plVar9;
        }
      } while (lVar1 != lVar6);
      puVar4 = *(undefined8 **)(param_1 + 8);
      puVar7 = *(undefined8 **)(param_1 + 0x10);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  puVar3 = PTR_LAB_04373088;
  lVar6 = (long)puVar7 - (long)puVar4;
  while (uVar2 = lVar6 >> 3, 2 < uVar2) {
    FUN_002e2ea0(puVar3,*puVar4);
    puVar4 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar4;
    lVar6 = *(long *)(param_1 + 0x10) - (long)puVar4;
  }
  if (uVar2 == 1) {
    uVar5 = 0x80;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    uVar5 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  return;
}


