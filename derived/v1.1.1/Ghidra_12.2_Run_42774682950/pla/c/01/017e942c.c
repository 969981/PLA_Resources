/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 017e942c; name: FUN_017e942c
 */


void FUN_017e942c(void)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *local_38 [2];
  undefined8 local_28;
  
  if (((*PTR_DAT_04379618 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04379618), iVar7 != 0))
  {
    FUN_00100250(PTR_LAB_0437a720,PTR_DAT_04379620,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379618);
  }
  *(undefined8 *)PTR_DAT_04379628 = *(undefined8 *)PTR_DAT_04379620;
  FUN_00ae4f84(local_38);
  puVar4 = local_38[0];
  puVar5 = PTR_DAT_04379630;
  if (local_38[0] != (undefined8 *)0x0) {
    if (*(int *)((long)local_38[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_38[0] + 0xc);
      plVar10 = (long *)PTR_DAT_04379638;
      iVar7 = *(int *)((long)local_38[0] + 0xc);
      while ((plVar11 = (long *)puVar4[2], (*puVar5 & 1) != 0 ||
             (iVar6 = __cxa_guard_acquire(puVar5), plVar10 = (long *)PTR_DAT_04379638, iVar6 == 0)))
      {
        while( true ) {
          if (plVar11 == (long *)0x0) goto LAB_017e95e0;
LAB_017e9508:
          if (plVar11 == plVar10) break;
          plVar11 = (long *)*plVar11;
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
            lVar9 = puVar4[3];
            plVar10 = (long *)0x0;
            puVar4 = local_38[0];
            if (lVar9 != 0) {
              plVar10 = (long *)(lVar9 + -0x50);
            }
            goto joined_r0x017e953c;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar6;
        if (iVar6 == 0) goto LAB_017e95e0;
      }
      uVar8 = FUN_008b2784();
      *(undefined8 *)PTR_DAT_04379638 = uVar8;
      __cxa_guard_release(puVar5);
      plVar10 = (long *)PTR_DAT_04379638;
      if (plVar11 != (long *)0x0) goto LAB_017e9508;
    }
LAB_017e95e0:
    plVar10 = (long *)0x0;
    puVar4 = local_38[0];
joined_r0x017e953c:
    if (puVar4 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar4 + 1);
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
        puVar4[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar9 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar9;
        local_28 = *puVar4;
        FUN_02a44274(lVar9 + 0xd8,&local_28);
      }
    }
    if (plVar10 != (long *)0x0) {
      *(undefined1 *)(plVar10 + 0x24) = 1;
      lVar9 = plVar10[0xb];
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
        (**(code **)(*plVar10 + 0x20))(plVar10);
      }
    }
  }
  return;
}


