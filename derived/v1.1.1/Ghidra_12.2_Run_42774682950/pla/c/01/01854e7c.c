/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01854e7c; name: FUN_01854e7c
 */


void FUN_01854e7c(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 1) = 0;
  puVar2 = PTR_DAT_04381ab0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  puVar2 = PTR_DAT_0437a0d0;
  param_1[7] = (long)&DAT_cbf29ce484222645;
  param_1[8] = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 9) = 0;
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar3 = PTR_DAT_0437a0d8;
  param_1[10] = *(long *)PTR_DAT_0437a0d8;
  param_1[0xb] = *(long *)(puVar3 + 8);
  plVar1 = *(long **)(puVar3 + 0x18);
  param_1[0xc] = *(long *)(puVar3 + 0x10);
  param_1[0xd] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 0xe) = 0xbf800000;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  param_1[0xf] = (long)&DAT_cbf29ce484222645;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((long)param_1 + 0x83) = 0;
  if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar4 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  param_1[0x11] = *(long *)puVar3;
  param_1[0x12] = *(long *)(puVar3 + 8);
  plVar1 = *(long **)(puVar3 + 0x18);
  param_1[0x13] = *(long *)(puVar3 + 0x10);
  param_1[0x14] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  return;
}


