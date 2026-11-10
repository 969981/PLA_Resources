/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0147f114; name: FUN_0147f114
 */


void FUN_0147f114(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 == 0) {
    return;
  }
  plVar1 = (long *)*param_1;
  uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * 0x2e8ba2e8ba2e8ba3;
  if ((long)uVar3 < 1) {
    lVar4 = 0x2d - uVar3;
    lVar2 = SUB168(SEXT816(lVar4) * SEXT816(0x4de9bd37a6f4de9b),8) - lVar4;
    lVar2 = (lVar2 >> 5) - (lVar2 >> 0x3f);
    *param_1 = (long)(plVar1 + lVar2);
    lVar2 = plVar1[lVar2];
    uVar3 = ((lVar4 / 0x2e) * 0x2e - lVar4) + 0x2d;
  }
  else {
    *param_1 = (long)(plVar1 + uVar3 / 0x2e);
    lVar2 = plVar1[uVar3 / 0x2e];
    uVar3 = uVar3 % 0x2e;
  }
  param_1[1] = lVar2 + uVar3 * 0x58;
  return;
}


