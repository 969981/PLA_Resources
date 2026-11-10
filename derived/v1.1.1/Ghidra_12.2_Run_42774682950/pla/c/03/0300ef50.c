/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0300ef50; name: FUN_0300ef50
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0300ef50(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *param_1 = &PTR_LAB_042da870;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 7;
  FUN_0300f018(param_1 + 6);
  uVar8 = DAT_0388a148;
  uVar7 = DAT_0388a140;
  uVar6 = _UNK_0388a138;
  uVar5 = _DAT_0388a130;
  uVar4 = _UNK_03889a88;
  uVar3 = _DAT_03889a80;
  uVar2 = _UNK_03888d18;
  uVar1 = _DAT_03888d10;
  param_1[9] = _UNK_03889a88;
  param_1[8] = uVar3;
  param_1[0xb] = uVar8;
  param_1[10] = uVar7;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar6;
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar8;
  param_1[0x12] = uVar7;
  param_1[0x15] = uVar2;
  param_1[0x14] = uVar1;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  *(undefined8 *)((long)param_1 + 0x124) = 0x7f7fffeeff7fffee;
  *(undefined4 *)((long)param_1 + 0xc2) = 0x500000;
  *(undefined2 *)((long)param_1 + 0xc6) = 0x54;
  *(undefined4 *)((long)param_1 + 0xf2) = 0x3020100;
  *(undefined1 *)((long)param_1 + 0x122) = 0;
  *(undefined4 *)((long)param_1 + 0xe4) = 0;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((long)param_1 + 0x102) = 1;
  *(undefined1 *)((long)param_1 + 0x112) = 2;
  return;
}


