/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00265cec; name: FUN_00265cec
 */


undefined8 FUN_00265cec(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_2 != 0) {
    do {
      lVar2 = *(long *)(param_2 + 0x80);
      if ((*(int *)(param_2 + 0x18) == *(int *)((long)param_1 + 0x2c)) &&
         (*(long *)(param_2 + 0x98) != 0)) {
        lVar3 = 0;
        lVar4 = *(long *)(param_2 + 0x440);
        while( true ) {
          while (lVar1 = lVar4, lVar1 != 0) {
            lVar4 = *(long *)(lVar1 + 0x80);
            if ((*(int *)(lVar1 + 0x18) == *(int *)((long)param_1 + 0x2c)) &&
               (*(long *)(lVar1 + 0x98) != 0)) {
              FUN_0026e3b0(lVar1,*param_1,1);
              FUN_00282cd4(param_1[4],lVar1);
            }
          }
          lVar3 = lVar3 + 1;
          if (lVar3 == 0x10) break;
          lVar4 = *(long *)(param_2 + lVar3 * 8 + 0x440);
        }
        FUN_0026e3b0(param_2,*param_1,1);
        FUN_00282cd4(param_1[4],param_2);
      }
      param_2 = lVar2;
    } while (lVar2 != 0);
  }
  return 1;
}


