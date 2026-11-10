/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f132bc; name: FUN_02f132bc
 */


undefined8 FUN_02f132bc(undefined4 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = FUN_02f13348(DAT_0440a120 + 0x2d8,param_1);
  if (lVar3 == 0) {
    nn::os::LockMutex((MutexType *)&DAT_0440a210);
    lVar3 = FUN_02f13000(param_1);
    if (lVar3 == 0) {
      uVar5 = 2;
    }
    else {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = 1;
      *(undefined4 *)(lVar3 + 0x30) = *(undefined4 *)(param_2 + 3);
      *(undefined8 *)(lVar3 + 0x20) = uVar2;
      *(undefined8 *)(lVar3 + 0x28) = uVar4;
      *(undefined8 *)(lVar3 + 0x18) = uVar1;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}


