/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f53008; name: FUN_01f53008
 */


void FUN_01f53008(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined8 *local_80;
  undefined8 uStack_78;
  undefined8 *local_70 [2];
  undefined8 local_58;
  
  puVar7 = PTR_LAB_04379590;
  puVar6 = PTR_DAT_043794a8;
  puVar5 = PTR_DAT_043794a0;
  puVar4 = PTR_DAT_04379498;
  plVar15 = *(long **)(param_1 + 0x98);
  if (plVar15 == (long *)0x0) {
    return;
  }
  plVar13 = (long *)plVar15[3];
  do {
    if (plVar13 != (long *)0x0) {
      lVar14 = plVar13[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) {
LAB_01f53458:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
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
      lVar14 = plVar13[0xb];
      if (*(undefined8 **)(lVar14 + 0x18) == (undefined8 *)0x0) goto LAB_01f53458;
      if (*(long *)(lVar14 + 0x10) == 0) {
        uVar11 = (**(code **)**(undefined8 **)(lVar14 + 0x18))();
        *(undefined8 *)(lVar14 + 0x10) = uVar11;
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
    lVar14 = *param_2;
    iVar10 = FUN_019e1c08(plVar13);
    if (iVar10 == 1) {
      (**(code **)(*plVar13 + 0x10))(local_70,plVar13);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_019e2c40(&local_80,local_70);
      puVar8 = local_70[0];
      if (local_70[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70[0] + 1);
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
          local_70[0][2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar12 = *(long *)puVar5;
          *(long *)puVar6 = lVar12;
          local_58 = *puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      FUN_01f53470(lVar14 + 0x330,&local_80);
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          bVar9 = *piVar1 + -1 == 0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
LAB_01f532dc:
        puVar8 = local_80;
        if (bVar9) {
          local_80[2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar14 = *(long *)puVar5;
          *(long *)puVar6 = lVar14;
          local_70[0] = (undefined8 *)*puVar8;
          FUN_02a44274(lVar14 + 0xd8,local_70);
        }
      }
    }
    else if (iVar10 == 3) {
      (**(code **)(*plVar13 + 0x10))(local_70,plVar13);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_019e2c40(&local_80,local_70);
      puVar8 = local_70[0];
      if (local_70[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70[0] + 1);
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
          local_70[0][2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar12 = *(long *)puVar5;
          *(long *)puVar6 = lVar12;
          local_58 = *puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      FUN_01f53470(lVar14 + 0x3a0,&local_80);
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          bVar9 = *piVar1 + -1 == 0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_01f532dc;
      }
    }
    else if (iVar10 == 2) {
      (**(code **)(*plVar13 + 0x10))(local_70,plVar13);
      local_80 = (undefined8 *)0x0;
      uStack_78 = 0;
      FUN_019e2c40(&local_80,local_70);
      puVar8 = local_70[0];
      if (local_70[0] != (undefined8 *)0x0) {
        piVar1 = (int *)(local_70[0] + 1);
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
          local_70[0][2] = 0;
          if (((*puVar4 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar4), iVar10 != 0)) {
            FUN_00100250(puVar7,puVar5,&PTR_LOOP_0411a000);
            __cxa_guard_release(puVar4);
          }
          lVar12 = *(long *)puVar5;
          *(long *)puVar6 = lVar12;
          local_58 = *puVar8;
          FUN_02a44274(lVar12 + 0xd8,&local_58);
        }
      }
      FUN_01f53470(lVar14 + 0x368,&local_80);
      if (local_80 != (undefined8 *)0x0) {
        piVar1 = (int *)(local_80 + 1);
        do {
          bVar9 = *piVar1 + -1 == 0;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar3) {
            *piVar1 = *piVar1 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        goto LAB_01f532dc;
      }
    }
    if (plVar13 != (long *)0x0) {
      lVar14 = plVar13[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      lVar14 = plVar13[0xb];
      piVar1 = (int *)(lVar14 + 0xc);
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
        *(undefined8 *)(lVar14 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    plVar15 = (long *)*plVar15;
    if (plVar15 == (long *)0x0) {
      return;
    }
    plVar13 = (long *)plVar15[3];
  } while( true );
}


