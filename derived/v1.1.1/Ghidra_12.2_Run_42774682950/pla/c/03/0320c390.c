/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0320c390; name: FUN_0320c390
 */


void FUN_0320c390(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined4 param_6)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  lVar1 = tpidr_el0;
  lVar6 = *(long *)(lVar1 + 0x38d490);
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar6;
    lVar9 = *(long *)(lVar6 + 0x10);
  }
  else {
    lVar9 = *(long *)(lVar6 + 0x10);
  }
  if (lVar9 != 0) {
    puVar3 = *(undefined8 **)(lVar9 + 8);
    uVar7 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar7, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = "TthkaiNavMeshClearanceCacheFillingTasks::makeContext";
      uVar5 = nn::os::GetSystemTick();
      puVar3[1] = uVar5;
      lVar6 = *(long *)(lVar1 + 0x38d490);
    }
  }
  if (lVar6 == 0) {
    lVar6 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar6;
  }
  plVar2 = *(long **)(*(long *)(lVar6 + 8) + 0x58);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x90,0);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar8 = puVar3 + 0xb;
  *puVar8 = 0;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar4 = puVar3 + 6;
  *puVar4 = 0;
  *puVar3 = &PTR_LAB_042f2400;
  puVar3[1] = 0xffffffff;
  puVar3[2] = 1;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  *puVar4 = 0;
  *(undefined4 *)(puVar3 + 9) = 0;
  puVar3[10] = 0;
  puVar3[7] = 0x8000000000000000;
  puVar3[8] = &DAT_03aad864;
  *puVar8 = 0;
  puVar3[0xc] = 0x8000000000000000;
  puVar3[0xd] = 0;
  puVar3[0xe] = 0x8000000000000000;
  puVar3[0xf] = 0;
  *param_1 = puVar3;
  puVar3[0x10] = param_2;
  *(undefined4 *)(puVar3 + 3) = param_6;
  uVar5 = *(undefined8 *)(param_2 + 0x120);
  puVar3[5] = *(undefined8 *)(param_2 + 0x128);
  puVar3[4] = uVar5;
  FUN_031faa70(puVar4,param_4 + 0x28);
  puVar3[10] = param_3;
  FUN_0315f898(*(undefined8 *)(param_2 + 0x140),puVar8);
  if (lVar9 != 0) {
    puVar3 = *(undefined8 **)(lVar9 + 8);
    uVar7 = (long)puVar3 + 0x17U & 0xfffffffffffffff8;
    if ((uVar7 <= *(ulong *)(lVar9 + 0x10)) &&
       (*(ulong *)(lVar9 + 8) = uVar7, puVar3 != (undefined8 *)0x0)) {
      *puVar3 = &DAT_0390f40e;
      uVar5 = nn::os::GetSystemTick();
      puVar3[1] = uVar5;
    }
  }
  return;
}


