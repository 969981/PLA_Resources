/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a2b300; name: FUN_01a2b300
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01a2b300(long *param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined8 *local_80 [2];
  long *local_70;
  undefined8 local_68;
  
  FUN_0099c748(&local_70,param_2 + 0x1f0);
  if (local_70 == (long *)0x0) {
LAB_01a2b350:
    bVar4 = false;
  }
  else {
    FUN_01a9b800(local_80);
    puVar5 = local_80[0];
    puVar9 = PTR_DAT_043794d0;
    puVar8 = PTR_DAT_043794c8;
    puVar7 = PTR_DAT_043794b8;
    puVar6 = PTR_DAT_043794b0;
    if (local_80[0] == (undefined8 *)0x0) {
      *param_1 = 0;
      goto LAB_01a2b350;
    }
    if (*(int *)((long)local_80[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_80[0] + 0xc);
      iVar11 = *(int *)((long)local_80[0] + 0xc);
      do {
        plVar16 = (long *)puVar5[2];
        if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
          if (((*PTR_DAT_043794c0 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
            if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
              uVar13 = FUN_0087f8f0();
              *(undefined8 *)PTR_DAT_043794d8 = uVar13;
              __cxa_guard_release(puVar9);
            }
            *(undefined **)puVar8 = PTR_DAT_043794d8;
            __cxa_guard_release(PTR_DAT_043794c0);
          }
          *(undefined **)puVar7 = puVar8;
          __cxa_guard_release(puVar6);
        }
        while( true ) {
          if (plVar16 == (long *)0x0) goto LAB_01a2b564;
          if (plVar16 == (long *)puVar7) break;
          plVar16 = (long *)*plVar16;
        }
        iVar12 = *piVar1;
        if (iVar12 == iVar11) {
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar11 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
          if (cVar2 == '\0') {
            lVar15 = puVar5[3];
            lVar14 = 0;
            if (lVar15 != 0) {
              lVar14 = lVar15 + -0x50;
            }
            *param_1 = lVar14;
            puVar5 = local_80[0];
            goto joined_r0x01a2b480;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar12;
      } while (iVar12 != 0);
    }
LAB_01a2b564:
    lVar14 = 0;
    *param_1 = 0;
    puVar5 = local_80[0];
joined_r0x01a2b480:
    if (puVar5 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar5 + 1);
      do {
        iVar11 = *piVar1;
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar11 + -1 == 0) {
        puVar5[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar15 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar15;
        local_68 = *puVar5;
        FUN_02a44274(lVar15 + 0xd8,&local_68);
      }
    }
    if (lVar14 == 0) goto LAB_01a2b350;
    bVar4 = true;
  }
  if (local_70 != (long *)0x0) {
    lVar14 = local_70[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
      if (bVar4) {
        return;
      }
      goto LAB_01a2b3b0;
    }
  }
  if (bVar4) {
    return;
  }
LAB_01a2b3b0:
  puVar10 = PTR_DAT_043794d8;
  puVar9 = PTR_DAT_043794d0;
  puVar8 = PTR_DAT_043794c8;
  puVar7 = PTR_DAT_043794b8;
  puVar6 = PTR_DAT_043794b0;
  lVar14 = *(long *)(param_2 + 0x1a8);
  if ((lVar14 != 0) && (*(int *)(lVar14 + 0xc) != 0)) {
    piVar1 = (int *)(lVar14 + 0xc);
    iVar11 = *(int *)(lVar14 + 0xc);
    do {
      plVar16 = *(long **)(lVar14 + 0x10);
      if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
        if (((*PTR_DAT_043794c0 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_043794c0), iVar12 != 0)) {
          if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar9), iVar12 != 0)) {
            uVar13 = FUN_0087f8f0();
            *(undefined8 *)puVar10 = uVar13;
            __cxa_guard_release(puVar9);
          }
          *(undefined **)puVar8 = puVar10;
          __cxa_guard_release(PTR_DAT_043794c0);
        }
        *(undefined **)puVar7 = puVar8;
        __cxa_guard_release(puVar6);
      }
      while( true ) {
        if (plVar16 == (long *)0x0) goto LAB_01a2b3b8;
        if (plVar16 == (long *)puVar7) break;
        plVar16 = (long *)*plVar16;
      }
      iVar12 = *piVar1;
      if (iVar12 == iVar11) {
        cVar2 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
        if (cVar2 == '\0') {
          lVar15 = 0;
          if (*(long *)(lVar14 + 0x18) != 0) {
            lVar15 = *(long *)(lVar14 + 0x18) + -0x50;
          }
          *param_1 = lVar15;
          return;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      iVar11 = iVar12;
    } while (iVar12 != 0);
  }
LAB_01a2b3b8:
  *param_1 = 0;
  return;
}


