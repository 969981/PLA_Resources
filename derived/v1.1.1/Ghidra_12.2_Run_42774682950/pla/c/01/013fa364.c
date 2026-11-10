/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013fa364; name: FUN_013fa364
 */


void FUN_013fa364(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 local_b0;
  code *local_a8;
  undefined8 local_a0;
  long *local_98;
  undefined1 auStack_90 [96];
  
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  puVar2 = PTR_DAT_04379ca8;
  puVar1 = PTR_DAT_04379c98;
  if (((*PTR_DAT_04379ca8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar4 != 0))
  {
    uVar6 = FUN_009311a8();
    *(undefined8 *)puVar1 = uVar6;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)puVar1) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)puVar1; plVar5 = (long *)*plVar5) {
    }
  }
  local_b0 = 0xb7bb79e53203acd4;
  local_a8 = (code *)0x39884d4;
  local_a0 = 0xb;
  local_98 = (long *)0x0;
  uVar6 = FUN_013eaef0(puVar8[0x8f],&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x18);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04379ca8), iVar4 != 0)) {
    uVar7 = FUN_009311a8();
    *(undefined8 *)puVar1 = uVar7;
    __cxa_guard_release(PTR_DAT_04379ca8);
  }
  if (plVar5 != (long *)puVar1) {
    for (plVar5 = (long *)*plVar5; plVar5 != (long *)puVar1; plVar5 = (long *)*plVar5) {
    }
  }
  local_b0 = 0x751d66378b2cdc6c;
  local_a8 = (code *)0x38feb3e;
  local_a0 = 8;
  local_98 = (long *)0x0;
  uVar7 = FUN_013eadac(puVar8[0x8f],&local_b0);
  if (local_98 != (long *)0x0) {
    (**(code **)(*local_98 + 0x20))();
  }
  FUN_01411edc(uVar7,0);
  local_a0 = 0;
  local_98 = (long *)0x0;
  local_b0 = 0;
  local_a8 = (code *)0x0;
  FUN_01400888(uVar6,&local_b0);
  pcVar3 = local_a8;
  if (local_a8 != (code *)0x0) {
    local_a0 = 0;
    local_98 = (long *)0x0;
    local_b0 = 0;
    local_a8 = (code *)0x0;
    (*pcVar3)(auStack_90);
  }
  return;
}


