/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0122cc5c; name: FUN_0122cc5c
 */


void FUN_0122cc5c(uint param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_30;
  char *pcStack_28;
  undefined8 local_20;
  long *local_18;
  
  if ((*PTR_DAT_04379c28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04379c28);
    if (iVar1 != 0) {
      FUN_00100250(PTR_LAB_04379c60,PTR_DAT_04379c30,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_04379c28);
    }
  }
  uVar2 = *(undefined8 *)PTR_DAT_04379c30;
  *(undefined8 *)PTR_DAT_04379c38 = uVar2;
  if ((param_1 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f800000;
  }
  local_18 = (long *)0x0;
  local_20 = 0xd;
  pcStack_28 = "DYNAMIC_RANGE";
  local_30 = 0x7469e40d49eaed78;
  FUN_02913898(uVar3,uVar2,&local_30,0xffffffffffffffff,0);
  if (local_18 != (long *)0x0) {
    (**(code **)(*local_18 + 0x20))();
  }
  return;
}


