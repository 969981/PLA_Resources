/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0045b570; name: FUN_0045b570
 */


undefined8 FUN_0045b570(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_00407950();
    if ((-1 < param_2) && (param_2 < iVar1)) {
      uVar2 = FUN_00407970(param_1,param_2);
      return uVar2;
    }
  }
  return 0;
}


