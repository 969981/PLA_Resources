/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025c33d4; name: FUN_025c33d4
 */


void FUN_025c33d4(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined1 in_q3 [16];
  undefined8 uVar17;
  long *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined5 uStack_120;
  undefined3 local_11b;
  undefined5 uStack_118;
  long *local_110 [2];
  undefined8 local_100;
  undefined8 uStack_f8;
  long *local_f0;
  undefined8 uStack_e8;
  long *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined5 uStack_c0;
  undefined3 local_bb;
  undefined5 uStack_b8;
  undefined8 *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long local_70 [2];
  
  uVar17 = in_q3._8_8_;
  uVar16 = in_q3._0_8_;
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  FUN_025c5e60(&local_f0);
  plVar6 = local_f0;
  if (local_f0 == (long *)0x0) {
    return;
  }
  local_e0 = (long *)0x0;
  local_a0 = 0;
  local_98 = 0;
  local_b0 = (undefined8 *)0x0;
  uStack_a8 = 0;
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  local_f0 = (long *)0x0;
  uStack_e8 = 0;
  FUN_00b63974(&local_f0,param_2 + 8);
  FUN_01e9bf84(&local_140,plVar6);
  local_d8 = local_138;
  local_d0 = uStack_130;
  local_c8 = local_128;
  uStack_c0 = uStack_120;
  local_bb = local_11b;
  uStack_b8 = uStack_118;
  local_e0 = local_140;
  FUN_01eacf70(&local_b0,local_110);
  local_a0 = local_100;
  local_98 = uStack_f8;
  if (local_110[0] != (long *)0x0) {
    plVar1 = local_110[0] + 1;
    do {
      iVar8 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_110[0][2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70[0] = *local_110[0];
      FUN_02a44274(lVar12 + 0xd8,local_70);
    }
  }
  FUN_01e9c5e4(&local_140,plVar6);
  FUN_0095a500(&local_80,&local_140);
  plVar1 = local_140;
  if (local_140 != (long *)0x0) {
    plVar15 = local_140 + 1;
    do {
      iVar8 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_140[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_70[0] = *plVar1;
      FUN_02a44274(lVar12 + 0xd8,local_70);
    }
  }
  plVar1 = local_f0;
  puVar5 = PTR_DAT_0437a258;
  if ((local_f0 != (long *)0x0) && (*(int *)((long)local_f0 + 0xc) != 0)) {
    piVar2 = (int *)((long)local_f0 + 0xc);
    iVar8 = *(int *)((long)local_f0 + 0xc);
    do {
      plVar15 = (long *)plVar1[2];
      if (((*PTR_DAT_0437a250 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_0437a250), iVar9 != 0)) {
        if (((*PTR_DAT_043795d8 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
          if (((*PTR_DAT_043794d0 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
            uVar11 = FUN_0087f8f0();
            *(undefined8 *)PTR_DAT_043794d8 = uVar11;
            __cxa_guard_release(PTR_DAT_043794d0);
          }
          *(undefined **)PTR_DAT_043795e0 = PTR_DAT_043794d8;
          __cxa_guard_release(PTR_DAT_043795d8);
        }
        *(undefined **)puVar5 = PTR_DAT_043795e0;
        __cxa_guard_release(PTR_DAT_0437a250);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_025c3584;
        if (plVar15 == (long *)puVar5) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar2;
      if (iVar9 == iVar8) {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar8 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
        if (cVar3 != '\0') goto LAB_025c3704;
        lVar12 = plVar1[3];
        if (lVar12 != 0) {
          FUN_00956dac(&local_140,lVar12 + 0x158);
          (**(code **)(*local_140 + 0x40))();
          local_90 = uVar16;
          uStack_88 = uVar17;
          if (local_140 != (long *)0x0) {
            lVar13 = local_140[0xb];
            piVar2 = (int *)(lVar13 + 0xc);
            do {
              iVar8 = *piVar2;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar8 + -1;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
            if (iVar8 + -1 == 0) {
              *(undefined8 *)(lVar13 + 0x18) = 0;
              (**(code **)(*local_140 + 0x20))();
            }
          }
          lVar13 = *(long *)(lVar12 + 8);
          piVar2 = (int *)(lVar13 + 0xc);
          do {
            iVar8 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar8 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar8 + -1 != 0) break;
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*(long *)(lVar12 + -0x50) + 0x20))((long *)(lVar12 + -0x50));
          cVar3 = *(char *)(param_1 + 0x960);
          goto joined_r0x025c37e8;
        }
        break;
      }
      ClearExclusiveLocal();
LAB_025c3704:
      iVar8 = iVar9;
    } while (iVar9 != 0);
  }
LAB_025c3584:
  cVar3 = *(char *)(param_1 + 0x960);
joined_r0x025c37e8:
  if (cVar3 == '\0') {
    pcVar14 = (char *)(param_1 + 0x960);
  }
  else if (*(char *)(param_1 + 0x9f0) == '\0') {
    pcVar14 = (char *)(param_1 + 0x9f0);
  }
  else if (*(char *)(param_1 + 0xa80) == '\0') {
    pcVar14 = (char *)(param_1 + 0xa80);
  }
  else if (*(char *)(param_1 + 0xb10) == '\0') {
    pcVar14 = (char *)(param_1 + 0xb10);
  }
  else if (*(char *)(param_1 + 0xba0) == '\0') {
    pcVar14 = (char *)(param_1 + 0xba0);
  }
  else if (*(char *)(param_1 + 0xc30) == '\0') {
    pcVar14 = (char *)(param_1 + 0xc30);
  }
  else if (*(char *)(param_1 + 0xcc0) == '\0') {
    pcVar14 = (char *)(param_1 + 0xcc0);
  }
  else if (*(char *)(param_1 + 0xd50) == '\0') {
    pcVar14 = (char *)(param_1 + 0xd50);
  }
  else if (*(char *)(param_1 + 0xde0) == '\0') {
    pcVar14 = (char *)(param_1 + 0xde0);
  }
  else if (*(char *)(param_1 + 0xe70) == '\0') {
    pcVar14 = (char *)(param_1 + 0xe70);
  }
  else if (*(char *)(param_1 + 0xf00) == '\0') {
    pcVar14 = (char *)(param_1 + 0xf00);
  }
  else if (*(char *)(param_1 + 0xf90) == '\0') {
    pcVar14 = (char *)(param_1 + 0xf90);
  }
  else {
    pcVar14 = (char *)(param_1 + 0x1020);
    if ((((*pcVar14 != '\0') && (pcVar14 = (char *)(param_1 + 0x10b0), *pcVar14 != '\0')) &&
        (pcVar14 = (char *)(param_1 + 0x1140), *pcVar14 != '\0')) &&
       (pcVar14 = (char *)(param_1 + 0x11d0), *pcVar14 != '\0')) goto LAB_025c3888;
  }
  pcVar14[0x18] = '\0';
  pcVar14[0x19] = '\0';
  pcVar14[0x1a] = '\0';
  pcVar14[0x1b] = '\0';
  pcVar14[0x1c] = '\0';
  pcVar14[0x1d] = '\0';
  pcVar14[0x1e] = '\0';
  pcVar14[0x1f] = '\0';
  pcVar10 = pcVar14 + 0x10;
  pcVar10[0] = '\0';
  pcVar10[1] = '\0';
  pcVar10[2] = '\0';
  pcVar10[3] = '\0';
  pcVar10[4] = '\0';
  pcVar10[5] = '\0';
  pcVar10[6] = '\0';
  pcVar10[7] = '\0';
  FUN_00b63974(pcVar10,&local_f0);
  *(undefined8 *)(pcVar14 + 0x38) = local_c8;
  *(undefined8 *)(pcVar14 + 0x28) = local_d8;
  *(long **)(pcVar14 + 0x20) = local_e0;
  *(ulong *)(pcVar14 + 0x45) = CONCAT53(uStack_b8,local_bb);
  *(ulong *)(pcVar14 + 0x40) = CONCAT35(local_bb,uStack_c0);
  pcVar14[0x58] = '\0';
  pcVar14[0x59] = '\0';
  pcVar14[0x5a] = '\0';
  pcVar14[0x5b] = '\0';
  pcVar14[0x5c] = '\0';
  pcVar14[0x5d] = '\0';
  pcVar14[0x5e] = '\0';
  pcVar14[0x5f] = '\0';
  *(undefined8 *)(pcVar14 + 0x30) = local_d0;
  pcVar10 = pcVar14 + 0x50;
  pcVar10[0] = '\0';
  pcVar10[1] = '\0';
  pcVar10[2] = '\0';
  pcVar10[3] = '\0';
  pcVar10[4] = '\0';
  pcVar10[5] = '\0';
  pcVar10[6] = '\0';
  pcVar10[7] = '\0';
  FUN_01ead384(pcVar10,&local_b0);
  *(undefined8 *)(pcVar14 + 0x68) = local_98;
  *(undefined8 *)(pcVar14 + 0x60) = local_a0;
  *(undefined8 *)(pcVar14 + 0x78) = uStack_88;
  *(undefined8 *)(pcVar14 + 0x70) = local_90;
  pcVar10 = pcVar14 + 0x80;
  pcVar10[0] = '\0';
  pcVar10[1] = '\0';
  pcVar10[2] = '\0';
  pcVar10[3] = '\0';
  pcVar10[4] = '\0';
  pcVar10[5] = '\0';
  pcVar10[6] = '\0';
  pcVar10[7] = '\0';
  pcVar14[0x88] = '\0';
  pcVar14[0x89] = '\0';
  pcVar14[0x8a] = '\0';
  pcVar14[0x8b] = '\0';
  pcVar14[0x8c] = '\0';
  pcVar14[0x8d] = '\0';
  pcVar14[0x8e] = '\0';
  pcVar14[0x8f] = '\0';
  FUN_0095e070(pcVar10,&local_80);
  *pcVar14 = '\x01';
LAB_025c3888:
  puVar7 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_80 + 1);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_140 = (long *)*puVar7;
      FUN_02a44274(lVar12 + 0xd8,&local_140);
    }
  }
  puVar7 = local_b0;
  if (local_b0 != (undefined8 *)0x0) {
    piVar2 = (int *)(local_b0 + 1);
    do {
      iVar8 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar8 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 + -1 == 0) {
      local_b0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_140 = (long *)*puVar7;
      FUN_02a44274(lVar12 + 0xd8,&local_140);
    }
  }
  plVar1 = local_f0;
  if (local_f0 != (long *)0x0) {
    plVar15 = local_f0 + 1;
    do {
      iVar8 = (int)*plVar15 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar4) {
        *(int *)plVar15 = iVar8;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar8 == 0) {
      local_f0[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04379498), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_140 = (long *)*plVar1;
      FUN_02a44274(lVar12 + 0xd8,&local_140);
    }
  }
  lVar12 = plVar6[0xb];
  piVar2 = (int *)(lVar12 + 0xc);
  do {
    iVar8 = *piVar2;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
    if (bVar4) {
      *piVar2 = iVar8 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if (iVar8 + -1 == 0) {
    *(undefined8 *)(lVar12 + 0x18) = 0;
    (**(code **)(*plVar6 + 0x20))(plVar6);
  }
  return;
}


