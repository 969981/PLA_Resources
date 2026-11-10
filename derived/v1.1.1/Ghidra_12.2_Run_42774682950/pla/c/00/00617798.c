/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00617798; name: FUN_00617798
 */


void FUN_00617798(long param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00617840();
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0xa8));
  lVar1 = *(long *)(param_1 + 0x88);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x90) = lVar1;
    (**(code **)(**(long **)(param_1 + 0xa0) + 0x18))
              (*(long **)(param_1 + 0xa0),lVar1,*(long *)(param_1 + 0x98) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x68);
  if (lVar1 != 0) {
    *(long *)(param_1 + 0x70) = lVar1;
    (**(code **)(**(long **)(param_1 + 0x80) + 0x18))
              (*(long **)(param_1 + 0x80),lVar1,*(long *)(param_1 + 0x78) - lVar1,8);
  }
  lVar1 = *(long *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (lVar1 == 0) {
    return;
  }
  plVar2 = *(long **)(param_1 + 0x60);
  FUN_0078449c(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00617830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,lVar1,0x148,8);
  return;
}


