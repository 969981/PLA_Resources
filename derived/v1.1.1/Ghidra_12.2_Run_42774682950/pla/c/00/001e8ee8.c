/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e8ee8; name: FUN_001e8ee8
 */


long FUN_001e8ee8(long *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  *param_2 = 0;
  lVar2 = 0;
  if (param_1 != (long *)0x0) {
    if ((*param_1 == 0xbab1e) && ((char)param_1[0x3c] == '\0')) {
      param_1 = param_1 + 4;
      lVar3 = FUN_001e3860(param_1);
      lVar2 = 0;
      if (lVar3 != 0) {
        lVar2 = *(long *)*param_1;
        FUN_001e3790(param_1,(long *)*param_1,0);
        FUN_001e3860(param_1);
        uVar1 = FUN_00204350();
        *param_2 = uVar1;
        lVar2 = lVar2 + 0x18;
      }
    }
    else {
      lVar2 = 0;
    }
  }
  return lVar2;
}


