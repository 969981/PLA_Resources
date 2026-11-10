/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02763a78; name: FUN_02763a78
 */


void FUN_02763a78(undefined8 *param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[3];
  param_1[5] = param_3[2];
  param_1[6] = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  if (param_2[1] - *param_2 != 0) {
    FUN_02763b10(param_1,(param_2[1] - *param_2 >> 3) * -0x5555555555555555);
    lVar6 = *param_2;
    lVar4 = param_2[1];
    if (lVar6 != lVar4) {
      lVar5 = param_1[1];
      do {
        FUN_02763b9c(param_1 + 3,lVar5,lVar6);
        lVar6 = lVar6 + 0x18;
        lVar5 = param_1[1] + 0x18;
        param_1[1] = lVar5;
      } while (lVar4 != lVar6);
    }
  }
  return;
}


