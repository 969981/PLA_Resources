/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01676f4c; name: FUN_01676f4c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_01676f4c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_70;
  long *local_68;
  long *local_60 [2];
  
  FUN_0165a7a0(local_60);
  plVar4 = local_60[0];
  puVar8 = PTR_DAT_043796e8;
  puVar7 = PTR_DAT_043796e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_60[0] != (long *)0x0) {
    if (*(int *)((long)local_60[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_60[0] + 0xc);
      iVar10 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)plVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar12;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_016771b8;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar9 = *piVar1;
        if (iVar9 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = plVar4[3];
            plVar4 = (long *)0x0;
            if (lVar13 != 0) {
              plVar4 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x01677018;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar9;
      } while (iVar9 != 0);
    }
LAB_016771b8:
    plVar4 = (long *)0x0;
joined_r0x01677018:
    if (local_60[0] != (long *)0x0) {
      FUN_02a43934();
    }
    if (plVar4 != (long *)0x0) {
      FUN_0199d60c(local_60,plVar4);
      if (local_60[0] == (long *)0x0) {
        local_68 = (long *)0x0;
      }
      else {
        FUN_011a5e18(&local_68);
        if (local_60[0] != (long *)0x0) {
          FUN_02a43934();
        }
      }
      if (local_68 != (long *)0x0) {
        FUN_019188a8();
        plVar14 = local_68;
        if ((local_68 != (long *)0x0) && (uVar11 = FUN_02a43a5c(local_68[0xb]), (uVar11 & 1) != 0))
        {
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
        if (((*PTR_DAT_04379558 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379558), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379558);
        }
        *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
        FUN_01148e38(&local_68);
        FUN_010db350(local_68,0x667,1);
        FUN_0199d60c(local_60,plVar4);
        if (local_60[0] == (long *)0x0) {
          local_70 = (long *)0x0;
          _DAT_00000294 = 0x667;
        }
        else {
          FUN_011a5e18(&local_70);
          plVar14 = local_70;
          *(undefined4 *)((long)local_70 + 0x294) = 0x667;
          if ((local_70 != (long *)0x0) && (uVar11 = FUN_02a43a5c(local_70[0xb]), (uVar11 & 1) != 0)
             ) {
            (**(code **)(*plVar14 + 0x20))(plVar14);
          }
        }
        if (local_60[0] != (long *)0x0) {
          FUN_02a43934();
        }
        if (((*PTR_DAT_04379690 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04379690), iVar10 != 0)) {
          FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379690);
        }
        *(undefined8 *)PTR_DAT_043796a0 = *(undefined8 *)PTR_DAT_04379698;
        FUN_0286b878(local_60);
        FUN_0146472c(local_60[0]);
        FUN_025774ac();
        plVar14 = local_68;
        if ((local_60[0] != (long *)0x0) &&
           (uVar11 = FUN_02a43a5c(local_60[0][0xb]), plVar14 = local_68, (uVar11 & 1) != 0)) {
          (**(code **)(*local_60[0] + 0x20))(local_60[0]);
          plVar14 = local_68;
        }
        local_68 = plVar14;
        if ((plVar14 != (long *)0x0) && (uVar11 = FUN_02a43a5c(plVar14[0xb]), (uVar11 & 1) != 0)) {
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      uVar11 = FUN_02a43a5c(plVar4[0xb]);
      if ((uVar11 & 1) != 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
    }
  }
  return 0;
}


