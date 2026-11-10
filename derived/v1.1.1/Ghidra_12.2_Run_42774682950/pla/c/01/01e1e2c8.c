/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e1e2c8; name: FUN_01e1e2c8
 */


void FUN_01e1e2c8(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *local_220;
  char *pcStack_218;
  undefined8 local_210;
  long *local_208;
  long *local_200;
  long *local_1f8;
  undefined8 local_1f0 [48];
  long local_70 [2];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    local_220 = (long *)0x0;
  }
  else {
    FUN_01e17710(&local_220);
  }
  FUN_01b014c0(local_1f0,local_220 + 0x1a);
  if (local_220 != (long *)0x0) {
    lVar14 = local_220[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_220 + 0x20))();
    }
  }
  FUN_0095dafc(&local_1f8,local_1f0[0]);
  (**(code **)(*local_1f8 + 0x100))(local_1f8,PTR_DAT_0437a330);
  FUN_01a82160(&local_220,local_1f8);
  FUN_009c685c(&local_200,&local_220);
  (**(code **)(*local_200 + 0x180))(0);
  plVar16 = local_220;
  if (local_200 != (long *)0x0) {
    lVar14 = local_200[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_200 + 0x20))();
      plVar16 = local_220;
    }
  }
  local_220 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar16[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_70[0] = *plVar16;
      FUN_02a44274(lVar14 + 0xd8,local_70);
    }
  }
  FUN_01a82160(&local_220,local_1f8);
  FUN_009c685c(&local_200,&local_220);
  (**(code **)(*local_200 + 400))(0);
  plVar16 = local_220;
  if (local_200 != (long *)0x0) {
    lVar14 = local_200[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_200 + 0x20))();
      plVar16 = local_220;
    }
  }
  local_220 = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 1;
    do {
      iVar10 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      plVar16[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_70[0] = *plVar16;
      FUN_02a44274(lVar14 + 0xd8,local_70);
    }
  }
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  puVar7 = PTR_DAT_043794c8;
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  lVar14 = local_1f8[0x35];
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0xc) == 0)) {
LAB_01e1e4b8:
    plVar16 = (long *)0x0;
  }
  else {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar10 = *(int *)(lVar14 + 0xc);
    do {
      puVar12 = *(undefined8 **)(lVar14 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar13;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar7 = puVar9;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar6 = puVar7;
        __cxa_guard_release(puVar5);
      }
      if (puVar12 == (undefined8 *)0x0) goto LAB_01e1e4b8;
      while (puVar12 != (undefined8 *)puVar6) {
        puVar12 = (undefined8 *)*puVar12;
        plVar16 = (long *)0x0;
        if (puVar12 == (undefined8 *)0x0) goto LAB_01e1e4bc;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar10 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          plVar16 = (long *)0x0;
          if (*(long *)(lVar14 + 0x18) != 0) {
            plVar16 = (long *)(*(long *)(lVar14 + 0x18) + -0x50);
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      plVar16 = (long *)0x0;
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01e1e4bc:
  lVar14 = FUN_009cfbc8(plVar16 + 0x1e,&local_220);
  if (plVar16 != (long *)0x0) {
    lVar15 = plVar16[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*plVar16 + 0x20))(plVar16);
    }
  }
  if (lVar14 != 0) {
    FUN_02a4754c(&local_220,PTR_DAT_0437a3d8);
    puVar12 = (undefined8 *)FUN_0289f734(lVar14,&local_220);
    plVar16 = (long *)*puVar12;
    if (plVar16 != (long *)0x0) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
    }
    if (local_208 != (long *)0x0) {
      (**(code **)(*local_208 + 0x20))();
    }
    local_220 = (long *)&DAT_d7caeaa105946aa0;
    pcStack_218 = "battle_one_action_trigger";
    local_210 = 0x19;
    local_208 = (long *)0x0;
    local_70[0] = (**(code **)(*plVar16 + 200))(plVar16,&local_220);
    if (local_208 != (long *)0x0) {
      (**(code **)(*local_208 + 0x20))();
    }
    local_220 = (long *)&DAT_40f3c8d161633fe5;
    pcStack_218 = "battle_one_action_int";
    local_210 = 0x15;
    local_208 = (long *)0x0;
    local_200 = (long *)(**(code **)(*plVar16 + 0x48))(plVar16,&local_220);
    if (local_208 != (long *)0x0) {
      (**(code **)(*local_208 + 0x20))();
    }
    (**(code **)(*plVar16 + 0x58))(plVar16,&local_200,1);
    (**(code **)(*plVar16 + 0xd8))(plVar16,local_70,1);
    (**(code **)(*plVar16 + 0x18))(plVar16);
  }
  if (local_1f8 != (long *)0x0) {
    lVar14 = local_1f8[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_1f8 + 0x20))();
    }
  }
  FUN_01aebac0(local_1f0);
  return;
}


