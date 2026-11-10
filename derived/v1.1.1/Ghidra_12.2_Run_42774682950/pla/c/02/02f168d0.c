/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f168d0; name: FUN_02f168d0
 */


void FUN_02f168d0(float param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  float local_28;
  undefined1 auStack_24 [4];
  
  local_28 = param_1;
  iVar1 = FUN_02ea46bc();
  if (iVar1 != 0) {
    FUN_02ea471c(param_2,&local_28);
    lVar2 = FUN_02f18464(iVar1,param_3,auStack_24);
    if ((lVar2 != 0) && (*(float *)(lVar2 + 0x10) < local_28)) {
      *(float *)(lVar2 + 0x10) = local_28;
    }
  }
  return;
}


