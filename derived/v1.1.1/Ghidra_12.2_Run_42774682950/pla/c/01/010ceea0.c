/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010ceea0; name: FUN_010ceea0
 */


void FUN_010ceea0(long param_1)

{
  int *piVar1;
  int iVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  long *local_38;
  
  plVar5 = *(long **)(param_1 + 0xe0);
  for (plVar3 = *(long **)(param_1 + 0xd8); plVar3 != plVar5; plVar3 = plVar3 + 2) {
    if ((*plVar3 != 0) && (*(int *)(*plVar3 + 0xc) != 0)) {
      FUN_010d68e4(&local_38,*plVar3);
      plVar10 = local_38;
      (**(code **)(*local_38 + 0x40))(local_38);
      if (plVar10 != (long *)0x0) {
        lVar11 = plVar10[0xb];
        piVar1 = (int *)(lVar11 + 0xc);
        do {
          iVar2 = *piVar1;
          cVar7 = '\x01';
          bVar8 = (bool)ExclusiveMonitorPass(piVar1,0x10);
          if (bVar8) {
            *piVar1 = iVar2 + -1;
            cVar7 = ExclusiveMonitorsStatus();
          }
        } while (cVar7 != '\0');
        if (iVar2 + -1 == 0) {
          *(undefined8 *)(lVar11 + 0x18) = 0;
          (**(code **)(*plVar10 + 0x20))(plVar10);
        }
      }
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x110);
  puVar6 = *(undefined8 **)(param_1 + 0x118);
  if (puVar4 != puVar6) {
    (*(code *)*puVar4)(puVar4 + 4);
    while (puVar9 = puVar4 + 0x10, puVar9 != puVar6) {
      (*(code *)*puVar9)(puVar4 + 0x14);
      puVar4 = puVar9;
    }
  }
  return;
}


