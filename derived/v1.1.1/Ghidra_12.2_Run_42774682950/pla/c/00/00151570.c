/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00151570; name: FUN_00151570
 */


long FUN_00151570(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  if (param_2 == 0) {
    lVar3 = 0;
    *(undefined4 *)(*(long *)(param_1 + 0x10) + 8) = 0;
  }
  else {
    lVar1 = FUN_0016d990(param_1);
    plVar2 = *(long **)(param_1 + 0x10);
    *plVar2 = lVar1;
    lVar3 = lVar1 + 0x18;
    *(uint *)(plVar2 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  }
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
  if (0 < *(long *)(*(long *)(param_1 + 0x18) + 0x18)) {
    FUN_0015dc70(param_1);
  }
  return lVar3;
}


