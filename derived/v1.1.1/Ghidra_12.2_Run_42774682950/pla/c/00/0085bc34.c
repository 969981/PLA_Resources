/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0085bc34; name: FUN_0085bc34
 */


void FUN_0085bc34(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x273];
  *param_1 = (long)(PTR_DAT_04378130 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1);
    FUN_0081a800(puVar1);
    param_1[0x273] = 0;
  }
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x26f));
  FUN_007e34a4(param_1 + 0x26a);
  FUN_007f4abc(param_1);
  return;
}


