/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b6f730; name: FUN_02b6f730
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02b6f730(long *param_1,long param_2,long param_3,long *param_4)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *local_58;
  
  puVar4 = PTR_DAT_04379520;
  if (param_4 == (long *)0x0) {
    param_4 = *(long **)(param_2 + 8);
  }
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = param_4;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    plVar9 = (long *)(**(code **)(*param_4 + 0x10))(param_4,0x68,8);
    if (plVar9 == (long *)0x0) {
      (**(code **)(*param_4 + 0xb8))(param_4);
    }
    puVar6 = PTR_DAT_043796d0;
    plVar9[7] = 0;
    *(undefined4 *)(plVar9 + 8) = 0;
    *(undefined4 *)(plVar9 + 6) = 0;
    plVar9[2] = 0;
    plVar9[3] = 0;
    *plVar9 = (long)(puVar6 + 0x10);
    plVar9[4] = 0;
    plVar9[5] = 0;
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    nn::os::GetTlsValue(*(undefined4 *)puVar5);
    plVar12 = plVar9 + 10;
    *(int *)plVar12 = 0;
    plVar9[9] = (long)&PTR_LAB_04285850;
    *plVar9 = (long)&PTR_LAB_04285778;
    plVar9[1] = (long)param_4;
    plVar9[2] = (long)plVar9;
    plVar9[3] = 0x68;
    plVar9[0xb] = (long)&PTR_LAB_04285880;
    plVar9[0xc] = param_3;
    plVar9[4] = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
      if (bVar3) {
        *(int *)plVar12 = (int)*plVar12 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    plVar11 = *(long **)(param_2 + 8);
    local_58 = plVar9;
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar11;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar10 = (**(code **)(*plVar11 + 0x10))(plVar11,200,8);
      if (lVar10 == 0) {
        (**(code **)(*plVar11 + 0xb8))(plVar11);
        FUN_02b6ef74(0);
        _DAT_00000010 = 0;
        _DAT_00000018 = 200;
        lVar10 = 0;
        _DAT_00000020 = 8;
        _DAT_00000008 = plVar11;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        *param_1 = 0;
      }
      else {
        FUN_02b6ef74();
        *(long **)(lVar10 + 8) = plVar11;
        *(long *)(lVar10 + 0x10) = lVar10;
        *(undefined8 *)(lVar10 + 0x18) = 200;
        *(undefined8 *)(lVar10 + 0x20) = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        piVar1 = (int *)(lVar10 + 0x50);
        *param_1 = lVar10;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        lVar10 = *param_1;
      }
      FUN_02b6f080(lVar10,&local_58);
      if (local_58 != (long *)0x0) {
        plVar11 = local_58 + 10;
        do {
          iVar7 = (int)*plVar11 + -1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar3) {
            *(int *)plVar11 = iVar7;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar7 == 0) {
          (**(code **)(*local_58 + 0x10))();
        }
      }
      do {
        iVar7 = (int)*plVar12 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
        if (bVar3) {
          *(int *)plVar12 = iVar7;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar7 == 0) {
        (**(code **)(*plVar9 + 0x10))(plVar9);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


