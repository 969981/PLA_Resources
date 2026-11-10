/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21f30; name: FUN_02b21f30
 */


void FUN_02b21f30(long param_1,long param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  uVar3 = (*(long *)(param_1 + 0xa8) + *(long *)(param_1 + 0xa0)) - 1;
  lVar4 = *(long *)(*(long *)(param_1 + 0x68) + (uVar3 / 0x12) * 8);
  lVar5 = (uVar3 % 0x12) * 0xd8;
  lVar6 = (long)*(int *)(param_2 + 4) * 0x1b0;
  puVar2 = (undefined8 *)FUN_00aefbe4(*(long *)(lVar4 + lVar5) + lVar6 + 0xd8,param_3);
  uVar1 = param_4[1];
  *puVar2 = *param_4;
  puVar2[1] = uVar1;
  *(undefined1 *)(*(long *)(lVar4 + lVar5) + lVar6 + 0x1a9) = 1;
  return;
}


