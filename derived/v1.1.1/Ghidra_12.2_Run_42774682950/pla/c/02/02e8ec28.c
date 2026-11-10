/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e8ec28; name: FUN_02e8ec28
 */


void FUN_02e8ec28(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 0x50);
  puVar2 = puVar1;
  if (*(int *)(param_1 + 0x58) != 0) {
    do {
      nn::os::LockMutex((MutexType *)&DAT_0440a210);
      if (puVar2 != (undefined8 *)(*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 8)
         ) {
        cVar3 = '\x01';
        puVar1 = puVar2;
        do {
          puVar2 = puVar1 + 1;
          (**(code **)(*(long *)*puVar1 + 0x18))();
          cVar3 = cVar3 + '\x01';
          if (cVar3 == '\0') break;
          puVar1 = puVar2;
        } while (puVar2 != (undefined8 *)
                           (*(long *)(param_1 + 0x50) + (ulong)*(uint *)(param_1 + 0x58) * 8));
      }
      nn::os::UnlockMutex((MutexType *)&DAT_0440a210);
      puVar1 = *(undefined8 **)(param_1 + 0x50);
    } while (puVar2 != puVar1 + *(uint *)(param_1 + 0x58));
  }
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x58) = 0;
    (*DAT_0442d150)(0);
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}


