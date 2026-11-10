/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ded460; name: FUN_02ded460
 */


undefined8 FUN_02ded460(long param_1)

{
  int iVar1;
  void *__dest;
  long lVar2;
  undefined8 uVar3;
  ushort *puVar4;
  ushort *local_38;
  uint local_30;
  undefined1 local_28;
  
  if (*(int *)(param_1 + 0xd4) == 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  else {
    __dest = (void *)FUN_02f59e30(5);
    *(void **)(param_1 + 0xf8) = __dest;
    if (__dest == (void *)0x0) {
      return 0x34;
    }
    *(undefined4 *)(param_1 + 0x60) = 1;
    if (*(uint *)(param_1 + 0xd4) != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x108),(ulong)*(uint *)(param_1 + 0xd4));
      *(ulong *)(param_1 + 0x108) = *(long *)(param_1 + 0x108) + (ulong)*(uint *)(param_1 + 0xd4);
    }
  }
  puVar4 = *(ushort **)(param_1 + 0x108);
  local_38 = puVar4 + 1;
  local_30 = (uint)*puVar4;
  local_28 = 0;
  *(ulong *)(param_1 + 0x108) = (long)puVar4 + (ulong)*puVar4 + 2;
  lVar2 = FUN_02dec6f8(&DAT_04408fa8,param_1 + 0x58,*(undefined8 *)(param_1 + 0x18),&local_38);
  *(long *)(param_1 + 0x80) = lVar2;
  if ((lVar2 == 0) ||
     (iVar1 = FUN_02dee090(param_1 + 0x68,*(undefined1 *)(param_1 + 0xb8)), iVar1 != 0)) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(param_1 + 0x60) = 3;
  }
  return uVar3;
}


