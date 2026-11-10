/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158633c; name: FUN_0158633c
 */


void FUN_0158633c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40[0] = *(undefined1 *)param_2;
  local_3c = *(undefined4 *)((long)param_2 + 4);
  local_38 = *(undefined4 *)(param_2 + 1);
  local_34 = *(undefined4 *)((long)param_2 + 0xc);
  local_30 = *(undefined4 *)(param_2 + 2);
  local_2c = *(undefined4 *)((long)param_2 + 0x14);
  local_28 = *(undefined4 *)(param_2 + 3);
  local_24 = *(undefined4 *)((long)param_2 + 0x1c);
  if (((*PTR_DAT_0437a158 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437aff8,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  uVar4 = *(undefined8 *)PTR_DAT_0437a160;
  *(undefined8 *)PTR_DAT_0437a168 = uVar4;
  FUN_0192c0d0(uVar4,3,local_40,0,0);
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  *(undefined8 *)(param_1 + 0x844) = param_2[2];
  *(undefined8 *)(param_1 + 0x84c) = uVar2;
  *(undefined8 *)(param_1 + 0x834) = uVar4;
  *(undefined8 *)(param_1 + 0x83c) = uVar1;
  return;
}


