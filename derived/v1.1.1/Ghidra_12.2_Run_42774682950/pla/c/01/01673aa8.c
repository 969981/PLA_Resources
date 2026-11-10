/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01673aa8; name: FUN_01673aa8
 */


void FUN_01673aa8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x98);
  lVar3 = *(long *)(param_1 + 0xa0) - lVar2;
  uVar1 = 0;
  if (lVar3 != 0) {
    uVar1 = lVar3 * 0x40 - 1;
  }
  uVar4 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xd0);
  if (uVar1 == uVar4) {
    FUN_0166fd0c(param_1 + 0x90);
    uVar4 = *(long *)(param_1 + 0xd0) + *(long *)(param_1 + 0xd8);
    lVar2 = *(long *)(param_1 + 0x98);
    if (*(long *)(param_1 + 0xa0) == lVar2) goto LAB_01673b4c;
  }
  else if (*(long *)(param_1 + 0xa0) == lVar2) {
LAB_01673b4c:
    lVar2 = 0;
    goto LAB_01673b08;
  }
  lVar2 = *(long *)(lVar2 + (uVar4 >> 6 & 0x3fffffffffffff8)) + (uVar4 & 0x1ff) * 8;
LAB_01673b08:
  FUN_0166af20(param_1 + 0xe0,lVar2,param_2);
  *(long *)(param_1 + 0xd8) = *(long *)(param_1 + 0xd8) + 1;
  return;
}


