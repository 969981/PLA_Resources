/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c1e90; name: FUN_004c1e90
 */


undefined8 FUN_004c1e90(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  local_18 = 0;
  uVar3 = 0;
  if (param_1 != 0) {
    lVar2 = FUN_00422780(param_1,0);
    if (((lVar2 != 0) && (iVar1 = FUN_00470410(lVar2), 0 < iVar1)) &&
       (iVar1 = FUN_004704a0(lVar2,&local_18), iVar1 < 1)) {
      FUN_00423420(local_18);
      local_18 = 0;
    }
    FUN_00422a10(lVar2);
    uVar3 = local_18;
  }
  return uVar3;
}


