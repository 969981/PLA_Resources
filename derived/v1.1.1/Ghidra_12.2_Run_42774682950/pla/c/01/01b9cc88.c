/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b9cc88; name: FUN_01b9cc88
 */


void FUN_01b9cc88(long param_1)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *local_a0;
  undefined8 local_98;
  long *local_90;
  undefined8 local_88;
  int local_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  undefined4 uStack_77;
  undefined3 uStack_73;
  undefined8 local_70;
  undefined8 local_68;
  
  cVar3 = *(char *)(param_1 + 0x956);
  uVar4 = *(undefined1 *)(param_1 + 0x9d8);
  uVar12 = *(undefined8 *)(param_1 + 0x9e0);
  uVar9 = 1;
  if (cVar3 == '\0') {
    uVar9 = 2;
  }
  if (*(char *)(param_1 + 0x821) == '\0') {
    bVar2 = *(char *)(param_1 + 0x955) != '\0';
    if (bVar2) {
      iVar13 = 0;
      lVar8 = *(long *)(param_1 + 0x740);
    }
    else {
      iVar13 = (uint)(*(char *)(param_1 + 0x81e) == '\0' && cVar3 == '\0') << 1;
      lVar8 = *(long *)(param_1 + 0x740);
    }
    if (lVar8 != 0) {
      local_a0 = *(undefined8 **)(lVar8 + 0x78);
      local_98 = *(undefined8 *)(lVar8 + 0x80);
      local_90 = (long *)&DAT_cbf29ce484222645;
      local_88 = 0x71f820e7e3b88b11;
      FUN_00cea640(lVar8,&local_a0);
      lVar8 = *(long *)(param_1 + 0x740);
      if (*(char *)(param_1 + 0x81e) != '\0') {
        local_a0 = *(undefined8 **)(lVar8 + 0x78);
        local_98 = *(undefined8 *)(lVar8 + 0x80);
        local_90 = (long *)&DAT_cbf29ce484222645;
        local_88 = 0x88ef507f58fd8e67;
        FUN_00cea640(lVar8,&local_a0);
        uVar9 = 0;
        lVar8 = *(long *)(param_1 + 0x740);
        goto joined_r0x01b9d004;
      }
      if (bVar2 || cVar3 != '\0') {
        local_a0 = *(undefined8 **)(lVar8 + 0x78);
        local_98 = *(undefined8 *)(lVar8 + 0x80);
        local_88 = 0xf029a9796708231a;
      }
      else {
        local_a0 = *(undefined8 **)(lVar8 + 0x78);
        local_98 = *(undefined8 *)(lVar8 + 0x80);
        local_88 = 0x4525d688b5a43c8b;
      }
      local_90 = (long *)&DAT_cbf29ce484222645;
      FUN_00cea640(lVar8,&local_a0);
    }
    lVar8 = *(long *)(param_1 + 0x740);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x740);
    if (lVar8 != 0) {
      local_a0 = *(undefined8 **)(lVar8 + 0x78);
      local_98 = *(undefined8 *)(lVar8 + 0x80);
      local_90 = (long *)&DAT_cbf29ce484222645;
      local_88 = 0x93ddc05052e6029d;
      FUN_00cea640(lVar8,&local_a0);
      lVar8 = *(long *)(param_1 + 0x740);
      if (*(char *)(param_1 + 0x81e) == '\0') {
        local_a0 = *(undefined8 **)(lVar8 + 0x78);
        local_98 = *(undefined8 *)(lVar8 + 0x80);
        local_90 = (long *)&DAT_cbf29ce484222645;
        local_88 = 0xf029a9796708231a;
        FUN_00cea640(lVar8,&local_a0);
      }
      else {
        local_a0 = *(undefined8 **)(lVar8 + 0x78);
        local_98 = *(undefined8 *)(lVar8 + 0x80);
        local_90 = (long *)&DAT_cbf29ce484222645;
        local_88 = 0x88ef507f58fd8e67;
        FUN_00cea640(lVar8,&local_a0);
        uVar9 = 0;
      }
    }
    iVar13 = 1;
    lVar8 = *(long *)(param_1 + 0x740);
  }
