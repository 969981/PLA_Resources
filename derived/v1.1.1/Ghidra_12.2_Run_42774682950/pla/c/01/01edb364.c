/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01edb364; name: FUN_01edb364
 */


void FUN_01edb364(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    FUN_00151490(0);
  }
  else {
    FUN_00151e00(lVar1,0xfff0b9d8,(long)(int)param_2[1]);
    if (*param_2 != lVar1) {
      FUN_0014fe00(*param_2,lVar1,1);
    }
  }
  FUN_01edb3ec(*param_2,param_3);
  FUN_0107ec80(param_1,param_2);
  return;
}


