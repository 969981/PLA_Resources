/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318cb88; name: FUN_0318cb88
 */


void FUN_0318cb88(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  MutexType *pMVar3;
  long lVar4;
  
  *param_1 = &PTR_LAB_0430b308;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[0x2f] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0x2b] = 0x8000000000000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x33] = &DAT_03aad864;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0x8000000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0x8000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x8000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0x8000000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x8000000000000000;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0x8000000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x8000000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x8000000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x8000000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x8000000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x8000000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x8000000000000000;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0x8000000000000000;
  param_1[0x31] = 0;
  param_1[0x32] = 0x8000000000000000;
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x38d490);
  if (lVar4 == 0) {
    lVar4 = FUN_0333d16c(0,1);
    *(long *)(lVar1 + 0x38d490) = lVar4;
  }
  plVar2 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
  pMVar3 = (MutexType *)(**(code **)(*plVar2 + 0x10))(plVar2,0x20,0);
  nn::os::InitializeMutex(pMVar3,true,0);
  param_1[0x35] = pMVar3;
  return;
}


