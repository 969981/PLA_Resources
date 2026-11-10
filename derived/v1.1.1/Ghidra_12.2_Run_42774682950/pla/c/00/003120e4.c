/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003120e4; name: FUN_003120e4
 */


undefined8 FUN_003120e4(long *param_1)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *param_1;
  if (0 < (int)((ulong)(param_1[1] - lVar1) >> 4)) {
    lVar4 = 0;
    lVar5 = 0;
    uVar2 = *(uint *)(lVar1 + 4);
    while( true ) {
      if (uVar2 < 5) {
                    /* WARNING: Could not recover jumptable at 0x003121c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)(&UNK_0031213c + (ulong)(byte)(&DAT_039f9c2d)[uVar2] * 4))();
        return uVar3;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
      if ((int)((ulong)(param_1[1] - lVar1) >> 4) <= lVar5) break;
      uVar2 = *(uint *)(lVar1 + lVar4 + 4);
    }
  }
  return 0;
}


