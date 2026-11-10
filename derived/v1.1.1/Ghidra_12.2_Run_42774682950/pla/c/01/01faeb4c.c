/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01faeb4c; name: FUN_01faeb4c
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01faeb4c(long param_1,undefined1 *param_2)

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
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  int local_84;
  long *local_80;
  undefined8 *local_78 [2];
  undefined8 local_68;
  
  puVar10 = PTR_DAT_0437a258;
  puVar9 = PTR_DAT_0437a250;
  puVar8 = PTR_DAT_043795e0;
  puVar7 = PTR_DAT_043795d8;
  puVar6 = PTR_DAT_043794d8;
  puVar5 = PTR_DAT_043794d0;
  plVar16 = *(long **)(param_1 + 0x98);
joined_r0x01faeb70:
  do {
    if (plVar16 == (long *)0x0) {
      return;
    }
    plVar15 = (long *)plVar16[3];
    if (plVar15 != (long *)0x0) {
      lVar14 = plVar15[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01faecec:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar14 = plVar15[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01faecec;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar12 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar12;
      }
      piVar1 = (int *)(lVar14 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    FUN_01b3ab48(local_78,plVar15);
    puVar4 = local_78[0];
    if (local_78[0] != (undefined8 *)0x0) {
      if (*(int *)((long)local_78[0] + 0xc) != 0) {
        piVar1 = (int *)((long)local_78[0] + 0xc);
        local_84 = *(int *)((long)local_78[0] + 0xc);
        do {
          plVar13 = (long *)puVar4[2];
          if (((*puVar9 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar9), iVar11 != 0)) {
            if (((*puVar7 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
              if (((*puVar5 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar5), iVar11 != 0)) {
                uVar12 = FUN_0087f8f0();
                *(undefined8 *)puVar6 = uVar12;
                __cxa_guard_release(puVar5);
              }
              *(undefined **)puVar8 = puVar6;
              __cxa_guard_release(puVar7);
            }
            *(undefined **)puVar10 = puVar8;
            __cxa_guard_release(puVar9);
          }
          while( true ) {
            if (plVar13 == (long *)0x0) goto LAB_01faed74;
            if (plVar13 == (long *)puVar10) break;
            plVar13 = (long *)*plVar13;
          }
          iVar11 = *piVar1;
          if (iVar11 == local_84) {
            cVar2 = '\x01';
            bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
            if (bVar3) {
              *piVar1 = local_84 + 1;
              cVar2 = ExclusiveMonitorsStatus();
            }
            if (cVar2 == '\0') {
              lVar14 = puVar4[3];
              local_80 = (long *)0x0;
              puVar4 = local_78[0];
              if (lVar14 != 0) {
                local_80 = (long *)(lVar14 + -0x50);
              }
              goto joined_r0x01faed9c;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          local_84 = iVar11;
        } while (iVar11 != 0);
      }
LAB_01faed74:
      local_80 = (long *)0x0;
      puVar4 = local_78[0];
joined_r0x01faed9c:
      local_78[0] = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar4 + 1);
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
          puVar4[2] = 0;
          if (((*PTR_DAT_04379498 & 1) == 0) &&
             (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
            FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
            __cxa_guard_release(PTR_DAT_04379498);
          }
          lVar14 = *(long *)PTR_DAT_043794a0;
          *(long *)PTR_DAT_043794a8 = lVar14;
          local_68 = *puVar4;
          FUN_02a44274(lVar14 + 0xd8,&local_68);
        }
      }
      if (local_80 != (long *)0x0) {
        FUN_015916d0(local_80,*param_2,0x100,*(undefined4 *)(param_2 + 4));
        lVar14 = local_80[0xb];
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
          (**(code **)(*local_80 + 0x20))();
        }
      }
    }
    if (plVar15 != (long *)0x0) {
      lVar14 = plVar15[0xb];
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
        (**(code **)(*plVar15 + 0x20))(plVar15);
      }
      lVar14 = plVar15[0xb];
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
        (**(code **)(*plVar15 + 0x20))(plVar15);
        plVar16 = (long *)*plVar16;
        goto joined_r0x01faeb70;
      }
    }
    plVar16 = (long *)*plVar16;
  } while( true );
}


