/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0061e488; name: FUN_0061e488
 */


void FUN_0061e488(long param_1,long param_2,ulong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x70));
  nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  if ((param_3 & 1) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x90);
    pbVar2 = *(byte **)(param_1 + 0x98);
    if (pbVar2 != pbVar1) {
      bVar3 = pbVar2[-0x28];
      pbVar4 = pbVar2 + -0x28;
      while( true ) {
        if ((bVar3 & 1) != 0) {
          (**(code **)(**(long **)(pbVar2 + -0x10) + 0x18))
                    (*(long **)(pbVar2 + -0x10),*(undefined8 *)(pbVar2 + -0x18),
                     *(ulong *)(pbVar2 + -0x28) & 0xfffffffffffffffe,1);
        }
        if (pbVar1 == pbVar4) break;
        bVar3 = pbVar4[-0x28];
        pbVar2 = pbVar4;
        pbVar4 = pbVar4 + -0x28;
      }
    }
    *(byte **)(param_1 + 0x98) = pbVar1;
    pbVar1 = *(byte **)(param_1 + 0xd0);
    pbVar2 = *(byte **)(param_1 + 0xd8);
    if (pbVar2 != pbVar1) {
      bVar3 = pbVar2[-0x28];
      pbVar4 = pbVar2 + -0x28;
      while( true ) {
        if ((bVar3 & 1) != 0) {
          (**(code **)(**(long **)(pbVar2 + -0x10) + 0x18))
                    (*(long **)(pbVar2 + -0x10),*(undefined8 *)(pbVar2 + -0x18),
                     *(ulong *)(pbVar2 + -0x28) & 0xfffffffffffffffe,1);
        }
        if (pbVar1 == pbVar4) break;
        bVar3 = pbVar4[-0x28];
        pbVar2 = pbVar4;
        pbVar4 = pbVar4 + -0x28;
      }
    }
    *(byte **)(param_1 + 0xd8) = pbVar1;
  }
  FUN_0061e5b0(param_1,param_2 + 0x10,param_1 + 0x90);
  FUN_0061eb64(param_1,param_2 + 0x28,param_1 + 0xd0);
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb0));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x70));
  return;
}


