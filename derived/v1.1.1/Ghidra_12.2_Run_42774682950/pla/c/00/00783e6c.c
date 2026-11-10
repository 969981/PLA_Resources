/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783e6c; name: FUN_00783e6c
 */


void FUN_00783e6c(byte *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  
  nn::os::SdkMutexType::Lock();
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  pbVar3 = param_1 + 8;
  *plVar1 = *(long *)pbVar3;
  *(byte **)(lVar2 + 8) = pbVar3;
  *(long **)(*(long *)pbVar3 + 8) = plVar1;
  *(long *)pbVar3 = lVar2;
  if ((*param_1 & 1) != 0) {
    FUN_00783cd0(param_2);
  }
  nn::os::SdkMutexType::Unlock();
  return;
}


