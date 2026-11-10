/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008251e4; name: FUN_008251e4
 */


void FUN_008251e4(MessageQueueType *param_1,uint param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  ulong uVar5;
  
  if ((int)param_2 < 1) {
    return;
  }
  uVar5 = (ulong)param_2;
  puVar1 = (ulong *)FUN_0081a750(uVar5 << 3,param_3);
  if (puVar1 != (ulong *)0x0) {
    uVar2 = uVar5 & 3;
    if (uVar5 - 1 < 3) {
      lVar3 = 0;
    }
    else {
      lVar3 = 0;
      puVar4 = puVar1 + 2;
      do {
        lVar3 = lVar3 + 4;
        puVar4[-2] = 0;
        puVar4[-1] = 0;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 4;
      } while (uVar5 - uVar2 != lVar3);
    }
    if ((param_2 & 3) != 0) {
      puVar4 = puVar1 + lVar3;
      do {
        uVar2 = uVar2 - 1;
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      } while (uVar2 != 0);
    }
  }
  *(ulong **)(param_1 + 0x48) = puVar1;
  nn::os::InitializeMessageQueue(param_1,puVar1,(long)(int)param_2);
  return;
}


