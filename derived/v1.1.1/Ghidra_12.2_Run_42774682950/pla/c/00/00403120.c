/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00403120; name: FUN_00403120
 */


undefined4
FUN_00403120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 *local_50;
  undefined1 *puStack_48;
  undefined1 *puStack_40;
  undefined8 uStack_38;
  int local_2c;
  ulong local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  puStack_40 = auStack_a0;
  puStack_48 = auStack_a0 + 0x30;
  uStack_38 = 0xffffff80ffffffd8;
  local_98 = param_5;
  uStack_90 = param_6;
  local_88 = param_7;
  uStack_80 = param_8;
  local_78 = param_9;
  local_50 = (undefined1 *)register0x00000008;
  local_20 = param_3;
  uStack_18 = param_2;
  iVar1 = FUN_004026b0(&uStack_18,0,&local_20,&local_28,&local_2c,param_4,&local_50,param_9,param_1)
  ;
  uVar2 = 0xffffffff;
  if (((iVar1 != 0) && (local_2c == 0)) && (uVar2 = (undefined4)local_28, local_28 >> 0x1f != 0)) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


