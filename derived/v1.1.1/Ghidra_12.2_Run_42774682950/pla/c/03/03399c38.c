/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03399c38; name: FUN_03399c38
 */


undefined8 FUN_03399c38(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *local_30;
  char *pcStack_28;
  
  uVar2 = 0x80040200;
  local_30 = (char *)0x0;
  pcStack_28 = (char *)0x0;
  iVar1 = FUN_03399a74(param_1,param_2,&local_30);
  if ((((-1 < iVar1) && (local_30 != pcStack_28)) &&
      (*local_30 == '\"' && local_30 + 1 != pcStack_28)) && (pcStack_28[-1] == '\"')) {
    uVar2 = 0;
    *param_3 = local_30 + 1;
    param_3[1] = pcStack_28 + -1;
  }
  return uVar2;
}


