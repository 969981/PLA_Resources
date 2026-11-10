/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01bf09a8; name: FUN_01bf09a8
 */


void FUN_01bf09a8(long param_1,ulong param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  undefined8 *local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  FUN_01a4f4d4(param_1,&DAT_03a7ccb8,0);
  FUN_01a4f4d4(param_1,&DAT_03a7ccb0,1);
  if ((param_2 & 1) != 0) {
    FUN_01a4f4d4(param_1,&DAT_03a7cce0,0);
    FUN_01a4f4d4(param_1,&DAT_03a7cce8,1);
  }
  local_50 = (undefined8 *)0x0;
  uStack_48 = 0;
  FUN_01a6a07c(&local_50,param_1 + 0x6b8);
  puVar5 = local_50;
  puVar6 = PTR_DAT_04382698;
  if (local_50 != (undefined8 *)0x0) {
    if (*(int *)((long)local_50 + 0xc) != 0) {
      piVar1 = (int *)((long)local_50 + 0xc);
      iVar7 = *(int *)((long)local_50 + 0xc);
      do {
        plVar9 = (long *)puVar5[2];
        FUN_01bfbad8();
        while( true ) {
          if (plVar9 == (long *)0x0) goto LAB_01bf0b50;
          if (plVar9 == (long *)puVar6) break;
          plVar9 = (long *)*plVar9;
        }
        iVar2 = *piVar1;
        if (iVar2 == iVar7) {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar7 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
          if (cVar3 == '\0') {
            lVar8 = puVar5[3];
            plVar9 = (long *)0x0;
            puVar5 = local_50;
            if (lVar8 != 0) {
              plVar9 = (long *)(lVar8 + -0x50);
            }
            goto joined_r0x01bf0aac;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar7 = iVar2;
      } while (iVar2 != 0);
    }
LAB_01bf0b50:
    plVar9 = (long *)0x0;
    puVar5 = local_50;
joined_r0x01bf0aac:
    local_50 = puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04379498), iVar7 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar8 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar8;
        local_38 = *puVar5;
        FUN_02a44274(lVar8 + 0xd8,&local_38);
      }
    }
    if (plVar9 != (long *)0x0) {
      FUN_025cf5f4(plVar9);
      lVar8 = plVar9[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar7 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar7 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar7 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x20))(plVar9);
      }
    }
  }
  return;
}


