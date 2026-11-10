/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00465cd0; name: FUN_00465cd0
 */


undefined8 FUN_00465cd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_30 [4];
  
  local_30[0] = param_1;
  if (DAT_0439e938 != 0) {
    uVar1 = FUN_00407710(DAT_0439e938,local_30);
    lVar2 = FUN_00407970(DAT_0439e938,uVar1);
    if (lVar2 != 0) goto LAB_00465d30;
  }
  lVar2 = FUN_00408a60(local_30,&DAT_03a0c688,0x30,0xc,&LAB_00465e00);
  if (lVar2 == 0) {
    return 0;
  }
LAB_00465d30:
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(lVar2 + 4);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  return 1;
}


