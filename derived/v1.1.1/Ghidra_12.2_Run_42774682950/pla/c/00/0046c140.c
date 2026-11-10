/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0046c140; name: FUN_0046c140
 */


void FUN_0046c140(undefined8 param_1)

{
  int iVar1;
  undefined8 local_80 [14];
  
  local_80[0] = param_1;
  if ((DAT_0439e948 == 0) || (iVar1 = FUN_00407710(DAT_0439e948,local_80), iVar1 < 0)) {
    FUN_00408a60(local_80,&PTR_s_default_0416b5a8,5,0x70,&LAB_0046c1b0);
    return;
  }
  FUN_00407970(DAT_0439e948,iVar1);
  return;
}


