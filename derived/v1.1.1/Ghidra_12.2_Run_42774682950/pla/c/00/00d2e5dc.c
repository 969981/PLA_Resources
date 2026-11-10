/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d2e5dc; name: FUN_00d2e5dc
 */


void FUN_00d2e5dc(long param_1,byte *param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar2 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_60 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_58 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_50 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_48 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    local_50 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_60 = &DAT_cbf29ce484222645;
    pbVar3 = param_2;
    while (bVar1 != 0) {
      pbVar3 = pbVar3 + 1;
      local_60 = (undefined1 *)(((ulong)local_60 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar3;
    }
    local_48 = (long *)0x0;
    pbStack_58 = param_2;
  }
  FUN_0283c964(*(undefined8 *)(param_1 + 0x148),&local_60,param_3,param_4);
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  return;
}


