/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ca7f4; name: FUN_010ca7f4
 */


void FUN_010ca7f4(long param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  
  lVar14 = 0;
  do {
    lVar12 = param_1 + lVar14 * 0x60;
    plVar11 = *(long **)(lVar12 + 0xb28);
    plVar13 = (long *)(param_1 + lVar14 * 0xa0 + 0x88);
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x18))(plVar11);
    }
    plVar5 = (long *)*plVar13;
    *plVar13 = (long)plVar11;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))();
    }
    lVar8 = param_1 + lVar14 * 0x60;
    lVar10 = param_1 + lVar14 * 0xa0;
    *(undefined8 *)(lVar10 + 0x90) = *(undefined8 *)(lVar8 + 0xb30);
    *(undefined8 *)(lVar10 + 0x98) = *(undefined8 *)(lVar8 + 0xb38);
    *(undefined8 *)(lVar10 + 0xa0) = *(undefined8 *)(lVar8 + 0xb40);
    plVar13 = *(long **)(lVar8 + 0xb48);
    if (plVar13 != (long *)0x0) {
      (**(code **)(*plVar13 + 0x18))(plVar13);
    }
    plVar11 = *(long **)(lVar10 + 0xa8);
    *(long **)(lVar10 + 0xa8) = plVar13;
    if (plVar11 != (long *)0x0) {
      (**(code **)(*plVar11 + 0x20))();
    }
    lVar8 = param_1 + lVar14 * 0xa0;
    *(undefined4 *)(lVar8 + 0xb0) = *(undefined4 *)(param_1 + lVar14 * 0x60 + 0xb50);
    uVar6 = FUN_00938764(lVar8 + 0xc0,1,lVar12 + 0xb28,0,*(undefined8 *)(param_1 + 0xb20),0);
    if (((uVar6 & 1) != 0) &&
       (plVar13 = *(long **)(param_1 + lVar14 * 0xa0 + 0xe8), plVar13 != (long *)0x0)) {
      lVar12 = plVar13[0xb];
      puVar9 = *(undefined8 **)(lVar12 + 0x18);
      if (puVar9 == (undefined8 *)0x0) goto LAB_010caa48;
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar7 = (**(code **)*puVar9)(puVar9);
        *(undefined8 *)(lVar12 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))();
      }
    }
    uVar6 = FUN_010bd598(param_1 + lVar14 * 0xa0 + 0xf0,1,param_1 + lVar14 * 0x60 + 0xb58,0,
                         *(undefined8 *)(param_1 + 0xb20),0);
    if (((uVar6 & 1) != 0) &&
       (plVar13 = *(long **)(param_1 + lVar14 * 0xa0 + 0x118), plVar13 != (long *)0x0)) {
      lVar12 = plVar13[0xb];
      if (*(undefined8 **)(lVar12 + 0x18) == (undefined8 *)0x0) {
LAB_010caa48:
                    /* WARNING: Subroutine does not return */
        nn::diag::detail::AbortImpl("","","",0);
      }
      if (*(long *)(lVar12 + 0x10) == 0) {
        uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x18))();
        *(undefined8 *)(lVar12 + 0x10) = uVar7;
      }
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      lVar12 = plVar13[0xb];
      piVar1 = (int *)(lVar12 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = iVar2 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar12 + 0x18) = 0;
        (**(code **)(*plVar13 + 0x20))(plVar13);
      }
    }
    lVar14 = lVar14 + 1;
    if (lVar14 == 0x11) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      return;
    }
  } while( true );
}


