/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0032cea0; name: FUN_0032cea0
 */


void FUN_0032cea0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  if (*(long *)(lVar1 + 0x10) == *(long *)(param_1 + 0x20)) {
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  else {
    lVar2 = *(long *)(param_1 + 8);
    if ((lVar2 == 0) || (*(long *)(lVar2 + 8) != lVar1 + 0x10)) {
      FUN_0032cbd4(param_1,param_2);
      return;
    }
  }
  FUN_0032c744(lVar2,param_2);
  return;
}


