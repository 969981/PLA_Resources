/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d972d8; name: FUN_00d972d8
 */


void FUN_00d972d8(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  if (param_2 != 0) {
    plVar1 = (long *)*param_1;
    uVar3 = param_2 + (param_1[1] - *plVar1 >> 3) * -0x71c71c71c71c71c7;
    if ((long)uVar3 < 1) {
      lVar4 = 0x37 - uVar3;
      lVar2 = SUB168(SEXT816(lVar4) * SEXT816(-0x4924924924924925),8);
      lVar2 = (lVar2 >> 4) - (lVar2 >> 0x3f);
      *param_1 = (long)(plVar1 + lVar2);
      lVar2 = plVar1[lVar2];
      uVar3 = ((lVar4 / 0x38) * 0x38 - lVar4) + 0x37;
    }
    else {
      *param_1 = (long)(plVar1 + uVar3 / 0x38);
      lVar2 = plVar1[uVar3 / 0x38];
      uVar3 = uVar3 % 0x38;
    }
    param_1[1] = lVar2 + uVar3 * 0x48;
  }
  return;
}


