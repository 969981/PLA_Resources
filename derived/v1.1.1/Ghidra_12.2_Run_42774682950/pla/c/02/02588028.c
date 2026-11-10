/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02588028; name: FUN_02588028
 */


void FUN_02588028(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x60);
  lVar3 = *(long *)(param_1 + 0x68);
  uVar1 = 0;
  if (lVar3 - lVar2 != 0) {
    uVar1 = (lVar3 - lVar2 >> 3) * 0x55 - 1;
  }
  uVar4 = *(long *)(param_1 + 0xa0) + *(long *)(param_1 + 0x98);
  if (uVar1 == uVar4) {
    FUN_02588278(param_1 + 0x58);
    uVar4 = *(long *)(param_1 + 0x98) + *(long *)(param_1 + 0xa0);
    lVar2 = *(long *)(param_1 + 0x60);
    lVar3 = *(long *)(param_1 + 0x68);
  }
  if (lVar3 == lVar2) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar2 + (uVar4 / 0x55) * 8) + (uVar4 % 0x55) * 0x30;
  }
  FUN_02588f48(param_1 + 0xa8,lVar2,param_2);
  *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
  return;
}


