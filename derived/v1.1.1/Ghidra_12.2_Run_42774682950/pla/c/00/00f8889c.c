/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00f8889c; name: FUN_00f8889c
 */


undefined4 FUN_00f8889c(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  if (param_2 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar2 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_50 = *(undefined1 **)PTR_DAT_0437a0d8;
    pbStack_48 = *(byte **)(PTR_DAT_0437a0d8 + 8);
    local_40 = *(size_t *)(PTR_DAT_0437a0d8 + 0x10);
    local_38 = *(long **)(PTR_DAT_0437a0d8 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    local_40 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_50 = &DAT_cbf29ce484222645;
    pbVar4 = param_2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      local_50 = (undefined1 *)(((ulong)local_50 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar4;
    }
    local_38 = (long *)0x0;
    pbStack_48 = param_2;
  }
  uVar3 = FUN_028b1540(param_1,&local_50);
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  uVar5 = (undefined4)(uVar3 >> 0x20);
  if ((uVar3 & 0xff) == 0) {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}


