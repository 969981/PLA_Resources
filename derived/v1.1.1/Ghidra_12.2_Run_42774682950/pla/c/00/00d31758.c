/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d31758; name: FUN_00d31758
 */


/* WARNING: Removing unreachable block (ram,0x00d317ec) */
/* WARNING: Removing unreachable block (ram,0x00d317f4) */
/* WARNING: Removing unreachable block (ram,0x00d317fc) */
/* WARNING: Removing unreachable block (ram,0x00d31804) */
/* WARNING: Removing unreachable block (ram,0x00d31880) */
/* WARNING: Removing unreachable block (ram,0x00d31898) */

void FUN_00d31758(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *local_38 [2];
  long local_28;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar7 = *(long *)(param_2 + 8);
  FUN_00d32058(local_38,lVar7);
  if (local_38[0] != (long *)0x0) {
    FUN_00d323f8(&local_28);
    if (local_28 != 0) {
      plVar5 = (long *)*param_1;
      *param_1 = 0;
      if (plVar5 != (long *)0x0) {
        lVar6 = plVar5[0xb];
        piVar1 = (int *)(lVar6 + 0xc);
        do {
          iVar4 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar4 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar4 + -1 == 0) {
          *(undefined8 *)(lVar6 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))();
        }
      }
      lVar6 = local_28;
      local_28 = 0;
      *param_1 = lVar6;
      param_1[1] = lVar7;
    }
    if (local_38[0] != (long *)0x0) {
      plVar5 = local_38[0] + 1;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        local_38[0][2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04379498), iVar4 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar7 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar7;
        local_28 = *local_38[0];
        FUN_02a44274(lVar7 + 0xd8,&local_28);
      }
    }
  }
  return;
}


