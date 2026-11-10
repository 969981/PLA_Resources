/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b37fb4; name: FUN_02b37fb4
 */


void FUN_02b37fb4(long param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long *local_58;
  
  plVar11 = (long *)(*(long *)(*(long *)(param_1 + 0xb8) + -8) + 0x58);
  uVar10 = (**(code **)(*plVar11 + 0x30))(plVar11,param_1 + 0x78,0x7f);
  if (*(long *)(param_1 + 0xe8) == 0) {
    (**(code **)(*DAT_043ef740 + 0x98))(&local_58);
    plVar11 = local_58;
  }
  else {
    plVar11 = *(long **)(*(long *)(param_1 + 0xe8) + 0x3c8);
    if (plVar11 != (long *)0x0) {
      plVar14 = plVar11 + 10;
      do {
        cVar7 = '\x01';
        bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
        if (bVar8) {
          *(int *)plVar14 = (int)*plVar14 + 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
    }
  }
  puVar4 = *(undefined8 **)(param_1 + 0x80);
  for (puVar13 = *(undefined8 **)(param_1 + 0x78); puVar13 != puVar4; puVar13 = puVar13 + 1) {
    FUN_02b73b88(*puVar13,uVar10);
  }
  if (plVar11 != (long *)0x0) {
    plVar14 = *(long **)(param_1 + 0x78);
    plVar5 = *(long **)(param_1 + 0x80);
    if (plVar14 != plVar5) {
      plVar1 = plVar11 + 0xb;
      do {
        plVar6 = *(long **)(*plVar14 + 0xe8);
        for (plVar3 = *(long **)(*plVar14 + 0xe0); plVar3 != plVar6; plVar3 = plVar3 + 1) {
          uVar12 = *(undefined8 *)(*plVar3 + 0x60);
          uVar10 = (**(code **)(*plVar1 + 0x28))(plVar1);
          (**(code **)(*plVar1 + 0x20))(&local_58,plVar1);
          FUN_02bb11cc(uVar12,3,uVar10,&local_58);
          if (local_58 != (long *)0x0) {
            plVar2 = local_58 + 10;
            do {
              iVar9 = (int)*plVar2 + -1;
              cVar7 = '\x01';
              bVar8 = (bool)ExclusiveMonitorPass(plVar2,0x10);
              if (bVar8) {
                *(int *)plVar2 = iVar9;
                cVar7 = ExclusiveMonitorsStatus();
              }
            } while (cVar7 != '\0');
            if (iVar9 == 0) {
              (**(code **)(*local_58 + 0x10))();
            }
          }
        }
        plVar14 = plVar14 + 1;
      } while (plVar14 != plVar5);
    }
    plVar14 = plVar11 + 10;
    do {
      iVar9 = (int)*plVar14 + -1;
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(plVar14,0x10);
      if (bVar8) {
        *(int *)plVar14 = iVar9;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
    if (iVar9 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  return;
}


