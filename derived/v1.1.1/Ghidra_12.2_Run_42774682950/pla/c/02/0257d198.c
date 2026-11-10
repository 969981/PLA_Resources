/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0257d198; name: FUN_0257d198
 */


ulong FUN_0257d198(long param_1)

{
  undefined2 uVar1;
  int iVar2;
  ulong uVar3;
  long local_30 [2];
  
  if (*(int *)(param_1 + 0x5ac) != 0) {
    uVar3 = FUN_0257b5d8(param_1,*(long *)(param_1 + 0x630) + (ulong)*(uint *)(param_1 + 0x6fc) * 8)
    ;
    return uVar3;
  }
  if (((*(byte *)(param_1 + 0x708) & 3) == 0) &&
     (*(long *)(param_1 + 0x5c8) != *(long *)(param_1 + 0x5c0))) {
    uVar1 = *(undefined2 *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6);
    if (((*PTR_DAT_043795f8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_043795f8), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_0437b168,PTR_DAT_04379600,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_043795f8);
    }
    *(undefined8 *)PTR_DAT_04379608 = *(undefined8 *)PTR_DAT_04379600;
    FUN_02c4fb44(local_30,uVar1);
    if ((*(char *)(local_30[0] + 0x20) != '\x01') || (*(char *)(param_1 + 0x740) == '\0')) {
      return (ulong)(*(char *)(*(long *)(param_1 + 0x5c0) + (ulong)*(uint *)(param_1 + 0x6f8) * 6 +
                              4) != '\0');
    }
  }
  return 0;
}


