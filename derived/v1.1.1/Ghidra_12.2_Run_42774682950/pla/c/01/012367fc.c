/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 012367fc; name: FUN_012367fc
 */


void FUN_012367fc(long *param_1,long param_2)

{
  undefined1 uVar1;
  int iVar2;
  ulong uVar3;
  long *local_28;
  
  param_1[1] = param_2;
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  *(undefined8 *)PTR_DAT_04379568 = *(undefined8 *)PTR_DAT_04379560;
  FUN_01148cdc(&local_28);
  uVar1 = FUN_01123ce8(local_28);
  if ((local_28 != (long *)0x0) && (uVar3 = FUN_02a43a5c(local_28[0xb]), (uVar3 & 1) != 0)) {
    (**(code **)(*local_28 + 0x20))(local_28);
  }
  FUN_01235acc(param_1 + 0x3a,uVar1);
  FUN_01236970(param_1,0,param_1 + 2);
  FUN_01236970(param_1,1,param_1 + 9);
  FUN_01236970(param_1,2,param_1 + 0x10);
  FUN_01236970(param_1,3,param_1 + 0x17);
  FUN_01236970(param_1,4,param_1 + 0x1e);
  FUN_01236970(param_1,5,param_1 + 0x25);
  FUN_01236970(param_1,6,param_1 + 0x2c);
  (**(code **)(*param_1 + 0x10))(param_1);
  (**(code **)(*param_1 + 0x28))(param_1);
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}


