/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b3c1c0; name: FUN_02b3c1c0
 */


void FUN_02b3c1c0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_043796d0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar4 + 0x10);
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = PTR_DAT_04379520;
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar5 = PTR_DAT_04379528;
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if ((lVar8 == 0) || (*(long *)(lVar8 + 0x80) == 0)) {
    plVar10 = (long *)0x0;
  }
  else {
    plVar10 = *(long **)(lVar8 + *(long *)(lVar8 + 0x80) * 8 + -8);
  }
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = (long)&PTR_LAB_04284988;
  param_1[1] = (long)plVar10;
  param_1[9] = (long)&PTR_LAB_042849c0;
  plVar11 = param_1 + 0xb;
  *plVar11 = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  if (((*puVar4 & 1) == 0) &&
     (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
  if (*(ulong *)(lVar8 + 0x80) < 0x10) {
    *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
    lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x68,8);
    if (lVar9 == 0) {
      (**(code **)(*plVar10 + 0xb8))(plVar10);
    }
    FUN_02b3cda8(lVar9,param_2,param_3);
    *(long **)(lVar9 + 8) = plVar10;
    *(long *)(lVar9 + 0x10) = lVar9;
    *(undefined8 *)(lVar9 + 0x18) = 0x68;
    *(undefined8 *)(lVar9 + 0x20) = 8;
    *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      piVar1 = (int *)(lVar9 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar10 = (long *)*plVar11;
    *plVar11 = 0;
    if (plVar10 != (long *)0x0) {
      plVar11 = plVar10 + 10;
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
        (**(code **)(*plVar10 + 0x10))();
      }
    }
    param_1[0xb] = lVar9;
    plVar10 = (long *)param_1[1];
    if (((*puVar4 & 1) == 0) &&
       (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar7 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
    if (*(ulong *)(lVar8 + 0x80) < 0x10) {
      *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
      lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x100,0x10);
      if (lVar9 == 0) {
        (**(code **)(*plVar10 + 0xb8))(plVar10);
      }
      FUN_02b303b0(lVar9,param_2,param_3);
      *(long **)(lVar9 + 8) = plVar10;
      *(long *)(lVar9 + 0x10) = lVar9;
      *(undefined8 *)(lVar9 + 0x18) = 0x100;
      *(undefined8 *)(lVar9 + 0x20) = 0x10;
      *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
      if (lVar9 != 0) {
        piVar1 = (int *)(lVar9 + 0x50);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar10 = (long *)param_1[0xc];
      param_1[0xc] = 0;
      if (plVar10 != (long *)0x0) {
        plVar11 = plVar10 + 10;
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
          (**(code **)(*plVar10 + 0x10))();
        }
      }
      param_1[0xc] = lVar9;
      plVar10 = (long *)param_1[1];
      if (((*puVar4 & 1) == 0) &&
         (iVar7 = __cxa_guard_acquire(PTR_DAT_04379520), puVar4 = PTR_DAT_04379528, iVar7 != 0)) {
        FUN_008a62a4(PTR_DAT_04379528);
        FUN_00100250(PTR_LAB_04379530,puVar4,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379520);
      }
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)puVar5);
      if (*(ulong *)(lVar8 + 0x80) < 0x10) {
        *(long **)(lVar8 + *(ulong *)(lVar8 + 0x80) * 8) = plVar10;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + 1;
        lVar9 = (**(code **)(*plVar10 + 0x10))(plVar10,0x60,8);
        if (lVar9 == 0) {
          (**(code **)(*plVar10 + 0xb8))(plVar10);
        }
        FUN_02b6f628(lVar9,param_2);
        *(long **)(lVar9 + 8) = plVar10;
        *(long *)(lVar9 + 0x10) = lVar9;
        *(undefined8 *)(lVar9 + 0x18) = 0x60;
        *(undefined8 *)(lVar9 + 0x20) = 8;
        *(long *)(lVar8 + 0x80) = *(long *)(lVar8 + 0x80) + -1;
        if (lVar9 != 0) {
          piVar1 = (int *)(lVar9 + 0x50);
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = *piVar1 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        plVar10 = (long *)param_1[0xd];
        param_1[0xd] = 0;
        if (plVar10 != (long *)0x0) {
          plVar11 = plVar10 + 10;
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
            (**(code **)(*plVar10 + 0x10))();
          }
        }
        param_1[0xd] = lVar9;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


