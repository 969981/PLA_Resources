/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0333d4e0; name: FUN_0333d4e0
 */


void FUN_0333d4e0(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar2 + 0x38d490) = lVar4;
    cVar1 = *(char *)(lVar4 + 0x1d0);
  }
  else {
    cVar1 = *(char *)(lVar4 + 0x1d0);
  }
  if (cVar1 != '\0') {
    plVar3 = (long *)FUN_032d49a4();
    (**(code **)(*plVar3 + 0x28))(plVar3,*(undefined8 *)(lVar4 + 8),3);
  }
  *(undefined8 *)(lVar4 + 8) = param_1;
  *(undefined1 *)(lVar4 + 0x1d0) = 0;
  return;
}


