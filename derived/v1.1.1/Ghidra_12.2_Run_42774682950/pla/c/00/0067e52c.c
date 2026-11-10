/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067e52c; name: FUN_0067e52c
 */


void FUN_0067e52c(__shared_weak_count *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04375ab0;
  *(undefined **)param_1 = PTR_DAT_04375aa0 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar2 + 0x10;
  if (param_1[0xf0] != (__shared_weak_count)0x0) {
    lVar5 = *(long *)(param_1 + 0xd0);
    if (lVar5 != 0) {
      lVar4 = *(long *)(param_1 + 0xd8);
      if (lVar4 == lVar5) {
        lVar4 = lVar5;
      }
      else {
        do {
          puVar1 = (undefined8 *)(lVar4 + -0x18);
          lVar3 = lVar4 + -0x20;
          lVar4 = lVar4 + -0x28;
          FUN_0064cd98(lVar3,*puVar1);
        } while (lVar5 != lVar4);
        lVar4 = *(long *)(param_1 + 0xd0);
      }
      *(long *)(param_1 + 0xd8) = lVar5;
      (**(code **)(**(long **)(param_1 + 0xe8) + 0x18))
                (*(long **)(param_1 + 0xe8),lVar4,*(long *)(param_1 + 0xe0) - lVar4,8);
    }
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
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04375aa8 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  operator_delete(param_1);
  return;
}


