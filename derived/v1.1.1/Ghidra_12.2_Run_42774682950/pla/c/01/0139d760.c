/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0139d760; name: FUN_0139d760
 */


void FUN_0139d760(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x4c8);
  if (lVar2 != 0) {
    lVar1 = FUN_0139a0d0(lVar2,"View_Top");
    if (lVar1 != 0) {
      FUN_013cf964(lVar1,(param_2 | 1) == 3);
    }
    lVar2 = FUN_0139a1f4(lVar2,"ViewResident");
    if (lVar2 != 0) {
      FUN_013ce0f8(lVar2,(param_2 | 1) == 3);
      return;
    }
  }
  return;
}


