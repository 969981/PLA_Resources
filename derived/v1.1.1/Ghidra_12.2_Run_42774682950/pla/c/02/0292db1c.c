/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0292db1c; name: FUN_0292db1c
 */


void FUN_0292db1c(float param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (*(int *)(param_3 + 0x5c) == 0 || *(int *)(param_3 + 0x5c) == 5) {
    if (((*PTR_DAT_04379c28 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28), iVar1 != 0)) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
    lVar3 = *(long *)PTR_DAT_04379c30;
    *(long *)PTR_DAT_04379c38 = lVar3;
    plVar2 = *(long **)(*(long *)(lVar3 + 0x158) + 0x60);
    (**(code **)(*plVar2 + 0xd8))
              (plVar2,1,*(undefined4 *)(param_3 + 0x50),(int)(param_1 * 1000.0),param_4);
    *(undefined4 *)(param_3 + 0x5c) = 1;
    *(float *)(param_3 + 0x60) = param_1;
  }
  else {
    *(undefined4 *)(param_3 + 0x5c) = 2;
  }
  *(undefined4 *)(param_3 + 100) = param_2;
  return;
}


