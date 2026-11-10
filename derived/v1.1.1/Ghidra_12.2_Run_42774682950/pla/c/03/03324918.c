/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03324918; name: FUN_03324918
 */


long FUN_03324918(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  
  pcVar2 = (char *)(*param_2 & 0xfffffffffffffffe);
  plVar4 = *(long **)(param_1 + 8);
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "(null)";
    pcVar3 = *(code **)(*plVar4 + 0x28);
    uVar1 = 6;
  }
  else {
    uVar1 = FUN_032c7fc0(param_2);
    pcVar3 = *(code **)(*plVar4 + 0x28);
  }
  (*pcVar3)(plVar4,pcVar2,uVar1);
  return param_1;
}


