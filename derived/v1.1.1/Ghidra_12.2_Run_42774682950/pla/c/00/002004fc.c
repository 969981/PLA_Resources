/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002004fc; name: FUN_002004fc
 */


bool FUN_002004fc(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_00200538(param_1,*param_2);
  bVar1 = (uVar2 & 1) != 0;
  if (bVar1) {
    param_2[1] = param_1;
  }
  return bVar1;
}


