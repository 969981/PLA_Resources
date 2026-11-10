/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 014f1640; name: FUN_014f1640
 */


void FUN_014f1640(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                 uint param_6)

{
  long *plVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  FUN_014f0d54();
  plVar1 = (long *)(param_3 + 0xe0);
  if (((*PTR_DAT_0437a0d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_0437a0d0), iVar2 != 0))
  {
    FUN_00100250(PTR_FUN_0437a0e0,PTR_DAT_0437a0d8,&PTR_LOOP_0411a000);
    __cxa_guard_release(PTR_DAT_0437a0d0);
  }
  if (*plVar1 == *(long *)PTR_DAT_0437a0d8) {
    return;
  }
  FUN_0283b1e8(*(undefined8 *)(param_1 + 8),plVar1);
  uVar3 = 0x40400000;
  if (param_2 != 0) {
    uVar3 = 0x3f800000;
  }
  uVar4 = 0x40000000;
  if (param_2 != 0) {
    uVar4 = 0;
  }
  if ((param_6 & 1) == 0) {
    uVar3 = uVar4;
  }
  FUN_0283b748(uVar3,*(undefined8 *)(param_1 + 8),plVar1);
  return;
}


