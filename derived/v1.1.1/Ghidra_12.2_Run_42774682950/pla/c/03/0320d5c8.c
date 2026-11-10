/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320d5c8; name: FUN_0320d5c8
 */


uint * FUN_0320d5c8(long *param_1,int *param_2)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  lVar5 = param_1[2];
  uVar3 = (param_2[1] << 5 ^ *param_2 << 0x1b ^ param_2[2]) * -0x61c8864f;
  uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar4 = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar6 = (ulong)(uVar4 & *(uint *)(param_1 + 3));
  uVar3 = *(uint *)(lVar5 + uVar6 * 8 + 4);
  if ((int)uVar3 < 0) {
    return (uint *)0x0;
  }
  while( true ) {
    puVar1 = (uint *)(lVar5 + uVar6 * 8);
    if ((((*puVar1 == uVar4) &&
         (*(int *)(*param_1 + (-(ulong)(uVar3 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar3 << 4)) ==
          *param_2)) &&
        (lVar2 = *param_1 + (long)(int)uVar3 * 0x10, *(int *)(lVar2 + 4) == param_2[1])) &&
       (*(uint *)(lVar2 + 8) == param_2[2])) break;
    uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    uVar3 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if ((int)uVar3 < 0) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}


