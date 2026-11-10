/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f28050; name: FUN_01f28050
 */


void FUN_01f28050(undefined1 *param_1,long param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  FUN_00b63bec(&local_48,param_2 + 0x10);
  puVar5 = local_48;
  if ((((local_48 != (undefined8 *)0x0) && (*(int *)((long)local_48 + 0xc) != 0)) &&
      (local_48 != (undefined8 *)0x0)) && (*(int *)((long)local_48 + 0xc) != 0)) {
    piVar1 = (int *)((long)local_48 + 0xc);
    iVar6 = *(int *)((long)local_48 + 0xc);
    do {
      uVar7 = FUN_01a49bec(puVar5[2]);
      if ((uVar7 & 1) == 0) break;
      iVar2 = *piVar1;
      if (iVar2 == iVar6) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar6 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_01f2815c;
        lVar8 = puVar5[3];
        plVar9 = (long *)(lVar8 + -0x50);
        if (lVar8 != 0) {
          auVar10 = FUN_01b9f644(plVar9);
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 0x10) = auVar10;
          lVar8 = *(long *)(lVar8 + 8);
          piVar1 = (int *)(lVar8 + 0xc);
          do {
            iVar6 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar6 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar6 + -1 != 0) goto LAB_01f28098;
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*plVar9 + 0x20))(plVar9);
          if (local_48 == (undefined8 *)0x0) {
            return;
          }
          goto LAB_01f280a0;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_01f2815c:
      iVar6 = iVar2;
    } while (iVar2 != 0);
  }
  *param_1 = 0;
LAB_01f28098:
  if (local_48 != (undefined8 *)0x0) {
LAB_01f280a0:
    puVar5 = local_48;
    piVar1 = (int *)(local_48 + 1);
    do {
      iVar6 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar6 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar6 + -1 == 0) {
      local_48[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04379498), iVar6 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar8 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar8;
      local_38 = *puVar5;
      FUN_02a44274(lVar8 + 0xd8,&local_38);
    }
  }
  return;
}


