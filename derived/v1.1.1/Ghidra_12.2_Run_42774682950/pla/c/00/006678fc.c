/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006678fc; name: FUN_006678fc
 */


void FUN_006678fc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                 )

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar8 = *(long *)(param_2 + 0x18);
    lVar9 = *(long *)(param_2 + 8);
    lVar5 = std::__shared_weak_count::lock();
    if (lVar5 != 0) {
      plVar11 = *(long **)(lVar8 + 0x198);
      puVar10 = *(undefined8 **)(lVar8 + 0x348);
      plVar6 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x78,8);
      plVar6[2] = 0;
      plVar7 = plVar6 + 1;
      *plVar7 = 0;
      puVar4 = PTR_DAT_043753e0;
      plVar6[3] = (long)plVar11;
      plVar1 = plVar6 + 4;
      *plVar6 = (long)(puVar4 + 0x10);
      FUN_00782ef8(plVar1);
      plVar6[4] = (long)(PTR_DAT_043753e8 + 0x10);
      nn::os::InitializeEvent(plVar6 + 6,0,0);
      plVar6[4] = (long)(PTR_DAT_043753f0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
      if (plVar6 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
          if (bVar3) {
            *plVar7 = *plVar7 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar7 = (long *)(**(code **)(*plVar11 + 0x10))(plVar11,0x150,8);
      plVar12 = plVar7 + 1;
      *plVar12 = 0;
      plVar7[2] = 0;
      plVar7[3] = (long)plVar11;
      *plVar7 = (long)&PTR_LAB_04196618;
      FUN_007840dc(plVar7 + 4);
      plVar7[4] = (long)&PTR_LAB_04196668;
      lVar8 = (**(code **)(*plVar11 + 0x10))(plVar11,0x10000,0x10);
      param_5 = 0;
      if (lVar8 != 0) {
        FUN_00782cfc(plVar7 + 10,plVar1,0,lVar8,0x10000,1);
        plVar7[10] = (long)&PTR_LAB_041966b0;
        plVar7[0x25] = (long)plVar11;
        plVar7[0x26] = 0x10000;
        *(undefined1 *)((long)plVar7 + 0x149) = 1;
        plVar7[0x27] = (long)plVar1;
        plVar7[0x28] = (long)plVar6;
        plVar7[0x23] = lVar9;
        plVar7[0x24] = lVar5;
        local_80 = 0;
        local_78 = (long *)0x0;
        if (plVar7 != (long *)0x0) {
          do {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = *plVar12 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
        local_70 = plVar7 + 4;
        local_68 = plVar7;
        (**(code **)*puVar10)(puVar10,&local_70,&local_80);
        if (local_68 != (long *)0x0) {
          plVar11 = local_68 + 1;
          do {
            lVar5 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*local_68 + 0x10))(local_68);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_78 != (long *)0x0) {
          plVar11 = local_78 + 1;
          do {
            lVar5 = *plVar11;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar11,0x10);
            if (bVar3) {
              *plVar11 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*local_78 + 0x10))(local_78);
            std::__shared_weak_count::__release_weak();
          }
        }
        *param_1 = plVar1;
        param_1[1] = plVar6;
        if (plVar7 != (long *)0x0) {
          do {
            lVar5 = *plVar12;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(plVar12,0x10);
            if (bVar3) {
              *plVar12 = lVar5 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (lVar5 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            std::__shared_weak_count::__release_weak();
          }
        }
        return;
      }
      goto LAB_00667b8c;
    }
  }
                    /* try { // try from 00667b88 to 00667b8b has its CatchHandler @ 00667bb0 */
  FUN_0066ef80();
LAB_00667b8c:
  local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
  nn::diag::detail::AbortImpl("","","",param_5,(Result *)&local_70,"");
}


