/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02a67268; name: FUN_02a67268
 */


void FUN_02a67268(long *param_1)

{
  int *piVar1;
  ThreadType *pTVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auStack_28 [8];
  
  puVar5 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar5 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0;
    if (*(long *)(lVar7 + 0x80) != 0) {
      lVar11 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8);
    }
  }
  *param_1 = (long)&DAT_0427e670;
  param_1[1] = lVar11;
  param_1[9] = (long)&PTR_LAB_0427e6a0;
  if (((*PTR_DAT_0437add8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437add8), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437ae10,PTR_DAT_0437ade0,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437add8);
  }
  PTR_DAT_0437ade0[8] = 1;
  *param_1 = (long)&PTR_LAB_0427e620;
  param_1[9] = (long)&PTR_LAB_0427e650;
  param_1[10] = 0;
  pvVar8 = (void *)FUN_02a67ae4(auStack_28,param_1[1],&DAT_03a810a8);
  if (pvVar8 != (void *)0x0) {
    lVar7 = *(long *)((long)pvVar8 + 0x58);
    if (*(undefined8 **)(lVar7 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar7 + 0x10) == 0) {
      uVar9 = (**(code **)**(undefined8 **)(lVar7 + 0x18))();
      *(undefined8 *)(lVar7 + 0x10) = uVar9;
    }
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar10 = (long *)param_1[10];
  param_1[10] = 0;
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0xb];
    piVar1 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*plVar10 + 0x20))();
    }
  }
  param_1[10] = (long)pvVar8;
  *(undefined1 *)((long)pvVar8 + 0x300) = 0;
  pTVar2 = (ThreadType *)((long)pvVar8 + 0x100);
  *(undefined1 *)((long)pvVar8 + 0x301) = 0;
  *(undefined1 *)((long)pvVar8 + 0x302) = 0;
  nn::os::CreateThread
            (pTVar2,(_func_void_void_ptr *)&LAB_02a4971c,pvVar8,*(void **)((long)pvVar8 + 0x2c0),
             *(ulong *)((long)pvVar8 + 0x2f8),0x12);
  nn::os::SetThreadCoreMask(pTVar2,-1,7);
  nn::os::SetThreadName(pTVar2,"GenericWorkderService");
  nn::os::StartThread(pTVar2);
  return;
}


