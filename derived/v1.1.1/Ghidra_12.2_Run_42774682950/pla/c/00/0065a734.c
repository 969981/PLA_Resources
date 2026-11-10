/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0065a734; name: FUN_0065a734
 */


void FUN_0065a734(long param_1,undefined4 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x38));
  *(undefined4 *)(param_1 + 0x58) = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar5 = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x60) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  if (*(char *)(param_2 + 10) != '\0') {
    *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0xe);
    *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x90) = uVar3;
    lVar2 = *(long *)(param_2 + 0x12);
    plVar1 = (long *)(param_1 + 0x90);
    *(long *)(param_1 + 0xa0) = lVar2;
    if (lVar2 == 0) {
      *(long **)(param_1 + 0x88) = plVar1;
    }
    else {
      *(long **)(*plVar1 + 0x10) = plVar1;
      *(undefined4 **)(param_2 + 0xc) = param_2 + 0xe;
      *(undefined8 *)(param_2 + 0xe) = 0;
      *(undefined8 *)(param_2 + 0x12) = 0;
    }
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_2 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0x16);
  uVar5 = *(undefined8 *)(param_2 + 0x1c);
  uVar4 = *(undefined8 *)(param_2 + 0x1a);
  *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0xb0) = uVar3;
  *(undefined8 *)(param_1 + 200) = uVar5;
  *(undefined8 *)(param_1 + 0xc0) = uVar4;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x1a) = 0;
  *(undefined8 *)(param_2 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0xd0) = param_2[0x1e];
  uVar4 = *(undefined8 *)(param_2 + 0x22);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(param_2 + 0x26);
  *(undefined8 *)(param_1 + 0xe8) = uVar5;
  *(undefined8 *)(param_1 + 0xe0) = uVar4;
  *(undefined8 *)(param_1 + 0xd8) = uVar3;
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x22) = 0;
  *(undefined8 *)(param_2 + 0x24) = 0;
  FUN_006d9e70(param_1 + 0xf8,param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x2a);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar4 = *(undefined8 *)(param_2 + 0x2e);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x100) = uVar3;
  *(undefined8 *)(param_1 + 0x118) = uVar5;
  *(undefined8 *)(param_1 + 0x110) = uVar4;
  uVar3 = *(undefined8 *)(param_2 + 0x32);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  uVar4 = *(undefined8 *)(param_2 + 0x36);
  *(undefined8 *)(param_2 + 0x2a) = 0;
  *(undefined8 *)(param_2 + 0x2c) = 0;
  *(undefined8 *)(param_2 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x128) = *(undefined8 *)(param_2 + 0x34);
  *(undefined8 *)(param_1 + 0x120) = uVar3;
  *(undefined8 *)(param_1 + 0x138) = uVar5;
  *(undefined8 *)(param_1 + 0x130) = uVar4;
  *(undefined8 *)(param_2 + 0x34) = 0;
  *(undefined8 *)(param_2 + 0x36) = 0;
  *(undefined8 *)(param_2 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x148) = 1;
  nn::os::SignalEvent((EventType *)(param_1 + 0x10));
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


