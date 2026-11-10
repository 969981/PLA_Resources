/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fec584; name: FUN_02fec584
 */


void FUN_02fec584(long param_1,long param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  void *__dest;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  void *__src;
  
  FUN_02fecbe0();
  if (param_1 != param_2) {
    __src = *(void **)(param_2 + 0x20);
    iVar1 = *(int *)(param_2 + 0x28);
    __dest = *(void **)(param_1 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar1) {
      __dest = (void *)FUN_032bd1d4(PTR_PTR_0434a080,iVar1,2,__dest,*(undefined4 *)(param_1 + 0x28))
      ;
      *(void **)(param_1 + 0x20) = __dest;
    }
    memcpy(__dest,__src,(long)iVar1 << 1);
    *(int *)(param_1 + 0x28) = iVar1;
  }
  plVar4 = *(long **)(param_1 + 0x30);
  plVar5 = *(long **)(param_2 + 0x30);
  if (plVar4 != plVar5) {
    uVar6 = 0;
    if (plVar5 != (long *)0x0) {
      FUN_032d645c(plVar5);
      plVar4 = *(long **)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_2 + 0x30);
    }
    *(undefined8 *)(param_1 + 0x30) = uVar6;
    if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
      plVar5 = plVar4 + 2;
      do {
        lVar7 = *plVar5;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *plVar5 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02fec67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x18))();
        return;
      }
    }
  }
  return;
}


