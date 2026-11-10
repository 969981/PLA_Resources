/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 021e4d9c; name: FUN_021e4d9c
 */


undefined8 FUN_021e4d9c(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_001511d0(param_1,0xfff0b9d6);
  uVar1 = (**(code **)(lVar2 + 0x68))();
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,uVar1);
  return 1;
}


