/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aba790; name: FUN_00aba790
 */


void FUN_00aba790(undefined8 param_1,long *param_2,uint param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  
  FUN_009c69bc(&local_78);
  plVar6 = local_78;
  plVar15 = (long *)*param_2;
  if (local_78 != (long *)0x0) {
    lVar13 = local_78[0xb];
    piVar1 = (int *)(lVar13 + 0xc);
    do {
      iVar11 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar11 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar11 + -1 == 0) {
      *(undefined8 *)(lVar13 + 0x18) = 0;
      (**(code **)(*local_78 + 0x20))(local_78);
    }
  }
  if (plVar6 != plVar15) {
    FUN_009c69bc(&local_78,param_1);
    lVar13 = FUN_009b807c(local_78 + 0x1e,&local_68);
    if (local_78 != (long *)0x0) {
      lVar14 = local_78[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        iVar11 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar11 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar11 + -1 == 0) {
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*local_78 + 0x20))();
      }
    }
    if (lVar13 != 0) {
      local_78 = (long *)0x0;
      uStack_70 = 0;
      FUN_01a02dbc(&local_78,lVar13 + 0x460);
      plVar6 = local_78;
      puVar9 = PTR_DAT_0437a688;
      puVar8 = PTR_DAT_0437a680;
      puVar7 = PTR_DAT_043795e0;
      if (local_78 != (long *)0x0) {
        if (*(int *)((long)local_78 + 0xc) != 0) {
          piVar1 = (int *)((long)local_78 + 0xc);
          iVar11 = *(int *)((long)local_78 + 0xc);
          do {
            plVar15 = (long *)plVar6[2];
            if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar10 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar10 != 0)) {
                if (((*PTR_DAT_043794d0 & 1) == 0) &&
                   (iVar10 = __cxa_guard_acquire(PTR_DAT_043794d0), iVar10 != 0)) {
                  uVar12 = FUN_0087f8f0();
                  *(undefined8 *)PTR_DAT_043794d8 = uVar12;
                  __cxa_guard_release(PTR_DAT_043794d0);
                }
                *(undefined **)puVar7 = PTR_DAT_043794d8;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar9 = puVar7;
              __cxa_guard_release(puVar8);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_00abaa60;
              if (plVar15 == (long *)puVar9) break;
              plVar15 = (long *)*plVar15;
            }
            iVar10 = *piVar1;
            if (iVar10 == iVar11) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar11 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar13 = plVar6[3];
                plVar6 = (long *)0x0;
                plVar15 = local_78;
                if (lVar13 != 0) {
                  plVar6 = (long *)(lVar13 + -0x50);
                }
                goto joined_r0x00aba934;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar11 = iVar10;
          } while (iVar10 != 0);
        }
LAB_00abaa60:
        plVar6 = (long *)0x0;
        plVar15 = local_78;
joined_r0x00aba934:
        local_78 = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
          do {
            iVar11 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar11;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 == 0) {
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar13 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar13;
            local_68 = *plVar15;
            FUN_02a44274(lVar13 + 0xd8,&local_68);
          }
        }
        if (plVar6 != (long *)0x0) {
          if ((*param_2 == 0) || (lVar13 = FUN_009b807c(*param_2 + 0xf0,&local_78), lVar13 == 0)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
            (**(code **)(*plVar6 + 0x140))(plVar6,1,lVar13);
            if ((param_3 & 1) != 0) {
              (**(code **)(*plVar6 + 0x180))(plVar6);
              bVar4 = true;
            }
          }
          lVar13 = plVar6[0xb];
          piVar1 = (int *)(lVar13 + 0xc);
          do {
            iVar11 = *piVar1;
            cVar3 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar5) {
              *piVar1 = iVar11 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar11 + -1 == 0) {
            *(undefined8 *)(lVar13 + 0x18) = 0;
            (**(code **)(*plVar6 + 0x20))(plVar6);
          }
          if (bVar4) {
            return;
          }
        }
      }
    }
    FUN_00aba494(param_1,param_3 & 1);
  }
  return;
}


