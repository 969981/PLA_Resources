/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002717a0; name: FUN_002717a0
 */


void FUN_002717a0(undefined8 param_1,ulong param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_DAT_04372e98;
  if ((param_2 & 1) == 0) {
    nn::os::LockMutex((MutexType *)PTR_DAT_04372e98);
    puVar3 = PTR_DAT_04372ea0;
    iVar1 = *(int *)PTR_DAT_04372ea0;
    *(undefined8 *)(*(long *)PTR_DAT_04372ea8 + (long)iVar1 * 8) = param_1;
    *(int *)puVar3 = iVar1 + 1;
    nn::os::UnlockMutex((MutexType *)puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x002717d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)PTR_DAT_04372e90 + 0x18))(*(long **)PTR_DAT_04372e90,param_1);
  return;
}


