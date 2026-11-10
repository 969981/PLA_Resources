/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00864a38; name: FUN_00864a38
 */


void FUN_00864a38(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0xb8));
  puVar2 = PTR_DAT_04377ce8;
  iVar3 = FUN_00830ea4(*(undefined8 *)PTR_DAT_04377ce8,*(undefined8 *)(param_1 + 0xe0),
                       *(undefined2 *)(param_1 + 0x92));
  lVar1 = *(long *)(param_1 + 0xe0) + (long)iVar3 * 0x20;
  *(int *)(param_1 + 0xf8) = iVar3;
  *(long *)(param_1 + 0xe8) = lVar1;
  uVar4 = FUN_00830e48(*(undefined8 *)puVar2,lVar1,(uint)*(ushort *)(param_1 + 0x92) - iVar3);
  *(undefined4 *)(param_1 + 0xfc) = uVar4;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0xb8));
  return;
}


