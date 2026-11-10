/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b33b4; name: FUN_008b33b4
 */


void FUN_008b33b4(long param_1)

{
  int *piVar1;
  int iVar2;
  void *__dest;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  size_t __n;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_28;
  
  if (*(undefined1 **)(param_1 + 0x88) == *(undefined1 **)(param_1 + 0x90)) {
    plVar7 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x008b3494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar7 + 0x20))();
        return;
      }
    }
  }
  else {
    uVar3 = **(undefined1 **)(param_1 + 0x88);
    uVar6 = FUN_00923bc4(**(undefined8 **)(param_1 + 0x70));
    FUN_009a1898(&local_28,uVar6,uVar3);
    plVar7 = *(long **)(param_1 + 0x80);
    *(undefined8 *)(param_1 + 0x80) = 0;
    if (plVar7 != (long *)0x0) {
      lVar8 = plVar7[0xb];
      piVar1 = (int *)(lVar8 + 0xc);
      do {
        iVar2 = *piVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = iVar2 + -1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      if (iVar2 + -1 == 0) {
        *(undefined8 *)(lVar8 + 0x18) = 0;
        (**(code **)(*plVar7 + 0x20))();
      }
    }
    *(undefined8 *)(param_1 + 0x80) = local_28;
    __dest = *(void **)(param_1 + 0x88);
    __n = *(long *)(param_1 + 0x90) - ((long)__dest + 1);
    if (__n != 0) {
      memmove(__dest,(void *)((long)__dest + 1),__n);
    }
    *(size_t *)(param_1 + 0x90) = (long)__dest + __n;
  }
  return;
}


