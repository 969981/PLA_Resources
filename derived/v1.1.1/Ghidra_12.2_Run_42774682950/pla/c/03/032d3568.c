/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032d3568; name: FUN_032d3568
 */


undefined8 * FUN_032d3568(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong local_38;
  
  nn::os::LockMutex((MutexType *)(param_1 + 8));
  local_38 = param_2 + 0x3fU & 0xffffffffffffffe0;
  puVar3 = (undefined8 *)
           (**(code **)(**(long **)(param_1 + 0x28) + 0x10))
                     (*(long **)(param_1 + 0x28),local_38,&local_38);
  puVar3[1] = local_38;
  puVar3[2] = param_2;
  *puVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 **)(param_1 + 0x60) = puVar3;
  *(ulong *)(param_1 + 0x30) = *(long *)(param_1 + 0x30) + local_38;
  lVar1 = *(long *)(param_1 + 0x38) + param_2;
  *(long *)(param_1 + 0x38) = lVar1;
  lVar2 = *(long *)(param_1 + 0x40);
  if (*(long *)(param_1 + 0x40) <= lVar1) {
    lVar2 = lVar1;
  }
  *(long *)(param_1 + 0x40) = lVar2;
  if (param_3 != (long *)0x0) {
    if (puVar3 + 4 == (undefined8 *)0x0) {
      param_2 = 0;
    }
    *param_3 = param_2;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 8));
  return puVar3 + 4;
}


