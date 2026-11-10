/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015c7b0; name: FUN_0015c7b0
 */


void FUN_0015c7b0(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *puVar3;
  
  puVar3 = (ulong *)(param_1 + 0x40);
  puVar1 = (ulong *)*puVar3;
  if ((puVar1 != (ulong *)0x0) && (uVar2 = *puVar1, param_2 <= uVar2)) {
    do {
      puVar3 = puVar1;
      if (uVar2 == param_2) {
        return;
      }
      puVar1 = (ulong *)puVar3[2];
    } while ((puVar1 != (ulong *)0x0) && (uVar2 = *puVar1, param_2 <= uVar2));
    puVar3 = puVar3 + 2;
  }
  puVar1 = (ulong *)FUN_00161510(param_1,0,0,0x20);
  puVar1[1] = 0;
  puVar1[2] = *puVar3;
  *(undefined4 *)(puVar1 + 3) = 1;
  *puVar3 = (ulong)puVar1;
  *puVar1 = param_2;
  if (*(long *)(param_1 + 0x50) == param_1) {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(*(long *)(param_1 + 0x18) + 0xa8);
    *(long *)(*(long *)(param_1 + 0x18) + 0xa8) = param_1;
    return;
  }
  return;
}


