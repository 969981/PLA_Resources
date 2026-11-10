/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01f01870; name: FUN_01f01870
 */


void FUN_01f01870(long param_1,int *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    bVar1 = false;
  }
  else {
    uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
    bVar1 = false;
    if (uVar2 != 0) {
      bVar1 = *(char *)((long)param_2 + uVar2) != '\0';
    }
  }
  *(bool *)param_1 = bVar1;
  if (*(ushort *)((long)param_2 - (long)*param_2) < 0x19) {
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  uVar2 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[0xc];
  bVar1 = false;
  if (uVar2 != 0) {
    bVar1 = *(char *)((long)param_2 + uVar2) != '\0';
  }
  *(bool *)(param_1 + 1) = bVar1;
  return;
}


