/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ab5308; name: FUN_01ab5308
 */


void FUN_01ab5308(undefined8 param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 in_q3 [16];
  float fVar18;
  long *local_78;
  long *local_70;
  undefined8 uStack_68;
  long *local_60;
  long local_58;
  
  fVar18 = in_q3._12_4_;
  fVar17 = in_q3._8_4_;
  fVar16 = in_q3._4_4_;
  fVar15 = in_q3._0_4_;
  FUN_009c69bc(&local_78);
  plVar11 = local_78;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  FUN_0095aa3c(&local_70,local_78 + 0x4e);
  plVar12 = local_70;
  puVar5 = PTR_DAT_043794d8;
  puVar4 = PTR_DAT_043794d0;
  local_60 = (long *)plVar11[0x50];
  plVar11 = (long *)0x0;
  if (local_70 != (long *)0x0) {
    if (*(int *)((long)local_70 + 0xc) != 0) {
      piVar1 = (int *)((long)local_70 + 0xc);
      iVar7 = *(int *)((long)local_70 + 0xc);
      do {
        plVar13 = (long *)plVar12[2];
        plVar11 = local_60;
        if (((*puVar4 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(puVar4), plVar11 = local_60, iVar6 != 0)) {
          uVar8 = FUN_0087f8f0();
          *(undefined8 *)puVar5 = uVar8;
          __cxa_guard_release(puVar4);
          plVar11 = local_60;
        }
        while( true ) {
          local_60 = plVar11;
          if (plVar13 == (long *)0x0) goto LAB_01ab55a0;
          if (plVar13 == (long *)puVar5) break;
          plVar13 = (long *)*plVar13;
        }
        iVar6 = *piVar1;
        if (iVar6 == iVar7) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar9 = plVar12[3];
            if (lVar9 != 0) {
              plVar12 = (long *)(lVar9 + -8);
              if (plVar11 != (long *)0x0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
              (**(code **)(*plVar12 + 0x18))(plVar12);
              plVar12 = local_70;
              goto joined_r0x01ab5518;
            }
            break;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar6;
      } while (iVar6 != 0);
    }
LAB_01ab55a0:
    plVar11 = (long *)0x0;
    plVar12 = local_70;
joined_r0x01ab5518:
    local_70 = plVar12;
    if (plVar12 != (long *)0x0) {
      plVar13 = plVar12 + 1;
      do {
        iVar7 = (int)*plVar13 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar3) {
          *(int *)plVar13 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        plVar12[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_58 = *plVar12;
        FUN_02a44274(lVar9 + 0xd8,&local_58);
      }
    }
  }
  if (local_78 != (long *)0x0) {
    lVar9 = local_78[0xb];
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
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (plVar11 == (long *)0x0) {
    FUN_009c69bc(&local_70,param_1);
    lVar9 = param_2[1];
    local_70[0x1a] = *param_2;
    local_70[0x1b] = lVar9;
    *(undefined1 *)(local_70 + 0x1c) = 1;
    if (local_70 == (long *)0x0) {
      return;
    }
    lVar9 = local_70[0xb];
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
    if (iVar7 + -1 != 0) {
      return;
    }
    *(undefined8 *)(lVar9 + 0x18) = 0;
    pcVar10 = *(code **)(*local_70 + 0x20);
    plVar11 = local_70;
  }
  else {
    FUN_009c69bc(&local_70,param_1);
    plVar12 = local_70;
    (**(code **)(*plVar11 + 0x40))(plVar11);
    lVar14 = param_2[1];
    lVar9 = *param_2;
    *(undefined1 *)(plVar12 + 0x1c) = 1;
    plVar12[0x1b] = CONCAT44((float)((ulong)lVar14 >> 0x20) - fVar18,(float)lVar14 - fVar17);
    plVar12[0x1a] = CONCAT44((float)((ulong)lVar9 >> 0x20) - fVar16,(float)lVar9 - fVar15);
    if (local_70 != (long *)0x0) {
      lVar9 = local_70[0xb];
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
        (**(code **)(*local_70 + 0x20))();
      }
    }
    pcVar10 = *(code **)(*plVar11 + 0x18);
  }
  (*pcVar10)(plVar11);
  return;
}


