/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0337a4d8; name: FUN_0337a4d8
 */


uint * FUN_0337a4d8(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  lVar7 = *param_2;
  uVar2 = (int)lVar7 * -0x61c8864f;
  uVar8 = (int)((ulong)lVar7 >> 0x20) * -0x61c8864f;
  uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
  uVar3 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar2 = (uVar8 & 0xff00ff00) >> 8 | (uVar8 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  uVar1 = *(uint *)(param_1 + 3);
  lVar5 = param_1[2];
  uVar2 = uVar3 + (uVar3 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2;
  uVar6 = (ulong)(uVar2 & uVar1);
  puVar4 = (uint *)(lVar5 + uVar6 * 8);
  uVar8 = puVar4[1];
  if (-1 < (int)uVar8) {
    if (lVar7 == 0) {
      while ((*puVar4 != uVar2 || (*(long *)(*param_1 + (long)(int)uVar8 * 0x30) != 0))) {
        uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)uVar1;
        puVar4 = (uint *)(lVar5 + uVar6 * 8);
        uVar8 = puVar4[1];
        if ((int)uVar8 < 0) {
          return (uint *)0x0;
        }
      }
      return puVar4;
    }
    do {
      if (((*puVar4 == uVar2) && (*(long *)(*param_1 + (long)(int)uVar8 * 0x30) == lVar7)) &&
         (*(long *)(*param_1 + (long)(int)uVar8 * 0x30 + 8) == param_2[1])) {
        return puVar4;
      }
      uVar6 = ((long)(uVar6 << 3) >> 3) + 1U & (long)(int)uVar1;
      puVar4 = (uint *)(lVar5 + uVar6 * 8);
      uVar8 = puVar4[1];
    } while (-1 < (int)uVar8);
  }
  return (uint *)0x0;
}


