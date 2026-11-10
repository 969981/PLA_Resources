/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0313fd48; name: FUN_0313fd48
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0313fd48(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_LAB_042d9a40;
  param_1[1] = 0xffffffff;
  uVar2 = _UNK_0388a138;
  uVar1 = _DAT_0388a130;
  param_1[10] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb) = 0x3dcccccd;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[2] = 1;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 1;
  param_1[9] = 0;
  param_1[8] = 0;
  uVar2 = DAT_0388a148;
  uVar1 = DAT_0388a140;
  *(undefined8 *)((long)param_1 + 0x94) = 0x412000003d4ccccd;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x4120000000000004;
  *(undefined8 *)((long)param_1 + 0xa4) = 0x7f7fffee;
  *(undefined8 *)((long)param_1 + 0xac) = 0x3f8000003fc90fdb;
  *(undefined4 *)((long)param_1 + 0xb4) = 10;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}


