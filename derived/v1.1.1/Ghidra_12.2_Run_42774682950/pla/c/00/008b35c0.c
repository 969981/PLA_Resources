/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008b35c0; name: FUN_008b35c0
 */


void FUN_008b35c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  if ((*PTR_DAT_04379678 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379678);
    if (iVar1 != 0) {
      FUN_00100250(&LAB_008b42f8,PTR_DAT_04379680,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379678);
    }
  }
  uVar3 = *(undefined8 *)PTR_DAT_04379680;
  *(undefined8 *)PTR_DAT_04379688 = uVar3;
  lVar2 = FUN_00923bb4(**(undefined8 **)(param_1 + 0x70));
  local_18 = *(undefined8 *)(lVar2 + 0x338);
  FUN_014a8208(uVar3,&local_18,0,1);
  return;
}


