/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020c178; name: FUN_0020c178
 */


undefined8 FUN_0020c178(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = param_1[1] - *param_1;
  if (uVar3 < param_2) {
    uVar3 = uVar3 * 2;
    if (param_2 <= uVar3) {
      param_2 = uVar3;
    }
    lVar1 = FUN_0020c784(param_3,*param_1,param_2);
    if (lVar1 == 0) {
      uVar2 = 0xfffffc7b;
    }
    else {
      lVar4 = *param_1;
      uVar2 = 0;
      param_1[2] = lVar1 + (param_1[2] - lVar4);
      param_1[3] = lVar1 + (param_1[3] - lVar4);
      *param_1 = lVar1;
      param_1[4] = lVar1 + (param_1[4] - lVar4);
      param_1[1] = lVar1 + param_2;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


