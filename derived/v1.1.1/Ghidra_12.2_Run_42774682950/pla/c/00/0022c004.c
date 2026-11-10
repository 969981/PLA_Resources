/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022c004; name: FUN_0022c004
 */


long FUN_0022c004(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_0024baec(param_1 + 7,param_3);
  if (lVar1 == 0) {
    for (plVar2 = (long *)param_1[2]; param_1 + 1 != plVar2; plVar2 = (long *)plVar2[1]) {
      lVar1 = FUN_0024baec(plVar2[2] + 0xa0,param_3);
      if (lVar1 != 0) {
        return lVar1;
      }
    }
    lVar1 = FUN_0022c0cc(param_1,param_3);
    lVar1 = FUN_0024b988(lVar1 + 0xa0,param_3,1);
    if (lVar1 != 0) {
      (**(code **)(*param_1 + 0xa8))(param_1,lVar1,param_2,param_3);
    }
  }
  return lVar1;
}


