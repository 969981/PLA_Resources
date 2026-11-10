/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0332af70; name: FUN_0332af70
 */


undefined8 FUN_0332af70(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)DAT_0444b53c;
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x38d490);
  if (lVar2 == 0) {
    lVar2 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar2;
  }
  return *(undefined8 *)(lVar2 + lVar3 * 8 + 0x18);
}


