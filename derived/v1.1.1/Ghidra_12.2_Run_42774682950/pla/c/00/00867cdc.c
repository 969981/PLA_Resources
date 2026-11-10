/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00867cdc; name: FUN_00867cdc
 */


void FUN_00867cdc(undefined8 param_1,long param_2,undefined8 param_3,void *param_4,size_t param_5,
                 undefined1 param_6)

{
  void *__dest;
  char cVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_70 [8];
  long *local_68;
  undefined4 local_60 [4];
  undefined4 local_48 [2];
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x18));
  if (*(long *)(param_2 + 8) != 0) {
    plVar3 = (long *)thunk_FUN_007f3f6c(*(undefined8 *)PTR_DAT_043780f8);
    lVar4 = (**(code **)(*plVar3 + 0x3c8))(plVar3,param_3);
    if (lVar4 != 0) {
      uVar5 = (**(code **)(**(long **)(param_2 + 8) + 0xa0))();
      if (*(uint *)(param_2 + 0x44) < uVar5) {
        local_60[0] = 0x4c0d;
      }
      else {
        __dest = (void *)(param_2 + 0x50);
        *(undefined1 *)((long)__dest + param_5) = param_6;
        memcpy(__dest,param_4,param_5);
        (**(code **)(**(long **)(param_2 + 8) + 0x78))
                  (auStack_70,*(long **)(param_2 + 8),*(undefined4 *)(lVar4 + 0xb4),__dest,
                   param_5 + 1);
        if (local_68 != (long *)0x0) {
          plVar3 = local_68 + 1;
          do {
            lVar4 = *plVar3;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
            if (bVar2) {
              *plVar3 = lVar4 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar4 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_60[0] = 0;
      }
      goto LAB_00867d7c;
    }
  }
  local_60[0] = 0x10408;
LAB_00867d7c:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_48);
  FUN_007ee578(param_1,local_60);
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x18));
  return;
}


