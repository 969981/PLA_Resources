/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032eb7e0; name: FUN_032eb7e0
 */


void FUN_032eb7e0(code *UNRECOVERED_JUMPTABLE,long param_2,long param_3,ulong *param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  ulong *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  puVar2 = param_4;
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
      goto LAB_032eb868;
    }
    if ((*puVar2 & 1) != 0) break;
    puVar2 = (ulong *)puVar2[1];
    if (puVar2 == (ulong *)0x0) {
      uVar1 = 0;
LAB_032eb868:
      if (uVar1 != param_6) {
LAB_032eb8a4:
        if (0 < (int)param_5) {
          lVar4 = 0;
          uVar5 = (ulong)param_5;
          do {
            (*UNRECOVERED_JUMPTABLE)(param_2 + lVar4,param_3 + lVar4,param_4,1);
            lVar4 = lVar4 + (int)param_6;
            uVar5 = uVar5 - 1;
          } while (uVar5 != 0);
        }
        return;
      }
LAB_032eb870:
                    /* WARNING: Could not recover jumptable at 0x032eb894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_5);
      return;
    }
  }
  if (param_6 != 0) goto LAB_032eb8a4;
  goto LAB_032eb870;
}


