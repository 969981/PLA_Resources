/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f0c04; name: FUN_001f0c04
 */


void FUN_001f0c04(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0xef8);
  while (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 8);
    FUN_001f0b88(param_1,uVar2);
    if (*(long *)(param_1 + 0xee8) != 0) {
      FUN_001f0ac0(*(long *)(param_1 + 0xee8),uVar2,0);
    }
    lVar1 = *(long *)(param_1 + 0xef8);
  }
  if (*(long *)(param_1 + 0xee8) == 0) {
    return;
  }
  FUN_001f0b88(*(long *)(param_1 + 0xee8),param_1);
  return;
}


