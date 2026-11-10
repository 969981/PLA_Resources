/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c06a4; name: FUN_031c06a4
 */


ulong FUN_031c06a4(long *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    iVar2 = *param_2;
    uVar4 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
    uVar5 = (ulong)((uVar4 >> 0x10 | uVar4 << 0x10) & uVar1);
    iVar3 = *(int *)(*param_1 + uVar5 * 8);
    if (iVar3 != -1) {
      if (iVar3 == iVar2) {
        return uVar5;
      }
      while( true ) {
        uVar5 = (ulong)((int)uVar5 + 1U & uVar1);
        iVar3 = *(int *)(*param_1 + uVar5 * 8);
        if (iVar3 == -1) break;
        if (iVar3 == iVar2) {
          return uVar5;
        }
      }
    }
  }
  return (long)(int)uVar1 + 1;
}


