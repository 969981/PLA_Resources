/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f00e70; name: FUN_02f00e70
 */


/* WARNING: Removing unreachable block (ram,0x02f00e8c) */

void FUN_02f00e70(long param_1,uint param_2,long param_3)

{
  float *pfVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      do {
        lVar4 = lVar3 * 4;
        lVar3 = lVar3 + 2;
        pfVar1 = (float *)(param_1 + lVar4);
        pfVar2 = (float *)(param_3 + lVar4);
        *pfVar2 = *pfVar1 * 57.295776;
        pfVar2[1] = pfVar1[1] * 57.295776;
      } while ((ulong)param_2 - ((ulong)param_2 & 1) != lVar3);
      if ((param_2 & 1) == 0) {
        return;
      }
    }
    *(float *)(param_3 + lVar3 * 4) = *(float *)(param_1 + lVar3 * 4) * 57.295776;
  }
  return;
}


