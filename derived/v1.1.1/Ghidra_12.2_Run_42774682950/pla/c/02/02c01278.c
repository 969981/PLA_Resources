/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c01278; name: FUN_02c01278
 */


void FUN_02c01278(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *local_40;
  long *local_38;
  undefined1 auStack_28 [4];
  undefined1 local_24 [4];
  
  FUN_02a6f65c(param_1,DAT_043eef30);
  *(undefined4 *)(param_1 + 0x73) = 1;
  *param_1 = &PTR_LAB_04288168;
  param_1[0x72] = 0;
  param_1[0x71] = 0;
  *(undefined1 *)((long)param_1 + 0x39c) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x84] = 0;
  param_1[9] = &PTR_LAB_042881f0;
  param_1[10] = &PTR_LAB_04288238;
  puVar5 = PTR_DAT_04379520;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  if (((*puVar5 & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar6 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar13 = DAT_043f1798;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x80) == 0)) ||
     (lVar7 = *(long *)(lVar7 + *(long *)(lVar7 + 0x80) * 8 + -8), lVar7 == 0)) {
    lVar4 = tpidr_el0;
    lVar7 = *(long *)(lVar4 + 0x20);
    if (*(long *)(lVar4 + 0x20) == 0) {
      *(long *)(lVar4 + 0x20) = DAT_043f1798;
      lVar7 = lVar13;
    }
  }
  param_1[0x87] = lVar7;
  param_1[0x88] = 0x1fffffffffffffff;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  nn::os::InitializeSemaphore((SemaphoreType *)(param_1 + 0x8b),1,1);
  local_38 = (long *)param_1[0x42];
  param_1[0x91] = 0;
  param_1[0x90] = param_2;
  uVar11 = param_1[1];
  local_40 = (undefined8 *)0x0;
  if (param_1[0x71] != 0) {
    puVar12 = *(undefined8 **)(param_1[0x71] + 0x18);
    if (puVar12 != (undefined8 *)0x0) {
      plVar8 = (long *)(**(code **)*puVar12)(puVar12);
      if (((*PTR_DAT_043794d0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar6 != 0)) {
        uVar9 = FUN_0087f8f0();
        *(undefined8 *)PTR_DAT_043794d8 = uVar9;
        __cxa_guard_release(PTR_DAT_043794d0);
      }
      for (; plVar8 != (long *)0x0; plVar8 = (long *)*plVar8) {
        if (plVar8 == (long *)PTR_DAT_043794d8) {
          local_40 = puVar12 + -1;
          goto LAB_02c013d4;
        }
      }
    }
    local_40 = (undefined8 *)0x0;
  }
LAB_02c013d4:
  local_24[0] = *(undefined1 *)((long)param_1 + 0x39c);
  plVar8 = (long *)FUN_02a5fd30(auStack_28,uVar11,&local_38,&local_40,local_24);
  plVar8[0x3c] = plVar8[0x3c] | 8;
  if (plVar8 != (long *)0x0) {
    lVar13 = plVar8[0xb];
    if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar13 + 0x10) == 0) {
      uVar11 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
      *(undefined8 *)(lVar13 + 0x10) = uVar11;
    }
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  pcVar10 = (code *)plVar8[0x75];
  if (pcVar10 != (code *)0x0) {
    plVar8[0x76] = 0;
    plVar8[0x77] = 0;
    plVar8[0x74] = 0;
    plVar8[0x75] = 0;
    (*pcVar10)(plVar8 + 0x78);
  }
  plVar8[0x74] = (long)&LAB_02c029f4;
  plVar8[0x75] = (long)&LAB_02c02ab8;
  plVar8[0x78] = (long)param_1;
  plVar8[0x76] = (long)&LAB_02c02abc;
  plVar8[0x77] = (long)&LAB_02c02ac8;
  local_38 = plVar8;
  FUN_02a700c0(param_1,&local_38);
  if (local_38 != (long *)0x0) {
    lVar13 = local_38[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar6 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  FUN_02c01eec(param_1);
  return;
}


