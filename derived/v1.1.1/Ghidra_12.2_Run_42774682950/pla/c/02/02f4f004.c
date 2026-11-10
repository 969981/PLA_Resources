/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f4f004; name: FUN_02f4f004
 */


long FUN_02f4f004(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x108) + 0x18);
  if (lVar1 == 0) {
    if (param_2 != (long *)0x0) {
      lVar1 = (**(code **)(**(long **)(param_1 + 0x110) + 0xd0))();
      *param_2 = lVar1;
      if (lVar1 == 0) {
        lVar2 = (**(code **)(**(long **)(*(long *)(param_1 + 0x110) + 0x10) + 0xd0))();
        lVar1 = 0;
        goto LAB_02f4f02c;
      }
    }
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x78);
    if (param_2 == (long *)0x0) {
      return lVar1;
    }
    lVar2 = *(long *)(lVar1 + 0x80);
LAB_02f4f02c:
    *param_2 = lVar2;
  }
  return lVar1;
}


