/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0318d984; name: FUN_0318d984
 */


void FUN_0318d984(long param_1)

{
  long *plVar1;
  MutexType *pMVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x68);
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar3 + 0x18);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar3 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(lVar3 + 0x38);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(lVar3 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar3 + 0x58);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(lVar3 + 0x78);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar3 + 0x68);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(lVar3 + 0x7c);
  }
  if (*(long *)(param_1 + 0x1a8) == 0) {
    lVar3 = tpidr_el0;
    lVar4 = *(long *)(lVar3 + 0x38d490);
    if (lVar4 == 0) {
      lVar4 = FUN_0333d16c(0,1);
      *(long *)(lVar3 + 0x38d490) = lVar4;
    }
    plVar1 = *(long **)(*(long *)(lVar4 + 8) + 0x58);
    pMVar2 = (MutexType *)(**(code **)(*plVar1 + 0x10))(plVar1,0x20,0);
    nn::os::InitializeMutex(pMVar2,true,0);
    *(MutexType **)(param_1 + 0x1a8) = pMVar2;
  }
  return;
}


