/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025880e8; name: FUN_025880e8
 */


void FUN_025880e8(long param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = *(ulong *)(param_1 + 0x98);
  if (uVar2 == 0) {
    FUN_02589040(param_1 + 0x58);
    uVar2 = *(ulong *)(param_1 + 0x98);
  }
  plVar1 = (long *)(*(long *)(param_1 + 0x60) + (uVar2 / 0x55) * 8);
  lVar4 = *plVar1;
  lVar3 = 0;
  if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) {
    lVar3 = lVar4 + (uVar2 % 0x55) * 0x30;
  }
  if (lVar3 == lVar4) {
    lVar3 = plVar1[-1] + 0xff0;
  }
  FUN_02588f48(param_1 + 0xa8,lVar3 + -0x30,param_2);
  *(long *)(param_1 + 0x98) = *(long *)(param_1 + 0x98) + -1;
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  return;
}


