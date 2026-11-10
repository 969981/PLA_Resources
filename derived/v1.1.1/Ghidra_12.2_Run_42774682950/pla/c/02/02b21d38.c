/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21d38; name: FUN_02b21d38
 */


void FUN_02b21d38(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  uVar3 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  lVar5 = *(long *)(*(long *)(param_1 + 0x68) + (uVar3 / 0x12) * 8);
  lVar2 = (long)*(int *)(param_2 + 4) * 0x1b0;
  lVar4 = (uVar3 % 0x12) * 0xd8;
  lVar1 = *(long *)(lVar5 + lVar4) + lVar2;
  *(undefined8 *)(lVar1 + 0x48) = param_3[1];
  *(undefined8 *)(lVar1 + 0x40) = *param_3;
  *(undefined1 *)(*(long *)(lVar5 + lVar4) + lVar2 + 0x1a9) = 1;
  return;
}


