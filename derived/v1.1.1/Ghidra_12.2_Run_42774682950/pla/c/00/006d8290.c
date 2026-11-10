/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d8290; name: FUN_006d8290
 */


void FUN_006d8290(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  size_t __n;
  long lVar6;
  long lVar7;
  char *__s;
  void *__dest;
  ulong uVar8;
  undefined8 local_c0;
  long *local_b8;
  undefined8 local_b0;
  long *local_a8;
  char *local_a0;
  undefined8 local_98;
  ulong local_90;
  size_t local_88;
  void *local_80;
  long *local_78;
  undefined8 local_48;
  
  lVar7 = *param_2;
  plVar2 = (long *)param_2[1];
  __s = *(char **)PTR_PTR_04376198;
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_a0 = __s;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x630));
  local_b0 = 0;
  local_a8 = (long *)0x0;
  local_90 = 0;
  local_88 = 0;
  local_80 = (void *)0x0;
  plVar5 = (long *)FUN_00612290();
  local_78 = plVar5;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* try { // try from 006d8580 to 006d8587 has its CatchHandler @ 006d8588 */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_90 = CONCAT71(local_90._1_7_,(char)((int)__n << 1));
    __dest = (void *)((ulong)&local_90 | 1);
    if (__n != 0) goto LAB_006d8360;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar8,1);
    local_90 = uVar8 | 1;
    local_88 = __n;
    local_80 = __dest;
LAB_006d8360:
    memcpy(__dest,__s,__n);
  }
  *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 006d8378 to 006d8383 has its CatchHandler @ 006d85d4 */
  lVar6 = FUN_00616c8c(lVar7 + 0x610,&local_90);
  if ((local_90 & 1) != 0) {
    (**(code **)(*local_78 + 0x18))(local_78,local_80,local_90 & 0xfffffffffffffffe,1);
  }
  if (lVar7 + 0x618 == lVar6) {
    FUN_0060ffd0(&local_90,lVar7 + 0x10,PTR_DAT_043761a0);
    local_98 = *(undefined8 *)(lVar7 + 0x198);
    local_48 = *(undefined8 *)(lVar7 + 400);
                    /* try { // try from 006d841c to 006d842f has its CatchHandler @ 006d85d0 */
    FUN_006d8948(&local_c0,&local_48,&local_98,&local_90);
                    /* try { // try from 006d8430 to 006d843f has its CatchHandler @ 006d8590 */
    FUN_006d8ac4(lVar7 + 0x610,&local_a0,&local_c0);
    plVar5 = local_a8;
    if (local_b8 != (long *)0x0) {
      plVar1 = local_b8 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    local_b0 = local_c0;
    local_a8 = local_b8;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        lVar6 = *plVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
        std::__shared_weak_count::__release_weak();
      }
    }
    plVar5 = local_a8;
    if (local_b8 == (long *)0x0) goto LAB_006d84d0;
    plVar1 = local_b8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  else {
    local_b0 = *(undefined8 *)(lVar6 + 0x40);
    plVar5 = *(long **)(lVar6 + 0x48);
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *plVar1 = *plVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    if (local_a8 == (long *)0x0) goto LAB_006d84d0;
    plVar1 = local_a8 + 1;
    do {
      lVar6 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      local_b8 = local_a8;
    } while (cVar3 != '\0');
  }
  local_a8 = plVar5;
  plVar5 = local_a8;
  if (lVar6 == 0) {
    (**(code **)(*local_b8 + 0x10))(local_b8);
    std::__shared_weak_count::__release_weak();
    plVar5 = local_a8;
  }
LAB_006d84d0:
  local_a8 = plVar5;
  *param_1 = local_b0;
  param_1[1] = local_a8;
  if (local_a8 != (long *)0x0) {
    plVar5 = local_a8 + 1;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = *plVar5 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (local_a8 != (long *)0x0) {
      plVar5 = local_a8 + 1;
      do {
        lVar6 = *plVar5;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar4) {
          *plVar5 = lVar6 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (lVar6 == 0) {
        (**(code **)(*local_a8 + 0x10))(local_a8);
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x630));
  if (plVar2 != (long *)0x0) {
    plVar5 = plVar2 + 1;
    do {
      lVar7 = *plVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar4) {
        *plVar5 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 == 0) {
      (**(code **)(*plVar2 + 0x10))(plVar2);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


