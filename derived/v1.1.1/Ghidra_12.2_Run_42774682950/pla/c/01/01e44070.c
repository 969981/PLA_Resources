/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e44070; name: FUN_01e44070
 */


void FUN_01e44070(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6,ulong param_7)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = param_5;
  uVar3 = param_7;
  if ((*PTR_DAT_0437a648 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437a648);
    uVar2 = param_5 & 0xffffffff;
    uVar3 = param_7 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100250(param_1,PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000,uVar2,param_6,uVar3)
      ;
      __cxa_guard_release(PTR_DAT_0437a648);
      uVar2 = param_5 & 0xffffffff;
      uVar3 = param_7 & 0xffffffff;
    }
  }
  lVar4 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar4;
  FUN_02bf7384(param_1,*(undefined8 *)(lVar4 + 0x230),param_3,param_4,uVar2,param_6,uVar3);
  return;
}


