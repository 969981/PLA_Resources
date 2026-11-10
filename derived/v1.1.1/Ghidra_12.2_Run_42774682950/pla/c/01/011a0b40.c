/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011a0b40; name: FUN_011a0b40
 */


void FUN_011a0b40(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 local_28;
  
  if (*(int *)(param_1 + 0x16a4) == 0) {
    FUN_00d4ba88(param_1,1,1);
    return;
  }
  local_28 = 0;
  FUN_00d51c38(param_1,(long)&local_28 + 4,&local_28,0);
  uVar2 = FUN_00d2ee28(param_1 + 0x180,&DAT_043ab7d8);
  FUN_0281bd00(uVar2,local_28._4_4_,local_28 & 0xffffffff);
  FUN_00d4ba88(param_1,0,1);
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar4 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar4;
  uVar2 = FUN_02911ed0(lVar4);
  plVar3 = *(long **)(*(long *)(lVar4 + 0x158) + 0x60);
  (**(code **)(*plVar3 + 0x98))(plVar3,&DAT_03932c38,&DAT_03987f09,uVar2);
  *(undefined1 *)(param_1 + 0x6de) = 0;
  *(undefined4 *)(param_1 + 0x16a4) = 0;
  return;
}


