/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00560028; name: FUN_00560028
 */


void FUN_00560028(undefined8 param_1,long param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_2 + 0x10);
  while (plVar2 != (long *)(param_2 + 0x18)) {
    FUN_0055fb58(param_1,*(undefined4 *)((long)plVar2 + 0x1c),(int)plVar2[4]);
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*(long *)*plVar3 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while (plVar3 != (long *)0x0);
    }
  }
  return;
}


