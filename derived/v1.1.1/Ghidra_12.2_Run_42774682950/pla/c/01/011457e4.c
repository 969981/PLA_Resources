/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 011457e4; name: FUN_011457e4
 */


void FUN_011457e4(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (((*PTR_DAT_04379558 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04379558), iVar2 != 0))
  {
    FUN_00100250(PTR_LAB_04379700,PTR_DAT_04379560,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_04379558);
  }
  uVar4 = *(undefined8 *)PTR_DAT_04379560;
  *(undefined8 *)PTR_DAT_04379568 = uVar4;
  if (param_1[1] == 1) {
    uVar3 = FUN_011485c0(uVar4,*param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    uVar1 = FUN_01148628(uVar4,*param_1);
    param_1[2] = uVar1;
    FUN_01148690(uVar4,*param_1);
    FUN_011486f8(uVar4,*param_1);
    uVar1 = 2;
  }
  else {
    if (param_1[1] != 0) {
      return;
    }
    uVar3 = FUN_01148354(uVar4,*param_1);
    if ((uVar3 & 1) == 0) {
      return;
    }
    FUN_01148558(uVar4,*param_1);
    uVar1 = 1;
  }
  param_1[1] = uVar1;
  return;
}


