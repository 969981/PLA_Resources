/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0043e620; name: FUN_0043e620
 */


void FUN_0043e620(undefined8 *param_1,undefined4 param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 *local_160;
  undefined4 local_158 [70];
  
  local_160 = local_158;
  local_158[0] = param_2;
  if (DAT_0439e8b0 == 0) goto LAB_0043e69c;
LAB_0043e664:
  local_160 = local_158;
  iVar1 = FUN_00407710(DAT_0439e8b0,local_158);
  if (iVar1 < 0) goto LAB_0043e69c;
  lVar2 = FUN_00407970(DAT_0439e8b0,iVar1);
  do {
    if ((lVar2 == 0) || ((*(byte *)(lVar2 + 8) & 1) == 0)) {
LAB_0043e6c0:
      if (param_1 != (undefined8 *)0x0) {
        *param_1 = 0;
      }
      return;
    }
    local_158[0] = *(undefined4 *)(lVar2 + 4);
    local_160 = local_158;
    if (DAT_0439e8b0 != 0) goto LAB_0043e664;
LAB_0043e69c:
    plVar3 = (long *)FUN_00408a60(&local_160,&PTR_DAT_04165d50,0x14,8,&LAB_0043e840);
    if (plVar3 == (long *)0x0) goto LAB_0043e6c0;
    lVar2 = *plVar3;
  } while( true );
}


