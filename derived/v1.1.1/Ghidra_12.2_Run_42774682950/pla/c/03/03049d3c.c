/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03049d3c; name: FUN_03049d3c
 */


void FUN_03049d3c(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  
  param_1[4] = param_1 + 8;
  param_1[5] = 0x8000001800000000;
  param_1[0x24] = param_1 + 0x28;
  param_1[0x25] = 0x8000001800000000;
  param_1[2] = 0;
  param_1[0x22] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = param_1 + 0x48;
  param_1[0x45] = 0x8000001800000000;
  param_1[99] = 0;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar8;
  }
  plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  plVar7 = param_1 + 99;
  puVar6 = (undefined4 *)(**(code **)(*plVar5 + 0x10))(plVar5,0x410,0);
  lVar8 = 0;
  do {
    lVar1 = lVar8 + 0x10;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x10) = 0xffffff00ffffff;
    *(undefined8 *)((long)puVar6 + lVar8 + 0x18) = 0xffffff00ffffff;
    lVar8 = lVar1;
  } while (lVar1 != 0x400);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined8 *)(puVar6 + 2) = 0;
  do {
    if (*plVar7 != 0) {
      ClearExclusiveLocal();
      lVar8 = *(long *)(lVar4 + 0x38d490);
      if (lVar8 == 0) {
        lVar8 = FUN_0333d16c(0,1);
        *(long *)(lVar4 + 0x38d490) = lVar8;
      }
      plVar7 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
      (**(code **)(*plVar7 + 0x18))(plVar7,puVar6,0x410);
      break;
    }
    cVar2 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar7,0x10);
    if (bVar3) {
      *plVar7 = (long)puVar6;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  param_1[0x65] = 0x8000000000000000;
  param_1[0x67] = 0x8000000000000000;
  param_1[0x69] = 0x8000000000000000;
  param_1[0x6b] = 0x8000000000000000;
  param_1[0x72] = 0x8000000000000000;
  param_1[0x74] = 0x8000000000000000;
  param_1[0x66] = 0;
  param_1[0x78] = param_1 + 0x7c;
  param_1[0x62] = param_1[99];
  param_1[100] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0;
  *(undefined4 *)((long)param_1 + 0x3cc) = 0x80000018;
  param_1[0x96] = 0;
  param_1[0x98] = param_1 + 0x9c;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined4 *)((long)param_1 + 0x4cc) = 0x80000018;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x6c) = 0;
  param_1[0xb6] = 0xf00000006;
  return;
}


