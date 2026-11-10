/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031ac590; name: FUN_031ac590
 */


void FUN_031ac590(undefined8 *param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  undefined8 *puVar4;
  void *__dest;
  long *plVar5;
  long *plVar6;
  long lVar7;
  void *__src;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar4 = (undefined8 *)FUN_032cf5b0(0x50);
  puVar4[5] = 0;
  puVar4[3] = 0;
  puVar4[4] = 0;
  puVar8 = puVar4 + 6;
  *puVar8 = 0;
  *puVar4 = &PTR_LAB_0430b410;
  puVar4[1] = 0xffffffff;
  puVar4[2] = 1;
  puVar4[7] = 0x8000000000000000;
  puVar4[8] = 0;
  puVar4[9] = 0;
  *param_1 = puVar4;
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  puVar4[5] = *(undefined8 *)(param_2 + 0x28);
  puVar4[4] = uVar9;
  if ((undefined8 *)(param_2 + 0x38) == puVar8) {
    plVar5 = (long *)0x0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x40);
    __src = *(void **)(param_2 + 0x38);
    if (iVar1 < 1) {
      __dest = (void *)0x0;
    }
    else {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,0x20,0,0,(long)puVar4 + 0x3c);
      *puVar8 = __dest;
    }
    memcpy(__dest,__src,(long)iVar1 << 5);
    plVar5 = (long *)puVar4[8];
    *(int *)(puVar4 + 7) = iVar1;
  }
  plVar6 = *(long **)(param_2 + 0x48);
  if (plVar5 != plVar6) {
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
      plVar5 = (long *)puVar4[8];
      plVar6 = *(long **)(param_2 + 0x48);
    }
    puVar4[8] = plVar6;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar6 = plVar5 + 2;
      do {
        lVar7 = *plVar6;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar6,0x10);
        if (bVar3) {
          *plVar6 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x031ac6d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x18))();
        return;
      }
    }
  }
  return;
}


