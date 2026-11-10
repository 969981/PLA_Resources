/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0030f41c; name: FUN_0030f41c
 */


void FUN_0030f41c(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*param_2 == 3) {
    iVar1 = 3;
  }
  else {
    if (0 < DAT_043999b8) goto LAB_0030f46c;
    iVar1 = *param_2;
  }
  (*(code *)PTR_FUN_04153878)(iVar1,*(undefined8 *)(param_2 + 2),param_2[4],param_2 + 6);
LAB_0030f46c:
  if (*param_2 == 3) {
    uVar2 = __cxa_allocate_exception(0x30);
                    /* try { // try from 0030f49c to 0030f49f has its CatchHandler @ 0030f4b8 */
    FUN_0030f678(uVar2,*(undefined8 *)(param_2 + 2),param_2[4],param_2 + 6);
                    /* WARNING: Subroutine does not return */
    __cxa_throw(uVar2,PTR_PTR_04373a60,PTR_FUN_04373a68);
  }
  return;
}


