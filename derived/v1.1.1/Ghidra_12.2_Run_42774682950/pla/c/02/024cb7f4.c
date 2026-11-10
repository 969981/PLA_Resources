/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024cb7f4; name: FUN_024cb7f4
 */


void FUN_024cb7f4(undefined8 param_1,long *param_2)

{
  double dVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = FUN_024cb418(param_1,1,&local_28);
  dVar1 = (double)FUN_00150a90(param_1,3,0);
  *(float *)(lVar2 + *param_2) = (float)dVar1;
  FUN_0014ff10(param_1,0);
  return;
}


