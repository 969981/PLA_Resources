/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00166920; name: FUN_00166920
 */


void FUN_00166920(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = FUN_0016a120();
  uVar1 = FUN_00162fa0(uVar2,"%s expected",uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_0016a180(param_1,uVar1);
}


