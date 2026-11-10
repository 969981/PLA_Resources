/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032ec790; name: FUN_032ec790
 */


void FUN_032ec790(code *UNRECOVERED_JUMPTABLE,long param_2,ulong *param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar2 = param_3;
  while( true ) {
    uVar3 = (uint)*puVar2;
    if ((uVar3 >> 0x14 & 1) != 0) {
      uVar1 = 0;
      if (puVar2 != (ulong *)0x0) {
        uVar3 = (uVar3 & 0xfffff) - (uVar3 >> 1 & 0x55555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar1 = (uint)(ushort)puVar2[(ulong)((uVar3 + (uVar3 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18)
                                     + 2];
      }
      goto LAB_032ec810;
    }
    if ((*puVar2 & 1) != 0) break;
    puVar2 = (ulong *)puVar2[1];
    if (puVar2 == (ulong *)0x0) {
      uVar1 = 0;
LAB_032ec810:
      if (uVar1 != param_5) {
LAB_032ec844:
        if (0 < (int)param_4) {
          uVar4 = (ulong)param_4;
          do {
            (*UNRECOVERED_JUMPTABLE)(param_2,param_3,1);
            param_2 = param_2 + (int)param_5;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
        }
        return;
      }
LAB_032ec818:
                    /* WARNING: Could not recover jumptable at 0x032ec834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4);
      return;
    }
  }
  if (param_5 != 0) goto LAB_032ec844;
  goto LAB_032ec818;
}


