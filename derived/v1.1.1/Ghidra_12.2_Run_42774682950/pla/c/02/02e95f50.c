/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e95f50; name: FUN_02e95f50
 */


undefined8 * FUN_02e95f50(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  uVar3 = FUN_02e96fc4();
  if ((uVar3 & 1) == 0) {
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    uVar3 = (ulong)(param_2 - uVar2 * uVar1);
    for (plVar6 = *(long **)(*(long *)(param_1 + 8) + uVar3 * 8); plVar6 != (long *)0x0;
        plVar6 = (long *)*plVar6) {
      if (*(uint *)(plVar6 + 1) == param_2) {
        return plVar6 + 2;
      }
    }
    puVar4 = (undefined8 *)(*DAT_0442d138)(0,0x18);
    puVar5 = puVar4;
    if (puVar4 != (undefined8 *)0x0) {
      lVar7 = uVar3 * 8;
      *puVar4 = *(undefined8 *)(*(long *)(param_1 + 8) + lVar7);
      *(uint *)(puVar4 + 1) = param_2;
      puVar5 = puVar4 + 2;
      *(undefined8 **)(*(long *)(param_1 + 8) + lVar7) = puVar4;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  return puVar5;
}


