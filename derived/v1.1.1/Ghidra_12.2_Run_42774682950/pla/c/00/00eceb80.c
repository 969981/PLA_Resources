/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00eceb80; name: FUN_00eceb80
 */


void FUN_00eceb80(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  double dVar3;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  dVar3 = (double)FUN_00150a90(param_1,1,0);
  fVar2 = (float)(**(code **)(lVar1 + 0x98))((float)dVar3);
  FUN_0014ff10(param_1,0);
  FUN_001514b0((double)fVar2,param_1);
  return;
}


