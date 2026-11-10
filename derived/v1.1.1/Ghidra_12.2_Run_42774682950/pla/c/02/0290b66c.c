/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0290b66c; name: FUN_0290b66c
 */


uint FUN_0290b66c(long *param_1,long param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *puStack_b8;
  long *local_b0 [13];
  uint local_44;
  
  if (*(char *)((long)param_1 + 0x32c) == '\0') {
    FUN_0290b54c();
    (**(code **)(*param_1 + 0x108))(param_1);
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar3 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar6 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar6;
    lVar5 = param_1[0x86];
    local_d0 = &LAB_0290e87c;
    local_c8 = FUN_0290e88c;
    local_c0 = &LAB_0290e890;
    puStack_b8 = &LAB_0290e89c;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x158) + 0x60);
    local_b0[0] = param_1;
    uVar2 = (**(code **)(*plVar4 + 0xc0))
                      (plVar4,*(undefined8 *)(param_2 + 8),lVar5,1,&LAB_0290f2d0,lVar6,0,0,0);
    if (uVar2 != 0) {
      FUN_0291629c(*(undefined8 *)(lVar6 + 0x178),param_2,uVar2,lVar5,&local_d0,param_1,param_3 & 1)
      ;
      pcVar1 = local_c8;
      if (local_c8 != (code *)0x0) {
        local_c0 = (undefined1 *)0x0;
        puStack_b8 = (undefined1 *)0x0;
        local_d0 = (undefined1 *)0x0;
        local_c8 = (code *)0x0;
        (*pcVar1)(local_b0);
        if (uVar2 == 0) {
          return 0;
        }
      }
      local_44 = uVar2;
      nn::os::LockMutex((MutexType *)(param_1 + 0x3e));
      local_d0 = *(undefined1 **)(param_2 + 8);
      FUN_0290aff0(param_1 + 0x42,&local_d0,&local_44);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0x3e));
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


