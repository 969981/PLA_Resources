/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c4d498; name: FUN_01c4d498
 */


void FUN_01c4d498(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8,
                 undefined8 param_9,long *param_10,long param_11)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  local_70 = (undefined8 *)0x0;
  uStack_68 = 0;
  FUN_018e22ac(&local_70,param_4);
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_01b5fa90(&local_80,param_5);
  local_90 = (undefined8 *)0x0;
  uStack_88 = 0;
  FUN_01933b30(&local_90,param_6);
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  FUN_0095e898(&local_a0,param_9);
  local_a8 = (long *)*param_10;
  if (local_a8 != (long *)0x0) {
    lVar11 = local_a8[0xb];
    if (*(undefined8 **)(lVar11 + 0x18) == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar11 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar11 + 0x18))();
      *(undefined8 *)(lVar11 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_c0 = (undefined8 *)0x0;
  uStack_b8 = 0;
  FUN_0095aa3c(&local_c0,param_11);
  local_b0 = *(undefined8 *)(param_11 + 0x10);
  FUN_01b53358(param_1,param_2,param_3,&local_70,&local_80,&local_90,param_7,param_8,&local_a0,
               &local_a8,&local_c0,0,0);
  puVar5 = local_c0;
  if (local_c0 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_c0 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_c0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  puVar5 = local_a0;
  if (local_a8 != (long *)0x0) {
    lVar11 = local_a8[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_a8 + 0x20))();
      puVar5 = local_a0;
    }
  }
  local_a0 = puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      puVar5[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  puVar5 = local_90;
  if (local_90 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_90 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_90[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  puVar5 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  puVar5 = local_70;
  if (local_70 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_70 + 1);
    do {
      iVar7 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar7 + -1 == 0) {
      local_70[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_58 = *puVar5;
      FUN_02a44274(lVar11 + 0xd8,&local_58);
    }
  }
  *param_1 = &PTR_FUN_0424c0f0;
  param_1[0x49] = &PTR_LAB_0424c3a8;
  param_1[0x3f] = &PTR_LAB_0424c358;
  param_1[9] = &PTR_LAB_0424c250;
  param_1[10] = &PTR_LAB_0424c330;
  *(undefined4 *)((long)param_1 + 0x5a4) = 0;
  *(undefined8 *)((long)param_1 + 0x594) = 0;
  *(undefined8 *)((long)param_1 + 0x59c) = 0;
  FUN_01c4db2c(param_1 + 0xb5);
  FUN_01c4db2c(param_1 + 0xbc);
  param_1[0xc3] = 1;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  param_1[0xc6] = 0;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar9 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  lVar11 = DAT_043f1798;
  if (((lVar9 == 0) || (*(long *)(lVar9 + 0x80) == 0)) ||
     (lVar9 = *(long *)(lVar9 + *(long *)(lVar9 + 0x80) * 8 + -8), lVar9 == 0)) {
    lVar4 = tpidr_el0;
    lVar9 = *(long *)(lVar4 + 0x20);
    if (*(long *)(lVar4 + 0x20) == 0) {
      *(long *)(lVar4 + 0x20) = DAT_043f1798;
      lVar9 = lVar11;
    }
  }
  param_1[199] = lVar9;
  param_1[200] = 0x3fffffffffffffff;
  param_1[0xde] = &DAT_f4b17a579f18960;
  param_1[0xdd] = 0x200000000;
  param_1[0xc9] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  param_1[0xcb] = 0;
  param_1[0xc5] = param_1 + 0xc6;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xdf] = 0x82a2b175229d6a5b;
  param_1[0xe0] = 0;
  param_1[0xb2] = 0;
  param_1[0xdc] = 0;
  param_1[0xc3] = 1;
  *(undefined1 *)(param_1 + 0xc4) = 0;
  nn::crypto::GenerateCryptographicallyRandomBytes(&local_58,8);
  param_1[0xe0] = local_58;
  param_1[0xde] = local_58;
  pcVar10 = (code *)param_1[0xcd];
  param_1[0xdf] = 0x82a2b175229d6a5b;
  if (pcVar10 != (code *)0x0) {
    param_1[0xce] = 0;
    param_1[0xcf] = 0;
    param_1[0xcc] = 0;
    param_1[0xcd] = 0;
    (*pcVar10)(param_1 + 0xd0);
  }
  param_1[0xcc] = &LAB_01c54628;
  param_1[0xcd] = &LAB_01c5462c;
  param_1[0xce] = &LAB_01c54630;
  param_1[0xcf] = &LAB_01c54634;
  return;
}


