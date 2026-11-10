/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00611c88; name: FUN_00611c88
 */


void FUN_00611c88(void)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  
  nn::os::AcquireSemaphore((SemaphoreType *)PTR_DAT_04375400);
  iVar1 = *(int *)PTR_DAT_04375408;
  *(int *)PTR_DAT_04375408 = iVar1 + -1;
  puVar2 = PTR_DAT_04375410;
  if (iVar1 + -1 == 0) {
    FUN_00611d18(*(undefined8 *)PTR_DAT_04375410);
    plVar3 = (long *)FUN_00612290();
    lVar4 = *(long *)puVar2;
    nn::os::FinalizeMutex((MutexType *)(lVar4 + 0x20));
    FUN_02cc8880(lVar4,*(undefined8 *)(lVar4 + 8));
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar4,0x40,8);
    *(undefined8 *)puVar2 = 0;
  }
  nn::os::ReleaseSemaphore((SemaphoreType *)PTR_DAT_04375400);
  return;
}


