/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02cb8630; name: FUN_02cb8630
 */


void FUN_02cb8630(undefined1 *param_1,ulong param_2)

{
  bool bVar1;
  undefined *puVar2;
  AsyncContext *pAVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  AsyncContext *this;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 uVar12;
  bool local_78 [24];
  
  if (DAT_04407ca8 == (AsyncContext *)0x0) {
LAB_02cb8680:
    if ((param_2 & 1) == 0) {
      local_78[0] = false;
      nn::account::IsNetworkServiceAccountAvailable(local_78,(UserHandle *)&DAT_04407cd0);
      if (local_78[0] == false) goto LAB_02cb88b8;
    }
    iVar7 = nn::account::EnsureNetworkServiceAccountAvailable((UserHandle *)&DAT_04407cd0);
    plVar11 = DAT_04407cc8;
    if (iVar7 == 0) {
      this = (AsyncContext *)(**(code **)(*DAT_04407cc8 + 0x10))(DAT_04407cc8,0x20,8);
      if (this == (AsyncContext *)0x0) {
        uVar12 = 0;
        uVar10 = 0;
        plVar11 = (long *)0x0;
      }
      else {
        if ((*PTR_DAT_04379520 & 1) == 0) {
          iVar7 = __cxa_guard_acquire(PTR_DAT_04379520);
          puVar2 = PTR_DAT_04379528;
          if (iVar7 != 0) {
            FUN_008a62a4(PTR_DAT_04379528);
            FUN_00100250(PTR_LAB_04379530,puVar2,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379520);
          }
        }
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
        if (0xf < *(ulong *)(lVar8 + 0x80)) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        nn::account::AsyncContext::AsyncContext(this);
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        uVar10 = 8;
        uVar12 = 0x20;
      }
      pAVar3 = DAT_04407ca8;
      bVar1 = DAT_04407ca8 != (AsyncContext *)0x0;
      DAT_04407ca8 = this;
      if (bVar1) {
        FUN_02bcbe58(local_78,0);
        (*(code *)**(undefined8 **)pAVar3)(pAVar3);
        uVar6 = DAT_04407cc0;
        uVar5 = DAT_04407cb8;
        plVar4 = DAT_04407cb0;
        uVar9 = (**(code **)(*DAT_04407cb0 + 0xc0))(DAT_04407cb0);
        lVar8 = tpidr_el0;
        if ((uVar9 & 1) == 0) {
LAB_02cb87e8:
          (**(code **)(*plVar4 + 0x18))(plVar4,pAVar3,uVar5,uVar6);
        }
        else {
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          if (*(int *)(lVar8 + 0x38d480) < 1) goto LAB_02cb87e8;
          FUN_02bcc824(plVar4,pAVar3,uVar5,uVar6);
        }
        if (*(char *)(lVar8 + 0x38d488) == '\0') {
          *(undefined1 *)(lVar8 + 0x38d488) = 1;
          *(undefined8 *)(lVar8 + 0x38d478) = 0;
          *(undefined8 *)(lVar8 + 0x38d480) = 0;
          __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
        }
        iVar7 = *(int *)(lVar8 + 0x38d480) + -1;
        *(int *)(lVar8 + 0x38d480) = iVar7;
        if (iVar7 == 0) {
          FUN_02bcc320();
          if (*(char *)(lVar8 + 0x38d488) == '\0') {
            *(undefined1 *)(lVar8 + 0x38d488) = 1;
            *(undefined8 *)(lVar8 + 0x38d478) = 0;
            *(undefined8 *)(lVar8 + 0x38d480) = 0;
            __cxa_thread_atexit(&LAB_02bcbe54,lVar8 + 0x80078,&PTR_LOOP_0411a000);
          }
          *(undefined4 *)(lVar8 + 0x38d484) = 0;
        }
      }
      DAT_04407cb0 = plVar11;
      DAT_04407cb8 = uVar12;
      DAT_04407cc0 = uVar10;
      if (DAT_04407ca8 == (AsyncContext *)0x0) goto LAB_02cb88b8;
      iVar7 = nn::account::EnsureNetworkServiceAccountIdTokenCacheAsync
                        (DAT_04407ca8,(UserHandle *)&DAT_04407cd0);
      *param_1 = 0;
      if (iVar7 != 0) goto LAB_02cb86b0;
      *(undefined4 *)(param_1 + 4) = 0;
    }
    else {
LAB_02cb86b0:
      *(int *)(param_1 + 4) = iVar7;
    }
    *param_1 = 1;
  }
  else {
    local_78[0] = false;
    nn::account::AsyncContext::HasDone((bool *)DAT_04407ca8);
    if (local_78[0] != false) {
      nn::account::AsyncContext::GetResult();
      goto LAB_02cb8680;
    }
LAB_02cb88b8:
    *param_1 = 0;
  }
  return;
}


