/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0015cdc0; name: FUN_0015cdc0
 */


void FUN_0015cdc0(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x18);
  plVar2 = (long *)(lVar5 + 0x98);
  do {
    plVar1 = plVar2;
    plVar2 = (long *)*plVar1;
  } while (plVar2 != (long *)0x0);
  plVar3 = (long *)(lVar5 + 0x68);
  plVar2 = (long *)*plVar3;
  lVar4 = lVar5;
  if ((long *)*plVar3 != (long *)0x0) {
    do {
      *plVar3 = *plVar2;
      *plVar2 = *plVar1;
      *plVar1 = (long)plVar2;
      plVar1 = plVar2;
      plVar2 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  while (*(long *)(lVar4 + 0x98) != 0) {
    FUN_0015df60(param_1,0);
  }
  *(undefined1 *)(lVar5 + 0x54) = 3;
  *(undefined1 *)(lVar5 + 0x56) = 0;
  FUN_0015ce80(param_1,plVar3,0xffffffffffffffff);
  FUN_0015ce80(param_1,lVar5 + 0x58,0xffffffffffffffff);
  FUN_0015ce80(param_1,lVar5 + 0xa0,0xffffffffffffffff);
  return;
}


