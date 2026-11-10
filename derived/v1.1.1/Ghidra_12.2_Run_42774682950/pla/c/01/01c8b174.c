/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01c8b174; name: FUN_01c8b174
 */


void FUN_01c8b174(undefined2 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  undefined8 local_28;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  puVar3 = PTR_DAT_0437a0d0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)PTR_DAT_0437a0d8;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar4 + 8);
  plVar6 = *(long **)(puVar4 + 0x18);
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(puVar4 + 0x10);
  *(long **)(param_1 + 0x30) = plVar6;
  if (plVar6 == (long *)0x0) {
    bVar1 = *puVar3;
  }
  else {
    (**(code **)(*plVar6 + 0x18))();
    bVar1 = *puVar3;
  }
  if (((bVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)puVar4;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar4 + 8);
  plVar6 = *(long **)(puVar4 + 0x18);
  *(undefined8 *)(param_1 + 0x3c) = *(undefined8 *)(puVar4 + 0x10);
  *(long **)(param_1 + 0x40) = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  if (((*PTR_DAT_0437a798 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a798), iVar5 != 0))
  {
    if (((*PTR_DAT_0437a7c0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a7c0), iVar5 != 0)) {
      local_28 = FUN_00938550();
      puVar3 = PTR_DAT_0437a7d0;
      FUN_00b0fde8(PTR_DAT_0437a7d0,&local_28);
      FUN_00100250(PTR_LAB_0437a8d8,puVar3,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a7c0);
    }
    puVar3 = PTR_DAT_0437a7c8;
    FUN_00b0fd18(PTR_DAT_0437a7c8,PTR_DAT_0437a7d0,0);
    FUN_00100250(DAT_0437ae18,puVar3,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a798);
  }
  puVar3 = PTR_DAT_0437a7c8;
  plVar6 = *(long **)PTR_DAT_0437a7c8;
  *(long **)(param_1 + 0x44) = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(puVar3 + 0x10);
  plVar6 = *(long **)(puVar3 + 0x20);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(puVar3 + 0x18);
  *(long **)(param_1 + 0x54) = plVar6;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x18))();
  }
  uVar2 = *(undefined4 *)(puVar3 + 0x28);
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0x100000000;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined1 **)(param_1 + 0x74) = &DAT_cbf29ce484222645;
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return;
}


