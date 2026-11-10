/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065b320; name: FUN_0065b320
 */


void FUN_0065b320(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  
  lVar5 = *param_2;
  *param_1 = lVar5;
  lVar6 = param_2[1];
  param_1[1] = lVar6;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 0x10);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar5 = *param_2;
  }
  lVar6 = *(long *)(lVar5 + 8);
  lVar5 = *(long *)(lVar6 + 0x48);
  param_1[2] = lVar5;
  lVar6 = *(long *)(lVar6 + 0x50);
  param_1[3] = lVar6;
  if (lVar6 != 0) {
    plVar7 = (long *)(lVar6 + 8);
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar7,0x10);
      if (bVar2) {
        *plVar7 = *plVar7 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    lVar5 = param_1[2];
  }
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x23) = 1;
  param_1[0x22] = 0;
  param_1[0x21] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x20] = 0;
  param_1[0x1f] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  FUN_00783f38(param_1 + 0x26,*(undefined8 *)(lVar5 + 400));
  plVar7 = *(long **)(param_1[2] + 0x198);
  lVar5 = *(long *)(param_1[2] + 0x348);
  param_1[0x28] = (long)plVar7;
  param_1[0x29] = lVar5;
  plVar4 = (long *)(**(code **)(*plVar7 + 0x10))(plVar7,0x78,8);
  plVar4[2] = 0;
  plVar8 = plVar4 + 1;
  *plVar8 = 0;
  puVar3 = PTR_DAT_043753e0;
  plVar4[3] = (long)plVar7;
  plVar7 = plVar4 + 4;
  *plVar4 = (long)(puVar3 + 0x10);
  FUN_00782ef8(plVar7);
  plVar4[4] = (long)(PTR_DAT_043753e8 + 0x10);
  nn::os::InitializeEvent(plVar4 + 6,0,0);
  plVar4[4] = (long)(PTR_DAT_043753f0 + 0x10);
  nn::os::InitializeMutex((MutexType *)(plVar4 + 0xb),false,0);
  param_1[0x2a] = (long)plVar7;
  param_1[0x2b] = (long)plVar4;
  if (plVar4 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar8,0x10);
      if (bVar2) {
        *plVar8 = *plVar8 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  param_1[0x2e] = (long)plVar7;
  param_1[0x2f] = (long)plVar4;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x30),false,0);
  *(undefined1 *)(param_1 + 0x34) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x35),false,0);
  *(undefined1 *)(param_1 + 0x39) = 0;
  lVar5 = *(long *)(param_1[2] + 400);
  param_1[0x3a] = (long)(param_1 + 0x3b);
  param_1[0x3b] = 0;
  param_1[0x3c] = lVar5;
  param_1[0x3d] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x3e),true,0);
  *(undefined4 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x44] = 0;
  lVar5 = FUN_00612290();
  param_1[0x46] = lVar5;
  param_1[0x47] = 0;
  param_1[0x49] = 0;
  param_1[0x48] = 0;
  lVar5 = FUN_00612290();
  param_1[0x4a] = lVar5;
  lVar5 = FUN_0067d730();
  param_1[0x4b] = lVar5;
  return;
}


