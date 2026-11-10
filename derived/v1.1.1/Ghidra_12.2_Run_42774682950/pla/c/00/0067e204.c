/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067e204; name: FUN_0067e204
 */


void FUN_0067e204(long *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  if ((ulong)(param_1[2] - lVar2 >> 3) < param_2) {
    lVar3 = param_1[1];
    lVar1 = (**(code **)(*(long *)param_1[3] + 0x10))((long *)param_1[3],param_2 * 8,8);
    lVar2 = lVar1 + (lVar3 - lVar2);
    lVar3 = *param_1;
    lVar4 = param_1[1];
    lVar5 = lVar2;
    if (lVar4 == lVar3) {
      lVar4 = lVar3;
    }
    else {
      do {
        lVar5 = lVar5 + -8;
        lVar4 = lVar4 + -8;
        FUN_00680c08(lVar5,lVar4);
      } while (lVar3 != lVar4);
      lVar3 = param_1[1];
      lVar4 = *param_1;
    }
    *param_1 = lVar5;
    param_1[1] = lVar2;
    lVar2 = param_1[2];
    param_1[2] = lVar1 + param_2 * 8;
    while (lVar3 != lVar4) {
      lVar3 = lVar3 + -8;
      FUN_00680b34(lVar3);
    }
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0067e2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)param_1[3] + 0x18))((long *)param_1[3],lVar4,lVar2 - lVar4,8);
      return;
    }
  }
  return;
}


