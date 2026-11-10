/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ec5980; name: FUN_01ec5980
 */


int FUN_01ec5980(long param_1)

{
  ushort uVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  int *piVar6;
  
  if (((*PTR_DAT_0437a708 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a708), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a708);
  }
  uVar5 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar5;
  pcVar3 = (char *)FUN_010aace4(uVar5,*(undefined8 *)(param_1 + 0x378),
                                *(undefined1 *)(param_1 + 0x398));
  if (*pcVar3 == '\0') {
    piVar6 = *(int **)(pcVar3 + 0x10);
    if (piVar6 == (int *)0x0) {
      piVar6 = *(int **)(pcVar3 + 8);
    }
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x59) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x2c];
  }
  else {
    piVar6 = *(int **)(pcVar3 + 0x18);
    if (*(ushort *)((long)piVar6 - (long)*piVar6) < 0x55) {
      return 0;
    }
    uVar1 = ((ushort *)((long)piVar6 - (long)*piVar6))[0x2a];
  }
  if (((ulong)uVar1 == 0) ||
     ((iVar2 = *(int *)((long)piVar6 + (ulong)uVar1), iVar2 != 2 && (iVar2 != 1)))) {
    return 0;
  }
  lVar4 = FUN_0108d4f8(pcVar3,1);
  iVar2 = atoi((char *)(lVar4 + 4));
  return iVar2;
}


