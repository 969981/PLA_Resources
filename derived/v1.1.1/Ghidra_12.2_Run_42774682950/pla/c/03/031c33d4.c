/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031c33d4; name: FUN_031c33d4
 */


void FUN_031c33d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_100 [192];
  
  lVar7 = tpidr_el0;
  lVar6 = *(long *)(lVar7 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar7 + 0x38d490) = lVar6;
  }
  plVar4 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4,0x60,0);
  FUN_031be8a4();
  plVar4 = *(long **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  if (plVar4 != (long *)0x0) {
    if (plVar4[1] != 0) {
      plVar1 = plVar4 + 2;
      do {
        lVar7 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar7 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar7 + -1 == 0) {
        (**(code **)(*plVar4 + 0x18))();
      }
    }
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  plVar4 = *(long **)(param_1 + 0x28);
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4,param_1,param_2);
  }
  FUN_031bd5e0(auStack_100,0);
  FUN_031bd934(auStack_100,uVar8);
  FUN_031bdbe8(auStack_100,param_4);
  FUN_031be2e8(auStack_100);
  FUN_031bdbfc(param_2,auStack_100,uVar5);
  FUN_031be2ec(uVar5);
  FUN_031bda88(auStack_100);
  return;
}


