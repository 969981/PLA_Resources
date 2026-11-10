/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ebcf58; name: FUN_00ebcf58
 */


undefined8 FUN_00ebcf58(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_28 [8];
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  FUN_00150da0(param_1,1,auStack_28);
  (**(code **)(lVar1 + 0x78))();
  FUN_0014ff10(param_1,0);
  return 0;
}