joined_r0x01b9d004:
  if (lVar8 != 0) {
    local_a0 = *(undefined8 **)(lVar8 + 0x78);
    local_98 = *(undefined8 *)(lVar8 + 0x80);
    local_90 = (long *)&DAT_cbf29ce484222645;
    local_88 = 0x3cc990da6c6a7c4a;
    FUN_00cea640(lVar8,&local_a0);
  }
  lVar11 = *(long *)(param_1 + 0xaa0);
  lVar8 = nn::os::GetCurrentThread();
  plVar10 = (long *)(lVar11 + 0xf8);
  do {
    if (*plVar10 != 0) {
      ClearExclusiveLocal();
      do {
        nn::os::WaitLightEvent((LightEventType *)(lVar11 + 0xec));
        while (*plVar10 == 0) {
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar2) {
            *plVar10 = lVar8;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') goto LAB_01b9ce08;
        }
        ClearExclusiveLocal();
      } while( true );
    }
    cVar3 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
    if (bVar2) {
      *plVar10 = lVar8;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
LAB_01b9ce08:
  plVar10 = *(long **)(lVar11 + 0xb0);
  if (plVar10 != (long *)0x0) {
    local_a0 = (undefined8 *)0x0;
    local_98 = 0;
    FUN_008802f0(&local_a0,plVar10 + 3);
    local_90 = (long *)plVar10[5];
    if ((local_a0 == (undefined8 *)0x0) || (*(int *)((long)local_a0 + 0xc) == 0)) {
      plVar10 = (long *)FUN_01b66c50(lVar11 + 0x80,plVar10);
    }
    else {
      uStack_73 = 0;
      uStack_77 = 0;
      local_80 = iVar13;
      uStack_7c = uVar9;
      local_78 = uVar4;
      local_70 = uVar12;
      (**(code **)(*local_90 + 0x30))(local_90,&local_80);
      plVar10 = (long *)*plVar10;
    }
    puVar5 = local_a0;
    puVar6 = PTR_DAT_043794a0;
    if (local_a0 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_a0 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar2) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        local_a0[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)puVar6;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_68 = *puVar5;
        FUN_02a44274(lVar8 + 0xd8,&local_68);
      }
    }
    while (plVar10 != (long *)0x0) {
      local_a0 = (undefined8 *)0x0;
      local_98 = 0;
      FUN_008802f0(&local_a0,plVar10 + 3);
      local_90 = (long *)plVar10[5];
      if ((local_a0 == (undefined8 *)0x0) || (*(int *)((long)local_a0 + 0xc) == 0)) {
        plVar10 = (long *)FUN_01b66c50(lVar11 + 0x80,plVar10);
        puVar5 = local_a0;
      }
      else {
        uStack_73 = 0;
        uStack_77 = 0;
        local_80 = iVar13;
        uStack_7c = uVar9;
        local_78 = uVar4;
        local_70 = uVar12;
        (**(code **)(*local_90 + 0x30))(local_90,&local_80);
        plVar10 = (long *)*plVar10;
        puVar5 = local_a0;
      }
      local_a0 = puVar5;
      if (puVar5 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar5 + 1);
        do {
          iVar7 = *piVar1;
          cVar3 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar2) {
            *piVar1 = iVar7 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar7 + -1 == 0) {
          puVar5[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
            FUN_00100250(PTR_LAB_04379590,puVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar8 = *(long *)puVar6;
          *(long *)PTR_DAT_043794a8 = lVar8;
          local_68 = *puVar5;
          FUN_02a44274(lVar8 + 0xd8,&local_68);
        }
      }
    }
  }
  *(undefined8 *)(lVar11 + 0xf8) = 0;
  nn::os::SignalLightEvent((LightEventType *)(lVar11 + 0xec));
  return;
}


