/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e52c5c; name: FUN_02e52c5c
 */


undefined8 * FUN_02e52c5c(long *param_1,uint param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  if (uVar4 <= uVar3) {
    iVar1 = uVar4 + (uVar4 >> 1);
    if (uVar4 == 0) {
      iVar1 = 1;
    }
    uVar5 = FUN_02e52d7c(param_1,iVar1);
    if ((uVar5 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar4 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar4 <= uVar3) {
    return (undefined8 *)0x0;
  }
  uVar3 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar3 + 1;
  if (uVar3 <= param_2) {
    return (undefined8 *)(*param_1 + (ulong)param_2 * 8);
  }
  puVar7 = (undefined8 *)(*param_1 + (ulong)uVar3 * 8);
  do {
    puVar6 = puVar7 + -1;
    *puVar7 = *puVar6;
    puVar2 = (undefined8 *)(*param_1 + (ulong)param_2 * 8);
    puVar7 = puVar6;
  } while (puVar2 < puVar6);
  return puVar2;
}


