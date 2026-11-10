/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ed2e8; name: FUN_031ed2e8
 */


void FUN_031ed2e8(long param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  int iVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  iVar5 = *(int *)(param_1 + 0xb8);
  lVar9 = *(long *)(param_1 + 0xb0);
  iVar1 = iVar5 + 1;
  if ((int)(*(uint *)(param_1 + 0xbc) & 0x3fffffff) <= iVar5) {
    lVar9 = FUN_031f0f4c(PTR_PTR_0434a080,iVar1,lVar9);
    iVar5 = *(int *)(param_1 + 0xb8);
    *(long *)(param_1 + 0xb0) = lVar9;
  }
  piVar7 = (int *)(lVar9 + (long)iVar5 * 0x60);
  *(int *)(param_1 + 0xb8) = iVar1;
  plVar11 = (long *)(piVar7 + 0x14);
  *plVar11 = 0;
  *piVar7 = param_2;
  piVar7[1] = param_3;
  *(undefined1 *)(piVar7 + 2) = 0;
  plVar10 = (long *)(*(long *)(param_1 + 0xa0) + (long)param_2 * 0x60);
  FUN_032ca864(&local_60,*(long *)(param_1 + 0x90) + (long)param_3 * 0xd0 + 0x80,plVar10 + 6);
  plVar4 = (long *)*plVar11;
  plVar6 = (long *)*plVar10;
  if (plVar4 != plVar6) {
    if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
      plVar6 = plVar6 + 2;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = *plVar6 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      plVar4 = (long *)*plVar11;
      plVar6 = (long *)*plVar10;
    }
    *plVar11 = (long)plVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar6 = plVar4 + 2;
      do {
        lVar8 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar8 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
  }
  lVar9 = lVar9 + (long)iVar5 * 0x60;
  *(undefined8 *)(lVar9 + 0x38) = uStack_58;
  *(undefined8 *)(lVar9 + 0x30) = local_60;
  *(undefined8 *)(lVar9 + 0x48) = uStack_48;
  *(undefined8 *)(lVar9 + 0x40) = local_50;
  return;
}


