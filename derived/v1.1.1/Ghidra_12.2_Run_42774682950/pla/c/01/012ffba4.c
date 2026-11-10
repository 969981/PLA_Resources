/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012ffba4; name: FUN_012ffba4
 */


void FUN_012ffba4(long param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  lVar5 = param_1 + (long)*(int *)(param_1 + 0x164c) * 0x38;
  lVar3 = *(long *)(lVar5 + 0x1650);
  lVar5 = *(long *)(lVar5 + 0x1658);
  if (lVar3 == lVar5) {
    uVar2 = (ulong)*(uint *)(param_1 + 0x1f80);
    uVar4 = (lVar5 - lVar3 >> 4) * -0x5555555555555555;
    bVar1 = false;
  }
  else {
    uVar2 = (ulong)*(uint *)(param_1 + 0x1f80);
    uVar4 = (lVar5 - lVar3 >> 4) * -0x5555555555555555;
    bVar1 = uVar2 < uVar4;
  }
  FUN_012fb8dc(param_1 + 0x1f68,param_2,bVar1,uVar2 < uVar4 && 1 < uVar4);
  return;
}


