/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027a0898; name: FUN_027a0898
 */


void FUN_027a0898(undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
                 undefined8 param_5,undefined8 param_6)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *local_170;
  undefined8 uStack_168;
  long *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  long *local_140;
  long *local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  code *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 auStack_100 [104];
  undefined4 local_98 [2];
  undefined8 local_90;
  long *local_88;
  undefined1 auStack_80 [24];
  long *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = param_6;
  uStack_48 = param_5;
  FUN_013b1c3c(&local_120);
  if (local_120 == (undefined8 *)0x0) {
    local_58 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_58);
    if (local_120 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_120 + 1);
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
        local_120[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_160 = (long *)*local_120;
        FUN_02a44274(lVar8 + 0xd8,&local_160);
      }
    }
  }
  FUN_027a0d94(&local_60,*(undefined8 *)(param_2 + 8),&uStack_48,&local_50);
  FUN_00ae29ec(&local_88,param_3);
  FUN_02a47560(auStack_80,&local_88);
  local_90 = 0x2000;
  local_98[0] = 0;
  local_160 = local_58;
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) goto LAB_027a0d7c;
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_158 = *param_3;
  local_150 = param_3[1];
  local_148 = param_3[2];
  local_140 = (long *)param_3[3];
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x18))();
  }
  local_138 = local_60;
  if (local_60 != (long *)0x0) {
    lVar8 = local_60[0xb];
    if (*(undefined8 **)(lVar8 + 0x18) == (undefined8 *)0x0) {
LAB_027a0d7c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar8 + 0x10) == 0) {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x18))();
      *(undefined8 *)(lVar8 + 0x10) = uVar7;
    }
    piVar1 = (int *)(lVar8 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_130 = *param_4;
  local_128 = *(undefined8 *)(param_4 + 2);
  local_108 = 0;
  local_120 = (undefined8 *)0x0;
  local_118 = (code *)0x0;
  local_110 = 0;
  FUN_027a0f2c(&local_120,&local_160);
  FUN_027971a8(param_1,auStack_80,local_98,&local_120);
  pcVar5 = local_118;
  if (local_118 != (code *)0x0) {
    local_110 = 0;
    local_108 = 0;
    local_120 = (undefined8 *)0x0;
    local_118 = (code *)0x0;
    (*pcVar5)(auStack_100);
  }
  if (local_138 != (long *)0x0) {
    lVar8 = local_138[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_138 + 0x20))();
    }
  }
  if (local_140 != (long *)0x0) {
    (**(code **)(*local_140 + 0x20))();
  }
  if (local_160 != (long *)0x0) {
    lVar8 = local_160[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_160 + 0x20))();
    }
  }
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_88 != (long *)0x0) {
    (**(code **)(*local_88 + 0x20))();
  }
  uVar7 = *param_1;
  FUN_013b1c3c(&local_120,param_2);
  local_170 = (undefined8 *)0x0;
  uStack_168 = 0;
  FUN_013b8954(&local_170,&local_120);
  FUN_02797208(uVar7,&local_170);
  puVar4 = local_170;
  if (local_170 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_170 + 1);
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
      local_170[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_160 = (long *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_160);
    }
  }
  puVar4 = local_120;
  if (local_120 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_120 + 1);
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
      local_120[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_160 = (long *)*puVar4;
      FUN_02a44274(lVar8 + 0xd8,&local_160);
    }
  }
  if (local_60 != (long *)0x0) {
    lVar8 = local_60[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_60 + 0x20))();
    }
  }
  if (local_58 != (long *)0x0) {
    lVar8 = local_58[0xb];
    piVar1 = (int *)(lVar8 + 0xc);
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
      *(undefined8 *)(lVar8 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  return;
}


