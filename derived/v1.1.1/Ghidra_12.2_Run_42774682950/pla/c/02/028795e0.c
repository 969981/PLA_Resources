/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028795e0; name: FUN_028795e0
 */


void FUN_028795e0(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_0287953c();
    lVar1 = *(long *)(param_1 + 8);
    while ((lVar1 == 0 || (uVar2 = FUN_00d37ad4(), (uVar2 & 1) == 0))) {
      nn::os::SleepThread(16000000);
      lVar1 = *(long *)(param_1 + 8);
    }
  }
  return;
}


