/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0040c6b0; name: FUN_0040c6b0
 */


undefined8 FUN_0040c6b0(undefined8 *param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((0 < *(int *)((long)param_1 + 0xc)) ||
     (lVar1 = FUN_0040c320(param_1,1), uVar2 = 0, lVar1 != 0)) {
    *(undefined4 *)(param_1 + 2) = 0;
    *(int *)*param_1 = param_2;
    uVar2 = 1;
    *(uint *)(param_1 + 1) = (uint)(param_2 != 0);
  }
  return uVar2;
}


