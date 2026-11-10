/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027e738c; name: FUN_027e738c
 */


void FUN_027e738c(undefined8 param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar1 = FUN_027e740c(param_1,1,&local_28);
  lVar2 = *param_2;
  FUN_0014ff10(param_1,0);
  FUN_001514d0(param_1,*(undefined4 *)(lVar1 + lVar2));
  return;
}


