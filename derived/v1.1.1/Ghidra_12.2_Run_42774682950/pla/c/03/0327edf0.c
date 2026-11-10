/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0327edf0; name: FUN_0327edf0
 */


void FUN_0327edf0(long param_1,long param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  
  *(undefined4 *)
   (*(long *)(*(long *)(param_1 + 0x50) + (long)*(int *)(param_1 + 0x58) * 8 + -8) + 0x108) =
       *(undefined4 *)(param_2 + 0x108);
  iVar3 = *(int *)(param_2 + 0x108);
  plVar5 = *(long **)(*(long *)(param_1 + 0x50) + (long)iVar3 * 8);
  if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
    plVar1 = plVar5 + 2;
    do {
      lVar7 = *plVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar5 + 0x18))();
    }
  }
  lVar7 = (long)*(int *)(param_1 + 0x58) + -1;
  iVar6 = (int)lVar7;
  *(int *)(param_1 + 0x58) = iVar6;
  if (iVar6 == iVar3) {
    cVar2 = *(char *)(param_2 + 0xf8);
  }
  else {
    lVar8 = *(long *)(param_1 + 0x50);
    lVar7 = lVar7 * 8;
    *(undefined8 *)(lVar8 + (long)iVar3 * 8) = *(undefined8 *)(lVar8 + lVar7);
    *(undefined8 *)(lVar8 + lVar7) = 0;
    cVar2 = *(char *)(param_2 + 0xf8);
  }
  if (cVar2 != '\0') {
    *(undefined4 *)
     (*(long *)(*(long *)(param_1 + 0x60) + (long)*(int *)(param_1 + 0x68) * 8 + -8) + 0x10c) =
         *(undefined4 *)(param_2 + 0x10c);
    iVar3 = *(int *)(param_2 + 0x10c);
    lVar7 = (long)*(int *)(param_1 + 0x68) + -1;
    iVar6 = (int)lVar7;
    *(int *)(param_1 + 0x68) = iVar6;
    if (iVar6 != iVar3) {
      *(undefined8 *)(*(long *)(param_1 + 0x60) + (long)iVar3 * 8) =
           *(undefined8 *)(*(long *)(param_1 + 0x60) + lVar7 * 8);
    }
  }
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0xffffffffffffffff;
  FUN_0327ed34(param_1 + 0x30,param_1,param_2);
  return;
}


