/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065b980; name: FUN_0065b980
 */


void FUN_0065b980(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *plVar15;
  long *plVar16;
  long *local_180;
  long *local_178;
  undefined1 auStack_170 [128];
  undefined1 auStack_f0 [112];
  long local_80;
  long *local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((param_1[1] != 0) &&
     (plVar7 = (long *)std::__shared_weak_count::lock(), plVar7 != (long *)0x0)) {
    lVar11 = *param_1;
    if (lVar11 != 0) {
      uVar8 = FUN_00612290();
      FUN_00783f38(&local_80,uVar8);
      FUN_00783fac(&local_70,&local_80);
                    /* try { // try from 0065b9e0 to 0065b9eb has its CatchHandler @ 0065be40 */
      FUN_0065f420(&local_180,*(undefined8 *)(lVar11 + 8),&local_70);
      plVar1 = local_178;
      plVar13 = local_180;
      local_180 = (long *)0x0;
      local_178 = (long *)0x0;
      plVar12 = (long *)param_1[5];
      param_1[4] = (long)plVar13;
      param_1[5] = (long)plVar1;
      if (plVar12 != (long *)0x0) {
        plVar13 = plVar12 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar12 + 0x10))(plVar12);
          std::__shared_weak_count::__release_weak();
        }
      }
      FUN_00661f60(param_1 + 6,auStack_170);
      FUN_00662148(param_1 + 0x16,auStack_f0);
      FUN_0065f108(auStack_f0);
      FUN_0065f280(auStack_170);
      if (local_178 != (long *)0x0) {
        plVar13 = local_178 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 != (long *)0x0) {
        plVar13 = local_68 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
      plVar13 = local_78;
      lVar6 = local_80;
      lVar10 = param_1[2];
      lVar11 = *param_2;
      lVar2 = param_2[1];
      if (lVar2 != 0) {
        plVar1 = (long *)(lVar2 + 8);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = *plVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_80 = 0;
      local_78 = (long *)0x0;
      plVar15 = *(long **)(lVar10 + 0x198);
      puVar14 = *(undefined8 **)(lVar10 + 0x348);
      plVar12 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0xd0,8);
      plVar12[2] = 0;
      plVar9 = plVar12 + 1;
      *plVar9 = 0;
      puVar5 = PTR_DAT_04375438;
      plVar12[3] = (long)plVar15;
      plVar1 = plVar12 + 4;
      *plVar12 = (long)(puVar5 + 0x10);
      FUN_00782ef8(plVar1);
      plVar12[4] = (long)(PTR_DAT_04375448 + 0x10);
      nn::os::InitializeEvent(plVar12 + 6,0,0);
      plVar12[4] = (long)(PTR_DAT_04375440 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar12 + 0xb),false,0);
      *(undefined1 *)(plVar12 + 0x19) = 0;
      if (plVar12 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar4) {
            *plVar9 = *plVar9 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      plVar9 = (long *)(**(code **)(*plVar15 + 0x10))(plVar15,0x160,8);
      plVar16 = plVar9 + 1;
      *plVar16 = 0;
      plVar9[2] = 0;
      plVar9[3] = (long)plVar15;
      *plVar9 = (long)&PTR_LAB_041953c8;
      FUN_007840dc(plVar9 + 4);
      plVar9[4] = (long)&PTR_LAB_04195418;
      lVar10 = (**(code **)(*plVar15 + 0x10))(plVar15,0x10000,0x10);
      if (lVar10 == 0) {
        local_180 = (long *)CONCAT44(local_180._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_180,"");
      }
      FUN_00782cfc(plVar9 + 10,plVar1,0,lVar10,0x10000,1);
      plVar9[10] = (long)&PTR_LAB_04195460;
      plVar9[0x27] = (long)plVar15;
      plVar9[0x28] = 0x10000;
      *(undefined1 *)((long)plVar9 + 0x159) = 1;
      plVar9[0x29] = (long)plVar1;
      plVar9[0x2a] = (long)plVar12;
      plVar9[0x23] = lVar11;
      plVar9[0x24] = lVar2;
      plVar9[0x25] = lVar6;
      plVar9[0x26] = (long)plVar13;
      local_70 = 0;
      local_68 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = *plVar16 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_180 = plVar9 + 4;
      local_178 = plVar9;
      (**(code **)*puVar14)(puVar14,&local_180,&local_70);
      if (local_178 != (long *)0x0) {
        plVar13 = local_178 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_178 + 0x10))(local_178);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_68 != (long *)0x0) {
        plVar13 = local_68 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_68 + 0x10))(local_68);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar9 != (long *)0x0) {
        do {
          lVar11 = *plVar16;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar4) {
            *plVar16 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      *(undefined1 *)(plVar12 + 5) = 1;
      param_1[0x24] = (long)plVar1;
      plVar13 = (long *)param_1[0x25];
      param_1[0x25] = (long)plVar12;
      if (plVar13 != (long *)0x0) {
        plVar1 = plVar13 + 1;
        do {
          lVar11 = *plVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar4) {
            *plVar1 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 != (long *)0x0) {
        plVar13 = local_78 + 1;
        do {
          lVar11 = *plVar13;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *plVar13 = lVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    plVar13 = plVar7 + 1;
    do {
      lVar11 = *plVar13;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *plVar13 = lVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar11 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


