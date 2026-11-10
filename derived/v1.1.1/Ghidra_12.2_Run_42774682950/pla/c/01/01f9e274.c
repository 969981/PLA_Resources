/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f9e274; name: FUN_01f9e274
 */


void FUN_01f9e274(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *local_80;
  long *local_78 [2];
  undefined1 auStack_68 [8];
  long *local_58;
  
  FUN_01f9c89c(local_78);
  plVar5 = local_78[0];
  puVar9 = PTR_DAT_04380750;
  puVar8 = PTR_DAT_04380748;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_78[0] == (long *)0x0) {
    return;
  }
  if (*(int *)((long)local_78[0] + 0xc) != 0) {
    piVar1 = (int *)((long)local_78[0] + 0xc);
    iVar12 = *(int *)((long)local_78[0] + 0xc);
    do {
      plVar16 = (long *)plVar5[2];
      if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
        if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
          uVar13 = FUN_0087f8f0();
          *(undefined8 *)puVar7 = uVar13;
          __cxa_guard_release(puVar6);
        }
        *(undefined **)puVar9 = puVar7;
        __cxa_guard_release(puVar8);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01f9e5ac;
        if (plVar16 == (long *)puVar9) break;
        plVar16 = (long *)*plVar16;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar12) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar12 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 == '\0') {
          lVar14 = plVar5[3];
          plVar5 = (long *)0x0;
          plVar16 = local_78[0];
          if (lVar14 != 0) {
            plVar5 = (long *)(lVar14 + -0x50);
          }
          goto joined_r0x01f9e34c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar12 = iVar11;
    } while (iVar11 != 0);
  }
LAB_01f9e5ac:
  plVar5 = (long *)0x0;
  plVar16 = local_78[0];
joined_r0x01f9e34c:
  local_78[0] = plVar16;
  if (plVar16 != (long *)0x0) {
    plVar2 = plVar16 + 1;
    do {
      iVar12 = (int)*plVar2 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar4) {
        *(int *)plVar2 = iVar12;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 == 0) {
      plVar16[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar14 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar14;
      local_58 = (long *)*plVar16;
      FUN_02a44274(lVar14 + 0xd8,&local_58);
    }
  }
  if (plVar5 == (long *)0x0) {
    return;
  }
  FUN_019c7bd4(local_78,plVar5,0x23,*param_2);
  if (local_78[0] == (long *)0x0) {
    FUN_019c7bd4(local_78,plVar5,0x24,*param_2);
    if (local_78[0] == (long *)0x0) {
      FUN_019c7bd4(local_78,plVar5,8,*param_2);
      if (local_78[0] == (long *)0x0) goto LAB_01f9e3f4;
      FUN_00956dac(&local_58,local_78[0] + 0x35);
      lVar14 = FUN_00b13c20(local_58 + 0x1e,auStack_68);
      if (local_58 != (long *)0x0) {
        lVar15 = local_58[0xb];
        piVar1 = (int *)(lVar15 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar15 + 0x18) = 0;
          (**(code **)(*local_58 + 0x20))();
        }
      }
      if (lVar14 != 0) {
        local_80 = (long *)0x0;
        FUN_00d7e99c(lVar14,&local_80,1);
        if (local_80 != (long *)0x0) {
          lVar14 = local_80[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
          do {
            iVar12 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar12 + -1 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_80 + 0x20))();
          }
        }
      }
      FUN_01836814(local_78[0],0);
      if (local_78[0] == (long *)0x0) goto LAB_01f9e3f4;
      lVar14 = local_78[0][0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        bVar10 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    else {
      FUN_01836814(local_78[0],0);
      if (local_78[0] == (long *)0x0) goto LAB_01f9e3f4;
      lVar14 = local_78[0][0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        bVar10 = *piVar1 + -1 == 0;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
  }
  else {
    FUN_01836814(local_78[0],0);
    if (local_78[0] == (long *)0x0) goto LAB_01f9e3f4;
    lVar14 = local_78[0][0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      bVar10 = *piVar1 + -1 == 0;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  if (bVar10) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*local_78[0] + 0x20))();
  }
LAB_01f9e3f4:
  lVar14 = plVar5[0xb];
  piVar1 = (int *)(lVar14 + 0xc);
  do {
    iVar12 = *piVar1;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar12 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar12 + -1 == 0) {
    *(undefined8 *)(lVar14 + 0x18) = 0;
    (**(code **)(*plVar5 + 0x20))(plVar5);
  }
  return;
}


