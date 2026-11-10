/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001fa440; name: FUN_001fa440
 */


ulong FUN_001fa440(long *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(param_1[0x84] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001fa454. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[0x84] + 0x58))(param_1);
    return uVar2;
  }
  if (param_3 < 2) {
    return 0;
  }
  lVar4 = *param_1;
  uVar3 = *(uint *)(lVar4 + 0x1c0);
  bVar1 = (uVar3 & 0x15) == 1;
  if (bVar1) {
    *param_2 = (int)param_1[0x8a];
    uVar3 = *(uint *)(lVar4 + 0x1c0);
  }
  uVar2 = (ulong)bVar1;
  if ((uVar3 & 0x2a) == 2) {
    if ((bVar1 == 0) || ((int)param_1[0x8a] != *(int *)((long)param_1 + 0x454))) {
      uVar3 = bVar1 | 0x10;
      param_2[(uint)bVar1] = *(int *)((long)param_1 + 0x454);
    }
    else {
      uVar3 = 0x10;
    }
    uVar2 = (ulong)(1 << (ulong)uVar3 | (uint)bVar1);
  }
  return uVar2;
}


