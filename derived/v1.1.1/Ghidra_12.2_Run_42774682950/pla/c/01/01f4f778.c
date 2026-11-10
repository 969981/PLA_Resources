/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f4f778; name: FUN_01f4f778
 */


void FUN_01f4f778(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = *(long *)(param_1 + 8);
  lVar2 = *(long *)(param_1 + 0x10) - lVar3;
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = lVar2 * 0x80 - 1;
  }
  uVar4 = *(long *)(param_1 + 0x48) + *(long *)(param_1 + 0x40);
  if (uVar1 == uVar4) {
    FUN_01f4f820(param_1);
    uVar4 = *(long *)(param_1 + 0x40) + *(long *)(param_1 + 0x48);
    lVar3 = *(long *)(param_1 + 8);
    if (*(long *)(param_1 + 0x10) != lVar3) goto LAB_01f4f808;
  }
  else if (*(long *)(param_1 + 0x10) != lVar3) {
LAB_01f4f808:
    lVar3 = *(long *)(lVar3 + (uVar4 >> 7 & 0x1fffffffffffff8)) + (uVar4 & 0x3ff) * 4;
    goto LAB_01f4f7c4;
  }
  lVar3 = 0;
LAB_01f4f7c4:
  FUN_018c2c08(param_1 + 0x50,lVar3,param_2);
  *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
  return;
}


