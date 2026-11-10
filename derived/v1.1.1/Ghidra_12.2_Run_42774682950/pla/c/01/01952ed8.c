/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01952ed8; name: FUN_01952ed8
 */


void FUN_01952ed8(long param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  bool bVar12;
  long *plVar13;
  undefined8 *puVar14;
  
  puVar6 = PTR_DAT_043796a0;
  puVar5 = PTR_DAT_04379698;
  puVar4 = PTR_DAT_04379690;
  uVar7 = 0;
  bVar12 = false;
  puVar14 = (undefined8 *)(param_1 + 0xb8);
  do {
    plVar11 = (long *)*puVar14;
    if (plVar11 != (long *)0x0) {
      lVar10 = plVar11[0xb];
      if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) goto LAB_019530c4;
      if (*(long *)(lVar10 + 0x10) == 0) {
        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
        *(undefined8 *)(lVar10 + 0x10) = uVar9;
      }
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    uVar7 = (**(code **)(*plVar11 + 0x40))(plVar11,uVar7 & 1);
    if (!bVar12 && ((uVar7 ^ 0xffffffff) & 1) == 0) {
      if (((*puVar4 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar4), iVar8 != 0)) {
        FUN_00100250(PTR_LAB_043796a8,puVar5,&PTR_LOOP_0411a000);
        __cxa_guard_release(puVar4);
      }
      lVar10 = *(long *)puVar5;
      *(long *)puVar6 = lVar10;
      plVar13 = *(long **)(*(long *)(lVar10 + 0x50) + 0xd0);
      if (plVar13 != (long *)0x0) {
        lVar10 = plVar13[0xb];
        if (*(undefined8 **)(lVar10 + 0x18) == (undefined8 *)0x0) {
LAB_019530c4:
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
        if (*(long *)(lVar10 + 0x10) == 0) {
          uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = uVar9;
        }
        piVar1 = (int *)(lVar10 + 0xc);
        do {
          cVar2 = '\x01';
          bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar12) {
            *piVar1 = *piVar1 + 1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      if (((plVar13[0xd] != 0) && ((plVar13[0xf] & 0xffU) != 0)) &&
         (*(char *)(plVar13[0xd] + 0x7e0) != '\0')) {
        plVar13[0xf] = plVar13[0xf] | 0x20;
      }
      lVar10 = plVar13[0xb];
      piVar1 = (int *)(lVar10 + 0xc);
      do {
        iVar8 = *piVar1;
        cVar2 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar12) {
          *piVar1 = iVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar8 == 1) {
        *(undefined8 *)(lVar10 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
      bVar12 = true;
    }
    lVar10 = plVar11[0xb];
    piVar1 = (int *)(lVar10 + 0xc);
    do {
      iVar8 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar8 + -1 == 0) {
      *(undefined8 *)(lVar10 + 0x18) = 0;
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
    puVar14 = puVar14 + 1;
    if (puVar14 == (undefined8 *)(param_1 + 0x180)) {
      return;
    }
  } while( true );
}


