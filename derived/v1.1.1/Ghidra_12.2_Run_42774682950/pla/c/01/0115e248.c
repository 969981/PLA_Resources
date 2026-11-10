/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0115e248; name: FUN_0115e248
 */


undefined4 FUN_0115e248(long param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  ulong uVar4;
  undefined4 uVar5;
  
  piVar2 = *(int **)(param_1 + 0x68);
  uVar5 = 0;
  puVar3 = (uint *)((long)piVar2 + (ulong)*(ushort *)((long)piVar2 + (4 - (long)*piVar2)));
  puVar3 = (uint *)((long)puVar3 + (ulong)*puVar3);
  uVar1 = *puVar3;
  if (uVar1 <= param_2) {
    param_2 = uVar1 - 1;
  }
  puVar3 = puVar3 + (ulong)param_2 + 1;
  piVar2 = (int *)((long)puVar3 + (ulong)*puVar3);
  if ((4 < *(ushort *)((long)piVar2 - (long)*piVar2)) &&
     (uVar4 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[2], uVar4 != 0)) {
    uVar5 = *(undefined4 *)((long)piVar2 + uVar4);
  }
  return uVar5;
}


