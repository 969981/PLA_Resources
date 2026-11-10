/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 028434b8; name: FUN_028434b8
 */


void FUN_028434b8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  
  if ((*PTR_DAT_0437b180 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_0437b180);
    if (iVar2 != 0) {
      FUN_00100250(param_1,PTR_LAB_0437b248,PTR_DAT_0437b188,&PTR_LOOP_0411a000);
      __cxa_guard_release(PTR_DAT_0437b180);
    }
  }
  lVar4 = *(long *)PTR_DAT_0437b188;
  *(long *)PTR_DAT_0437b190 = lVar4;
  uVar1 = *(byte *)(lVar4 + 0x50) - 1;
  if (uVar1 < 10) {
    uVar3 = *(undefined4 *)(&DAT_03a7e4b0 + (long)(char)uVar1 * 4);
  }
  else {
    uVar3 = 2;
  }
  FUN_0284358c(param_1,param_2,param_3 & 1,uVar3);
  return;
}


