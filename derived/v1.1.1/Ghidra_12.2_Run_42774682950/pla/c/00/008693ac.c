/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008693ac; name: FUN_008693ac
 */


long FUN_008693ac(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x13cc) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 0x13c0) + lVar3) + 0x28))();
      if (((uVar2 & 1) != 0) &&
         (lVar1 = *(long *)(param_1 + 0x13c0) + lVar3, *(int *)(lVar1 + 0xb4) == param_2)) {
        return lVar1;
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0xb8;
    } while (uVar4 < *(uint *)(param_1 + 0x13cc));
  }
  return 0;
}


