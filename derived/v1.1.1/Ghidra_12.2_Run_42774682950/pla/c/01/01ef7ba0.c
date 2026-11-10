/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01ef7ba0; name: FUN_01ef7ba0
 */


undefined8 FUN_01ef7ba0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if ((*PTR_DAT_0437a780 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437a780);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_0437a8a0,PTR_DAT_0437a788,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437a780);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437a788;
  *(undefined8 *)PTR_DAT_0437a790 = uVar2;
  lVar3 = FUN_01e65c40(uVar2,param_1);
  if (*(long *)(lVar3 + 8) == 0) {
    puVar4 = (undefined8 *)PTR_DAT_04379c88;
  }
  else {
    puVar4 = (undefined8 *)(*(long *)(lVar3 + 8) + 0x58);
  }
  return *puVar4;
}


