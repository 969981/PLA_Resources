/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bdbb94; name: FUN_02bdbb94
 */


void FUN_02bdbb94(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  MutexType *pMVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  int iVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_1 + 0x7c) == 2) {
    if (((*PTR_DAT_0437a648 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a648), iVar6 != 0)) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a648);
    }
    lVar7 = *(long *)PTR_DAT_0437a650;
    *(long *)PTR_DAT_0437a658 = lVar7;
    pMVar1 = (MutexType *)(*(long *)(lVar7 + 0x230) + 0x128);
    nn::os::LockMutex(pMVar1);
    (**(code **)(**(long **)(param_1 + 0xd0) + 0x1c8))
              (*(long **)(param_1 + 0xd0),*(undefined8 *)(param_1 + 0xd8),&local_40,&local_50);
    nn::os::UnlockMutex(pMVar1);
    if (*(char *)(param_1 + 0x3d0) == '\0') {
      auVar5._8_8_ = uStack_38;
      auVar5._0_8_ = local_40;
      auVar8._8_8_ = uStack_38;
      auVar8._0_8_ = local_40;
      auVar8 = NEON_ext(auVar8,auVar5,8,1);
      param_2[1] = (ulong)auVar8._0_4_;
      *param_2 = local_40;
      cVar2 = *(char *)(param_1 + 0x3f0);
    }
    else {
      param_2[1] = *(undefined8 *)(param_1 + 1000);
      *param_2 = *(undefined8 *)(param_1 + 0x3e0);
      cVar2 = *(char *)(param_1 + 0x3f0);
    }
    if (cVar2 == '\0') {
      auVar4._8_8_ = uStack_48;
      auVar4._0_8_ = local_50;
      auVar3._8_8_ = uStack_48;
      auVar3._0_8_ = local_50;
      auVar8 = NEON_ext(auVar3,auVar4,8,1);
      param_3[1] = (ulong)auVar8._0_4_;
      *param_3 = local_50;
    }
    else {
      param_3[1] = *(undefined8 *)(param_1 + 0x408);
      *param_3 = *(undefined8 *)(param_1 + 0x400);
    }
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    *param_3 = 0;
    param_3[1] = 0;
  }
  return;
}


