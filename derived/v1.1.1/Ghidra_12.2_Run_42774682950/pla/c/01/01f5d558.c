/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f5d558; name: FUN_01f5d558
 */


void FUN_01f5d558(long param_1,long *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined8 local_58;
  
  plVar12 = *(long **)(param_1 + 8);
  plVar13 = param_2 + 2;
  plVar11 = param_2;
  puVar4 = PTR_LAB_04379590;
  plVar5 = (long *)PTR_DAT_043794a8;
  plVar6 = (long *)PTR_DAT_043794a0;
  pbVar7 = PTR_DAT_04379498;
  if (plVar13 != plVar12) {
    do {
      param_2 = plVar11 + 2;
      FUN_01f5e1c0(plVar11,param_2);
      plVar13 = plVar11 + 4;
      plVar11 = param_2;
    } while (plVar13 != plVar12);
    plVar13 = *(long **)(param_1 + 8);
    puVar4 = PTR_LAB_04379590;
    plVar5 = (long *)PTR_DAT_043794a8;
    plVar6 = (long *)PTR_DAT_043794a0;
    pbVar7 = PTR_DAT_04379498;
    if (plVar13 == param_2) goto LAB_01f5d608;
  }
  do {
    plVar13 = plVar13 + -2;
    puVar9 = (undefined8 *)*plVar13;
    if (puVar9 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar9 + 1);
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
        puVar9[2] = 0;
        if (((*pbVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(pbVar7), iVar8 != 0)) {
          FUN_00100250(puVar4,plVar6,&PTR_LOOP_0411a000);
          __cxa_guard_release(pbVar7);
        }
        lVar10 = *plVar6;
        *plVar5 = lVar10;
        local_58 = *puVar9;
        FUN_02a44274(lVar10 + 0xd8,&local_58);
      }
    }
  } while (plVar13 != param_2);
LAB_01f5d608:
  *(long **)(param_1 + 8) = param_2;
  return;
}


