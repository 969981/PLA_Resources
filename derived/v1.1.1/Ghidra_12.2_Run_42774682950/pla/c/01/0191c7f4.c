/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0191c7f4; name: FUN_0191c7f4
 */


void FUN_0191c7f4(long *param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = param_1[1];
  if (lVar4 == lVar5) {
    lVar2 = param_2[1];
  }
  else {
    plVar1 = param_1 + 3;
    FUN_0191ca4c(plVar1,param_2[1] + -6,lVar4 + -6);
    lVar3 = param_2[1];
    lVar2 = lVar3 + -6;
    param_2[1] = lVar2;
    if (lVar4 + -6 != lVar5) {
      FUN_0191ca4c(plVar1,lVar3 + -0xc,lVar4 + -0xc);
      lVar3 = param_2[1];
      lVar2 = lVar3 + -6;
      param_2[1] = lVar2;
      if (lVar4 + -0xc != lVar5) {
        do {
          FUN_0191ca4c(plVar1,lVar3 + -0xc,lVar4 + -0x12);
          lVar3 = param_2[1];
          lVar4 = lVar4 + -6;
          lVar2 = lVar3 + -6;
          param_2[1] = lVar2;
        } while (lVar5 + 0xc != lVar4);
      }
    }
    lVar5 = *param_1;
  }
  *param_1 = lVar2;
  param_2[1] = lVar5;
  lVar5 = param_1[1];
  param_1[1] = param_2[2];
  param_2[2] = lVar5;
  lVar5 = param_1[2];
  param_1[2] = param_2[3];
  param_2[3] = lVar5;
  *param_2 = param_2[1];
  return;
}


