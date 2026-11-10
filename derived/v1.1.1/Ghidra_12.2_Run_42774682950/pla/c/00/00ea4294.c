/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00ea4294; name: FUN_00ea4294
 */


void FUN_00ea4294(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *__s;
  byte *pbVar6;
  undefined1 *puVar7;
  undefined1 *local_80;
  byte *pbStack_78;
  size_t local_70;
  long *local_68;
  undefined1 *local_60;
  byte *pbStack_58;
  size_t local_50;
  long *local_48;
  
  FUN_001511d0(param_1,0xfff0b9d6);
  pbVar5 = (byte *)FUN_00150da0(param_1,1,&local_60);
  __s = (byte *)FUN_00150da0(param_1,2,&local_60);
  puVar3 = PTR_DAT_0437a0d8;
  puVar2 = PTR_DAT_0437a0d0;
  if (pbVar5 == (byte *)0x0) {
    if (((*PTR_DAT_0437a0d0 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_60 = *(undefined1 **)puVar3;
    pbStack_58 = *(byte **)(puVar3 + 8);
    local_50 = *(size_t *)(puVar3 + 0x10);
    local_48 = *(long **)(puVar3 + 0x18);
    if (local_48 != (long *)0x0) {
      (**(code **)(*local_48 + 0x18))();
    }
  }
  else {
    puVar7 = &DAT_cbf29ce484222645;
    local_50 = strlen((char *)pbVar5);
    bVar1 = *pbVar5;
    pbVar6 = pbVar5;
    while (bVar1 != 0) {
      pbVar6 = pbVar6 + 1;
      puVar7 = (undefined1 *)(((ulong)puVar7 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar6;
    }
    local_48 = (long *)0x0;
    pbStack_58 = pbVar5;
    local_60 = puVar7;
  }
  if (__s == (byte *)0x0) {
    if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
      FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a0d0);
    }
    local_80 = *(undefined1 **)puVar3;
    pbStack_78 = *(byte **)(puVar3 + 8);
    local_70 = *(size_t *)(puVar3 + 0x10);
    local_68 = *(long **)(puVar3 + 0x18);
    if (local_68 != (long *)0x0) {
      (**(code **)(*local_68 + 0x18))();
    }
  }
  else {
    local_70 = strlen((char *)__s);
    bVar1 = *__s;
    local_80 = &DAT_cbf29ce484222645;
    pbVar5 = __s;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      local_80 = (undefined1 *)(((ulong)local_80 ^ (ulong)bVar1) * 0x100000001b3);
      bVar1 = *pbVar5;
    }
    local_68 = (long *)0x0;
    pbStack_78 = __s;
  }
  iVar4 = FUN_00ea3f80(&local_60,&local_80);
  if (local_68 != (long *)0x0) {
    (**(code **)(*local_68 + 0x20))();
  }
  if (local_48 != (long *)0x0) {
    (**(code **)(*local_48 + 0x20))();
  }
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,(long)iVar4);
  return;
}


