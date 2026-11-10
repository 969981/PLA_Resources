/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02de7618; name: FUN_02de7618
 */


void FUN_02de7618(long *param_1,long *param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  
  FUN_00afa5ac();
  puVar2 = PTR_DAT_0437a7b8;
  *param_1 = (long)(PTR_DAT_0437a7b8 + 0x10);
  param_1[9] = (long)(puVar2 + 0x88);
  param_1[10] = (long)(puVar2 + 0x128);
  nn::os::InitializeLightEvent((long)param_1 + 0x6c,0,1);
  *param_1 = (long)&PTR_LAB_0429af18;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[9] = (long)&PTR_LAB_0429afa8;
  param_1[10] = (long)&PTR_LAB_0429b048;
  lVar5 = *param_2;
  param_1[0x12] = lVar5;
  if (lVar5 != 0) {
    piVar1 = (int *)(lVar5 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = *piVar1 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar2 = PTR_DAT_0437a508 + 0x10;
  param_1[0x14] = (long)puVar2;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x45] = 0;
  param_1[0x48] = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  param_1[0x4a] = 0;
  param_1[0x1a] = (long)puVar2;
  param_1[0x1b] = 0;
  param_1[0x20] = (long)puVar2;
  param_1[0x21] = 0;
  param_1[0x26] = (long)puVar2;
  param_1[0x27] = 0;
  param_1[0x2c] = (long)puVar2;
  param_1[0x2d] = 0;
  param_1[0x32] = (long)puVar2;
  param_1[0x33] = 0;
  lVar5 = param_1[1];
  param_1[0x41] = lVar5;
  param_1[0x46] = lVar5;
  param_1[0x3c] = 0x3ffffffffffffff;
  param_1[0x3d] = 0;
  param_1[0x42] = 0x199999999999999;
  param_1[0x47] = 0x199999999999999;
  param_1[0x3a] = 0;
  param_1[0x3b] = lVar5;
  *(undefined4 *)(param_1 + 0x4b) = 0x3f800000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x4c),false,0);
  *(undefined1 *)(param_1 + 0x50) = 1;
  return;
}


