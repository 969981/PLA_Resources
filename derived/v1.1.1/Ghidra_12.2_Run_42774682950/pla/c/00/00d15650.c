/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00d15650; name: FUN_00d15650
 */


void FUN_00d15650(undefined4 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_0437b180 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_0437b180);
    if (iVar1 != 0) {
      FUN_00100250(&LAB_00d15ee4,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_0437b188;
  *(undefined8 *)PTR_DAT_0437b190 = uVar2;
  FUN_00d156e0(uVar2,param_1);
  FUN_00d157e0();
  return;
}


