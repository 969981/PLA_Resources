/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020f65cc; name: FUN_020f65cc
 */


void FUN_020f65cc(undefined8 param_1,long *param_2)

{
  double dVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = FUN_020ecf68(param_1,1,&local_28);
  dVar1 = (double)FUN_00150a90(param_1,2,0);
  pcVar3 = (code *)*param_2;
  if ((param_2[1] & 1U) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(lVar2 + (param_2[1] >> 1)));
  }
  (*pcVar3)((float)dVar1);
  FUN_0014ff10(param_1,0);
  return;
}


