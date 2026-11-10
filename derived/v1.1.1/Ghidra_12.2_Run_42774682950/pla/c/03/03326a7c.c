/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03326a7c; name: FUN_03326a7c
 */


void FUN_03326a7c(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  ThreadType *pTVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  *(undefined1 *)((long)param_1 + 0x19) = 0;
  *(undefined2 *)((long)param_1 + 0x1a) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  pTVar1 = (ThreadType *)nn::os::GetCurrentThread();
  uVar2 = nn::os::GetThreadId(pTVar1);
  param_1[4] = uVar2;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *param_1 = param_1 + 10;
  param_1[1] = 0x10000000000;
  FUN_032c8128();
  return;
}


