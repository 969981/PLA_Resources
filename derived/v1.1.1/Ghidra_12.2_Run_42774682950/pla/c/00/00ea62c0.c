/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea62c0; name: FUN_00ea62c0
 */


void FUN_00ea62c0(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_28 [8];
  
  FUN_001511d0(param_1,0xfff0b9d6);
  uVar2 = FUN_00150da0(param_1,1,auStack_28);
  uVar3 = FUN_00150da0(param_1,2,auStack_28);
  uVar1 = FUN_00ea6340(uVar2,uVar3);
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


