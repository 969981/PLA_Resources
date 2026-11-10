/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c08cc; name: FUN_031c08cc
 */


long FUN_031c08cc(long *param_1,int *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    iVar2 = *param_2;
    uVar4 = (iVar2 * -0x61c8864f & 0xff00ff00U) >> 8 | (iVar2 * -0x61c8864f & 0xff00ffU) << 8;
    uVar6 = (ulong)((uVar4 >> 0x10 | uVar4 << 0x10) & uVar1);
    lVar5 = *param_1;
    iVar3 = *(int *)(lVar5 + uVar6 * 8);
    if (iVar3 != -1) {
      if (iVar3 != iVar2) {
        do {
          uVar6 = (ulong)((int)uVar6 + 1U & uVar1);
          iVar3 = *(int *)(lVar5 + uVar6 * 8);
          if (iVar3 == -1) {
            return param_3;
          }
        } while (iVar3 != iVar2);
      }
      param_3 = lVar5 + uVar6 * 8 + 4;
    }
  }
  return param_3;
}


