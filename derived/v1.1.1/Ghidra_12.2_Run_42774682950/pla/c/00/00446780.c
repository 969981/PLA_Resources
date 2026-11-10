/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00446780; name: FUN_00446780
 */


undefined8
FUN_00446780(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 local_48;
  int iStack_44;
  
  if (param_2 == 0) {
    return 0;
  }
  local_48 = param_1;
  iStack_44 = param_2;
  if (DAT_0439e910 != 0) {
    uVar1 = FUN_00407710(DAT_0439e910,&local_48);
    lVar2 = FUN_00407970(DAT_0439e910,uVar1);
    if (lVar2 != 0) goto LAB_004467ec;
  }
  lVar2 = FUN_00408a60(&local_48,&DAT_04166350,0x1d,0x18,&LAB_00446830);
  if (lVar2 == 0) {
    return 0;
  }
LAB_004467ec:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(lVar2 + 8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(lVar2 + 0xc);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = *(undefined8 *)(lVar2 + 0x10);
  }
  return 1;
}


