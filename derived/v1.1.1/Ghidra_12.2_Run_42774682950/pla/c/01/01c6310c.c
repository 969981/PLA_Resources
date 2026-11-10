/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c6310c; name: FUN_01c6310c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c6310c(long param_1,undefined8 param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  undefined8 local_130;
  code *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [104];
  long *local_a8;
  undefined1 local_9c [4];
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  long *local_90;
  char *pcStack_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  undefined8 uStack_68;
  undefined8 *local_60;
  undefined8 uStack_58;
  long *local_50;
  long *local_48;
  
  if ((*(long *)(param_1 + 0x340) != 0) &&
     (FUN_018e4ba0(&local_90), plVar7 = local_90, local_90 != (long *)0x0)) {
    local_90 = (long *)0x3b005ee805d71f9;
    pcStack_88 = "PLAY_STDISTORTION_CONTENTS_POP_S";
    local_80 = (long *)0x20;
    local_78 = (long *)0x0;
    local_94[0] = 1;
    local_98[0] = 1;
    local_9c[0] = 1;
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    uStack_68 = _UNK_03888fc8;
    local_70 = _DAT_03888fc0;
    FUN_01c63700(&local_48,*(undefined8 *)(param_1 + 8),param_2,&local_60,&local_70,&local_90,
                 local_94,local_98,local_9c);
    local_50 = local_48;
    local_48 = (long *)0x0;
    if (local_78 != (long *)0x0) {
      (**(code **)(*local_78 + 0x20))();
    }
    local_90 = (long *)0x0;
    pcStack_88 = (char *)0x0;
    FUN_008802f0(&local_90,*param_3 + 0x58);
    local_60 = (undefined8 *)0x0;
    uStack_58 = 0;
    FUN_00b5f91c(&local_60,&local_90);
    plVar5 = local_90;
    if (local_90 != (long *)0x0) {
      plVar1 = local_90 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_70 = (undefined8 *)*plVar5;
        FUN_02a44274(lVar10 + 0xd8,&local_70);
      }
    }
    (**(code **)(*(long *)*param_4 + 0x10))(&local_90);
    local_70 = (undefined8 *)0x0;
    uStack_68 = 0;
    FUN_00bd1f90(&local_70,&local_90);
    plVar5 = local_90;
    if (local_90 != (long *)0x0) {
      plVar1 = local_90 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = (long *)*plVar5;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    local_90 = (long *)0x0;
    pcStack_88 = (char *)0x0;
    FUN_00b63974(&local_90,&local_60);
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    FUN_00ae8374(&local_80,&local_70);
    local_120 = 0;
    uStack_118 = 0;
    local_130 = 0;
    local_128 = (code *)0x0;
    FUN_01c66af8(&local_130,&local_90);
    FUN_00bdc73c(&local_a8,plVar7,0xc,&local_50,&local_130,0);
    pcVar6 = local_128;
    if (local_a8 != (long *)0x0) {
      lVar10 = local_a8[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_a8 + 0x20))();
        pcVar6 = local_128;
        local_128 = (code *)0x0;
      }
    }
    plVar5 = local_80;
    if (pcVar6 != (code *)0x0) {
      local_120 = 0;
      uStack_118 = 0;
      local_130 = 0;
      local_128 = (code *)0x0;
      (*pcVar6)(auStack_110);
      plVar5 = local_80;
    }
    local_80 = plVar5;
    if (plVar5 != (long *)0x0) {
      plVar1 = plVar5 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        plVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = (long *)*plVar5;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    plVar5 = local_90;
    if (local_90 != (long *)0x0) {
      plVar1 = local_90 + 1;
      do {
        iVar9 = (int)*plVar1 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar4) {
          *(int *)plVar1 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        local_90[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_48 = (long *)*plVar5;
        FUN_02a44274(lVar10 + 0xd8,&local_48);
      }
    }
    puVar8 = local_70;
    if (local_70 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_70 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_70[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_90);
      }
    }
    puVar8 = local_60;
    if (local_60 != (undefined8 *)0x0) {
      piVar2 = (int *)(local_60 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        local_60[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04379498), iVar9 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar10 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar10;
        local_90 = (long *)*puVar8;
        FUN_02a44274(lVar10 + 0xd8,&local_90);
      }
    }
    if (local_50 != (long *)0x0) {
      lVar10 = local_50[0xb];
      piVar2 = (int *)(lVar10 + 0xc);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*local_50 + 0x20))();
      }
    }
    lVar10 = plVar7[0xb];
    piVar2 = (int *)(lVar10 + 0xc);
    do {
      iVar9 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar9 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar9 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar7 + 0x20))(plVar7);
    }
  }
  return;
}


