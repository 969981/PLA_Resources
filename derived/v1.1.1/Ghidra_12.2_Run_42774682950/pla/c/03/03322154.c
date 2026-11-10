/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03322154; name: FUN_03322154
 */


void FUN_03322154(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[6];
  if (plVar1 == (long *)0x0) {
    if ((param_1[3] != 0) && ((long *)param_1[7] != (long *)0x0)) {
      *(long *)param_1[7] = *param_1 - param_1[2];
    }
  }
  else {
    (**(code **)(*plVar1 + 0x28))(plVar1,param_1);
    lVar2 = param_1[6];
    param_1[6] = 0;
    if (lVar2 != 0) {
      FUN_032d647c();
    }
  }
  param_1[3] = 0;
  return;
}


