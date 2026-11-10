/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00163bb0; name: FUN_00163bb0
 */


void FUN_00163bb0(long *param_1,undefined4 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1[2] + 0x38);
  if (*(int *)(*param_1 + 0x28) == 0) {
    pcVar1 = "main function";
  }
  else {
    pcVar1 = (char *)FUN_00162fa0(uVar2,"function at line %d");
  }
  uVar2 = FUN_00162fa0(uVar2,"too many %s (limit is %d) in %s",param_3,param_2,pcVar1);
                    /* WARNING: Subroutine does not return */
  FUN_0016a180(param_1[2],uVar2);
}


