/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00234600; name: FUN_00234600
 */


long FUN_00234600(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  lVar1 = (**(code **)PTR_DAT_04372ba8)(0x40,4,*(undefined8 *)PTR_DAT_04372bb8);
  if (lVar1 != 0) {
    FUN_0022776c(lVar1);
    plVar2 = (long *)(lVar1 + 8);
    lVar3 = *plVar2;
    plVar4 = (long *)(param_1 + 8);
    *plVar2 = *plVar4;
    *(long **)(lVar3 + 8) = plVar4;
    *(long **)(*plVar4 + 8) = plVar2;
    *plVar4 = lVar3;
  }
  return lVar1;
}


