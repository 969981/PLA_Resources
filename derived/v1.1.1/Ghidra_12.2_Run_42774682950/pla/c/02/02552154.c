/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02552154; name: FUN_02552154
 */


void FUN_02552154(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long *local_78;
  long *local_70 [2];
  long *local_58;
  
  FUN_0199c220(local_70,*param_1);
  plVar5 = local_70[0];
  puVar9 = PTR_DAT_0437a0f0;
  puVar8 = PTR_DAT_0437a0e8;
  puVar7 = PTR_DAT_043794d8;
  puVar6 = PTR_DAT_043794d0;
  if (local_70[0] != (long *)0x0) {
    if (*(int *)((long)local_70[0] + 0xc) != 0) {
      piVar1 = (int *)((long)local_70[0] + 0xc);
      iVar11 = *(int *)((long)local_70[0] + 0xc);
      do {
        plVar14 = (long *)plVar5[2];
        if (((*puVar8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar8), iVar10 != 0)) {
          if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
            uVar12 = FUN_0087f8f0();
            *(undefined8 *)puVar7 = uVar12;
            __cxa_guard_release(puVar6);
          }
          *(undefined **)puVar9 = puVar7;
          __cxa_guard_release(puVar8);
        }
        while( true ) {
          if (plVar14 == (long *)0x0) goto LAB_02552488;
          if (plVar14 == (long *)puVar9) break;
          plVar14 = (long *)*plVar14;
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
            lVar13 = plVar5[3];
            plVar5 = (long *)0x0;
            plVar14 = local_70[0];
            if (lVar13 != 0) {
              plVar5 = (long *)(lVar13 + -0x50);
            }
            goto joined_r0x02552238;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        iVar11 = iVar10;
      } while (iVar10 != 0);
    }
LAB_02552488:
    plVar5 = (long *)0x0;
    plVar14 = local_70[0];
joined_r0x02552238:
    local_70[0] = plVar14;
    if (plVar14 != (long *)0x0) {
      plVar2 = plVar14 + 1;
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
        plVar14[2] = 0;
        if (((*PTR_DAT_04379498 & 1) == 0) &&
           (iVar11 = __cxa_guard_acquire(PTR_DAT_04379498), iVar11 != 0)) {
          FUN_00100250(PTR_LAB_04379590,PTR_DAT_043794a0,&PTR_LOOP_0411a000);
          __cxa_guard_release(PTR_DAT_04379498);
        }
        lVar13 = *(long *)PTR_DAT_043794a0;
        *(long *)PTR_DAT_043794a8 = lVar13;
        local_58 = (long *)*plVar14;
        FUN_02a44274(lVar13 + 0xd8,&local_58);
      }
    }
    if (plVar5 != (long *)0x0) {
      FUN_01847290(&local_58,plVar5);
      FUN_01c62dd8(&local_78,local_58,0x12,*param_2);
      plVar14 = local_78;
      if (local_78 != (long *)0x0) {
        lVar13 = local_78[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) {
LAB_025524e0:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        local_70[0] = plVar14;
        lVar13 = plVar14[0xb];
        if (*(undefined8 **)(lVar13 + 0x18) == (undefined8 *)0x0) goto LAB_025524e0;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar12 = (**(code **)**(undefined8 **)(lVar13 + 0x18))();
          *(undefined8 *)(lVar13 + 0x10) = uVar12;
        }
        piVar1 = (int *)(lVar13 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar4) {
            *piVar1 = *piVar1 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        (*(code *)*param_3)(param_3 + 4,local_70);
        if (local_70[0] != (long *)0x0) {
          lVar13 = local_70[0][0xb];
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
            (**(code **)(*local_70[0] + 0x20))();
          }
        }
        lVar13 = plVar14[0xb];
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
          (**(code **)(*plVar14 + 0x20))(plVar14);
        }
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
            (**(code **)(*local_78 + 0x20))();
          }
        }
      }
      if (local_58 != (long *)0x0) {
        lVar13 = local_58[0xb];
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
          (**(code **)(*local_58 + 0x20))();
        }
      }
      lVar13 = plVar5[0xb];
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
        (**(code **)(*plVar5 + 0x20))(plVar5);
      }
    }
  }
  return;
}


