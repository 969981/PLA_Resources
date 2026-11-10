/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001df728; name: FUN_001df728
 */


void FUN_001df728(long param_1)

{
  long *plVar1;
  long lVar2;
  
  while( true ) {
    plVar1 = (long *)FUN_001df798(param_1);
    lVar2 = *(long *)(param_1 + 0x50);
    if (plVar1 == (long *)0x0) break;
    *plVar1 = lVar2;
    FUN_001dee08(plVar1,1);
    FUN_001fcddc(*(undefined8 *)(param_1 + 0x50),plVar1,0);
  }
  if (lVar2 == 0) {
    return;
  }
  FUN_001e18ac(lVar2,*(undefined8 *)(lVar2 + 200));
  FUN_001fc8b8(*(undefined8 *)(param_1 + 0x50));
  return;
}


