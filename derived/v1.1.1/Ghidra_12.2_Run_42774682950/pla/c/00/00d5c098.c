/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d5c098; name: FUN_00d5c098
 */


void FUN_00d5c098(long param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  int iVar12;
  long *plVar13;
  long *plVar14;
  long local_70 [3];
  long *local_58;
  
  iVar12 = 0;
  plVar13 = *(long **)(param_1 + 0x2c8);
  lVar9 = param_1;
  do {
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
    }
    lVar9 = FUN_00d533f0(local_70,lVar9,2,iVar12);
    plVar7 = local_58;
    lVar6 = local_70[0];
    plVar14 = (long *)plVar13[0x29];
    lVar2 = plVar13[0x2a];
    if (local_58 == (long *)0x0) {
      if (lVar2 == 0) goto LAB_00d5c1e4;
LAB_00d5c118:
      if (*plVar14 == lVar6) goto LAB_00d5c1e4;
      lVar11 = lVar2 * 0x30;
      plVar10 = plVar14 + lVar2 * 6;
      do {
        lVar11 = lVar11 + -0x30;
        plVar8 = plVar10;
        if (lVar11 == 0) break;
        plVar1 = plVar14 + 6;
        plVar14 = plVar14 + 6;
        plVar8 = plVar14;
      } while (*plVar1 != lVar6);
      plVar14 = plVar8;
      if (plVar7 == (long *)0x0) goto LAB_00d5c1b8;
LAB_00d5c150:
      (**(code **)(*plVar7 + 0x20))(plVar7);
      *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
      lVar9 = (**(code **)(*plVar7 + 0x20))(plVar7);
    }
    else {
      lVar9 = (**(code **)(*local_58 + 0x18))(local_58);
      if (lVar2 != 0) goto LAB_00d5c118;
LAB_00d5c1e4:
      if (plVar7 != (long *)0x0) goto LAB_00d5c150;
LAB_00d5c1b8:
      *(byte *)(plVar14[4] + 0x58) = *(byte *)(plVar14[4] + 0x58) & 0xfe;
    }
    if (plVar13 != (long *)0x0) {
      plVar14 = plVar13 + 10;
      do {
        iVar5 = (int)*plVar14 + -1;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar4) {
          *(int *)plVar14 = iVar5;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 == 0) {
        lVar9 = (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    iVar12 = iVar12 + 1;
    if (iVar12 == 0x30) {
      return;
    }
    plVar13 = *(long **)(param_1 + 0x2c8);
  } while( true );
}


