/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0078d9ac; name: FUN_0078d9ac
 */


void FUN_0078d9ac(__shared_weak_count *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04376d38;
  *(undefined **)param_1 = PTR_DAT_04376d28 + 0x10;
  *(undefined **)(param_1 + 0x20) = puVar1 + 0x10;
  if (param_1[0xe8] != (__shared_weak_count)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 200);
    if (puVar3 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0xd0);
      if (puVar2 == puVar3) {
        puVar2 = puVar3;
      }
      else {
        do {
          puVar2 = puVar2 + -2;
          (**(code **)*puVar2)(puVar2);
        } while (puVar3 != puVar2);
        puVar2 = *(undefined8 **)(param_1 + 200);
      }
      *(undefined8 **)(param_1 + 0xd0) = puVar3;
      (**(code **)(**(long **)(param_1 + 0xe0) + 0x18))
                (*(long **)(param_1 + 0xe0),puVar2,*(long *)(param_1 + 0xd8) - (long)puVar2,8);
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
  *(undefined **)(param_1 + 0x20) = PTR_DAT_04376d30 + 0x10;
  nn::os::FinalizeEvent((EventType *)(param_1 + 0x30));
  std::__shared_weak_count::~__shared_weak_count(param_1);
  return;
}


