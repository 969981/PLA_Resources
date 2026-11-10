/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 03143d8c; name: FUN_03143d8c
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03143d8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[2] = 1;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *param_1 = &PTR_LAB_042daf78;
  param_1[1] = 0xffffffff;
  param_1[0x14] = 0x3a83126f3dcccccd;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x42960000;
  param_1[0x12] = 0x3fbecf9c3f860a92;
  param_1[0x13] = 0x41200000447a0000;
  uVar2 = DAT_0388a148;
  uVar1 = DAT_0388a140;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x3dcccccd;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[6] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  uVar2 = _UNK_0388a138;
  uVar1 = _DAT_0388a130;
  param_1[0xe] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xf) = 2;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}


