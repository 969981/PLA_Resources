/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01b78f9c; name: FUN_01b78f9c
 */


void FUN_01b78f9c(undefined8 param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (**(char **)(param_2 + 0x4e8) == '\0') {
    return;
  }
  if (((*PTR_DAT_04379c28 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0))
  {
    FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379c28);
  }
  lVar3 = *(long *)PTR_DAT_04379c30;
  *(long *)PTR_DAT_04379c38 = lVar3;
  plVar2 = *(long **)(*(long *)(lVar3 + 0x158) + 0x60);
  (**(code **)(*plVar2 + 0x88))
            (*(undefined4 *)(param_2 + 0x5a8),plVar2,"BALL_VELOCITY",0xffffffffffffffff,0,4,0);
  FUN_01b77f14(param_2,param_2 + 0x4e0);
  return;
}


