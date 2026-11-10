/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320e780; name: FUN_0320e780
 */


void FUN_0320e780(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                 byte param_6,undefined4 param_7)

{
  char cVar1;
  bool bVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = tpidr_el0;
  lVar7 = *(long *)(lVar9 + 0x38d490);
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
    lVar10 = *(long *)(lVar7 + 0x10);
  }
  else {
    lVar10 = *(long *)(lVar7 + 0x10);
  }
  if (lVar10 != 0) {
    puVar4 = *(undefined8 **)(lVar10 + 8);
    uVar8 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar8, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = "TthkaiPathRequestsTasks::makeContext";
      uVar6 = nn::os::GetSystemTick();
      puVar4[1] = uVar6;
      lVar7 = *(long *)(lVar9 + 0x38d490);
    }
  }
  if (lVar7 == 0) {
    lVar7 = FUN_0333d16c(0,1);
    *(long *)(lVar9 + 0x38d490) = lVar7;
  }
  plVar3 = *(long **)(*(long *)(lVar7 + 8) + 0x58);
  puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x10))(plVar3,0x78,0);
  puVar4[2] = 1;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_042f2770;
  puVar4[1] = 0xffffffff;
  puVar4[4] = 0;
  puVar4[0xe] = 0;
  puVar4[9] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[10] = 0x8000000000000000;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = 0x8000000000000000;
  plVar3 = puVar4 + 5;
  *plVar3 = 0;
  *param_1 = puVar4;
  *(undefined4 *)(puVar4 + 3) = param_7;
  puVar4[4] = param_2;
  if ((param_3 == 0) || (*(long *)(param_3 + 8) == 0)) {
    *plVar3 = param_3;
  }
  else {
    plVar5 = (long *)(param_3 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = *plVar5 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    plVar5 = (long *)*plVar3;
    *plVar3 = param_3;
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      plVar3 = plVar5 + 2;
      do {
        lVar9 = *plVar3;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
        if (bVar2) {
          *plVar3 = lVar9 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar5 + 0x18))();
      }
    }
  }
  if ((param_5 != 0) && (*(long *)(param_5 + 8) != 0)) {
    plVar3 = (long *)(param_5 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar3,0x10);
      if (bVar2) {
        *plVar3 = *plVar3 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  plVar3 = (long *)puVar4[6];
  puVar4[6] = param_5;
  if ((plVar3 != (long *)0x0) && (plVar3[1] != 0)) {
    plVar5 = plVar3 + 2;
    do {
      lVar9 = *plVar5;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
      if (bVar2) {
        *plVar5 = lVar9 + -1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (lVar9 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  *(undefined4 *)(puVar4 + 7) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)((long)puVar4 + 0x3c) = *(undefined4 *)(param_4 + 0x4c);
  *(undefined4 *)(puVar4 + 8) = *(undefined4 *)(param_4 + 0x50);
  uVar8 = *(ulong *)(param_2 + 0x80);
  *(byte *)(puVar4 + 0xe) = param_6 & 1;
  *(bool *)(puVar4 + 0xb) = 3 < uVar8;
  if (lVar10 != 0) {
    puVar4 = *(undefined8 **)(lVar10 + 8);
    uVar8 = (long)puVar4 + 0x17U & 0xfffffffffffffff8;
    if ((uVar8 <= *(ulong *)(lVar10 + 0x10)) &&
       (*(ulong *)(lVar10 + 8) = uVar8, puVar4 != (undefined8 *)0x0)) {
      *puVar4 = &DAT_0390f40e;
      uVar6 = nn::os::GetSystemTick();
      puVar4[1] = uVar6;
    }
  }
  return;
}


