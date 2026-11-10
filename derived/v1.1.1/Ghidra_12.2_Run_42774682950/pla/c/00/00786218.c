/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00786218; name: FUN_00786218
 */


void FUN_00786218(undefined8 *param_1,long param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  long local_e8;
  long *local_e0;
  undefined1 auStack_d8 [16];
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  int *local_b8;
  byte local_a0;
  undefined7 uStack_9f;
  ulong local_90;
  long *plStack_88;
  undefined8 local_80;
  long *local_78;
  long local_70;
  long *local_68;
  long *local_60;
  long *local_58;
  
  FUN_00799d70(&local_a0);
                    /* try { // try from 00786248 to 00786253 has its CatchHandler @ 0078664c */
  FUN_007a9fec(auStack_d8,0);
  uVar3 = (ulong)&local_a0 | 1;
  if ((local_a0 & 1) != 0) {
    uVar3 = local_90;
  }
                    /* try { // try from 00786268 to 0078626f has its CatchHandler @ 00786648 */
  FUN_0078667c(auStack_d8,uVar3);
  lVar14 = *param_3;
  lVar12 = param_3[1];
  if (lVar14 != lVar12) {
    if (local_b8 != (int *)0x0) goto LAB_007862ac;
LAB_007862d0:
    iVar13 = local_bc;
    do {
                    /* try { // try from 007862e8 to 00786353 has its CatchHandler @ 00786660 */
      FUN_0032bcac(&local_c8,iVar13 + 1);
      iVar13 = *local_b8;
      do {
        *local_b8 = iVar13 + 1;
        lVar7 = FUN_007af094(local_c8);
        *(long *)(local_b8 + (long)local_c0 * 2 + 2) = lVar7;
        while( true ) {
          local_c0 = local_c0 + 1;
          uVar3 = (ulong)&local_a0 | 1;
          if ((local_a0 & 1) != 0) {
            uVar3 = local_90;
          }
          FUN_00786074(lVar7,uVar3);
          lVar8 = *(long *)(lVar7 + 0x18);
          if (lVar8 == 0) {
            puVar9 = (ulong *)(*(ulong *)(lVar7 + 8) & 0xfffffffffffffffe);
            if ((*(ulong *)(lVar7 + 8) & 1) != 0) {
              puVar9 = (ulong *)*puVar9;
            }
            lVar8 = FUN_0079f934(puVar9);
            *(long *)(lVar7 + 0x18) = lVar8;
          }
          FUN_00799de0(lVar8,lVar14 + 8);
          lVar14 = lVar14 + 0xf0;
          if (lVar12 == lVar14) goto LAB_00786364;
          if (local_b8 == (int *)0x0) goto LAB_007862d0;
LAB_007862ac:
          iVar13 = *local_b8;
          if (iVar13 <= local_c0) break;
          lVar7 = *(long *)(local_b8 + (long)local_c0 * 2 + 2);
        }
      } while (iVar13 != local_bc);
    } while( true );
  }
LAB_00786364:
  local_60 = (long *)0x0;
  local_58 = (long *)0x0;
  FUN_00789e5c(&local_e8,*(undefined8 *)(*(long *)(param_2 + 8) + 8),auStack_d8,&local_60);
  if (local_58 != (long *)0x0) {
    plVar1 = local_58 + 1;
    do {
      lVar14 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  plVar2 = local_e0;
  lVar14 = local_e8;
  lVar12 = *(long *)(*(long *)(*(long *)(param_2 + 8) + 8) + 0x48);
  plVar16 = *(long **)(lVar12 + 0x198);
  uVar15 = *(undefined8 *)(lVar12 + 0x348);
  local_80 = 0;
  local_78 = (long *)0x0;
  local_e8 = 0;
  local_e0 = (long *)0x0;
  plVar10 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0xf0,8);
  plVar10[2] = 0;
  plVar11 = plVar10 + 1;
  *plVar11 = 0;
  puVar6 = PTR_DAT_04376d10;
  plVar10[3] = (long)plVar16;
  plVar1 = plVar10 + 4;
  *plVar10 = (long)(puVar6 + 0x10);
  FUN_00782ef8(plVar1);
  plVar10[4] = (long)(PTR_DAT_04376d18 + 0x10);
  nn::os::InitializeEvent(plVar10 + 6,0,0);
  plVar10[4] = (long)(PTR_DAT_04376d20 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar10 + 0xb),false,0);
  *(undefined1 *)(plVar10 + 0x1d) = 0;
  if (plVar10 != (long *)0x0) {
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  if (plVar2 != (long *)0x0) {
    plVar11 = plVar2 + 1;
    do {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar11,0x10);
      if (bVar5) {
        *plVar11 = *plVar11 + 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
  }
  plVar11 = (long *)(**(code **)(*plVar16 + 0x10))(plVar16,0x78,8);
  *plVar11 = (long)&PTR_FUN_041a5a48;
  plVar11[1] = 0;
  plVar11[2] = 0;
  plVar11[3] = (long)plVar16;
  FUN_007836ec(plVar11 + 4,plVar1,lVar14);
  plVar11[4] = (long)&PTR_FUN_041a5a98;
  *(undefined1 *)(plVar11 + 0xe) = 1;
  plVar11[10] = (long)plVar1;
  plVar11[0xb] = (long)plVar10;
  plVar11[0xc] = lVar14;
  plVar11[0xd] = (long)plVar2;
  local_70 = lVar14;
  local_68 = plVar2;
  local_60 = plVar11 + 4;
  local_58 = plVar11;
  FUN_007841b0(uVar15,&local_60,&local_80,&local_70);
  if (local_68 != (long *)0x0) {
    plVar2 = local_68 + 1;
    do {
      lVar14 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_68 + 0x10))(local_68);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_58 != (long *)0x0) {
    plVar2 = local_58 + 1;
    do {
      lVar14 = *plVar2;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar2,0x10);
      if (bVar5) {
        *plVar2 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_58 + 0x10))(local_58);
      std::__shared_weak_count::__release_weak();
    }
  }
  *param_1 = plVar1;
  param_1[1] = plVar10;
  if (local_78 != (long *)0x0) {
    plVar1 = local_78 + 1;
    do {
      lVar14 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_78 + 0x10))(local_78);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (local_e0 != (long *)0x0) {
    plVar1 = local_e0 + 1;
    do {
      lVar14 = *plVar1;
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar5) {
        *plVar1 = lVar14 + -1;
        cVar4 = ExclusiveMonitorsStatus();
      }
    } while (cVar4 != '\0');
    if (lVar14 == 0) {
      (**(code **)(*local_e0 + 0x10))(local_e0);
      std::__shared_weak_count::__release_weak();
      FUN_007aa130(auStack_d8);
      goto joined_r0x007865e0;
    }
  }
  FUN_007aa130(auStack_d8);
joined_r0x007865e0:
  if ((local_a0 & 1) != 0) {
    (**(code **)(*plStack_88 + 0x18))
              (plStack_88,local_90,CONCAT71(uStack_9f,local_a0) & 0xfffffffffffffffe,1);
  }
  return;
}


