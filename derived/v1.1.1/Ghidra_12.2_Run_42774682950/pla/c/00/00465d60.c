/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00465d60; name: FUN_00465d60
 */


undefined8 FUN_00465d60(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 **ppuVar3;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined1 *local_18;
  
  local_18 = auStack_30;
  local_2c = param_2;
  uStack_28 = param_3;
  puVar1 = auStack_30;
  if ((DAT_0439e940 == 0) ||
     (iVar2 = FUN_00407710(DAT_0439e940,auStack_30), puVar1 = local_18, iVar2 < 0)) {
    local_18 = puVar1;
    ppuVar3 = (undefined1 **)FUN_00408a60(&local_18,&PTR_DAT_0416af98,0x2b,8,&LAB_00465e10);
    if (ppuVar3 == (undefined1 **)0x0) {
      return 0;
    }
  }
  else {
    local_18 = (undefined1 *)FUN_00407970(DAT_0439e940,iVar2);
    ppuVar3 = &local_18;
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *(undefined4 *)*ppuVar3;
  }
  return 1;
}


