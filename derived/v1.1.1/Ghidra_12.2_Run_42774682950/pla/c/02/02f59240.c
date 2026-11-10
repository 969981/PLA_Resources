/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f59240; name: FUN_02f59240
 */


ulong FUN_02f59240(int param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  lVar1 = (long)param_1 * 0x820;
  uVar3 = *(ulong *)(&DAT_0442c150 + lVar1);
  uVar4 = *(ulong *)(&DAT_0442c120 + lVar1);
  if (param_2 <= uVar3) {
    param_2 = uVar3;
  }
  if (*(ulong *)(&DAT_0442c138 + lVar1) < uVar4) {
    uVar5 = param_2 * *(ulong *)(&DAT_0442c138 + lVar1);
    uVar2 = 0;
    if (uVar4 != 0) {
      uVar2 = uVar5 / uVar4;
    }
    if (uVar5 != uVar2 * uVar4) {
      uVar4 = 0;
      if (uVar3 != 0) {
        uVar4 = param_2 / uVar3;
      }
      param_2 = uVar3 + uVar4 * uVar3;
    }
  }
  return param_2;
}


