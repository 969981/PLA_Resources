/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003d4c84; name: FUN_003d4c84
 */


void FUN_003d4c84(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  
  plVar2 = (long *)FUN_002e2e80(PTR_FUN_04373078,0x88);
  if (plVar2 != (long *)0x0) {
    plVar2[10] = 0;
    plVar2[9] = 0;
    plVar2[0x10] = 0;
    plVar2[0xf] = 0;
    plVar2[0xe] = 0;
    plVar2[0xd] = 0;
    plVar2[8] = 0;
    plVar2[7] = 0;
    plVar2[6] = 0;
    plVar2[5] = 0;
    plVar2[4] = 0;
    plVar2[3] = 0;
    plVar3 = plVar2 + 0xb;
    plVar2[0xc] = 0;
    *plVar3 = 0;
    puVar1 = PTR_DAT_04374080 + 0x10;
    plVar2[2] = (long)plVar3;
    plVar2[10] = (long)plVar3;
    *plVar2 = (long)puVar1;
    plVar2[1] = 1;
    *plVar3 = 0;
    nn::os::InitializeMutex((MutexType *)(plVar2 + 0xc),false,0);
    nn::os::InitializeConditionVariable((ConditionVariableType *)(plVar2 + 0x10));
  }
  *param_1 = plVar2;
  return;
}


