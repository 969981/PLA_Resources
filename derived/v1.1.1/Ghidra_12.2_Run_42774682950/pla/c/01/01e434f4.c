/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01e434f4; name: FUN_01e434f4
 */


void FUN_01e434f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = param_4;
  if ((*PTR_DAT_0437a648 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437a648);
    uVar2 = param_4 & 0xffffffff;
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437b598,PTR_DAT_0437a650,&PTR_LOOP_0411a000,uVar2,param_5);
      __cxa_guard_release(PTR_DAT_0437a648);
      uVar2 = param_4 & 0xffffffff;
    }
  }
  lVar3 = *(long *)PTR_DAT_0437a650;
  *(long *)PTR_DAT_0437a658 = lVar3;
  FUN_02bf3d70(*(undefined8 *)(lVar3 + 0x230),param_2,param_3,uVar2,param_5,1);
  return;
}


