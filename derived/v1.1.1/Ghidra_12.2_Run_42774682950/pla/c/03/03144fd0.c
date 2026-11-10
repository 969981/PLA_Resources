/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03144fd0; name: FUN_03144fd0
 */


ulong FUN_03144fd0(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  uVar1 = *(uint *)((long)param_1 + 0xc);
  if (0 < (int)uVar1) {
    uVar2 = (ulong)((int)param_2[1] * -0x61c8864f & uVar1);
    lVar3 = *param_1;
    lVar4 = *(long *)(lVar3 + uVar2 * 0x18);
    if (lVar4 != -1) {
      do {
        lVar5 = *(long *)(lVar3 + uVar2 * 0x18 + 8);
        if (lVar5 == -1) break;
        if ((lVar4 == *param_2) && (lVar5 == param_2[1])) {
          return uVar2;
        }
        uVar2 = (ulong)((int)uVar2 + 1U & uVar1);
        lVar4 = *(long *)(lVar3 + uVar2 * 0x18);
      } while (lVar4 != -1);
    }
  }
  return (long)(int)uVar1 + 1;
}


