/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02bf7384; name: FUN_02bf7384
 */


undefined4
FUN_02bf7384(undefined4 param_1,long param_2,undefined8 param_3,undefined1 (*param_4) [16],
            uint param_5,undefined8 param_6,undefined4 param_7)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  ulong uStack_2f8;
  undefined8 local_2f0;
  undefined ***local_2e8;
  undefined2 local_2e0;
  undefined4 local_2dc;
  undefined8 local_2d8;
  undefined2 local_2d0;
  undefined1 local_2ce;
  long *local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined **local_2b0;
  ulong local_2a8 [2];
  undefined1 local_298;
  undefined4 local_290;
  ulong local_288 [67];
  long *local_68;
  
  nn::os::LockMutex((MutexType *)(param_2 + 0x128));
  local_290 = 0;
  local_2a8[0] = 0xffffffff;
  local_2a8[1] = 1;
  memset(local_288,0xff,0x200);
  local_2b0 = &PTR_LAB_04287208;
  local_298 = 2;
  local_68 = (long *)0x0;
  FUN_02c05e04(param_3,&local_68);
  plVar4 = local_68;
  local_2d0 = 1;
  local_2e0 = 0xffff;
  local_2dc = 0;
  local_2d8 = 0;
  local_2ce = 0xfb;
  local_2c8 = local_68;
  local_2b8 = 0;
  local_2f0 = 0;
  local_2e8 = (undefined ***)0x0;
  local_2c0 = param_1;
  local_2f0 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  lVar8 = 0x28;
  while (lVar6 = lVar8, lVar8 = lVar6 + 8, lVar8 != 0x228) {
    if (lVar8 != 0x28) {
      *(ulong *)((long)local_2a8 + lVar6) = *(ulong *)((long)local_2a8 + lVar6) & 1;
    }
  }
  uVar7 = 0;
  do {
    if (uVar7 == 1) {
      local_288[1] = local_288[1] | param_5;
    }
    if ((1L << (uVar7 & 0x3f) & (ulong)param_5) != 0) {
      local_288[uVar7] = local_288[uVar7] | 2;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 0x40);
  local_2e8 = &local_2b0;
  local_2f0 = (**(code **)(**(long **)(param_2 + 8) + 0x68))();
  local_2dc = 1;
  local_320 = DAT_03aae440;
  uStack_318 = DAT_03aae448;
  local_310 = DAT_03aae450;
  uStack_308 = DAT_03aae458;
  local_330 = DAT_03aae430;
  uStack_328 = DAT_03aae438;
  local_300 = *(undefined8 *)*param_4;
  auVar9 = NEON_ext(*param_4,*param_4,8,1);
  uStack_2f8 = (ulong)auVar9._0_4_;
  uVar5 = FUN_02bf75bc(param_2,&local_2f0,&local_330,param_6,param_7);
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    plVar1 = plVar4 + 2;
    do {
      lVar8 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar8 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar4 + 0x18))(plVar4);
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_2 + 0x128));
  return uVar5;
}


