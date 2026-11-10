/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 006d6ac4; name: FUN_006d6ac4
 */


void FUN_006d6ac4(long *param_1,long *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  void *__dest;
  long **pplVar11;
  long lVar12;
  undefined8 *puVar13;
  char *__s;
  long *plVar14;
  void *pvVar15;
  long *plVar16;
  long *plVar17;
  ulong local_e8;
  long *local_e0;
  void *local_d8;
  long *local_d0;
  long *local_c8;
  void *local_c0;
  long *local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  byte local_98;
  undefined1 auStack_97 [7];
  ulong local_90;
  undefined1 *local_88;
  ulong local_80;
  long *local_78;
  void *local_70;
  long *plStack_68;
  
  if ((char)param_1[0xe] != '\0') {
                    /* try { // try from 006d6af8 to 006d6b03 has its CatchHandler @ 006d72b8 */
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,0);
    if ((uVar6 & 1) == 0) {
                    /* try { // try from 006d6e18 to 006d6e1f has its CatchHandler @ 006d72b8 */
      (**(code **)(*param_2 + 0x18))(param_2);
      return;
    }
    (**(code **)(*param_1 + 0x18))(param_1,param_2,param_1[1] + 0x58);
                    /* try { // try from 006d6b28 to 006d6b2f has its CatchHandler @ 006d72b8 */
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
                    /* try { // try from 006d6b34 to 006d6b3f has its CatchHandler @ 006d72b4 */
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2,0);
  if ((uVar6 & 1) != 0) {
    FUN_006de1d0(&local_d0,param_1[1]);
    uVar6 = (**(code **)(*local_d0 + 0x20))();
    if (((uVar6 & 1) == 0) || (piVar7 = (int *)(**(code **)(*local_d0 + 0x38))(), *piVar7 != 0)) {
      plVar10 = local_c8;
      lVar12 = *(long *)(param_1[1] + 0x10);
      if (local_c8 != (long *)0x0) {
        plVar1 = local_c8 + 1;
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
          if (bVar3) {
            *plVar1 = *plVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar14 = *(long **)(lVar12 + 0x198);
      puVar13 = *(undefined8 **)(lVar12 + 0x348);
      plVar8 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x78,8);
      plVar8[2] = 0;
      plVar16 = plVar8 + 1;
      *plVar16 = 0;
      puVar5 = PTR_DAT_043753e0;
      plVar8[3] = (long)plVar14;
      plVar1 = plVar8 + 4;
      *plVar8 = (long)(puVar5 + 0x10);
      FUN_00782ef8(plVar1);
      plVar8[4] = (long)(PTR_DAT_043753e8 + 0x10);
      nn::os::InitializeEvent(plVar8 + 6,0,0);
      plVar8[4] = (long)(PTR_DAT_043753f0 + 0x10);
      nn::os::InitializeMutex((MutexType *)(plVar8 + 0xb),false,0);
      if (plVar8 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = *plVar16 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      plVar9 = (long *)(**(code **)(*plVar14 + 0x10))(plVar14,0x160,8);
      plVar17 = plVar9 + 1;
      *plVar17 = 0;
      plVar9[2] = 0;
      plVar9[3] = (long)plVar14;
      *plVar9 = (long)&PTR_LAB_0419c988;
      FUN_007840dc(plVar9 + 4);
      plVar9[4] = (long)&PTR_LAB_0419c9d8;
      lVar12 = (**(code **)(*plVar14 + 0x10))(plVar14,0x10000,0x10);
      if (lVar12 == 0) {
        local_b8 = (long *)CONCAT44(local_b8._4_4_,0x220);
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0,(Result *)&local_b8,"");
      }
      FUN_00782cfc(plVar9 + 10,plVar1,0,lVar12,0x10000,1);
      plVar9[10] = (long)&PTR_LAB_0419ca20;
      plVar9[0x27] = (long)plVar14;
      plVar9[0x28] = 0x10000;
      *(undefined1 *)((long)plVar9 + 0x159) = 1;
      plVar9[0x29] = (long)plVar1;
      plVar9[0x2a] = (long)plVar8;
      plVar9[0x23] = (long)param_1;
      plVar9[0x24] = (long)local_d0;
      plVar9[0x25] = (long)plVar10;
      plVar9[0x26] = (long)param_2;
      local_80 = 0;
      local_78 = (long *)0x0;
      if (plVar9 != (long *)0x0) {
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = *plVar17 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      local_b8 = plVar9 + 4;
      local_b0 = plVar9;
      (**(code **)*puVar13)(puVar13,&local_b8,&local_80);
      if (local_b0 != (long *)0x0) {
        plVar10 = local_b0 + 1;
        do {
          lVar12 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_b0 + 0x10))(local_b0);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_78 != (long *)0x0) {
        plVar10 = local_78 + 1;
        do {
          lVar12 = *plVar10;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
          if (bVar3) {
            *plVar10 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*local_78 + 0x10))(local_78);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar9 != (long *)0x0) {
        do {
          lVar12 = *plVar17;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar17,0x10);
          if (bVar3) {
            *plVar17 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (plVar8 != (long *)0x0) {
        do {
          lVar12 = *plVar16;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
          if (bVar3) {
            *plVar16 = lVar12 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (lVar12 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    else {
      lVar12 = (**(code **)(*local_d0 + 0x38))();
      (**(code **)(*param_1 + 0x20))(param_1,param_2,lVar12 + 0x50,param_1[1] + 0x58);
                    /* try { // try from 006d6ebc to 006d6ec3 has its CatchHandler @ 006d71dc */
      (**(code **)(*param_2 + 0x18))(param_2);
    }
    if (local_c8 == (long *)0x0) {
      return;
    }
    plVar10 = local_c8 + 1;
    do {
      lVar12 = *plVar10;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar10,0x10);
      if (bVar3) {
        *plVar10 = lVar12 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar12 == 0) {
      (**(code **)(*local_c8 + 0x10))(local_c8);
      std::__shared_weak_count::__release_weak();
      return;
    }
    return;
  }
                    /* try { // try from 006d6e2c to 006d6e83 has its CatchHandler @ 006d72b4 */
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2,10);
  if ((uVar6 & 1) == 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    return;
  }
  if ((int)param_1[4] == 0) goto LAB_006d7100;
  FUN_006d72c0(&local_80,param_1 + 4,*(undefined8 *)PTR_PTR_04376180);
  lVar12 = param_1[4];
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    __s = (char *)((long)param_1 + 0x29);
  }
  else {
    __s = (char *)param_1[7];
  }
  local_c8 = (long *)0x0;
  local_c0 = (void *)0x0;
  local_d0 = (long *)0x0;
  plVar10 = (long *)strlen(__s);
  if ((long *)0xffffffffffffffef < plVar10) {
                    /* try { // try from 006d71ac to 006d71b3 has its CatchHandler @ 006d71cc */
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (&DAT_00000016 < plVar10) {
    pvVar15 = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(plVar10 + 2) & 0xfffffffffffffff0);
    local_d0 = (long *)((ulong)(plVar10 + 2) & 0xfffffffffffffff0 | 1);
    local_c8 = plVar10;
    local_c0 = pvVar15;
LAB_006d6f68:
    memcpy(pvVar15,__s,(size_t)plVar10);
  }
  else {
    local_d0 = (long *)CONCAT71(local_d0._1_7_,(char)((int)plVar10 << 1));
    pvVar15 = (void *)((ulong)&local_d0 | 1);
    if (plVar10 != (long *)0x0) goto LAB_006d6f68;
  }
  *(undefined1 *)((long)pvVar15 + (long)plVar10) = 0;
  if ((local_80 & 1) == 0) {
    local_78 = (long *)(local_80 >> 1 & 0x7f);
    pvVar15 = (void *)((ulong)&local_80 | 1);
    plVar10 = local_78;
    if (local_78 <= &DAT_00000016) goto LAB_006d6fc0;
LAB_006d6fd8:
    local_d8 = (void *)0x0;
    local_e0 = (long *)0x0;
    local_e8 = 0;
    __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,(ulong)(plVar10 + 2) & 0xfffffffffffffff0);
    local_e8 = (ulong)(plVar10 + 2) & 0xfffffffffffffff0 | 1;
    local_78 = plVar10;
    local_e0 = plVar10;
    local_d8 = __dest;
LAB_006d7000:
    memcpy(__dest,pvVar15,(size_t)local_78);
  }
  else {
    local_d8 = (void *)0x0;
    local_e8 = 0;
    local_e0 = (long *)0x0;
    if ((long *)0xffffffffffffffef < local_78) {
                    /* try { // try from 006d71b4 to 006d71bb has its CatchHandler @ 006d71bc */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    plVar10 = local_78;
    pvVar15 = local_70;
    if (&DAT_00000016 < local_78) goto LAB_006d6fd8;
LAB_006d6fc0:
    local_d8 = (void *)0x0;
    local_e0 = (long *)0x0;
    local_e8 = (ulong)(byte)((int)local_78 << 1);
    __dest = (void *)((ulong)&local_e8 | 1);
    if (local_78 != (long *)0x0) goto LAB_006d7000;
  }
  *(undefined1 *)((long)__dest + (long)local_78) = 0;
                    /* try { // try from 006d7014 to 006d7027 has its CatchHandler @ 006d7220 */
  FUN_002ba2d0(&local_b8,(int)lVar12,&local_d0,&local_e8);
  if ((local_e8 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_d8);
  }
  if (((ulong)local_d0 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_c0);
  }
                    /* try { // try from 006d7060 to 006d70cb has its CatchHandler @ 006d724c */
  pplVar11 = (long **)(**(code **)(*param_2 + 0x78))(param_2);
  *(undefined4 *)pplVar11 = local_b8._0_4_;
  if (pplVar11 != &local_b8) {
    if (((ulong)local_b0 & 1) == 0) {
      local_a8 = (ulong)local_b0 >> 1 & 0x7f;
      lVar12 = (long)&local_b0 + 1;
    }
    else {
      lVar12 = local_a0;
    }
    FUN_00291910(pplVar11 + 1,lVar12,local_a8);
    uVar6 = (ulong)(local_98 >> 1);
    puVar4 = auStack_97;
    if ((local_98 & 1) != 0) {
      uVar6 = local_90;
      puVar4 = local_88;
    }
    FUN_00291910(pplVar11 + 4,puVar4,uVar6);
  }
  if ((local_98 & 1) == 0) {
    if (((ulong)local_b0 & 1) != 0) {
LAB_006d716c:
      FUN_002e2ea0(PTR_LAB_04373088,local_a0);
    }
  }
  else {
    FUN_002e2ea0(PTR_LAB_04373088,local_88);
    if (((byte)local_b0 & 1) != 0) goto LAB_006d716c;
  }
  if ((local_80 & 1) != 0) {
    (**(code **)(*plStack_68 + 0x18))(plStack_68,local_70,local_80 & 0xfffffffffffffffe,1);
  }
LAB_006d7100:
                    /* try { // try from 006d7108 to 006d7133 has its CatchHandler @ 006d72b4 */
  piVar7 = (int *)(**(code **)(*param_2 + 0x78))(param_2);
  if (*piVar7 == 0x10) {
    FUN_006de5b4(param_1[1]);
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  return;
}


