/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f377b0; name: FUN_01f377b0
 */


void FUN_01f377b0(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 != param_1) {
    lVar3 = 0;
    do {
      lVar1 = param_3 + lVar3;
      lVar2 = param_2 + lVar3;
      FUN_0087fcf0(lVar1 + -0x28,lVar2 + -0x28);
      FUN_00b6081c(lVar1 + -0x18,lVar2 + -0x18);
      lVar3 = lVar3 + -0x28;
      *(undefined1 *)(lVar1 + -8) = *(undefined1 *)(lVar2 + -8);
    } while (param_1 - param_2 != lVar3);
  }
  return;
}


