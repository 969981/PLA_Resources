/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ecec00; name: FUN_00ecec00
 */


void FUN_00ecec00(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  fVar2 = (float)(**(code **)(lVar1 + 0xa8))();
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar2,param_1);
  return;
}


