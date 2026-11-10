/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b47170; name: FUN_02b47170
 */


void FUN_02b47170(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long *local_58;
  
  plVar2 = *(long **)(*param_1 + 0x98);
  for (plVar1 = *(long **)(*param_1 + 0x90); plVar1 != plVar2; plVar1 = plVar1 + 1) {
    lVar10 = *plVar1;
    plVar3 = *(long **)(lVar10 + 0x80);
    for (plVar11 = *(long **)(lVar10 + 0x78); plVar11 != plVar3; plVar11 = plVar11 + 1) {
      lVar12 = *plVar11;
      *(undefined8 *)(lVar12 + 0x98) = *(undefined8 *)(lVar10 + 0x180);
      *(undefined8 *)(lVar12 + 0xa0) = *(undefined8 *)(lVar10 + 0x188);
      *(undefined8 *)(lVar12 + 0xa8) = *(undefined8 *)(lVar10 + 400);
      plVar9 = *(long **)(lVar10 + 0x198);
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0x18))(plVar9);
      }
      plVar7 = *(long **)(lVar12 + 0xb0);
      *(long **)(lVar12 + 0xb0) = plVar9;
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x20))();
      }
      FUN_02b73040(*plVar11,param_3);
    }
  }
  lVar8 = *param_2;
  lVar12 = *(long *)(lVar8 + 0xa0);
  for (lVar10 = *(long *)(lVar8 + 0x98); lVar10 != lVar12; lVar10 = lVar10 + 0x28) {
    FUN_02b3365c(&local_58,*(undefined8 *)(lVar8 + 0x58),lVar10);
    FUN_02b2aaa0(local_58);
    if (local_58 != (long *)0x0) {
      plVar1 = local_58 + 10;
      do {
        iVar6 = (int)*plVar1 + -1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar5) {
          *(int *)plVar1 = iVar6;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar6 == 0) {
        (**(code **)(*local_58 + 0x10))();
      }
    }
  }
  return;
}


