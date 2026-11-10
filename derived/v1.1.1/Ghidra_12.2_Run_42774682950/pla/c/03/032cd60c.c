/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032cd60c; name: FUN_032cd60c
 */


long FUN_032cd60c(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  plVar1 = *(long **)(param_1 + 0x58);
  if (plVar1 == (long *)0x0) {
    lVar4 = 0;
    for (; param_2 != (long *)0x0; param_2 = (long *)*param_2) {
      lVar2 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
                        (*(long **)(param_1 + 0x50),param_2,*(undefined8 *)(param_1 + 0x28));
      lVar4 = lVar2 + lVar4;
    }
  }
  else {
    lVar4 = 0;
    if (param_2 != (long *)0x0) {
      while( true ) {
        lVar2 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,0x20);
        lVar3 = (**(code **)(**(long **)(param_1 + 0x50) + 0x40))
                          (*(long **)(param_1 + 0x50),param_2[1],*(undefined8 *)(param_1 + 0x28));
        param_2 = (long *)*param_2;
        lVar4 = lVar2 + lVar4 + lVar3;
        if (param_2 == (long *)0x0) break;
        plVar1 = *(long **)(param_1 + 0x58);
      }
    }
  }
  return lVar4;
}


