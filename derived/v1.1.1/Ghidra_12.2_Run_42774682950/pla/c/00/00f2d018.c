/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f2d018; name: FUN_00f2d018
 */


void FUN_00f2d018(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  FUN_00150da0(param_1,1,auStack_28);
  iVar1 = (**(code **)(lVar2 + 0x68))();
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar1);
  return;
}


