/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 026743c0; name: FUN_026743c0
 */


bool FUN_026743c0(long param_1)

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
  undefined *puVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long *plVar18;
  long *local_88;
  undefined8 *local_80;
  undefined8 uStack_78;
  long *local_70;
  undefined8 local_68;
  
  local_80 = (undefined8 *)0x0;
  uStack_78 = 0;
  FUN_00ac3fa4(&local_80,param_1 + 0x248);
  FUN_0099c748(&local_70,&local_80);
  puVar5 = local_80;
  if (local_80 != (undefined8 *)0x0) {
    piVar1 = (int *)(local_80 + 1);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      local_80[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar16 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar16;
      local_68 = *puVar5;
      FUN_02a44274(lVar16 + 0xd8,&local_68);
    }
  }
  if (local_70 == (long *)0x0) {
LAB_02674558:
    bVar3 = false;
  }
  else {
    uVar14 = (**(code **)(*local_70 + 0x1a8))();
    if ((uVar14 & 1) == 0) {
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_00cf9b38(&local_80,param_1 + 0x5e8);
      if (local_80 == (undefined8 *)0x0) {
        local_88 = (long *)0x0;
LAB_02674494:
        if (local_88 == (long *)0x0) goto LAB_026744b4;
LAB_0267449c:
        local_80 = (undefined8 *)0x0;
        uStack_78 = 0;
        FUN_01affa74(&local_80,local_88 + 0xc1);
        puVar5 = local_80;
        puVar11 = PTR_DAT_0437b0a0;
        puVar10 = PTR_DAT_0437b098;
        puVar9 = PTR_DAT_043795e0;
        puVar8 = PTR_DAT_043795d8;
        puVar7 = PTR_DAT_043794d8;
        puVar6 = PTR_DAT_043794d0;
        if (local_80 == (undefined8 *)0x0) goto LAB_026744b4;
        if (*(int *)((long)local_80 + 0xc) != 0) {
          piVar1 = (int *)((long)local_80 + 0xc);
          iVar13 = *(int *)((long)local_80 + 0xc);
          do {
            plVar18 = (long *)puVar5[2];
            if (((*puVar10 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar10), iVar12 != 0)) {
              if (((*puVar8 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar8), iVar12 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar12 = __cxa_guard_acquire(puVar6), iVar12 != 0)) {
                  uVar15 = FUN_0087f8f0();
                  *(undefined8 *)puVar7 = uVar15;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)puVar9 = puVar7;
                __cxa_guard_release(puVar8);
              }
              *(undefined **)puVar11 = puVar9;
              __cxa_guard_release(puVar10);
            }
            while( true ) {
              if (plVar18 == (long *)0x0) goto LAB_026747d0;
              if (plVar18 == (long *)puVar11) break;
              plVar18 = (long *)*plVar18;
            }
            iVar12 = *piVar1;
            if (iVar12 == iVar13) {
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar3) {
                *piVar1 = iVar13 + 1;
                cVar2 = ExclusiveMonitorsStatus();
              }
              if (cVar2 == '\0') {
                lVar16 = puVar5[3];
                plVar18 = (long *)0x0;
                puVar5 = local_80;
                if (lVar16 != 0) {
                  plVar18 = (long *)(lVar16 + -0x50);
                }
                goto joined_r0x026746e8;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar13 = iVar12;
          } while (iVar12 != 0);
        }
LAB_026747d0:
        plVar18 = (long *)0x0;
        puVar5 = local_80;
joined_r0x026746e8:
        local_80 = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar5 + 1);
          do {
            iVar13 = *piVar1;
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = iVar13 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
          if (iVar13 + -1 == 0) {
            puVar5[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar16 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar16;
            local_68 = *puVar5;
            FUN_02a44274(lVar16 + 0xd8,&local_68);
          }
        }
        if (plVar18 == (long *)0x0) goto LAB_026744b4;
        lVar17 = plVar18[0xb];
        piVar1 = (int *)(lVar17 + 0xc);
        lVar16 = plVar18[0x4a];
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar17 + 0x18) = 0;
          (**(code **)(*plVar18 + 0x20))(plVar18);
        }
        if ((int)lVar16 < 1) goto LAB_026744b4;
        bVar3 = true;
      }
      else {
        FUN_00cfac20(&local_88);
        puVar5 = local_80;
        if (local_80 == (undefined8 *)0x0) goto LAB_02674494;
        piVar1 = (int *)(local_80 + 1);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 != 0) goto LAB_02674494;
        local_80[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04379498), iVar13 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar16 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar16;
        local_68 = *puVar5;
        FUN_02a44274(lVar16 + 0xd8,&local_68);
        if (local_88 != (long *)0x0) goto LAB_0267449c;
LAB_026744b4:
        bVar3 = false;
      }
      if (local_88 != (long *)0x0) {
        lVar16 = local_88[0xb];
        piVar1 = (int *)(lVar16 + 0xc);
        do {
          iVar13 = *piVar1;
          cVar2 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar13 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        if (iVar13 + -1 == 0) {
          *(undefined8 *)(lVar16 + 0x18) = 0;
          (**(code **)(*local_88 + 0x20))();
        }
      }
      if (!bVar3) goto LAB_02674558;
    }
    bVar3 = true;
  }
  if (local_70 != (long *)0x0) {
    lVar16 = local_70[0xb];
    piVar1 = (int *)(lVar16 + 0xc);
    do {
      iVar13 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar13 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar13 + -1 == 0) {
      *(undefined8 *)(lVar16 + 0x18) = 0;
      (**(code **)(*local_70 + 0x20))();
    }
  }
  return !bVar3;
}


