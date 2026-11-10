/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031781b8; name: FUN_031781b8
 */


void FUN_031781b8(long param_1,int *param_2)

{
  long *plVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  int local_38 [2];
  
  lVar7 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0;
  lVar8 = *(long *)(lVar7 + 8);
  uVar2 = *(undefined4 *)(lVar7 + 0x18);
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar5 = FUN_0317c11c();
  }
  FUN_001d530c(uVar5,uVar2);
  *(undefined4 *)(*(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0 + 0x18) = 0xffffffff;
  if (*(char *)(lVar8 + 0x30) == '\x01') {
    uVar5 = *(undefined8 *)(lVar8 + 0x20);
  }
  else {
    uVar5 = FUN_0317a2cc();
  }
  FUN_0318434c(uVar5,param_1);
  local_38[0] = *param_2;
  FUN_031772ac(param_1,local_38);
  lVar7 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0;
  plVar6 = *(long **)(lVar7 + 8);
  *(undefined8 *)(lVar7 + 8) = 0;
  if ((plVar6 != (long *)0x0) && (plVar6[1] != 0)) {
    plVar1 = plVar6 + 2;
    do {
      lVar7 = *plVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar4) {
        *plVar1 = lVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (lVar7 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))();
    }
  }
  lVar7 = *(long *)(param_1 + 0x38) + (long)*param_2 * 0xf0;
  *(byte *)(lVar7 + 0xe0) = *(byte *)(lVar7 + 0xe0) | 2;
  return;
}


