/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0158625c; name: FUN_0158625c
 */


void FUN_0158625c(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  local_38[0] = *(undefined1 *)param_2;
  local_34 = *(undefined4 *)((long)param_2 + 4);
  local_30 = *(undefined4 *)(param_2 + 1);
  local_2c = *(undefined4 *)((long)param_2 + 0xc);
  local_28 = *(undefined4 *)(param_2 + 2);
  if (((*PTR_DAT_0437a158 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_0437a158), iVar3 != 0))
  {
    FUN_00100250(PTR_LAB_0437aff8,PTR_DAT_0437a160,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a158);
  }
  lVar4 = *(long *)PTR_DAT_0437a160;
  *(long *)PTR_DAT_0437a168 = lVar4;
  FUN_0192b080(lVar4 + 0x54,3,local_38,0,0);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x830) = *(undefined4 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 0x828) = uVar2;
  *(undefined8 *)(param_1 + 0x820) = uVar1;
  return;
}


