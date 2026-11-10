/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03322094; name: FUN_03322094
 */


void FUN_03322094(long *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_03322154();
  plVar3 = (long *)*param_2;
  if (plVar3 == (long *)0x0) {
    lVar2 = param_2[1];
    lVar1 = param_2[2];
    param_1[2] = lVar2;
    *param_1 = lVar2;
    param_1[1] = lVar1 + lVar2;
    param_1[4] = 0;
    param_1[7] = param_2[3];
  }
  else {
    FUN_032d645c(plVar3);
    lVar2 = param_1[6];
    param_1[6] = (long)plVar3;
    if (lVar2 != 0) {
      FUN_032d647c();
    }
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1);
    param_1[7] = 0;
  }
  param_1[3] = 1;
  return;
}


