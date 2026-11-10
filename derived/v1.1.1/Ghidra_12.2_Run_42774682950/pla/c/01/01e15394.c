/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e15394; name: FUN_01e15394
 */


void FUN_01e15394(long param_1)

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
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  long *local_218;
  char *pcStack_210;
  undefined8 local_208;
  long *local_200;
  long *local_1f8;
  long local_1f0 [10];
  long local_1a0;
  long local_70 [2];
  
  if (*(long *)(param_1 + 0x70) == 0) {
    local_218 = (long *)0x0;
  }
  else {
    FUN_01e17710(&local_218);
  }
  FUN_01b014c0(local_1f0,local_218 + 0x1a);
  if (local_218 != (long *)0x0) {
    lVar14 = local_218[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*local_218 + 0x20))();
    }
  }
  if (local_1f0[0] == 0) {
    local_1f8 = (long *)0x0;
  }
  else {
    FUN_0095dafc(&local_1f8);
    if (local_1f8 != (long *)0x0) {
      FUN_01a82160(&local_218);
      plVar5 = local_218;
      puVar10 = PTR_DAT_0437a3d0;
      puVar9 = PTR_DAT_0437a3c8;
      puVar8 = PTR_DAT_043795e0;
      puVar7 = PTR_DAT_043794d8;
      puVar6 = PTR_DAT_043794d0;
      if (local_218 != (long *)0x0) {
        if (*(int *)((long)local_218 + 0xc) != 0) {
          piVar1 = (int *)((long)local_218 + 0xc);
          iVar12 = *(int *)((long)local_218 + 0xc);
          do {
            plVar15 = (long *)plVar5[2];
            if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
              if (((*PTR_DAT_043795d8 & 1) == 0) &&
                 (iVar11 = __cxa_guard_acquire(PTR_DAT_043795d8), iVar11 != 0)) {
                if (((*puVar6 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar6), iVar11 != 0)) {
                  uVar13 = FUN_0087f8f0();
                  *(undefined8 *)puVar7 = uVar13;
                  __cxa_guard_release(puVar6);
                }
                *(undefined **)puVar8 = puVar7;
                __cxa_guard_release(PTR_DAT_043795d8);
              }
              *(undefined **)puVar10 = puVar8;
              __cxa_guard_release(puVar9);
            }
            while( true ) {
              if (plVar15 == (long *)0x0) goto LAB_01e15704;
              if (plVar15 == (long *)puVar10) break;
              plVar15 = (long *)*plVar15;
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
                lVar14 = plVar5[3];
                plVar5 = (long *)0x0;
                plVar15 = local_218;
                if (lVar14 != 0) {
                  plVar5 = (long *)(lVar14 + -0x50);
                }
                goto joined_r0x01e155ec;
              }
            }
            else {
              ClearExclusiveLocal();
            }
            iVar12 = iVar11;
          } while (iVar11 != 0);
        }
LAB_01e15704:
        plVar5 = (long *)0x0;
        plVar15 = local_218;
joined_r0x01e155ec:
        local_218 = plVar15;
        if (plVar15 != (long *)0x0) {
          plVar2 = plVar15 + 1;
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
            plVar15[2] = 0;
            if (((*PTR_DAT_04379498 & 1) == 0) &&
               (iVar12 = __cxa_guard_acquire(PTR_DAT_04379498), iVar12 != 0)) {
              FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
              __cxa_guard_release(PTR_DAT_04379498);
            }
            lVar14 = *(long *)PTR_DAT_043794a0;
            *(long *)PTR_DAT_043794a8 = lVar14;
            local_70[0] = *plVar15;
            FUN_02a44274(lVar14 + 0xd8,local_70);
          }
        }
        if (plVar5 != (long *)0x0) {
          FUN_01a56fa4(plVar5,1);
          lVar14 = plVar5[0xb];
          piVar1 = (int *)(lVar14 + 0xc);
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
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*plVar5 + 0x20))(plVar5);
          }
        }
      }
      if (local_1f8 != (long *)0x0) {
        lVar14 = local_1f8[0xb];
        piVar1 = (int *)(lVar14 + 0xc);
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
          *(undefined8 *)(lVar14 + 0x18) = 0;
          (**(code **)(*local_1f8 + 0x20))();
        }
      }
    }
  }
  if ((local_1a0 != 0) && (FUN_018ecdb8(&local_218), plVar5 = local_218, local_218 != (long *)0x0))
  {
    local_218 = (long *)0x6bf767f5a87753b5;
    pcStack_210 = "PlayerStateExit";
    local_208 = 0xf;
    local_200 = (long *)0x0;
    local_70[0] = CONCAT44(local_70[0]._4_4_,*(undefined4 *)(param_1 + 0x68));
    FUN_01e15230(plVar5,&local_218,local_70,local_1f0);
    if (local_200 != (long *)0x0) {
      (**(code **)(*local_200 + 0x20))();
    }
    lVar14 = plVar5[0xb];
    piVar1 = (int *)(lVar14 + 0xc);
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
      *(undefined8 *)(lVar14 + 0x18) = 0;
      (**(code **)(*plVar5 + 0x20))(plVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x68);
  FUN_01aebac0(local_1f0);
  return;
}


