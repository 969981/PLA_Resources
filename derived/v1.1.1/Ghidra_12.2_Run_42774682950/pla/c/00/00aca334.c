/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aca334; name: FUN_00aca334
 */


void FUN_00aca334(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  float fVar15;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar9 = PTR_DAT_043794d8;
  puVar8 = PTR_DAT_043794d0;
  puVar7 = PTR_DAT_043794c8;
  puVar6 = PTR_DAT_043794b8;
  puVar5 = PTR_DAT_043794b0;
  lVar13 = *(long *)(param_1 + 0x1a8);
  if ((lVar13 != 0) && (*(int *)(lVar13 + 0xc) != 0)) {
    piVar1 = (int *)(lVar13 + 0xc);
    iVar10 = *(int *)(lVar13 + 0xc);
    do {
      plVar14 = *(long **)(lVar13 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar11 != 0)) {
          if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar9 = uVar12;
            __cxa_guard_release(puVar8);
          }
          *(undefined **)puVar7 = puVar9;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar6 = puVar7;
        __cxa_guard_release(puVar5);
      }
      while( true ) {
        if (plVar14 == (long *)0x0) goto LAB_00aca360;
        if (plVar14 == (long *)puVar6) break;
        plVar14 = (long *)*plVar14;
      }
      iVar11 = *piVar1;
      if (iVar11 == iVar10) {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = iVar10 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          local_80 = (long *)0x0;
          if (*(long *)(lVar13 + 0x18) != 0) {
            local_80 = (long *)(*(long *)(lVar13 + 0x18) + -0x50);
          }
          goto LAB_00aca364;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar10 = iVar11;
    } while (iVar11 != 0);
  }
LAB_00aca360:
  local_80 = (long *)0x0;
LAB_00aca364:
  FUN_00aada94(local_78,&local_80);
  puVar4 = local_78[0];
  puVar9 = PTR_DAT_0437a130;
  puVar8 = PTR_DAT_0437a128;
  puVar7 = PTR_DAT_043795e0;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  if (local_78[0] == (undefined8 *)0x0) {
    plVar14 = (long *)0x0;
  }
  else {
    if (*(int *)((long)local_78[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_78[0] + 0xc);
      iVar10 = *(int *)((long)local_78[0] + 0xc);
      do {
        plVar14 = (long *)puVar4[2];
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          if (((*PTR_DAT_043795d8 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
            if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
              uVar12 = FUN_0087f8f0();
              *(undefined8 *)puVar6 = uVar12;
              __cxa_guard_release(puVar5);
            }
            *(undefined **)puVar7 = puVar6;
            __cxa_guard_release(PTR_DAT_043795d8);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_00aca624;
          if (plVar14 == (long *)puVar9) break;
          plVar14 = (long *)*plVar14;
        }
        iVar11 = *piVar1;
        if (iVar11 == iVar10) {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar10 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar13 = puVar4[3];
            plVar14 = (long *)0x0;
            puVar4 = local_78[0];
            if (lVar13 != 0) {
              plVar14 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x00aca648;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar10 = iVar11;
      } while (iVar11 != 0);
    }
LAB_00aca624:
    plVar14 = (long *)0x0;
    puVar4 = local_78[0];
joined_r0x00aca648:
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
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_68 = *puVar4;
        FUN_02a44274(lVar13 + 0xd8,&local_68);
      }
    }
  }
  if (local_80 != (long *)0x0) {
    lVar13 = local_80[0xb];
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
      (**(code **)(*local_80 + 0x20))();
    }
  }
  if (plVar14 != (long *)0x0) {
    if (*(char *)(param_1 + 0x470) == '\0') {
      fVar15 = *(float *)(param_1 + 0x464) * *(float *)(param_1 + 0x468);
    }
    else {
      fVar15 = *(float *)(param_1 + 0x46c);
    }
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar10 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    FUN_0289fdcc(fVar15,plVar14,PTR_DAT_0437a0d8);
    lVar13 = plVar14[0xb];
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
      (**(code **)(*plVar14 + 0x20))(plVar14);
    }
  }
  return;
}


