/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158eb08; name: FUN_0158eb08
 */


undefined8 * FUN_0158eb08(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  plVar7 = (long *)param_2[3];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
  }
  plVar5 = (long *)param_1[3];
  param_1[3] = plVar7;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))();
  }
  memcpy(param_1 + 4,param_2 + 4,0x1e8);
  FUN_008c4b3c(param_1 + 0x41,param_2 + 0x41);
  FUN_008c4b3c(param_1 + 0x43,param_2 + 0x43);
  FUN_008c4b3c(param_1 + 0x45,param_2 + 0x45);
  FUN_008c4b3c(param_1 + 0x47,param_2 + 0x47);
  FUN_008c4b3c(param_1 + 0x49,param_2 + 0x49);
  FUN_008c4b3c(param_1 + 0x4b,param_2 + 0x4b);
  FUN_008c4b3c(param_1 + 0x4d,param_2 + 0x4d);
  FUN_008c4b3c(param_1 + 0x4f,param_2 + 0x4f);
  FUN_008c4b3c(param_1 + 0x51,param_2 + 0x51);
  FUN_008c4b3c(param_1 + 0x53,param_2 + 0x53);
  FUN_008c4b3c(param_1 + 0x55,param_2 + 0x55);
  FUN_008c4b3c(param_1 + 0x57,param_2 + 0x57);
  FUN_008c4b3c(param_1 + 0x59,param_2 + 0x59);
  FUN_008c4b3c(param_1 + 0x5b,param_2 + 0x5b);
  FUN_008c4b3c(param_1 + 0x5d,param_2 + 0x5d);
  FUN_008c4b3c(param_1 + 0x5f,param_2 + 0x5f);
  FUN_008c4b3c(param_1 + 0x61,param_2 + 0x61);
  FUN_008c4b3c(param_1 + 99,param_2 + 99);
  FUN_008c4b3c(param_1 + 0x65,param_2 + 0x65);
  FUN_008c4b3c(param_1 + 0x67,param_2 + 0x67);
  lVar8 = 0;
  do {
    lVar6 = param_2[lVar8 + 0x69];
    if (lVar6 != 0) {
      piVar1 = (int *)(lVar6 + 0x50);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    plVar7 = (long *)param_1[lVar8 + 0x69];
    param_1[lVar8 + 0x69] = lVar6;
    if (plVar7 != (long *)0x0) {
      plVar5 = plVar7 + 10;
      do {
        iVar4 = (int)*plVar5 + -1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar5,0x10);
        if (bVar3) {
          *(int *)plVar5 = iVar4;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (iVar4 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x14);
  memcpy(param_1 + 0x7d,param_2 + 0x7d,0x16b);
  FUN_0095e898(param_1 + 0xab,param_2 + 0xab);
  FUN_0156a7f8(param_1 + 0xad,param_2 + 0xad);
  FUN_01591138(param_1 + 0xaf,param_2 + 0xaf);
  *(undefined1 *)(param_1 + 0xb1) = *(undefined1 *)(param_2 + 0xb1);
  return param_1;
}


