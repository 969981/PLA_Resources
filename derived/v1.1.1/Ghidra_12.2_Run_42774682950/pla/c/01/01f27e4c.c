/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f27e4c; name: FUN_01f27e4c
 */


long FUN_01f27e4c(long *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = param_2[1];
  plVar3 = param_1 + 3;
  lVar5 = *param_1;
  lVar1 = lVar2;
  if (lVar5 != param_3) {
    lVar4 = param_3;
    do {
      lVar4 = lVar4 + -0x10;
      FUN_01f274c8(plVar3,lVar1 + -0x10,lVar4);
      lVar1 = param_2[1] + -0x10;
      param_2[1] = lVar1;
    } while (lVar5 != lVar4);
  }
  lVar5 = param_1[1];
  if (lVar5 != param_3) {
    FUN_01f274c8(plVar3,param_2[2],param_3);
    lVar1 = param_2[2] + 0x10;
    param_2[2] = lVar1;
    while (param_3 = param_3 + 0x10, param_3 != lVar5) {
      FUN_01f274c8(plVar3,lVar1,param_3);
      lVar1 = param_2[2] + 0x10;
      param_2[2] = lVar1;
    }
    lVar1 = param_2[1];
  }
  lVar5 = *param_1;
  *param_1 = lVar1;
  param_2[1] = lVar5;
  lVar1 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar1;
  lVar1 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar1;
  *param_2 = param_2[1];
  return lVar2;
}


