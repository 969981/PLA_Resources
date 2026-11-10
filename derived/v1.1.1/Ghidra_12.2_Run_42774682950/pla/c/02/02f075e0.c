/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f075e0; name: FUN_02f075e0
 */


void FUN_02f075e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char local_34 [4];
  
  nn::os::LockMutex((MutexType *)&DAT_0440ab20);
  puVar2 = (undefined8 *)FUN_02f07b04(param_2,param_1,local_34);
  if ((puVar2 != (undefined8 *)0x0) && (local_34[0] != '\0')) {
    FUN_02f076a0(puVar2[2]);
    FUN_02f07740(puVar2[2]);
    puVar3 = (undefined8 *)*puVar2;
    if ((puVar3 != (undefined8 *)0x0) &&
       (iVar1 = *(int *)(puVar3 + 10), *(int *)(puVar3 + 10) = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)*puVar3)(puVar3);
      FUN_02f59e60(4,puVar3);
    }
    FUN_02f07818(puVar2);
    FUN_02f07558(param_2,param_1);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440ab20);
  return;
}


