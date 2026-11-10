/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006105b0; name: FUN_006105b0
 */


void FUN_006105b0(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long local_90;
  long *local_88;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (param_2[1] != 0) {
    lVar11 = *param_2;
    plVar4 = (long *)std::__shared_weak_count::lock();
    if (plVar4 != (long *)0x0) {
      if (*(long *)(lVar11 + 0x600) != 0) {
        *param_1 = *(long *)(lVar11 + 0x600);
        lVar11 = *(long *)(lVar11 + 0x608);
        param_1[1] = lVar11;
        if (lVar11 != 0) {
          plVar9 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
LAB_0061090c:
        plVar9 = plVar4 + 1;
        do {
          lVar11 = *plVar9;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
          if (bVar2) {
            *plVar9 = lVar11 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        if (lVar11 == 0) {
          (**(code **)(*plVar4 + 0x10))(plVar4);
          std::__shared_weak_count::__release_weak();
        }
        return;
      }
      plVar9 = plVar4 + 1;
      do {
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
        if (bVar2) {
          *plVar9 = *plVar9 + 1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      plVar10 = *(long **)(lVar11 + 0x198);
      FUN_00610988(&local_90,param_2 + 0x2f);
      puVar8 = *(undefined8 **)(local_90 + 0x58);
      plVar5 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x78,8);
      plVar5[2] = 0;
      plVar6 = plVar5 + 1;
      *plVar6 = 0;
      puVar3 = PTR_DAT_043753e0;
      plVar5[3] = (long)plVar10;
      plVar9 = plVar5 + 4;
      *plVar5 = (long)(puVar3 + 0x10);
      FUN_00782ef8(plVar9);
      plVar5[4] = (long)(PTR_DAT_043753e8 + 0x10);
      nn::os::InitializeEvent(plVar5 + 6,0,0);
      plVar5[4] = (long)(PTR_DAT_043753f0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar5 + 0xb),false,0);
      if (plVar5 != (long *)0x0) {
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
          if (bVar2) {
            *plVar6 = *plVar6 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      plVar6 = (long *)(**(code **)(*plVar10 + 0x10))(plVar10,0x150,8);
      plVar12 = plVar6 + 1;
      *plVar12 = 0;
      plVar6[2] = 0;
      plVar6[3] = (long)plVar10;
      *plVar6 = (long)&PTR_LAB_041907e8;
      FUN_007840dc(plVar6 + 4);
      plVar6[4] = (long)&PTR_LAB_04190838;
      lVar7 = (**(code **)(*plVar10 + 0x10))(plVar10,0x10000,0x10);
      param_5 = 0;
      if (lVar7 != 0) {
        FUN_00782cfc(plVar6 + 10,plVar9,0,lVar7,0x10000,1);
        *(undefined1 *)((long)plVar6 + 0x149) = 1;
        plVar6[0x25] = (long)plVar10;
        plVar6[0x26] = 0x10000;
        plVar6[10] = (long)&PTR_LAB_04190880;
        plVar6[0x27] = (long)plVar9;
        plVar6[0x28] = (long)plVar5;
        plVar6[0x23] = lVar11;
        plVar6[0x24] = (long)plVar4;
        local_80 = 0;
        local_78 = (long *)0x0;
        if (plVar6 != (long *)0x0) {
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar2) {
              *plVar12 = *plVar12 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        local_70 = plVar6 + 4;
        local_68 = plVar6;
        (**(code **)*puVar8)(puVar8,&local_70,&local_80);
        if (local_68 != (long *)0x0) {
          plVar10 = local_68 + 1;
          do {
            lVar7 = *plVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *plVar10 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 != (long *)0x0) {
          plVar10 = local_78 + 1;
          do {
            lVar7 = *plVar10;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar10,0x10);
            if (bVar2) {
              *plVar10 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar6 != (long *)0x0) {
          do {
            lVar7 = *plVar12;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar2) {
              *plVar12 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        *(undefined1 *)(plVar5 + 5) = 1;
        *(long **)(lVar11 + 0x600) = plVar9;
        plVar9 = *(long **)(lVar11 + 0x608);
        *(long **)(lVar11 + 0x608) = plVar5;
        if (plVar9 != (long *)0x0) {
          plVar5 = plVar9 + 1;
          do {
            lVar7 = *plVar5;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
            if (bVar2) {
              *plVar5 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_88 != (long *)0x0) {
          plVar9 = local_88 + 1;
          do {
            lVar7 = *plVar9;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = lVar7 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar7 == 0) {
            (**(code **)(*local_88 + 0x10))(local_88);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = *(long *)(lVar11 + 0x600);
        lVar11 = *(long *)(lVar11 + 0x608);
        param_1[1] = lVar11;
        if (lVar11 != 0) {
          plVar9 = (long *)(lVar11 + 8);
          do {
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar9,0x10);
            if (bVar2) {
              *plVar9 = *plVar9 + 1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
        }
        goto LAB_0061090c;
      }
      goto LAB_00610960;
    }
  }
                    /* try { // try from 0061095c to 0061095f has its CatchHandler @ 00610984 */
  FUN_00611530();
LAB_00610960:
  local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",param_5,(Result *)&local_70,"");
}


