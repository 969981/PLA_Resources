/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0156f704; name: FUN_0156f704
 */


void FUN_0156f704(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x498);
  uVar2 = **(undefined4 **)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x498) = uVar4;
  *(ulong *)(param_1 + 0x490) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x490) >> 0x20),uVar2);
  uVar3 = CONCAT44(*(undefined4 *)(*(long *)(param_2 + 0x90) + 4),uVar2);
  *(undefined8 *)(param_1 + 0x498) = uVar4;
  *(undefined8 *)(param_1 + 0x490) = uVar3;
  *(ulong *)(param_1 + 0x498) = (ulong)*(uint *)(*(long *)(param_2 + 0x90) + 8);
  *(undefined8 *)(param_1 + 0x490) = uVar3;
  lVar1 = *(long *)(param_2 + 0x90);
  *(long *)(param_2 + 0x90) = lVar1 + 0xc;
  *(bool *)(param_1 + 0x4a0) = *(int *)(lVar1 + 0xc) != 0;
  *(long *)(param_2 + 0x90) = *(long *)(param_2 + 0x90) + 4;
  return;
}


