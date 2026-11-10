/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a73b70; name: FUN_01a73b70
 */


undefined8 FUN_01a73b70(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *local_68;
  long *local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
  local_60 = (long *)0x0;
  uStack_58 = 0;
  FUN_00ac3fa4(&local_60,param_1 + 0x248);
  FUN_0099c748(&local_50,&local_60);
  plVar6 = local_60;
  if (local_60 != (long *)0x0) {
    plVar13 = local_60 + 1;
    do {
      iVar10 = (int)*plVar13 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
      if (bVar4) {
        *(int *)plVar13 = iVar10;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 == 0) {
      local_60[2] = 0;
      if (((*PTR_DAT_04379498 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
        FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
        __cxa_guard_release(PTR_DAT_04379498);
      }
      lVar11 = *(long *)PTR_DAT_043794a0;
      *(long *)PTR_DAT_043794a8 = lVar11;
      local_48 = *plVar6;
      FUN_02a44274(lVar11 + 0xd8,&local_48);
    }
  }
  if (local_50 != (long *)0x0) {
    local_60 = (long *)0x0;
    uStack_58 = 0;
    FUN_00ae8374(&local_60,local_50 + 0x44);
    plVar6 = local_60;
    puVar8 = PTR_DAT_04379e80;
    puVar7 = PTR_DAT_04379e78;
    if (local_60 == (long *)0x0) {
LAB_01a73c24:
      bVar4 = false;
    }
    else {
      if (*(int *)((long)local_60 + 0xc) != 0) {
        piVar1 = (int *)((long)local_60 + 0xc);
        iVar10 = *(int *)((long)local_60 + 0xc);
        do {
          plVar13 = (long *)plVar6[2];
          if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
            uVar12 = FUN_0095a420();
            *(undefined8 *)puVar8 = uVar12;
            __cxa_guard_release(puVar7);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01a73d70;
            if (plVar13 == (long *)puVar8) break;
            plVar13 = (long *)*plVar13;
          }
          iVar9 = *piVar1;
          if (iVar9 == iVar10) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              lVar11 = plVar6[3];
              local_68 = (long *)0x0;
              plVar6 = local_60;
              if (lVar11 != 0) {
                local_68 = (long *)(lVar11 + -0x50);
              }
              goto joined_r0x01a73d98;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          iVar10 = iVar9;
        } while (iVar9 != 0);
      }
LAB_01a73d70:
      local_68 = (long *)0x0;
      plVar6 = local_60;
joined_r0x01a73d98:
      local_60 = plVar6;
      if (plVar6 != (long *)0x0) {
        plVar13 = plVar6 + 1;
        do {
          iVar10 = (int)*plVar13 + -1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar4) {
            *(int *)plVar13 = iVar10;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 == 0) {
          plVar6[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar11 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar11;
          local_48 = *plVar6;
          FUN_02a44274(lVar11 + 0xd8,&local_48);
        }
      }
      if (local_68 == (long *)0x0) goto LAB_01a73c24;
      FUN_00aae1c0(&local_60,local_68);
      plVar6 = local_60;
      puVar8 = PTR_DAT_0437a150;
      puVar7 = PTR_DAT_0437a148;
      if (local_60 == (long *)0x0) {
LAB_01a73e10:
        bVar4 = false;
      }
      else {
        if (*(int *)((long)local_60 + 0xc) != 0) {
          piVar1 = (int *)((long)local_60 + 0xc);
          iVar10 = *(int *)((long)local_60 + 0xc);
          do {
            plVar13 = (long *)plVar6[2];
            if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar7), iVar9 != 0)) {
              uVar12 = FUN_009b19b4();
              *(undefined8 *)puVar8 = uVar12;
              __cxa_guard_release(puVar7);
            }
            while( true ) {
              if (plVar13 == (long *)0x0) goto LAB_01a73f24;
              if (plVar13 == (long *)puVar8) break;
              plVar13 = (long *)*plVar13;
            }
            iVar9 = *piVar1;
            if (iVar9 == iVar10) {
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
              if (bVar4) {
                *piVar1 = iVar10 + 1;
                cVar3 = ExclusiveMonitorsStatus();
              }
              if (cVar3 == '\0') {
                lVar11 = plVar6[3];
                plVar6 = (long *)0x0;
                plVar13 = local_60;
                if (lVar11 != 0) {
                  plVar6 = (long *)(lVar11 + -0x50);
                }
                goto joined_r0x01a73efc;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar10 = iVar9;
          } while (iVar9 != 0);
        }
LAB_01a73f24:
        plVar6 = (long *)0x0;
        plVar13 = local_60;
joined_r0x01a73efc:
        local_60 = plVar13;
        if (plVar13 != (long *)0x0) {
          plVar2 = plVar13 + 1;
          do {
            iVar10 = (int)*plVar2 + -1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(plVar2,0x10);
            if (bVar4) {
              *(int *)plVar2 = iVar10;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 == 0) {
            plVar13[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04379498), iVar10 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar11 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar11;
            local_48 = *plVar13;
            FUN_02a44274(lVar11 + 0xd8,&local_48);
          }
        }
        if (plVar6 == (long *)0x0) goto LAB_01a73e10;
        FUN_009c69bc(&local_60,plVar6);
        plVar13 = local_60;
        if (local_60 != (long *)0x0) {
          lVar11 = local_60[0xb];
          piVar1 = (int *)(lVar11 + 0xc);
          do {
            iVar10 = *piVar1;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar4) {
              *piVar1 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            *(undefined8 *)(lVar11 + 0x18) = 0;
            (**(code **)(*local_60 + 0x20))(local_60);
          }
        }
        lVar11 = plVar6[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar6 + 0x20))(plVar6);
          if (plVar13 != (long *)0x0) goto LAB_01a74014;
          goto LAB_01a73e10;
        }
        if (plVar13 == (long *)0x0) goto LAB_01a73e10;
LAB_01a74014:
        bVar4 = true;
      }
      if (local_68 != (long *)0x0) {
        lVar11 = local_68[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar10 = *piVar1;
          cVar3 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar5) {
            *piVar1 = iVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar10 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*local_68 + 0x20))();
        }
      }
    }
    if (bVar4) {
      uVar12 = 1;
      goto joined_r0x01a73cc4;
    }
  }
  uVar12 = 0;
joined_r0x01a73cc4:
  if (local_50 != (long *)0x0) {
    lVar11 = local_50[0xb];
    piVar1 = (int *)(lVar11 + 0xc);
    do {
      iVar10 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar10 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar10 + -1 == 0) {
      *(undefined8 *)(lVar11 + 0x18) = 0;
      (**(code **)(*local_50 + 0x20))();
    }
  }
  return uVar12;
}


