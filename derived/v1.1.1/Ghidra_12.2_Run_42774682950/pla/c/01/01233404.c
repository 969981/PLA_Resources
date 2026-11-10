/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01233404; name: FUN_01233404
 */


void FUN_01233404(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  
  pbVar2 = *(byte **)(param_1 + 0x98);
  lVar1 = *(long *)(param_1 + 0xa0) - (long)pbVar2;
  if (lVar1 != 0) {
    uVar3 = 0;
    do {
      if (*pbVar2 == param_2 && pbVar2[1] == param_3) {
        return;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0x40;
    } while (uVar3 < (ulong)(lVar1 >> 6));
  }
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",0);
}


