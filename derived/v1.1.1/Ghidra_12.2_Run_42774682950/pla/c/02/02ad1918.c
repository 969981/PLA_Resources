/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ad1918; name: FUN_02ad1918
 */


void FUN_02ad1918(long *param_1,long param_2,undefined4 param_3)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar5 = PTR_DAT_04379520;
  plVar16 = *(long **)(param_2 + 8);
  if (((*PTR_DAT_04379520 & 1) == 0) &&
     (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar6 = PTR_DAT_04379528, iVar9 != 0)) {
    FUN_008a62a4(PTR_DAT_04379528);
    FUN_00100250(PTR_LAB_04379530,puVar6,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379520);
  }
  puVar6 = PTR_DAT_04379528;
  lVar10 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04379528);
  if (*(ulong *)(lVar10 + 0x80) < 0x10) {
    *(long **)(lVar10 + *(ulong *)(lVar10 + 0x80) * 8) = plVar16;
    *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + 1;
    plVar11 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x68,8);
    if (plVar11 == (long *)0x0) {
      (**(code **)(*plVar16 + 0xb8))(plVar16);
    }
    plVar18 = *(long **)(param_2 + 0x58);
    if (plVar18 != (long *)0x0) {
      plVar17 = plVar18 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    puVar7 = PTR_DAT_043796d0;
    plVar11[7] = 0;
    *(undefined4 *)(plVar11 + 8) = 0;
    *(undefined4 *)(plVar11 + 6) = 0;
    plVar11[2] = 0;
    plVar11[3] = 0;
    *plVar11 = (long)(puVar7 + 0x10);
    plVar11[4] = 0;
    plVar11[5] = 0;
    if (((*puVar5 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar7 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar7,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (lVar12 == 0) {
      lVar15 = 0;
    }
    else {
      lVar15 = 0;
      if (*(long *)(lVar12 + 0x80) != 0) {
        lVar15 = *(long *)(lVar12 + *(long *)(lVar12 + 0x80) * 8 + -8);
      }
    }
    plVar11[1] = lVar15;
    plVar17 = plVar11 + 10;
    *(int *)plVar17 = 0;
    *plVar11 = (long)&PTR_LAB_04282608;
    plVar11[9] = (long)&PTR_LAB_04282658;
    plVar11[0xb] = (long)&PTR_LAB_04282688;
    plVar11[0xc] = 0;
    plVar19 = (long *)plVar18[1];
    if (((*puVar5 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04379520), puVar5 = PTR_DAT_04379528, iVar9 != 0)) {
      FUN_008a62a4(PTR_DAT_04379528);
      FUN_00100250(PTR_LAB_04379530,puVar5,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379520);
    }
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)puVar6);
    if (*(ulong *)(lVar12 + 0x80) < 0x10) {
      *(long **)(lVar12 + *(ulong *)(lVar12 + 0x80) * 8) = plVar19;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + 1;
      puVar13 = (undefined8 *)(**(code **)(*plVar19 + 0x10))(plVar19,0x268,8);
      if (puVar13 == (undefined8 *)0x0) {
        (**(code **)(*plVar19 + 0xb8))(plVar19);
      }
      FUN_02bbfbb4(puVar13,plVar18);
      *puVar13 = &PTR_LAB_042826c0;
      puVar13[1] = plVar19;
      puVar13[2] = puVar13;
      puVar13[3] = 0x268;
      puVar13[9] = &PTR_LAB_04282700;
      puVar13[4] = 8;
      *(long *)(lVar12 + 0x80) = *(long *)(lVar12 + 0x80) + -1;
      if (puVar13 == (undefined8 *)0x0) {
        puVar14 = (undefined8 *)0x0;
      }
      else {
        piVar2 = (int *)(puVar13 + 10);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        puVar14 = puVar13;
      }
      local_68 = 0;
      local_78 = (long *)&DAT_000001c0;
      uStack_70 = 0x100;
      FUN_02bbfe84(puVar14,&local_78,2,0,0);
      plVar19 = (long *)plVar11[0xc];
      plVar11[0xc] = 0;
      if (plVar19 != (long *)0x0) {
        plVar1 = plVar19 + 10;
        do {
          iVar9 = (int)*plVar1 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *(int *)plVar1 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar19 + 0x10))();
        }
      }
      plVar19 = plVar18 + 10;
      plVar11[0xc] = (long)puVar13;
      do {
        iVar9 = (int)*plVar19 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        if (bVar4) {
          *(int *)plVar19 = iVar9;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 == 0) {
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      plVar11[1] = (long)plVar16;
      plVar11[2] = (long)plVar11;
      plVar11[3] = 0x68;
      plVar11[4] = 8;
      *(long *)(lVar10 + 0x80) = *(long *)(lVar10 + 0x80) + -1;
      *param_1 = (long)plVar11;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar17,0x10);
        if (bVar4) {
          *(int *)plVar17 = (int)*plVar17 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar10 = *param_1;
      if (lVar10 != 0) {
        piVar2 = (int *)(lVar10 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar16 = *(long **)(param_2 + 0x1c8);
      *(long *)(param_2 + 0x1c8) = lVar10;
      if (plVar16 != (long *)0x0) {
        plVar11 = plVar16 + 10;
        do {
          iVar9 = (int)*plVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar16 + 0x10))();
        }
      }
      *(undefined4 *)(param_2 + 0x1d0) = param_3;
      plVar16 = *(long **)(param_2 + 0x80);
      if (plVar16 != (long *)0x0) {
        plVar11 = plVar16 + 10;
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = (int)*plVar11 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      param_1 = (long *)*param_1;
      uVar8 = (**(code **)(*param_1 + 0x38))(param_1);
      (**(code **)(*param_1 + 0x30))(&local_78,param_1);
      FUN_02bb11cc(plVar16,param_3,uVar8,&local_78);
      if (local_78 != (long *)0x0) {
        plVar11 = local_78 + 10;
        do {
          iVar9 = (int)*plVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*local_78 + 0x10))();
        }
      }
      if (plVar16 != (long *)0x0) {
        plVar11 = plVar16 + 10;
        do {
          iVar9 = (int)*plVar11 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar11,0x10);
          if (bVar4) {
            *(int *)plVar11 = iVar9;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar9 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


