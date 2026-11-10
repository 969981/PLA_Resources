/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea4568; name: FUN_00ea4568
 */


uint FUN_00ea4568(byte *param_1,byte *param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *local_70;
  byte *pbStack_68;
  size_t local_60;
  long *local_58;
  undefined1 *local_50;
  byte *pbStack_48;
  size_t local_40;
  long *local_38;
  
  puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  puVar3 = PTR_DAT_0437a0d0;
  if (param_1 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_50 = (undefined1 *)*puVar2;
    pbStack_48 = *(byte **)((long)puVar2 + 8);
    local_40 = *(size_t *)((long)puVar2 + 0x10);
    local_38 = *(long **)((long)puVar2 + 0x18);
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 0x18))();
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    local_40 = strlen((char *)param_1);
    bVar1 = *param_1;
    pbVar6 = param_1;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
    }
    local_38 = (long *)0x0;
    local_50 = puVar7;
    pbStack_48 = param_1;
    puVar2 = (undefined8 *)PTR_DAT_0437a0d8;
  }
  if (param_2 == (byte *)0x0) {
    if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_70 = (undefined1 *)*puVar2;
    pbStack_68 = (byte *)puVar2[1];
    local_60 = puVar2[2];
    local_58 = (long *)puVar2[3];
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x18))();
    }
  }
  else {
    local_60 = strlen((char *)param_2);
    bVar1 = *param_2;
    local_70 = &DAT_cbf29ce484222645;
    pbVar6 = param_2;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      local_70 = (undefined1 *)(((ulong)local_70 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
    }
    local_58 = (long *)0x0;
    pbStack_68 = param_2;
  }
  uVar4 = FUN_00ea4760(&local_50,&local_70);
  if (local_58 != (long *)0x0) {
    (**(code **)(*local_58 + 0x20))();
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 0x20))();
  }
  return uVar4 & 1;
}


