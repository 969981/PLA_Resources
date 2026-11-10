/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01eb5990; name: FUN_01eb5990
 */


void FUN_01eb5990(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10) - (long)puVar2;
  if (lVar5 != 0) {
    uVar6 = *(ulong *)(param_1 + 0x40);
    plVar8 = (long *)((long)puVar2 + (uVar6 >> 5 & 0x7fffffffffffff8));
    uVar3 = *(long *)(param_1 + 0x48) + uVar6;
    lVar7 = *plVar8 + (uVar6 & 0xff) * 0x10;
    lVar1 = *(long *)((long)puVar2 + (uVar3 >> 5 & 0x7fffffffffffff8)) + (uVar3 & 0xff) * 0x10;
    while (lVar1 != lVar7) {
      while (lVar7 = lVar7 + 0x10, lVar7 - *plVar8 == 0x1000) {
        plVar8 = plVar8 + 1;
        lVar7 = *plVar8;
        if (lVar1 == lVar7) goto LAB_01eb59b4;
      }
    }
  }
LAB_01eb59b4:
  *(undefined8 *)(param_1 + 0x48) = 0;
  while (uVar3 = lVar5 >> 3, 2 < uVar3) {
    plVar8 = *(long **)(param_1 + 0x50);
    uVar4 = *puVar2;
    uVar3 = FUN_02bcc75c(plVar8);
    if ((uVar3 & 1) == 0) {
      (**(code **)(*plVar8 + 0x18))(plVar8,uVar4,0x1000,0x10);
    }
    else {
      FUN_02bcc824(plVar8,uVar4,0x1000,0x10);
    }
    puVar2 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
    *(undefined8 **)(param_1 + 8) = puVar2;
    lVar5 = *(long *)(param_1 + 0x10) - (long)puVar2;
  }
  if (uVar3 == 1) {
    uVar4 = 0x80;
  }
  else {
    if (uVar3 != 2) {
      return;
    }
    uVar4 = 0x100;
  }
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  return;
}


