/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d83e48; name: FUN_00d83e48
 */


undefined4 FUN_00d83e48(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 uVar5;
  
  if ((*(char *)(param_1 + 0x28c) == '\0') && (*(char *)(param_1 + 0x28d) == '\0')) {
    return *(undefined4 *)(param_1 + 0x270);
  }
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar3 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar3;
  piVar4 = (int *)FUN_010aa4a0(uVar3,*(undefined4 *)(param_1 + 0x274),
                               *(undefined2 *)(param_1 + 0x278),*(undefined4 *)(param_1 + 0x27c));
  if (*(char *)(param_1 + 0x28d) == '\0') {
    if (*(char *)(param_1 + 0x28c) == '\0') {
      return 0x3f800000;
    }
    if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xd) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar4 - (long)*piVar4))[6];
  }
  else {
    if (*(ushort *)((long)piVar4 - (long)*piVar4) < 0xb) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar4 - (long)*piVar4))[5];
  }
  uVar5 = 0;
  if ((ulong)uVar1 != 0) {
    uVar5 = *(undefined4 *)((long)piVar4 + (ulong)uVar1);
  }
  return uVar5;
}


