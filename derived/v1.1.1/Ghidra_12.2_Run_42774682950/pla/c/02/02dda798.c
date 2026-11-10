/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dda798; name: FUN_02dda798
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02dda798(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  int iVar5;
  
  FUN_00afa5ac();
  puVar4 = PTR_DAT_0437a7b8;
  *param_1 = (long)(PTR_DAT_0437a7b8 + 0x10);
  param_1[9] = (long)(puVar4 + 0x88);
  param_1[10] = (long)(puVar4 + 0x128);
  nn::os::InitializeLightEvent((long)param_1 + 0x6c,0,1);
  lVar3 = _UNK_03889418;
  lVar2 = _DAT_03889410;
  *param_1 = (long)&PTR_LAB_0429aac8;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = lVar3;
  param_1[0x14] = lVar2;
  param_1[9] = (long)&PTR_LAB_0429ab58;
  param_1[10] = (long)&PTR_LAB_0429abf8;
  *(undefined8 *)((long)param_1 + 0x85) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  param_1[0x16] = param_1[0x14];
  param_1[0x17] = param_1[0x15];
  *(undefined4 *)((long)param_1 + 0xdc) = 0x41200000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar4 = PTR_DAT_0437a0d0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar5 != 0)) {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  puVar4 = PTR_DAT_0437a0d8;
  param_1[0x1d] = *(long *)PTR_DAT_0437a0d8;
  param_1[0x1e] = *(long *)(puVar4 + 8);
  plVar1 = *(long **)(puVar4 + 0x18);
  param_1[0x1f] = *(long *)(puVar4 + 0x10);
  param_1[0x20] = (long)plVar1;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))();
  }
  param_1[0x24] = 0;
  param_1[0x25] = param_1[1];
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x10c) = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x26] = 0x3b5cc0ed7303b5;
  param_1[0x27] = 0;
  return;
}


