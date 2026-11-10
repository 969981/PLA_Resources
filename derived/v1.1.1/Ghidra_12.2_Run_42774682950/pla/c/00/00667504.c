/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00667504; name: FUN_00667504
 */


void FUN_00667504(undefined8 *param_1,long param_2,long *param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char cVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar9 = *(long *)(param_2 + 0x18);
    lVar10 = *(long *)(param_2 + 8);
    lVar6 = std::__shared_weak_count::lock();
    if (lVar6 != 0) {
      lVar2 = *param_3;
      plVar3 = (long *)param_3[1];
      if (plVar3 != (long *)0x0) {
        plVar1 = plVar3 + 1;
        do {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar14) {
            *plVar1 = *plVar1 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar12 = *(long **)(lVar9 + 0x198);
      puVar11 = *(undefined8 **)(lVar9 + 0x348);
      plVar7 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0xd0,8);
      plVar7[2] = 0;
      plVar8 = plVar7 + 1;
      *plVar8 = 0;
      puVar5 = PTR_DAT_04375438;
      plVar7[3] = (long)plVar12;
      plVar1 = plVar7 + 4;
      *plVar7 = (long)(puVar5 + 0x10);
      FUN_00782ef8(plVar1);
      plVar7[4] = (long)(PTR_DAT_04375448 + 0x10);
      nn::os::InitializeEvent(plVar7 + 6,0,0);
      plVar7[4] = (long)(PTR_DAT_04375440 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar7 + 0xb),false,0);
      *(undefined1 *)(plVar7 + 0x19) = 0;
      if (plVar7 != (long *)0x0) {
        do {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar8,0x10);
          if (bVar14) {
            *plVar8 = *plVar8 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
      }
      plVar8 = (long *)(**(code **)(*plVar12 + 0x10))(plVar12,0x160,8);
      plVar13 = plVar8 + 1;
      *plVar13 = 0;
      plVar8[2] = 0;
      plVar8[3] = (long)plVar12;
      *plVar8 = (long)&PTR_LAB_04196378;
      FUN_007840dc(plVar8 + 4);
      plVar8[4] = (long)&PTR_LAB_041963c8;
      lVar9 = (**(code **)(*plVar12 + 0x10))(plVar12,0x10000,0x10);
      param_5 = 0;
      if (lVar9 != 0) {
        bVar14 = true;
        FUN_00782cfc(plVar8 + 10,plVar1,0,lVar9,0x10000,1);
        plVar8[10] = (long)&PTR_LAB_04196410;
        plVar8[0x27] = (long)plVar12;
        plVar8[0x28] = 0x10000;
        *(undefined1 *)((long)plVar8 + 0x159) = 1;
        plVar8[0x29] = (long)plVar1;
        plVar8[0x2a] = (long)plVar7;
        if (plVar3 != (long *)0x0) {
          plVar12 = plVar3 + 1;
          do {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          bVar14 = false;
        }
        plVar8[0x23] = lVar10;
        plVar8[0x24] = lVar6;
        plVar8[0x25] = lVar2;
        plVar8[0x26] = (long)plVar3;
        if (!bVar14) {
          plVar12 = plVar3 + 1;
          do {
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = *plVar12 + 1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          do {
            lVar6 = *plVar12;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (plVar3 != (long *)0x0) {
          plVar12 = plVar3 + 1;
          do {
            lVar6 = *plVar12;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
          do {
            lVar6 = *plVar12;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        local_80 = 0;
        local_78 = (long *)0x0;
        do {
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar14) {
            *plVar13 = *plVar13 + 1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        local_70 = plVar8 + 4;
        local_68 = plVar8;
        (**(code **)*puVar11)(puVar11,&local_70,&local_80);
        if (local_68 != (long *)0x0) {
          plVar12 = local_68 + 1;
          do {
            lVar6 = *plVar12;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 != (long *)0x0) {
          plVar12 = local_78 + 1;
          do {
            lVar6 = *plVar12;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar14) {
              *plVar12 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = plVar1;
        param_1[1] = plVar7;
        do {
          lVar6 = *plVar13;
          cVar4 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar14) {
            *plVar13 = lVar6 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (lVar6 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
        if (plVar3 != (long *)0x0) {
          plVar1 = plVar3 + 1;
          do {
            lVar6 = *plVar1;
            cVar4 = '\x01';
            bVar14 = (bool)ExclusiveMonitorPass(plVar1,0x10);
            if (bVar14) {
              *plVar1 = lVar6 + -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (lVar6 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
            std::__shared_weak_count::__release_weak();
          }
        }
        return;
      }
      goto LAB_006678d4;
    }
  }
                    /* try { // try from 006678d0 to 006678d3 has its CatchHandler @ 006678f8 */
  FUN_0066ef80();
LAB_006678d4:
  local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",param_5,(Result *)&local_70,"");
}


