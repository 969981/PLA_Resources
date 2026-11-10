/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027441c8; name: FUN_027441c8
 */


void FUN_027441c8(undefined8 *param_1,long param_2,undefined8 *param_3,undefined4 *param_4,
                 byte param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *local_160;
  undefined8 uStack_158;
  long *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  long *local_130;
  long *local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 *local_110;
  code *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [96];
  undefined4 local_90 [2];
  undefined8 local_88;
  long *local_80;
  long local_78;
  long lStack_70;
  long local_68;
  long *local_60;
  long *local_58;
  long *local_50;
  byte local_48 [4];
  undefined1 local_44 [4];
  
  local_48[0] = param_5 & 1;
  local_44[0] = 0;
  FUN_013b1c3c(&local_110);
  if (local_110 == (undefined8 *)0x0) {
    local_50 = (long *)0x0;
  }
  else {
    FUN_013b20c8(&local_50);
    if (local_110 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_110 + 1);
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
        local_110[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_150 = (long *)*local_110;
        FUN_02a44274(lVar9 + 0xd8,&local_150);
      }
    }
  }
  FUN_02744724(&local_58,*(undefined8 *)(param_2 + 8),local_44,local_48);
  FUN_00ae29ec(&local_80,param_3);
  plVar6 = local_80;
  if (local_80 == (long *)0x0) {
    local_78 = *(long *)PTR_DAT_04379c88;
LAB_027446f4:
    lStack_70 = *(long *)PTR_PTR_04379d00;
    if (local_80 != (long *)0x0) goto LAB_027442bc;
LAB_02744704:
    local_68 = 0;
  }
  else {
    local_78 = local_80[0xb];
    if (local_80 == (long *)0x0) goto LAB_027446f4;
    lStack_70 = local_80[0xc];
    if (local_80 == (long *)0x0) goto LAB_02744704;
LAB_027442bc:
    local_68 = local_80[0xd];
  }
  local_60 = (long *)0x0;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x18))(local_80);
  }
  local_88 = 0x2000;
  local_60 = plVar6;
  local_90[0] = 0;
  local_150 = local_50;
  if (local_50 != (long *)0x0) {
    lVar9 = local_50[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) goto LAB_0274470c;
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_148 = *param_3;
  local_140 = param_3[1];
  local_138 = param_3[2];
  local_130 = (long *)param_3[3];
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x18))();
  }
  local_128 = local_58;
  if (local_58 != (long *)0x0) {
    lVar9 = local_58[0xb];
    if (*(undefined8 **)(lVar9 + 0x18) == (undefined8 *)0x0) {
LAB_0274470c:
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar8 = (**(code **)**(undefined8 **)(lVar9 + 0x18))();
      *(undefined8 *)(lVar9 + 0x10) = uVar8;
    }
    piVar1 = (int *)(lVar9 + 0xc);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  local_120 = *param_4;
  local_118 = *(undefined8 *)(param_4 + 2);
  local_f8 = 0;
  local_110 = (undefined8 *)0x0;
  local_108 = (code *)0x0;
  local_100 = 0;
  FUN_027448bc(&local_110,&local_150);
  FUN_013b1d1c(param_1,&local_78,local_90,&local_110);
  pcVar5 = local_108;
  if (local_108 != (code *)0x0) {
    local_100 = 0;
    local_f8 = 0;
    local_110 = (undefined8 *)0x0;
    local_108 = (code *)0x0;
    (*pcVar5)(auStack_f0);
  }
  if (local_128 != (long *)0x0) {
    lVar9 = local_128[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_128 + 0x20))();
    }
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 0x20))();
  }
  if (local_150 != (long *)0x0) {
    lVar9 = local_150[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_150 + 0x20))();
    }
  }
  if (local_60 != (long *)0x0) {
    (**(code **)(*local_60 + 0x20))();
  }
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  uVar8 = *param_1;
  FUN_013b1c3c(&local_110,param_2);
  local_160 = (undefined8 *)0x0;
  uStack_158 = 0;
  FUN_013b8954(&local_160,&local_110);
  FUN_013b1d7c(uVar8,&local_160);
  puVar4 = local_160;
  if (local_160 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_160 + 1);
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
      local_160[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_150 = (long *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_150);
    }
  }
  puVar4 = local_110;
  if (local_110 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_110 + 1);
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
      local_110[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar9 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar9;
      local_150 = (long *)*puVar4;
      FUN_02a44274(lVar9 + 0xd8,&local_150);
    }
  }
  if (local_58 != (long *)0x0) {
    lVar9 = local_58[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_58 + 0x20))();
    }
  }
  if (local_50 != (long *)0x0) {
    lVar9 = local_50[0xb];
    piVar1 = (int *)(lVar9 + 0xc);
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
      *(undefined8 *)(lVar9 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return;
}


