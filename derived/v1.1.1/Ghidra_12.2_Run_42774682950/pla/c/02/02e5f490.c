/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e5f490; name: FUN_02e5f490
 */


uint FUN_02e5f490(void)

{
  long lVar1;
  uint uVar2;
  long in_x3;
  long in_x5;
  long in_x6;
  long in_stack_00000000;
  
  if (((in_x3 == 0) || (lVar1 = in_stack_00000000, in_x6 != 0)) &&
     ((in_x3 != 0 || (lVar1 = in_x5, in_x6 == 0)))) {
    if (((in_x3 == 0) || (in_x6 == 0)) && ((in_x5 == 0 || (in_stack_00000000 == 0)))) {
      if ((in_x5 == 0) && (in_stack_00000000 == 0)) {
        uVar2 = FUN_02e62224();
        goto LAB_02e5f4bc;
      }
      goto LAB_02e5f4f8;
    }
  }
  else if (lVar1 == 0) {
LAB_02e5f4f8:
    uVar2 = FUN_02e6218c();
    goto LAB_02e5f4bc;
  }
  uVar2 = FUN_02e620f0();
LAB_02e5f4bc:
  return uVar2 & 1;
}


