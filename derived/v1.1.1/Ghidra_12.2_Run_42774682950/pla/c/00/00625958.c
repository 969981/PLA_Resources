/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00625958; name: FUN_00625958
 */


void FUN_00625958(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04375580;
  *(undefined **)param_1 = PTR_DAT_04375570 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (param_1[200] != (__shared_weak_count)0x0) {
    FUN_0062f340(param_1 + 0x80);
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04375578 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


