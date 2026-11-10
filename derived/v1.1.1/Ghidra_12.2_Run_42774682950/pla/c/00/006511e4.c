/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006511e4; name: FUN_006511e4
 */


void FUN_006511e4(__shared_weak_count *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04375868;
  *(undefined **)param_1 = PTR_DAT_04375858 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (param_1[0xf0] != (__shared_weak_count)0x0) {
    FUN_0064cd98(param_1 + 0xd0,*(undefined8 *)(param_1 + 0xd8));
    if (param_1[0xa0] != (__shared_weak_count)0x0) {
      FUN_02767254(param_1 + 0xa8,*(undefined8 *)(param_1 + 0xb0));
    }
    if (((byte)param_1[0x80] & 1) != 0) {
      (**(code **)(**(long **)(param_1 + 0x98) + 0x18))
                (*(long **)(param_1 + 0x98),*(undefined8 *)(param_1 + 0x90),
                 *(ulong *)(param_1 + 0x80) & 0xfffffffffffffffe,1);
    }
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x58));
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04375860 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


