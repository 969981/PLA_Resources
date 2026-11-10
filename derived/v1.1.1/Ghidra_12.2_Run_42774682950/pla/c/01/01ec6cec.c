/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec6cec; name: FUN_01ec6cec
 */


float FUN_01ec6cec(long param_1)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar3 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar3;
  pcVar4 = (char *)FUN_010aace4(uVar3,*(undefined8 *)(param_1 + 0x378),
                                *(undefined1 *)(param_1 + 0x398));
  if (*pcVar4 == '\0') {
    piVar5 = *(int **)(pcVar4 + 0x10);
    if (piVar5 == (int *)0x0) {
      piVar5 = *(int **)(pcVar4 + 8);
    }
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x59) goto LAB_01ec6d58;
    uVar1 = ((ushort *)((long)piVar5 - (long)*piVar5))[0x2c];
  }
  else {
    piVar5 = *(int **)(pcVar4 + 0x18);
    if (*(ushort *)((long)piVar5 - (long)*piVar5) < 0x55) goto LAB_01ec6d58;
    uVar1 = ((ushort *)((long)piVar5 - (long)*piVar5))[0x2a];
  }
  if ((ulong)uVar1 != 0) {
    if (*(int *)((long)piVar5 + (ulong)uVar1) == 2) {
      return -*(float *)(param_1 + 0x3ac);
    }
    return *(float *)(param_1 + 0x3ac);
  }
LAB_01ec6d58:
  return *(float *)(param_1 + 0x3ac);
}


