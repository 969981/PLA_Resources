/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0329e184; name: FUN_0329e184
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0329e184(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  *param_1 = &PTR_LAB_04341a48;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  FUN_032c7a54(param_1 + 3);
  uVar2 = _UNK_0388a138;
  uVar1 = _DAT_0388a130;
  auVar3 = NEON_fmov(0x3f800000,4);
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[7] = auVar3._8_8_;
  param_1[6] = auVar3._0_8_;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  return;
}


