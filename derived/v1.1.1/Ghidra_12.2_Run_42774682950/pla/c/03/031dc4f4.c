/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031dc4f4; name: FUN_031dc4f4
 */


uint * FUN_031dc4f4(long *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *param_2 * -0x61c8864f;
  lVar4 = param_1[2];
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar5 = (ulong)(*(uint *)(param_1 + 3) & uVar3);
  iVar2 = *(int *)(lVar4 + uVar5 * 8 + 4);
  while( true ) {
    if (iVar2 < 0) {
      return (uint *)0x0;
    }
    puVar1 = (uint *)(lVar4 + uVar5 * 8);
    if ((*puVar1 == uVar3) && (*(int *)(*param_1 + (long)iVar2 * 0x28) == *param_2)) break;
    uVar5 = ((long)(uVar5 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar2 = *(int *)(lVar4 + uVar5 * 8 + 4);
  }
  return puVar1;
}


