/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00342b48; name: FUN_00342b48
 */


long FUN_00342b48(long param_1,ulong param_2,int param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  
  if (*(int *)(param_2 + 0x7c) != 0) {
    plVar5 = *(long **)(*(long *)(param_1 + 0x20) + 0x188);
    if (plVar5 != (long *)0x0) {
      plVar1 = (long *)(*(long *)(param_1 + 0x20) + 0x188);
      uVar6 = plVar5[4];
      plVar4 = plVar1;
      if (param_2 <= uVar6) goto LAB_00342b98;
LAB_00342b78:
      do {
        plVar5 = plVar5 + 1;
        plVar7 = plVar4;
        do {
          plVar2 = (long *)*plVar5;
          plVar4 = plVar7;
          while( true ) {
            plVar5 = plVar2;
            if (plVar5 == (long *)0x0) {
              if ((((plVar4 != plVar1) && ((ulong)plVar4[4] <= param_2)) &&
                  (((ulong)plVar4[4] < param_2 || ((int)plVar4[5] <= param_3)))) && (plVar4[6] != 0)
                 ) {
                return plVar4[6];
              }
              goto LAB_00342bec;
            }
            uVar6 = plVar5[4];
            if (uVar6 < param_2) goto LAB_00342b78;
LAB_00342b98:
            if (uVar6 <= param_2) break;
            plVar2 = (long *)*plVar5;
            plVar4 = plVar5;
          }
          plVar7 = plVar5;
        } while (param_3 <= (int)plVar5[5]);
      } while( true );
    }
LAB_00342bec:
    if ((*(long *)(param_1 + 0x18) != 0) && (lVar3 = FUN_00342b48(), lVar3 != 0)) {
      return lVar3;
    }
  }
  return 0;
}


