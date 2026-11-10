/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 009ab478; name: FUN_009ab478
 */


void FUN_009ab478(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar3 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar2 = PTR_DAT_0437a0d8;
  param_1[3] = *(undefined8 *)PTR_DAT_0437a0d8;
  param_1[4] = *(undefined8 *)(puVar2 + 8);
  plVar1 = *(long **)(puVar2 + 0x18);
  param_1[5] = *(undefined8 *)(puVar2 + 0x10);
  param_1[6] = plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined1 *)((long)param_1 + 0x3c) = 0;
  return;
}


