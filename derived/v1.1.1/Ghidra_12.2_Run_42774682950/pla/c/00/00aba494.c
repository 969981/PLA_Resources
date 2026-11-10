/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aba494; name: FUN_00aba494
 */


void FUN_00aba494(long param_1,ulong param_2)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long *plVar16;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  *(undefined8 *)(param_1 + 0x1fc) = 0xffffffff00000002;
  FUN_009c69bc(&local_78);
  lVar13 = FUN_009b807c(local_78 + 0x1e,&local_68);
  if (local_78 != (long *)0x0) {
    lVar15 = local_78[0xb];
    piVar1 = (int *)(lVar15 + 0xc);
    do {
      iVar12 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar12 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar12 + -1 == 0) {
      *(undefined8 *)(lVar15 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))();
    }
  }
  if (lVar13 != 0) {
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_01a02dbc(&local_78,lVar13 + 0x460);
    plVar5 = local_78;
    puVar10 = PTR_DAT_0437a688;
    puVar9 = PTR_DAT_0437a680;
    puVar8 = PTR_DAT_043795e0;
    puVar7 = PTR_DAT_043794d8;
    puVar6 = PTR_DAT_043794d0;
    if (local_78 != (long *)0x0) {
      if (*(int *)((long)local_78 + 0xc) != 0) {
        piVar1 = (int *)((long)local_78 + 0xc);
        iVar12 = *(int *)((long)local_78 + 0xc);
        do {
          plVar16 = (long *)plVar5[2];
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            if (((*PTR_DAT_043795d8 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
              if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                uVar14 = FUN_0087f8f0();
                *(undefined8 *)puVar7 = uVar14;
                __cxa_guard_release(puVar6);
              }
              *(undefined **)puVar8 = puVar7;
              __cxa_guard_release(PTR_DAT_043795d8);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar16 == (long *)0x0) goto LAB_00aba6e0;
            if (plVar16 == (long *)puVar10) break;
            plVar16 = (long *)*plVar16;
          }
          iVar11 = *piVar1;
          if (iVar11 == iVar12) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar12 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar13 = plVar5[3];
              plVar5 = (long *)0x0;
              plVar16 = local_78;
              if (lVar13 != 0) {
                plVar5 = (long *)(lVar13 + -0x50);
              }
              goto joined_r0x00aba5e8;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar12 = iVar11;
        } while (iVar11 != 0);
      }
LAB_00aba6e0:
      plVar5 = (long *)0x0;
      plVar16 = local_78;
joined_r0x00aba5e8:
      local_78 = plVar16;
      if (plVar16 != (long *)0x0) {
        plVar2 = plVar16 + 1;
        do {
          iVar12 = (int)*plVar2 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
          if (bVar4) {
            *(int *)plVar2 = iVar12;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 == 0) {
          plVar16[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar13 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar13;
          local_68 = *plVar16;
          FUN_02a44274(lVar13 + 0xd8,&local_68);
        }
      }
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x170))(plVar5,1);
        if ((param_2 & 1) != 0) {
          (**(code **)(*plVar5 + 0x180))(plVar5);
        }
        lVar13 = plVar5[0xb];
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          iVar12 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar12 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar12 + -1 == 0) {
          *(undefined8 *)(lVar13 + 0x18) = 0;
          (**(code **)(*plVar5 + 0x20))(plVar5);
        }
      }
    }
  }
  return;
}


