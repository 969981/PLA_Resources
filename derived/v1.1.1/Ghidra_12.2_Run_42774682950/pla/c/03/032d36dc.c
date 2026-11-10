/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d36dc; name: FUN_032d36dc
 */


void FUN_032d36dc(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  param_2[1] = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  param_2[4] = *(undefined8 *)(param_1 + 0x50);
  param_2[5] = uVar3;
  param_2[2] = uVar1;
  param_2[3] = uVar2;
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return;
}


