/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00311a94; name: FUN_00311a94
 */


ulong FUN_00311a94(long *param_1,ulong param_2,ulong *param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *param_1;
  if ((int)((ulong)(param_1[1] - lVar3) >> 4) < 1) {
    return param_2;
  }
  lVar4 = 0;
  if (param_2 < *param_3) goto LAB_00311b1c;
  do {
    param_2 = FUN_00310ec4(param_3,param_2);
    uVar1 = *(uint *)(lVar3 + 4);
    while( true ) {
      if (uVar1 < 5) {
                    /* WARNING: Could not recover jumptable at 0x00311b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(&UNK_00311b3c + (ulong)(byte)(&DAT_039f9c28)[uVar1] * 4))();
        return uVar2;
      }
      lVar4 = lVar4 + 1;
      if ((int)((ulong)(param_1[1] - *param_1) >> 4) <= lVar4) {
        return param_2;
      }
      lVar3 = *param_1 + lVar4 * 0x10;
      if (*param_3 <= param_2) break;
LAB_00311b1c:
      uVar1 = *(uint *)(lVar3 + 4);
    }
  } while( true );
}


