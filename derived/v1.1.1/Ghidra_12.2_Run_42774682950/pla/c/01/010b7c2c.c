/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010b7c2c; name: FUN_010b7c2c
 */


undefined4 FUN_010b7c2c(ulong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 == 10) {
    if (((*PTR_DAT_0437b180 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_0437b180), iVar2 != 0)) {
      FUN_00100250(PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
    lVar3 = *(long *)PTR_DAT_0437b188;
    *(long *)PTR_DAT_0437b190 = lVar3;
    uVar1 = *(byte *)(lVar3 + 0x50) - 8;
  }
  else {
    uVar1 = param_2 - 7;
  }
  if (uVar1 < 3) {
    if ((uint)param_1 < 5) {
      return *(undefined4 *)
              (&DAT_03a78b34 +
              (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2));
    }
  }
  else if ((uint)param_1 < 5) {
    return *(undefined4 *)
            (&DAT_03a78b34 +
            (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2));
  }
  return 0x42280000;
}


