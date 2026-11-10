/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0067dec0; name: FUN_0067dec0
 */


void FUN_0067dec0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  long *plVar19;
  long *plVar20;
  undefined8 local_80;
  long *local_78;
  long *local_70;
  long *local_68;
  
  lVar17 = *param_2;
  lVar2 = param_2[1];
  lVar8 = *(long *)(*(long *)(lVar17 + 8) + 0x48);
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
  lVar9 = param_2[4];
  param_2[4] = 0;
  lVar10 = param_2[5];
  lVar11 = param_2[2];
  lVar12 = param_2[3];
  lVar13 = param_2[8];
  param_2[2] = 0;
  param_2[3] = 0;
  lVar14 = param_2[9];
  lVar15 = param_2[6];
  lVar16 = param_2[7];
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  plVar19 = *(long **)(lVar8 + 0x198);
  puVar18 = *(undefined8 **)(lVar8 + 0x348);
  plVar6 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,0xf8,8);
  plVar6[2] = 0;
  plVar7 = plVar6 + 1;
  *plVar7 = 0;
  puVar5 = PTR_DAT_04375aa0;
  plVar6[3] = (long)plVar19;
  plVar1 = plVar6 + 4;
  *plVar6 = (long)(puVar5 + 0x10);
  FUN_00782ef8(plVar1);
  plVar6[4] = (long)(PTR_DAT_04375aa8 + 0x10);
  nn::os::InitializeEvent(plVar6 + 6,0,0);
  plVar6[4] = (long)(PTR_DAT_04375ab0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar6 + 0xb),false,0);
  *(undefined1 *)(plVar6 + 0x1e) = 0;
  if (plVar6 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar4) {
        *plVar7 = *plVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  plVar7 = (long *)(**(code **)(*plVar19 + 0x10))(plVar19,400,8);
  plVar20 = plVar7 + 1;
  *plVar20 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)plVar19;
  *plVar7 = (long)&PTR_LAB_04197a68;
  FUN_007840dc(plVar7 + 4);
  plVar7[4] = (long)&PTR_LAB_04197ab8;
  lVar8 = (**(code **)(*plVar19 + 0x10))(plVar19,0x10000,0x10);
  if (lVar8 == 0) {
    local_70 = (long *)CONCAT44(local_70._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl("","","",0,(Result *)&local_70,"");
  }
  FUN_00782cfc(plVar7 + 10,plVar1,0,lVar8,0x10000,1);
  *(undefined1 *)((long)plVar7 + 0x189) = 1;
  plVar7[0x2d] = (long)plVar19;
  plVar7[0x2e] = 0x10000;
  plVar7[10] = (long)&PTR_LAB_04197b00;
  plVar7[0x2f] = (long)plVar1;
  plVar7[0x30] = (long)plVar6;
  plVar7[0x23] = lVar17;
  plVar7[0x24] = lVar2;
  plVar7[0x27] = lVar9;
  plVar7[0x28] = lVar10;
  plVar7[0x25] = lVar11;
  plVar7[0x26] = lVar12;
  plVar7[0x2b] = lVar13;
  plVar7[0x2c] = lVar14;
  plVar7[0x29] = lVar15;
  plVar7[0x2a] = lVar16;
  local_80 = 0;
  local_78 = (long *)0x0;
  if (plVar7 != (long *)0x0) {
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = *plVar20 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_70 = plVar7 + 4;
  local_68 = plVar7;
  (**(code **)*puVar18)(puVar18,&local_70,&local_80);
  if (local_68 != (long *)0x0) {
    plVar19 = local_68 + 1;
    do {
      lVar17 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_78 != (long *)0x0) {
    plVar19 = local_78 + 1;
    do {
      lVar17 = *plVar19;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar4) {
        *plVar19 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar6;
  if (plVar7 != (long *)0x0) {
    do {
      lVar17 = *plVar20;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar4) {
        *plVar20 = lVar17 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar17 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  return;
}


