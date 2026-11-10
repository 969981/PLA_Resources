/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b21e94; name: FUN_02b21e94
 */


void FUN_02b21e94(undefined4 param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = (*(long *)(param_2 + 0xa8) + *(long *)(param_2 + 0xa0)) - 1;
  lVar3 = *(long *)(*(long *)(param_2 + 0x68) + (uVar2 / 0x12) * 8);
  lVar4 = (uVar2 % 0x12) * 0xd8;
  lVar5 = (long)*(int *)(param_3 + 4) * 0x1b0;
  puVar1 = (undefined4 *)FUN_00aef474(*(long *)(lVar3 + lVar4) + lVar5 + 0x70,param_4);
  *puVar1 = param_1;
  *(undefined1 *)(*(long *)(lVar3 + lVar4) + lVar5 + 0x1a9) = 1;
  return;
}


