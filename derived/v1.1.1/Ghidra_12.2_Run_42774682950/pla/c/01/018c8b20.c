/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 018c8b20; name: FUN_018c8b20
 */


void FUN_018c8b20(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = param_1 + 3;
  lVar2 = FUN_018c8c88(param_1,(param_1[1] - *param_1 >> 2) + 1);
  lVar1 = *param_1;
  lVar7 = param_1[1];
  lVar3 = 0;
  if ((lVar2 != 0) &&
     (lVar3 = (**(code **)(*(long *)*plVar5 + 0x10))((long *)*plVar5,lVar2 << 2,4), lVar3 == 0)) {
    (**(code **)(*(long *)*plVar5 + 0xb8))((long *)*plVar5);
  }
  lVar7 = lVar3 + (lVar7 - lVar1 >> 2) * 4;
  FUN_01665cfc(plVar5,lVar7,param_2);
  lVar6 = *param_1;
  lVar8 = param_1[1];
  lVar1 = lVar7 + 4;
  if (lVar8 != lVar6) {
    do {
      lVar7 = lVar7 + -4;
      lVar8 = lVar8 + -4;
      FUN_01665cfc(plVar5,lVar7,lVar8);
    } while (lVar6 != lVar8);
    lVar6 = *param_1;
  }
  lVar8 = param_1[2];
  *param_1 = lVar7;
  param_1[1] = lVar1;
  param_1[2] = lVar3 + lVar2 * 4;
  if (lVar6 == 0) {
    return;
  }
  plVar5 = (long *)*plVar5;
  uVar4 = FUN_02bcc75c(plVar5);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x018c8c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar5 + 0x18))(plVar5,lVar6,lVar8 - lVar6,4);
    return;
  }
  FUN_02bcc824(plVar5,lVar6,lVar8 - lVar6,4);
  return;
}


