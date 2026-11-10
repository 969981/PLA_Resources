/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02269b00; name: FUN_02269b00
 */


void FUN_02269b00(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_18;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  uVar2 = FUN_022657c8(param_1,1,&local_28);
  local_18 = 0;
  FUN_02269bbc(param_1,&local_18,lVar1 + 0xe0,uVar2);
  FUN_0014ff10(param_1,0);
  return;
}


