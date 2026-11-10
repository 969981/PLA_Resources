/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03398cb8; name: FUN_03398cb8
 */


void FUN_03398cb8(long *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  long lVar5;
  uint local_18 [2];
  
  lVar5 = (long)(int)param_1[1] + -1;
  piVar3 = (int *)(*param_1 + lVar5 * 0x10);
  iVar2 = *piVar3;
  uVar4 = *(undefined8 *)(piVar3 + 2);
  *(int *)(param_1 + 1) = (int)lVar5;
  piVar3 = (int *)param_1[0x22];
  uVar1 = (*piVar3 - (piVar3[4] + (int)uVar4)) + piVar3[8];
  uVar1 = (uVar1 & 0xff00ff00 | iVar2 << 0x1e) >> 8 | (uVar1 & 0xff00ff) << 8;
  local_18[0] = uVar1 >> 0x10 | uVar1 << 0x10;
  FUN_03398ebc(piVar3,uVar4,local_18);
  return;
}


