/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00568944; name: FUN_00568944
 */


void FUN_00568944(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (lVar4 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    uVar1 = *(long *)(param_1 + 0x28) + uVar6;
    lVar5 = puVar2[uVar6 / 0x55] + (uVar6 % 0x55) * 0x30;
    lVar7 = puVar2[uVar1 / 0x55] + (uVar1 % 0x55) * 0x30;
    if (lVar7 != lVar5) {
      plVar8 = puVar2 + uVar6 / 0x55;
      do {
        lVar5 = lVar5 + 0x30;
        if (lVar5 - *plVar8 == 0xff0) {
          plVar8 = plVar8 + 1;
          lVar5 = *plVar8;
        }
      } while (lVar7 != lVar5);
    }
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  while (uVar1 = lVar4 >> 3, 2 < uVar1) {
    operator_delete((void *)*puVar2);
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar4 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar1 == 1) {
    uVar3 = 0x2a;
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    uVar3 = 0x55;
  }
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  return;
}


