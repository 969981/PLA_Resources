/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f2d1c0; name: FUN_00f2d1c0
 */


void FUN_00f2d1c0(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  double __x;
  
  lVar3 = FUN_001511d0(param_1,0xfff0b9d6);
  iVar1 = FUN_001504d0(param_1,1);
  if (iVar1 == 0) {
    __x = (double)FUN_00150a90(param_1,1,0);
    llround(__x);
  }
  else {
    FUN_00150ba0(param_1,1,0);
  }
  uVar2 = (**(code **)(lVar3 + 0x88))();
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar2 & 1);
  return;
}


