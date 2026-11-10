/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01aa96a8; name: FUN_01aa96a8
 */


void FUN_01aa96a8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  undefined8 local_a0;
  char *local_98;
  undefined8 uStack_90;
  long *local_88;
  undefined8 *local_80 [3];
  long *local_68;
  
  puVar6 = PTR_DAT_0437a558;
  puVar5 = PTR_DAT_0437a550;
  lVar13 = *(long *)(param_1 + 0x220);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar15 = *(long **)(lVar13 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
        uVar11 = FUN_00aa0310();
        *(undefined8 *)puVar6 = uVar11;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar15 == (long *)0x0) goto LAB_01aa96d0;
        if (plVar15 == (long *)puVar6) break;
        plVar15 = (long *)*plVar15;
      }
      iVar9 = *piVar1;
      if (iVar9 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar13 = *(long *)(lVar13 + 0x18);
          if (lVar13 != 0) {
            plVar15 = (long *)(lVar13 + -0x50);
            FUN_00a9ecd4(local_80,plVar15);
            puVar4 = local_80[0];
            puVar7 = PTR_DAT_0437a130;
            puVar6 = PTR_DAT_0437a128;
            puVar5 = PTR_DAT_043795e0;
            if (local_80[0] == (undefined8 *)0x0) goto LAB_01aa977c;
            if (*(int *)((long)local_80[0] + 0xc) == 0) goto LAB_01aa9a68;
            piVar1 = (int *)((long)local_80[0] + 0xc);
            iVar10 = *(int *)((long)local_80[0] + 0xc);
            goto LAB_01aa9824;
          }
          break;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar9;
    } while (iVar9 != 0);
  }
  goto LAB_01aa96d0;
LAB_01aa9824:
  do {
    plVar14 = (long *)puVar4[2];
    if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
      if (((*PTR_DAT_043795d8 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar9 != 0)) {
        if (((*PTR_DAT_043794d0 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar9 != 0)) {
          uVar11 = FUN_0087f8f0();
          *(undefined8 *)PTR_DAT_043794d8 = uVar11;
          __cxa_guard_release(PTR_DAT_043794d0);
        }
        *(undefined **)puVar5 = PTR_DAT_043794d8;
        __cxa_guard_release(PTR_DAT_043795d8);
      }
      *(undefined **)puVar7 = puVar5;
      __cxa_guard_release(puVar6);
    }
    while( true ) {
      if (plVar14 == (long *)0x0) goto LAB_01aa9a68;
      if (plVar14 == (long *)puVar7) break;
      plVar14 = (long *)*plVar14;
    }
    iVar9 = *piVar1;
    if (iVar9 == iVar10) {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      if (cVar2 == '\0') {
        lVar12 = puVar4[3];
        plVar14 = (long *)0x0;
        puVar4 = local_80[0];
        if (lVar12 != 0) {
          plVar14 = (long *)(lVar12 + -0x50);
        }
        goto joined_r0x01aa9878;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    iVar10 = iVar9;
  } while (iVar9 != 0);
LAB_01aa9a68:
  plVar14 = (long *)0x0;
  puVar4 = local_80[0];
joined_r0x01aa9878:
  if (puVar4 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar4 + 1);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      puVar4[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar12 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar12;
      local_a0 = *puVar4;
      FUN_02a44274(lVar12 + 0xd8,&local_a0);
    }
  }
  if (plVar14 != (long *)0x0) {
    FUN_02a4754c(local_80,PTR_DAT_0437a3d8);
    lVar12 = FUN_0289e9f4(plVar14,local_80);
    if (lVar12 == 0) {
      local_88 = (long *)0x0;
    }
    else {
      FUN_00aeb818(&local_88,lVar12,&local_a0);
    }
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x20))();
    }
    plVar8 = local_88;
    if (local_88 != (long *)0x0) {
      local_a0 = 0x5d9f0c0032873706;
      local_98 = "Particle/FootParticle";
      uStack_90 = 0x15;
      FUN_02a4754c(local_80,&local_a0);
      FUN_028ba0ec(plVar8,local_80);
      if (local_68 != (long *)0x0) {
        (**(code **)(*local_68 + 0x20))();
      }
      if (local_88 != (long *)0x0) {
        lVar12 = local_88[0xb];
        piVar1 = (int *)(lVar12 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar12 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
    }
    lVar12 = plVar14[0xb];
    piVar1 = (int *)(lVar12 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar10 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar12 + 0x18) = 0;
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
LAB_01aa977c:
  lVar13 = *(long *)(lVar13 + 8);
  piVar1 = (int *)(lVar13 + 0xc);
  do {
    iVar10 = *piVar1;
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar3) {
      *piVar1 = iVar10 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar10 + -1 == 0) {
    *(undefined8 *)(lVar13 + 0x18) = 0;
    (**(code **)(*plVar15 + 0x20))(plVar15);
  }
LAB_01aa96d0:
  FUN_02a4cb60(param_1);
  return;
}


