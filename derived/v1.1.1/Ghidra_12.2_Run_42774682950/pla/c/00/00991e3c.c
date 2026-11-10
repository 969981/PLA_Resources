/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00991e3c; name: FUN_00991e3c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_00991e3c(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  long lVar10;
  undefined1 *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  long alStack_d0 [12];
  long *local_70;
  long *local_68;
  char *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 uStack_48;
  undefined4 local_3c;
  long *local_38;
  long *local_28;
  
  iVar3 = *(int *)(param_2 + 0x60);
  if (iVar3 == 0) {
    *(undefined1 *)(param_1 + 0x558) = 0;
    return;
  }
  if (((*PTR_DAT_04379578 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379578), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796d8,PTR_DAT_04379580,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379578);
  }
  lVar10 = *(long *)PTR_DAT_04379580;
  *(long *)PTR_DAT_04379588 = lVar10;
  FUN_0098f80c(&local_38,lVar10 + 0xd8);
  FUN_0199c304(&local_68,local_38);
  if (local_68 == (long *)0x0) {
    local_28 = (long *)0x0;
  }
  else {
    FUN_009acf14(&local_28);
    if (local_68 != (long *)0x0) {
      plVar2 = local_68 + 1;
      do {
        iVar9 = (int)*plVar2 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
        if (bVar5) {
          *(int *)plVar2 = iVar9;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar9 == 0) {
        local_68[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_50 = *local_68;
        FUN_02a44274(lVar10 + 0xd8,&local_50);
      }
    }
  }
  puVar7 = PTR_FloatDegree180_04372ce0;
  puVar8 = PTR_FloatPi_04372cf0;
  if (local_38 != (long *)0x0) {
    lVar10 = *(long *)((long)local_38 + 0x58);
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar9 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    puVar7 = PTR_FloatDegree180_04372ce0;
    puVar8 = PTR_FloatPi_04372cf0;
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
      puVar7 = PTR_FloatDegree180_04372ce0;
      puVar8 = PTR_FloatPi_04372cf0;
    }
  }
  local_3c = ZEXT14(iVar3 != 1);
  PTR_FloatDegree180_04372ce0 = puVar7;
  PTR_FloatPi_04372cf0 = puVar8;
  *(undefined1 *)(param_1 + 0x558) = 1;
  local_50 = (ulong)(uint)(*(float *)(param_1 + 0x540) * (*(float *)puVar8 / *(float *)puVar7)) <<
             0x20;
  local_68 = (long *)0x28d2c4580b6a7f8c;
  local_60 = "battle_wall";
  uStack_58 = 0xb;
  uStack_48 = 0;
  FUN_0099c344(&local_38,*(undefined8 *)(param_1 + 8),param_1 + 0x530,&local_50,&local_68,&local_3c)
  ;
  local_f0 = &LAB_009b7d70;
  local_e8 = FUN_009b8060;
  local_e0 = &LAB_009b8064;
  local_d8 = &LAB_009b8070;
  alStack_d0[0] = param_1;
  FUN_0099c3bc(&local_70,local_28,&local_38,&local_f0);
  pcVar6 = local_e8;
  if (local_70 != (long *)0x0) {
    lVar10 = local_70[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
      pcVar6 = local_e8;
      local_e8 = (code *)0x0;
    }
  }
  if (pcVar6 != (code *)0x0) {
    local_e0 = (undefined1 *)0x0;
    local_d8 = (undefined1 *)0x0;
    local_f0 = (undefined1 *)0x0;
    local_e8 = (code *)0x0;
    (*pcVar6)(alStack_d0);
  }
  if (local_38 != (long *)0x0) {
    lVar10 = local_38[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_38 + 0x20))();
    }
  }
  if (local_28 != (long *)0x0) {
    lVar10 = local_28[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar3 = *piVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar5) {
        *piVar1 = iVar3 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (iVar3 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*local_28 + 0x20))();
    }
  }
  return;
}


