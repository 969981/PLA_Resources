/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f06d0c; name: FUN_02f06d0c
 */


long * FUN_02f06d0c(long param_1,int param_2,int param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x68));
  puVar1 = (undefined8 *)(param_1 + 0x88);
  if (param_3 != 1) {
    puVar1 = (undefined8 *)(param_1 + 0x98);
  }
  for (plVar2 = (long *)puVar1[1]; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    if ((int)plVar2[3] == param_2) goto LAB_02f06d9c;
  }
  plVar2 = (long *)(*DAT_0442d138)(2,0x30);
  if (plVar2 != (long *)0x0) {
    plVar2[1] = 0;
    plVar2[2] = 0;
    *plVar2 = 0;
    *(int *)(plVar2 + 3) = param_2;
    plVar2[4] = 0;
    plVar2[5] = 0;
    if (puVar1[1] == 0) {
      *puVar1 = plVar2;
      puVar1[1] = plVar2;
      *plVar2 = 0;
    }
    else {
      *plVar2 = puVar1[1];
      puVar1[1] = plVar2;
    }
  }
LAB_02f06d9c:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x68));
  return plVar2;
}


