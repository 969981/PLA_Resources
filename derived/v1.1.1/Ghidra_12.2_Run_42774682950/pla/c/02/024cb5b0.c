/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 024cb5b0; name: FUN_024cb5b0
 */


void FUN_024cb5b0(undefined8 param_1,long *param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 local_30;
  undefined *puStack_28;
  
  lVar2 = *param_2;
  FUN_0014ff10(param_1,0);
  FUN_024a65c4();
  puStack_28 = DAT_043e6ca8;
  if ((DAT_043e6c98 & 1) == 0) {
    puStack_28 = &DAT_043e6c99;
  }
  local_30 = param_1;
  plVar1 = (long *)FUN_024bad60(param_1);
  *plVar1 = param_3 + lVar2;
  FUN_024baea4(&local_30);
  return;
}


