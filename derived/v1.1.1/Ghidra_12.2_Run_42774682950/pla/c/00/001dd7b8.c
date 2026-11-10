/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001dd7b8; name: FUN_001dd7b8
 */


long FUN_001dd7b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  FUN_001f43b0(param_1,2,2);
  lVar2 = *(long *)(param_1 + 0xf70);
  if ((lVar2 == 0) || (*(long *)(lVar2 + 0x810) == 0)) {
LAB_001dd864:
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = 0;
    while( true ) {
      plVar4 = *(long **)(lVar2 + lVar5 * 8);
      if (plVar4 != (long *)0x0) {
        do {
          if (plVar4[5] == 0) {
            lVar2 = lVar3;
          }
          else {
            lVar1 = FUN_001ddac8(plVar4);
            if (lVar1 == 0) {
              FUN_001f86a8(lVar3);
              goto LAB_001dd864;
            }
            lVar2 = FUN_001f8588(lVar3,lVar1);
            if (lVar2 == 0) {
              FUN_002044d4(lVar1);
              FUN_001f86a8(lVar3);
              lVar3 = lVar2;
              goto LAB_001dd868;
            }
          }
          lVar3 = lVar2;
          plVar4 = (long *)*plVar4;
        } while (plVar4 != (long *)0x0);
      }
      lVar5 = lVar5 + 1;
      if (lVar5 == 0x100) break;
      lVar2 = *(long *)(param_1 + 0xf70);
    }
  }
LAB_001dd868:
  FUN_001f43f8(param_1,2);
  return lVar3;
}


