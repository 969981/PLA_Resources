/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0070abac; name: FUN_0070abac
 */


void FUN_0070abac(__shared_weak_count *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_043764f8;
  *(undefined **)param_1 = PTR_DAT_043764e8 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if ((param_1[0xa0] != (__shared_weak_count)0x0) && (lVar2 = *(long *)(param_1 + 0x78), lVar2 != 0)
     ) {
    *(long *)(param_1 + 0x80) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x90) + 0x18))
              (*(long **)(param_1 + 0x90),lVar2,*(long *)(param_1 + 0x88) - lVar2,4);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  *(undefined **)(param_1 + 0x20) = PTR_DAT_043764f0 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


