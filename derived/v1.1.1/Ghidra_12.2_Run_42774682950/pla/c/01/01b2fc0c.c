/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b2fc0c; name: FUN_01b2fc0c
 */


void FUN_01b2fc0c(undefined8 param_1,byte *param_2)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *plStack_38;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_50 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_48 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_40 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar1 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    plStack_38 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_01b29e90(param_1,&local_50);
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  else {
    local_40 = strlen((char *)param_2);
    bVar2 = *param_2;
    local_50 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    plStack_38 = (long *)0x0;
    pbStack_48 = param_2;
  }
  FUN_01b29e90(param_1,&local_50);
  return;
}


