/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fb4540; name: FUN_02fb4540
 */


ulong FUN_02fb4540(long *param_1,uint param_2)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  
  if ((int)*(uint *)(param_1 + 1) < 1) {
    return 0xffffffff;
  }
  uVar2 = 0;
  pbVar3 = (byte *)((long)param_1 + *param_1 + 3);
  bVar1 = *pbVar3;
  if ((bVar1 & 1) == 0) goto LAB_02fb4580;
  do {
    do {
      uVar2 = uVar2 + 1;
      pbVar3 = pbVar3 + 4;
      if (*(uint *)(param_1 + 1) == uVar2) {
        return 0xffffffff;
      }
      bVar1 = *pbVar3;
    } while ((bVar1 & 1) != 0);
LAB_02fb4580:
  } while (param_2 != bVar1 >> 1);
  return uVar2 & 0xffffffff;
}


