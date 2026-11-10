/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040bbb0; name: FUN_0040bbb0
 */


long FUN_0040bbb0(long *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_2 == 0) {
    return 0xffffffff;
  }
  lVar6 = (long)(int)param_1[1];
  if ((int)param_1[1] < 1) {
    return 0;
  }
  lVar4 = 0;
  uVar5 = (ulong)param_2;
  do {
    lVar1 = lVar6 * 4;
    lVar6 = lVar6 + -1;
    uVar2 = (ulong)*(uint *)(*param_1 + -4 + lVar1) | lVar4 << 0x20;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = uVar2 / uVar5;
    }
    lVar4 = uVar2 - uVar3 * uVar5;
  } while (0 < lVar6);
  return lVar4;
}


