/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001e01c8; name: FUN_001e01c8
 */


undefined8 FUN_001e01c8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_28 [8];
  
  iVar1 = FUN_001e35d0(2,param_1,auStack_28);
  if (iVar1 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_001e0100(2,auStack_28,param_1,param_2);
  }
  return uVar2;
}


