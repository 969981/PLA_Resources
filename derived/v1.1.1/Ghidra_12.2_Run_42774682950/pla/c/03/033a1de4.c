/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 033a1de4; name: FUN_033a1de4
 */


uint * FUN_033a1de4(long *param_1,long *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  lVar5 = *param_2;
  uVar2 = (int)lVar5 * -0x61c8864f;
  uVar3 = (int)((ulong)lVar5 >> 0x20) * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar4 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  lVar6 = param_1[2];
  uVar2 = uVar4 + (uVar4 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  uVar7 = (ulong)(uVar2 & *(uint *)(param_1 + 3));
  iVar8 = *(int *)(lVar6 + uVar7 * 8 + 4);
  if (iVar8 < 0) {
    return (uint *)0x0;
  }
  while ((puVar1 = (uint *)(lVar6 + uVar7 * 8), *puVar1 != uVar2 ||
         (*(long *)(*param_1 + (long)iVar8 * 0x18) != lVar5))) {
    uVar7 = ((long)(uVar7 << 3) >> 3) + 1U & (long)(int)*(uint *)(param_1 + 3);
    iVar8 = *(int *)(lVar6 + uVar7 * 8 + 4);
    if (iVar8 < 0) {
      return (uint *)0x0;
    }
  }
  return puVar1;
}


