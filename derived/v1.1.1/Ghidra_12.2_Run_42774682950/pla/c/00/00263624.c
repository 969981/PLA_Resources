/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00263624; name: FUN_00263624
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00263624(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  FUN_0022ce0c(param_1,*(undefined8 *)(param_2 + 0x10));
  *param_1 = (long)(PTR_DAT_04372e38 + 0x10);
  lVar4 = DAT_0388a148;
  lVar3 = DAT_0388a140;
  lVar2 = _UNK_03889a88;
  lVar1 = _DAT_03889a80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0x100000001;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[9] = lVar2;
  param_1[8] = lVar1;
  param_1[0xb] = lVar4;
  param_1[10] = lVar3;
  lVar4 = _UNK_0388a138;
  lVar3 = _DAT_0388a130;
  lVar2 = _UNK_03888d18;
  lVar1 = _DAT_03888d10;
  param_1[0x24] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2e] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0xd] = lVar2;
  param_1[0xc] = lVar1;
  param_1[0xf] = lVar4;
  param_1[0xe] = lVar3;
  FUN_0087ee04(param_1 + 0x2f);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)(param_1 + 0x2b) = *(byte *)(param_1 + 0x2b) & 0xfc | 1;
  FUN_0026290c(param_1 + 4,param_2 + 0x20,param_3,param_4);
  *(undefined4 *)((long)param_1 + 0x154) = *(undefined4 *)(param_2 + 0x154);
  FUN_00263734(param_1,param_3,param_4);
  return;
}


