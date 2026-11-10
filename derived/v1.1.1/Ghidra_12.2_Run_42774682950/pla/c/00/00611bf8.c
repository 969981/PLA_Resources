/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00611bf8; name: FUN_00611bf8
 */


void FUN_00611bf8(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  
  nn::os::AcquireSemaphore((SemaphoreType *)PTR_DAT_04375400);
  puVar1 = PTR_DAT_04375408;
  iVar5 = *(int *)PTR_DAT_04375408;
  if (iVar5 == 0) {
    plVar2 = (long *)FUN_00612290();
    puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x10))(plVar2,0x40,8);
    puVar3[1] = 0;
    uVar4 = FUN_00612290();
    puVar3[2] = uVar4;
    puVar3[3] = 0;
    *puVar3 = puVar3 + 1;
    nn::os::InitializeMutex((MutexType *)(puVar3 + 4),true,0);
    *(undefined8 **)PTR_DAT_04375410 = puVar3;
    iVar5 = *(int *)puVar1;
  }
  *(int *)puVar1 = iVar5 + 1;
  nn::os::ReleaseSemaphore((SemaphoreType *)PTR_DAT_04375400);
  return;
}


