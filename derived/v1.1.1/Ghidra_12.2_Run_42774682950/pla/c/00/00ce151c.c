/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ce151c; name: FUN_00ce151c
 */


long * FUN_00ce151c(long param_1,long *param_2)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_58;
  
  plVar13 = *(long **)(param_1 + 8);
  plVar14 = param_2 + 4;
  if (plVar14 == plVar13) {
    plVar12 = param_2;
  }
  else {
    plVar14 = param_2;
    do {
      plVar12 = plVar14 + 4;
      FUN_0087fcf0(plVar14,plVar12);
      plVar14[2] = plVar14[6];
      plVar1 = plVar14 + 8;
      *(int *)(plVar14 + 3) = (int)plVar14[7];
      plVar14 = plVar12;
    } while (plVar1 != plVar13);
    plVar14 = *(long **)(param_1 + 8);
    if (plVar14 == plVar12) goto LAB_00ce1654;
  }
  puVar8 = PTR_LAB_04379590;
  puVar7 = PTR_DAT_043794a8;
  puVar6 = PTR_DAT_043794a0;
  puVar5 = PTR_DAT_04379498;
  plVar14 = plVar14 + -4;
  puVar10 = (undefined8 *)*plVar14;
  while( true ) {
    if (puVar10 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar10 + 1);
      do {
        iVar9 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar9 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar9 + -1 == 0) {
        puVar10[2] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar5), iVar9 != 0)) {
          FUN_00100250(puVar8,puVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(puVar5);
        }
        lVar11 = *(long *)puVar6;
        *(long *)puVar7 = lVar11;
        local_58 = *puVar10;
        FUN_02a44274(lVar11 + 0xd8,&local_58);
      }
    }
    if (plVar14 == plVar12) break;
    plVar14 = plVar14 + -4;
    puVar10 = (undefined8 *)*plVar14;
  }
LAB_00ce1654:
  *(long **)(param_1 + 8) = plVar12;
  return param_2;
}


