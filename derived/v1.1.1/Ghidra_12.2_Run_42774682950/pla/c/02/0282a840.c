/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0282a840; name: FUN_0282a840
 */


long * FUN_0282a840(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 != param_2) {
    do {
      lVar2 = *(long *)(*param_1 + 0x58);
      plVar1 = *(long **)(*param_1 + 0x70);
      if (plVar1 == (long *)0x0) {
        lVar3 = *param_3;
      }
      else {
        (**(code **)(*plVar1 + 0x18))(plVar1);
        lVar3 = *param_3;
        (**(code **)(*plVar1 + 0x20))(plVar1);
      }
      if (lVar2 == lVar3) {
        return param_1;
      }
      param_1 = param_1 + 1;
    } while (param_2 != param_1);
    param_1 = param_2;
  }
  return param_1;
}


