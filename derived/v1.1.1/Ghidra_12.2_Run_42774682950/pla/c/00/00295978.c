/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00295978; name: FUN_00295978
 */


void FUN_00295978(long param_1,undefined4 *param_2)

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
                    /* try { // try from 00295a10 to 00295a13 has its CatchHandler @ 00295a30 */
  FUN_00294ef4(param_1 + 0xa8,param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x110) = 1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x38));
  return;
}


