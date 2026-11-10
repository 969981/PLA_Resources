/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e62848; name: FUN_02e62848
 */


long FUN_02e62848(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  
  uVar3 = FUN_02e628bc();
  if ((uVar3 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x10);
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 8) + (ulong)(param_2 - uVar2 * uVar1) * 8);
    while( true ) {
      if (plVar5 == (long *)0x0) {
        lVar4 = FUN_02e62918(param_1,param_2);
        return lVar4;
      }
      if (*(uint *)(plVar5 + 1) == param_2) break;
      plVar5 = (long *)*plVar5;
    }
    lVar4 = (long)plVar5 + 0xc;
  }
  return lVar4;
}


