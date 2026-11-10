/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00681be4; name: FUN_00681be4
 */


void FUN_00681be4(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  if (lVar4 == 0) {
    return;
  }
  lVar3 = param_1[1];
  if (lVar3 == lVar4) {
    lVar3 = lVar4;
  }
  else {
    do {
      puVar1 = (undefined8 *)(lVar3 + -0x18);
      lVar2 = lVar3 + -0x20;
      lVar3 = lVar3 + -0x28;
      FUN_0064cd98(lVar2,*puVar1);
    } while (lVar4 != lVar3);
    lVar3 = *param_1;
  }
  param_1[1] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00681c58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar3,param_1[2] - lVar3,8);
  return;
}


