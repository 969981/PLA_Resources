/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134ff68; name: FUN_0134ff68
 */


void FUN_0134ff68(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  undefined1 *local_2c0;
  code *local_2b8;
  undefined1 *local_2b0;
  undefined1 *local_2a8;
  long alStack_2a0 [12];
  long *local_240;
  long *local_238 [2];
  long *local_228;
  undefined1 auStack_220 [368];
  undefined1 local_b0;
  long local_28;
  
  if (*(long *)(param_1 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0);
  }
  FUN_0135213c(auStack_220,*(undefined8 *)(param_1 + 0x58));
  local_b0 = *(undefined1 *)(param_1 + 0xa3);
  FUN_01352878(local_238,*(undefined8 *)(param_1 + 0x58),param_1 + 0x68,auStack_220);
  local_228 = local_238[0];
  if (((*PTR_DAT_0437a780 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_0437a780), iVar6 != 0))
  {
    FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a780);
  }
  *(undefined8 *)PTR_DAT_0437a790 = *(undefined8 *)PTR_DAT_0437a788;
  FUN_01e65a40(local_238);
  FUN_0135ad58(local_228 + 0x4d,local_238);
  if (local_238[0] != (long *)0x0) {
    plVar1 = local_238[0] + 1;
    do {
      iVar6 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar6;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 == 0) {
      local_238[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar7 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar7;
      local_28 = *local_238[0];
      FUN_02a44274(lVar7 + 0xd8,&local_28);
    }
  }
  local_2c0 = &LAB_0135b518;
  local_2b8 = FUN_0135be60;
  local_2b0 = &LAB_0135d2cc;
  local_2a8 = &LAB_0135d2d8;
  alStack_2a0[0] = param_1;
  FUN_01352900(&local_240,*(undefined8 *)(param_1 + 0x78),0,&local_228,&local_2c0,0);
  pcVar5 = local_2b8;
  if (local_240 != (long *)0x0) {
    lVar7 = local_240[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_240 + 0x20))();
      pcVar5 = local_2b8;
    }
  }
  if (pcVar5 == (code *)0x0) {
    local_2b8 = (code *)0x0;
  }
  else {
    local_2b0 = (undefined1 *)0x0;
    local_2a8 = (undefined1 *)0x0;
    local_2c0 = (undefined1 *)0x0;
    local_2b8 = (code *)0x0;
    (*pcVar5)(alStack_2a0);
  }
  if (local_228 != (long *)0x0) {
    lVar7 = local_228[0xb];
    piVar2 = (int *)(lVar7 + 0xc);
    do {
      iVar6 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      *(undefined8 *)(lVar7 + 0x18) = 0;
      (**(code **)(*local_228 + 0x20))();
    }
  }
  FUN_00b17558(auStack_220);
  return;
}


