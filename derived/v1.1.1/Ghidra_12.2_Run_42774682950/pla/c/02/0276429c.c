/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0276429c; name: FUN_0276429c
 */


void FUN_0276429c(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_00612290();
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = uVar2;
  if (param_2[1] - *param_2 != 0) {
    FUN_02764488(param_1,param_2[1] - *param_2 >> 5);
    lVar4 = *param_2;
    lVar1 = param_2[1];
    if (lVar4 != lVar1) {
      lVar3 = param_1[1];
      do {
        FUN_02762fb0(lVar3,lVar4);
        lVar4 = lVar4 + 0x20;
        lVar3 = param_1[1] + 0x20;
        param_1[1] = lVar3;
      } while (lVar1 != lVar4);
    }
  }
  return;
}


