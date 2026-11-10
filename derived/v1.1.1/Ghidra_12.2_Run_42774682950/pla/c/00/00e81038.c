/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00e81038; name: FUN_00e81038
 */


void FUN_00e81038(undefined8 param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = 0;
  lVar2 = FUN_00e80ea0(param_1,1,&local_28);
  uVar1 = FUN_00150ba0(param_1,3,0);
  *(undefined4 *)(lVar2 + *param_2) = uVar1;
  FUN_0014ff10(param_1,0);
  return;
}


