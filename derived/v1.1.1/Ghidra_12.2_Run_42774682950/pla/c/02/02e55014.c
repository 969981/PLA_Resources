/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e55014; name: FUN_02e55014
 */


undefined8 * FUN_02e55014(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  if (uVar3 <= uVar2) {
    uVar4 = FUN_02e55124(param_1);
    if ((uVar4 & 1) == 0) {
      return (undefined8 *)0x0;
    }
    uVar3 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar3 <= uVar2) {
    return (undefined8 *)0x0;
  }
  uVar2 = *(uint *)(param_1 + 1);
  *(uint *)(param_1 + 1) = uVar2 + 1;
  if (uVar2 <= param_2) {
    return (undefined8 *)(*param_1 + (ulong)param_2 * 0x10);
  }
  puVar6 = (undefined8 *)(*param_1 + (ulong)uVar2 * 0x10);
  do {
    puVar5 = puVar6 + -2;
    *puVar6 = *puVar5;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(puVar6 + -1);
    puVar1 = (undefined8 *)(*param_1 + (ulong)param_2 * 0x10);
    puVar6 = puVar5;
  } while (puVar1 < puVar5);
  return puVar1;
}


