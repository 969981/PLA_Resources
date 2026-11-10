/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00783ed8; name: FUN_00783ed8
 */


void FUN_00783ed8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  nn::os::SdkMutexType::Lock();
  if (param_1 != param_2) {
    plVar1 = *(long **)(param_2 + 0x10);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 8) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 8);
    *(long *)(lVar2 + 8) = param_2 + 8;
    *(long *)(param_2 + 8) = lVar2;
  }
  nn::os::SdkMutexType::Unlock();
  return;
}


