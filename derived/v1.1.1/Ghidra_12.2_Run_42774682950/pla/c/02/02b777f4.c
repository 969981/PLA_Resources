/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b777f4; name: FUN_02b777f4
 */


void FUN_02b777f4(long *param_1,ulong *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_70;
  long *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  param_1[7] = 0;
  puVar3 = PTR_DAT_043796d0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar3 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar4 = PTR_DAT_04379528;
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (lVar6 == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = 0;
    if (*(long *)(lVar6 + 0x80) != 0) {
      lVar9 = *(long *)(lVar6 + *(long *)(lVar6 + 0x80) * 8 + -8);
    }
  }
  param_1[1] = lVar9;
  *param_1 = (long)&DAT_04285d78;
  param_1[9] = (long)&PTR_LAB_04285da8;
  if (((*PTR_DAT_04388190 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04388190), iVar5 != 0))
  {
    FUN_00100250(PTR_LAB_043881a0,PTR_DAT_04388198,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04388190);
  }
  PTR_DAT_04388198[8] = 1;
  *param_1 = (long)&PTR_LAB_04285cf8;
  param_1[9] = (long)&PTR_LAB_04285d28;
  *(char *)(param_1 + 10) = (char)param_2[3];
  if (DAT_043effd0 != 0) {
    return;
  }
  plVar10 = &DAT_043f1798;
  if ((char)param_2[3] != '\0') {
    plVar10 = param_1 + 1;
  }
  plVar10 = (long *)*plVar10;
  plVar7 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x48,8);
  if (plVar7 == (long *)0x0) {
    local_60 = 0;
    local_58 = 0;
    local_68 = (long *)0x0;
LAB_02b77a3c:
    local_70 = 0;
    FUN_02b78550(&DAT_043effd0,plVar7);
    DAT_043effe8 = local_58;
    DAT_043effd8 = local_68;
    DAT_043effe0 = local_60;
    FUN_02b78550(&local_70,0);
    plVar7 = DAT_043efff8;
    lVar6 = *param_2 + param_2[1];
    DAT_043efff8[2] = (long)plVar10;
    plVar7[4] = lVar6;
    plVar10 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,lVar6,0x10);
    plVar7[3] = (long)plVar10;
    if (plVar10 == (long *)0x0) {
      (**(code **)(*(long *)plVar7[2] + 0xb8))();
    }
    else {
      FUN_0287a808(plVar10,plVar10 + 0x16,lVar6 + -0xb0);
      plVar7[1] = (long)plVar10;
      (**(code **)(*plVar10 + 0xb0))(plVar10,"ResourceType::Driver");
    }
    DAT_043efff0 = plVar10;
    pvVar8 = (void *)(**(code **)(*plVar10 + 0x10))(plVar10,*param_2,0x1000);
    nv::InitializeGraphics(pvVar8,*param_2);
    nv::SetGraphicsAllocator
              (FUN_02b77c80,(_func_void_void_ptr_void_ptr *)&LAB_02b77cd0,
               (_func_void_ptr_void_ptr_ulong_void_ptr *)&LAB_02b77de0,DAT_043efff0);
    return;
  }
  if (((*puVar3 & 1) == 0) &&
     (iVar5 = __cxa_guard_acquire(PTR_DAT_04379520), puVar3 = PTR_DAT_04379528, iVar5 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar6 = nn::os::GetTlsValue(*(undefined4 *)puVar4);
  if (*(ulong *)(lVar6 + 0x80) < 0x10) {
    *(long **)(lVar6 + *(ulong *)(lVar6 + 0x80) * 8) = plVar10;
    puVar3 = PTR_DAT_0437a000;
    *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + 1;
    *plVar7 = (long)(puVar3 + 0x10);
    if (((DAT_043f1fd0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_043f1fd0), iVar5 != 0)) {
      nn::os::InitializeLightEvent(&DAT_043f1fbc,0,1);
      DAT_043f1fc8 = 0;
      FUN_00100250(PTR_LAB_04381908,&DAT_043f1fb8,&PTR_LOOP_0411a000);
      __cxa_guard_release(&DAT_043f1fd0);
    }
    lVar9 = nn::os::GetCurrentThread();
    do {
      if (DAT_043f1fc8 != 0) {
        do {
          ClearExclusiveLocal();
          nn::os::WaitLightEvent((LightEventType *)&DAT_043f1fbc);
          while (DAT_043f1fc8 == 0) {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              DAT_043f1fc8 = lVar9;
            }
            if (cVar1 == '\0') goto LAB_02b779c4;
          }
        } while( true );
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x43f1fc8,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_043f1fc8 = lVar9;
      }
    } while (cVar1 != '\0');
LAB_02b779c4:
    if (DAT_043f1fb0 < 0x100) {
      (&DAT_043f17b0)[DAT_043f1fb0] = plVar7;
      DAT_043f1fb0 = DAT_043f1fb0 + 1;
      DAT_043f1fc8 = 0;
      nn::os::SignalLightEvent((LightEventType *)&DAT_043f1fbc);
      plVar7[8] = 0;
      *plVar7 = (long)&PTR_LAB_04285d48;
      plVar7[1] = 0;
      plVar7[2] = 0;
      plVar7[3] = 0;
      plVar7[4] = 0;
      plVar7[5] = 0;
      plVar7[6] = 0;
      plVar7[7] = 0;
      local_60 = 0x48;
      local_58 = 8;
      DAT_043efff8 = plVar7;
      *(long *)(lVar6 + 0x80) = *(long *)(lVar6 + 0x80) + -1;
      local_68 = plVar10;
      goto LAB_02b77a3c;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


