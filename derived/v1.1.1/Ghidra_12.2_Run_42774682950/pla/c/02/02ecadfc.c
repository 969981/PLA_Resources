/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ecadfc; name: FUN_02ecadfc
 */


void FUN_02ecadfc(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar4;
  undefined4 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar2 = (undefined4 *)(*param_1 + (ulong)uVar1 * 0x18 + -0x18);
  if ((undefined4 *)*param_2 < puVar2) {
    puVar3 = (undefined4 *)*param_2;
    do {
      puVar4 = puVar3 + 6;
      *puVar3 = *puVar4;
      FUN_02ecada0(puVar3 + 2,puVar3 + 8);
      puVar3 = puVar4;
    } while (puVar4 < puVar2);
    uVar1 = *(uint *)(param_1 + 1);
  }
  *(uint *)(param_1 + 1) = uVar1 - 1;
  return;
}


