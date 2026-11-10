/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f41654; name: FUN_01f41654
 */


void FUN_01f41654(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  int iVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  undefined8 local_58;
  
  plVar9 = *(long **)(param_1 + 0x120);
  if (plVar9 != *(long **)(param_1 + 0x128)) {
    do {
      if (*param_2 == *plVar9) {
        plVar13 = *(long **)(param_1 + 0x128);
        plVar14 = plVar9 + 2;
        plVar12 = plVar9;
        puVar4 = PTR_LAB_04379590;
        plVar5 = (long *)PTR_DAT_043794a8;
        plVar6 = (long *)PTR_DAT_043794a0;
        pbVar7 = PTR_DAT_04379498;
        if (plVar14 != plVar13) goto LAB_01f416c0;
        goto LAB_01f41738;
      }
      plVar9 = plVar9 + 2;
    } while (*(long **)(param_1 + 0x128) != plVar9);
  }
  return;
LAB_01f416c0:
  do {
    plVar9 = plVar12 + 2;
    FUN_01f4f478(plVar12,plVar9);
    plVar14 = plVar12 + 4;
    plVar12 = plVar9;
  } while (plVar14 != plVar13);
  plVar14 = *(long **)(param_1 + 0x128);
  puVar4 = PTR_LAB_04379590;
  plVar5 = (long *)PTR_DAT_043794a8;
  plVar6 = (long *)PTR_DAT_043794a0;
  pbVar7 = PTR_DAT_04379498;
  if (plVar14 != plVar9) {
LAB_01f41738:
    do {
      plVar14 = plVar14 + -2;
      puVar10 = (undefined8 *)*plVar14;
      if (puVar10 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar10 + 1);
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
          puVar10[2] = 0;
          if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
            FUN_00100250(puVar4,plVar6,&PTR_LOOP_0411a000);
            __cxa_guard_release(pbVar7);
          }
          lVar11 = *plVar6;
          *plVar5 = lVar11;
          local_58 = *puVar10;
          FUN_02a44274(lVar11 + 0xd8,&local_58);
        }
      }
    } while (plVar14 != plVar9);
  }
  *(long **)(param_1 + 0x128) = plVar9;
  return;
}


