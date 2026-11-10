/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0256e444; name: FUN_0256e444
 */


void FUN_0256e444(long param_1,byte param_2)

{
  undefined *puVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  undefined8 *local_c0 [2];
  undefined *local_b0;
  long *plStack_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined1 local_70;
  long *local_68;
  
  puVar9 = PTR_LAB_04379590;
  puVar8 = PTR_DAT_043794a8;
  puVar7 = PTR_DAT_043794a0;
  puVar6 = PTR_DAT_04379498;
  if ((*(int *)(param_1 + 0x68) == 1) &&
     (plVar13 = *(long **)(param_1 + 0x2d0), plVar13 != (long *)0x0)) {
    puVar1 = PTR_DAT_04387990 + 0x10;
    do {
      plStack_a8 = (long *)plVar13[4];
      local_b0 = puVar1;
      if (plStack_a8 != (long *)0x0) {
        (**(code **)(*plStack_a8 + 0x18))();
      }
      local_a0 = plVar13[5];
      if (local_a0 != 0) {
        lVar14 = *(long *)(local_a0 + 0x58);
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0256e764;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_98 = plVar13[6];
      if (local_98 != 0) {
        lVar14 = *(long *)(local_98 + 0x58);
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0256e764;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_90 = plVar13[7];
      if (local_90 != 0) {
        lVar14 = *(long *)(local_90 + 0x58);
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_0256e764;
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_88 = plVar13[8];
      if (local_88 != 0) {
        lVar14 = *(long *)(local_88 + 0x58);
        if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_0256e764:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar14 + 0x10) == 0) {
          uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
          *(undefined8 *)(lVar14 + 0x10) = uVar11;
        }
        piVar2 = (int *)(lVar14 + 0xc);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_80 = plVar13[9];
      if (local_80 != 0) {
        piVar2 = (int *)(local_80 + 0x50);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = *piVar2 + 1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      local_78 = plVar13[10];
      local_70 = (undefined1)plVar13[0xb];
      uVar12 = FUN_02c0bc14(local_98);
      if ((uVar12 & 1) != 0) {
        FUN_02be88ac(local_c0,local_88,0);
        FUN_00ab5ae0(&local_68,local_c0);
        puVar5 = local_c0[0];
        if (local_68 != (long *)0x0) {
          if (*(int *)((long)local_68 + 0x7c) == 2) {
            lVar14 = local_68[0xb];
            piVar2 = (int *)(lVar14 + 0xc);
            *(byte *)((long)local_68 + 0x79) = param_2 & 1;
            do {
              iVar10 = *piVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          else {
            lVar14 = local_68[0xb];
            piVar2 = (int *)(lVar14 + 0xc);
            do {
              iVar10 = *piVar2 + -1;
              cVar3 = '\x01';
              bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar4) {
                *piVar2 = iVar10;
                cVar3 = ExclusiveMonitorsStatus();
              }
            } while (cVar3 != '\0');
          }
          if (iVar10 == 0) {
            *(undefined8 *)(lVar14 + 0x18) = 0;
            (**(code **)(*local_68 + 0x20))();
            puVar5 = local_c0[0];
          }
        }
        local_c0[0] = puVar5;
        if (puVar5 != (undefined8 *)0x0) {
          piVar2 = (int *)(puVar5 + 1);
          do {
            iVar10 = *piVar2;
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar4) {
              *piVar2 = iVar10 + -1;
              cVar3 = ExclusiveMonitorsStatus();
            }
          } while (cVar3 != '\0');
          if (iVar10 + -1 == 0) {
            puVar5[2] = 0;
            if (((*puVar6 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
              FUN_00100250(puVar9,puVar7,&PTR_LOOP_0411a000);
              __cxa_guard_release(puVar6);
            }
            lVar14 = *(long *)puVar7;
            *(long *)puVar8 = lVar14;
            local_68 = (long *)*puVar5;
            FUN_02a44274(lVar14 + 0xd8,&local_68);
          }
        }
      }
      FUN_0256719c(&local_b0);
      plVar13 = (long *)*plVar13;
    } while (plVar13 != (long *)0x0);
  }
  return;
}


