/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f07010; name: FUN_02f07010
 */


void FUN_02f07010(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  char local_38 [4];
  undefined1 auStack_34 [4];
  
  nn::os::LockMutex((MutexType *)&DAT_0440ab20);
  lVar1 = FUN_02f07b04(param_2,param_1,local_38);
  if ((lVar1 == 0) || (local_38[0] == '\0')) {
    plVar2 = (long *)FUN_02f08050(param_2,param_1,auStack_34);
    if (plVar2 != (long *)0x0) {
      puVar3 = (undefined8 *)FUN_02f59e30(0,0x38);
      plVar2[2] = (long)puVar3;
      if (puVar3 == (undefined8 *)0x0) {
        FUN_02f07558(param_2,param_1);
      }
      else {
        *(undefined2 *)(puVar3 + 6) = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[2] = 0;
        puVar3[3] = 0;
        *puVar3 = 0;
        puVar3[1] = 0;
        lVar1 = *plVar2;
        if (lVar1 != 0) {
          *(int *)(lVar1 + 0x50) = *(int *)(lVar1 + 0x50) + 1;
        }
        *(char *)(plVar2[2] + 0x30) = (char)param_3;
        *(char *)(plVar2[2] + 0x31) = (char)param_4;
        FUN_02f071f4(plVar2[2],plVar2[1],*plVar2,0,0);
      }
    }
  }
  else {
    FUN_02f07110(*(undefined8 *)(lVar1 + 0x10),param_3,param_4);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_0440ab20);
  return;
}


