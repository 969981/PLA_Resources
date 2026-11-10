/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ed0f8; name: FUN_020ed0f8
 */


void FUN_020ed0f8(undefined8 param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = FUN_020ecf68(param_1,1,&local_28);
  pcVar3 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  uVar1 = (*pcVar3)();
  FUN_0014ff10(param_1,0);
  FUN_001517e0(param_1,uVar1 & 1);
  return;
}


