/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0042cd00; name: FUN_0042cd00
 */


long * FUN_0042cd00(undefined4 param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_004396d0(0);
  if (plVar2 != (long *)0x0) {
    lVar3 = FUN_004306d0(param_1);
    plVar2[3] = lVar3;
    if ((lVar3 == 0) ||
       ((*(code **)(*plVar2 + 0x28) != (code *)0x0 &&
        (iVar1 = (**(code **)(*plVar2 + 0x28))(plVar2,lVar3), iVar1 == 0)))) {
      FUN_0042cd80(plVar2);
      return (long *)0x0;
    }
  }
  return plVar2;
}


