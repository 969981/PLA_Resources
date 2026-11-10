/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031cc2b0; name: FUN_031cc2b0
 */


void FUN_031cc2b0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_3) {
    lVar1 = tpidr_el0;
    do {
      FUN_031cbfe8(param_1,0,param_2);
      lVar3 = (long)DAT_0444b53c;
      lVar2 = *(long *)(lVar1 + 0x38d490);
      if (lVar2 == 0) {
        lVar2 = FUN_0333d16c(0,1);
        *(long *)(lVar1 + 0x38d490) = lVar2;
      }
      if (*(long *)(lVar2 + lVar3 * 8 + 0x18) != 0) {
        FUN_0332a954();
      }
      param_2 = param_2 + 0x90;
    } while (param_3 != param_2);
  }
  return;
}


