/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 020ed224; name: FUN_020ed224
 */


void FUN_020ed224(undefined8 param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_28;
  
  local_28 = 0;
  lVar3 = FUN_020ecf68(param_1,1,&local_28);
  iVar2 = FUN_00150cc0(param_1,2);
  pcVar4 = (code *)*param_2;
  plVar1 = (long *)(lVar3 + (param_2[1] >> 1));
  if ((param_2[1] & 1U) != 0) {
    pcVar4 = *(code **)(pcVar4 + *plVar1);
  }
  (*pcVar4)(plVar1,iVar2 != 0);
  FUN_0014ff10(param_1,0);
  return;
}


