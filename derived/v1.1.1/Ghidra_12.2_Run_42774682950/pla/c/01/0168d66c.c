/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0168d66c; name: FUN_0168d66c
 */


undefined8 FUN_0168d66c(void)

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
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long *plVar14;
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
      iVar9 = *(int *)((long)local_60[0] + 0xc);
      do {
        plVar14 = (long *)plVar4[2];
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar5), iVar10 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar6 = uVar13;
            __cxa_guard_release(puVar5);
          }
          *(undefined **)puVar8 = puVar6;
          __cxa_guard_release(puVar7);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_0168d88c;
          if (plVar14 == (long *)puVar8) break;
          plVar14 = (long *)*plVar14;
        }
        iVar10 = *piVar1;
        if (iVar10 == iVar9) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar9 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar11 = plVar4[3];
            plVar4 = (long *)0x0;
            if (lVar11 != 0) {
              plVar4 = (long *)(lVar11 + -0x50);
            }
            goto joined_r0x0168d7f0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar9 = iVar10;
      } while (iVar10 != 0);
    }
LAB_0168d88c:
    plVar4 = (long *)0x0;
joined_r0x0168d7f0:
    if (local_60[0] != (long *)0x0) {
      FUN_02a43934();
    }
    if (plVar4 != (long *)0x0) {
      FUN_0199d60c(local_60,plVar4);
      if (local_60[0] == (long *)0x0) {
        local_68 = (long *)0x0;
        plVar14 = local_68;
      }
      else {
        FUN_011a5e18(&local_68);
        plVar14 = local_68;
        if (local_60[0] != (long *)0x0) {
          FUN_02a43934();
          plVar14 = local_68;
        }
      }
      local_68 = plVar14;
      if (plVar14 != (long *)0x0) {
        *(undefined8 *)((long)plVar14 + 0x28c) = 0x100000001;
        uVar12 = FUN_02a43a5c(plVar14[0xb]);
        if ((uVar12 & 1) != 0) {
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
      }
      uVar12 = FUN_02a43a5c(plVar4[0xb]);
      if ((uVar12 & 1) != 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
    }
  }
  if (((*PTR_DAT_04379690 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04379690), iVar9 != 0))
  {
    FUN_00100250(PTR_LAB_043796a8,PTR_DAT_04379698,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379690);
  }
  lVar11 = *(long *)PTR_DAT_04379698;
  *(long *)PTR_DAT_043796a0 = lVar11;
  if ((lVar11 != 0) && (FUN_0286b878(local_60), local_60[0] != (long *)0x0)) {
    lVar11 = FUN_0146472c();
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x750) == 0)) {
      FUN_0257ca08();
    }
    if ((local_60[0] != (long *)0x0) && (uVar12 = FUN_02a43a5c(local_60[0][0xb]), (uVar12 & 1) != 0)
       ) {
      (**(code **)(*local_60[0] + 0x20))(local_60[0]);
    }
  }
  return 0;
}


