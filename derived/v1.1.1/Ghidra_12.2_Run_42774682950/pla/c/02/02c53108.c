/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c53108; name: FUN_02c53108
 */


void FUN_02c53108(uint param_1,long param_2,byte *param_3)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  long lVar4;
  
  *param_3 = 0;
  if ((int)param_1 < 0x38a) {
    plVar1 = (long *)(&DAT_043f23a0)[(ulong)param_1 * 4];
    if ((long *)plVar1[1] != (long *)*plVar1) {
      bVar3 = 0;
      uVar2 = 0;
      lVar4 = *(long *)*plVar1;
      while( true ) {
        if (lVar4 != 0) {
          *(short *)(param_2 + (ulong)bVar3 * 2) = (short)uVar2;
          bVar3 = *param_3 + 1;
          *param_3 = bVar3;
          plVar1 = (long *)(&DAT_043f23a0)[(ulong)param_1 * 4];
        }
        uVar2 = uVar2 + 1;
        if ((ulong)(plVar1[1] - *plVar1 >> 3) <= uVar2) break;
        lVar4 = *(long *)(*plVar1 + uVar2 * 8);
      }
    }
  }
  return;
}


