/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02fff1b0; name: FUN_02fff1b0
 */


void FUN_02fff1b0(undefined8 *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x8000000000000000;
  *(undefined4 *)((long)param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0xffffffff;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[0x20] = 0;
  param_1[9] = 0;
  param_1[10] = 0x8000000000000000;
  param_1[0xb] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0xd] = 0;
  param_1[0xe] = 0x8000000000000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x8000000000000000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x8000000000000000;
  param_1[0x13] = 0;
  param_1[0x14] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0xffffffff00000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000000000;
  param_1[0x22] = 0;
  lVar4 = tpidr_el0;
  lVar8 = *(long *)(lVar4 + 0x38d490);
  if (lVar8 == 0) {
    lVar8 = FUN_0333d16c(0,1);
    *(long *)(lVar4 + 0x38d490) = lVar8;
  }
  plVar5 = *(long **)(*(long *)(lVar8 + 8) + 0x58);
  plVar7 = param_1 + 0x22;
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
  param_1[0x21] = param_1[0x22];
  return;
}


