/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010a01f0; name: FUN_010a01f0
 */


uint FUN_010a01f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  ulong uVar5;
  
  if ((*PTR_DAT_0437a708 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437a708);
    if (iVar2 != 0) {
      FUN_00100250(PTR_LAB_0437a778,PTR_DAT_0437a710,&PTR_LOOP_0411a000,param_3);
      __cxa_guard_release(PTR_DAT_0437a708);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_0437a710;
  *(undefined8 *)PTR_DAT_0437a718 = uVar3;
  piVar4 = (int *)FUN_010aa4a0(uVar3,param_1,param_2,param_3);
  if ((*(ushort *)((long)piVar4 - (long)*piVar4) < 0xf) ||
     (uVar5 = (ulong)((ushort *)((long)piVar4 - (long)*piVar4))[7], uVar5 == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)((long)piVar4 + uVar5);
    if (3 < uVar1) {
      uVar1 = 1;
    }
  }
  return uVar1;
}


