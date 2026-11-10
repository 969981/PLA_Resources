/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001ea324; name: FUN_001ea324
 */


undefined8 FUN_001ea324(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  lVar1 = FUN_00204504(1,0x2a0);
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    FUN_001e39b0(lVar1 + 0x28,*param_1);
    *(long *)(lVar3 + 0x1e8) = lVar1;
    if (param_1[0x98] + param_1[0x9c] == 0) {
      FUN_001ef778(param_1);
    }
    FUN_001ef740(lVar3);
    uVar2 = 0;
  }
  return uVar2;
}


