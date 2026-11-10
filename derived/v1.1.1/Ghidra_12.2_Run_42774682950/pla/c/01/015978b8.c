/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 015978b8; name: FUN_015978b8
 */


void FUN_015978b8(byte *param_1)

{
  long *plVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 *local_40;
  byte *pbStack_38;
  size_t local_30;
  long *plStack_28;
  
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_40 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_38 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_30 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    plVar1 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    plStack_28 = plVar1;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      FUN_015979d0(&local_40);
                    /* WARNING: Could not recover jumptable at 0x01597940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  else {
    local_30 = strlen((char *)param_1);
    bVar2 = *param_1;
    local_40 = &DAT_cbf29ce484222645;
    pbVar4 = param_1;
    while (bVar2 != 0) {
      pbVar4 = pbVar4 + 1;
      local_40 = (undefined1 *)(((ulong)local_40 ^ (ulong)bVar2) * 0x100000001b3);
      bVar2 = *pbVar4;
    }
    plStack_28 = (long *)0x0;
    pbStack_38 = param_1;
  }
  FUN_015979d0(&local_40);
  return;
}


