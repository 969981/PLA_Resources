/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02857690; name: FUN_02857690
 */


void FUN_02857690(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x4f8) != '\0') {
    iVar1 = FUN_02c60024(*(undefined8 *)(param_1 + 0x18));
    iVar2 = FUN_02c600e8(*(undefined8 *)(param_1 + 0x18));
    iVar3 = FUN_02c68e44(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x98));
    (**(code **)(**(long **)(param_1 + 0x118) + 0x28))
              ((float)(uint)(iVar3 - iVar1),*(long **)(param_1 + 0x118),iVar2 - iVar1);
  }
  FUN_02857700(param_1);
  return;
}


