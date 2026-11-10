/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0038fe58; name: FUN_0038fe58
 */


ulong FUN_0038fe58(long param_1,long param_2)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  uint uVar4;
  long local_40;
  undefined *puStack_38;
  undefined **local_30;
  undefined1 *puStack_28;
  undefined ***local_18;
  
  puStack_28 = (undefined1 *)&local_40;
  lVar3 = *(long *)(param_2 + 0x58);
  if ((lVar3 == 0) ||
     ((*(int *)(lVar3 + 0x18) == 1 && (*(char *)(**(long **)(lVar3 + 0x20) + 0x41) != '\0')))) {
    uVar1 = FUN_0038ff3c(param_1,param_2);
    return uVar1;
  }
  puVar2 = *(ulong **)(param_2 + 0x30);
  uVar4 = *(uint *)(*(long *)(param_1 + 8) +
                   (long)(*(int *)(*(long *)(param_2 + 0x50) + 0x68) +
                         (int)((ulong)(lVar3 - *(long *)(*(long *)(lVar3 + 0x10) + 0x30)) >> 4) *
                         -0x55555555) * 4);
  if (puVar2 != (ulong *)0x0) {
    puStack_38 = PTR_LAB_04373a98;
    if (*puVar2 != 0xffffffffffffffff) {
      local_30 = &puStack_38;
      local_18 = &local_30;
      local_40 = param_2;
      std::__call_once(puVar2,&local_18,(_func_void_void_ptr *)PTR_LAB_04373aa0);
    }
  }
  if ((*(int *)(param_2 + 0x38) == 0xc) || (*(int *)(param_2 + 0x38) == 9)) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return (ulong)uVar4;
}


