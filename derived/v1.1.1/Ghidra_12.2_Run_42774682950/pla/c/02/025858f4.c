/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 025858f4; name: FUN_025858f4
 */


void FUN_025858f4(long param_1)

{
  long *plVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long *local_18;
  
  if (*(long *)(param_1 + 0x58) == 0) {
    if ((*(long *)(*(long *)(param_1 + 0x70) + 0xa0) != 0) && (*(char *)(param_1 + 0x78) == '\0')) {
      uVar7 = FUN_02588198();
      FUN_02585a40(&local_18,param_1,uVar7);
      if (local_18 != (long *)0x0) {
        lVar8 = local_18[0xb];
        piVar2 = (int *)(lVar8 + 0xc);
        do {
          iVar5 = *piVar2;
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar4) {
            *piVar2 = iVar5 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        if (iVar5 + -1 == 0) {
          *(undefined8 *)(lVar8 + 0x18) = 0;
          (**(code **)(*local_18 + 0x20))();
        }
      }
      FUN_025881c8(*(undefined8 *)(param_1 + 0x70));
      plVar6 = *(long **)(param_1 + 0x60);
      goto joined_r0x0258597c;
    }
  }
  else {
    FUN_02584ed8();
    plVar6 = *(long **)(param_1 + 0x58);
    if ((*(int *)(plVar6[0xd] + 0x80) == 7) &&
       (*(undefined8 *)(param_1 + 0x58) = 0, plVar6 != (long *)0x0)) {
      lVar8 = plVar6[0xb];
      piVar2 = (int *)(lVar8 + 0xc);
      do {
        iVar5 = *piVar2;
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = iVar5 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (iVar5 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar6 + 0x20))();
        plVar6 = *(long **)(param_1 + 0x60);
        goto joined_r0x0258597c;
      }
    }
  }
  plVar6 = *(long **)(param_1 + 0x60);
joined_r0x0258597c:
  if (plVar6 != (long *)0x0) {
    if ((int)plVar6[0xd] == -2) {
      FUN_02582818();
      return;
    }
    plVar1 = plVar6 + 10;
    *(undefined8 *)(param_1 + 0x60) = 0;
    do {
      iVar5 = (int)*plVar1 + -1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *(int *)plVar1 = iVar5;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar5 == 0) {
                    /* WARNING: Could not recover jumptable at 0x025859c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar6 + 0x10))();
      return;
    }
  }
  return;
}


