/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 023a6f60; name: FUN_023a6f60
 */


void FUN_023a6f60(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_28;
  
  lVar1 = FUN_001511d0(param_1,0xfff0b9d6);
  local_28 = 0;
  lVar2 = FUN_023a6db4(param_1,1,&local_28);
  pcVar3 = *(code **)(lVar1 + 0x68);
  if ((*(ulong *)(lVar1 + 0x70) & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(lVar2 + ((long)*(ulong *)(lVar1 + 0x70) >> 1)));
  }
  (*pcVar3)();
  FUN_0014ff10(param_1,0);
  return;
}


