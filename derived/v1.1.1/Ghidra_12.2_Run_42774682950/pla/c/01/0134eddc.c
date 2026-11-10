/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0134eddc; name: FUN_0134eddc
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0134eddc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  float fVar4;
  
  uVar2 = _UNK_038890a8;
  uVar1 = _DAT_038890a0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x44700000c4700000;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x44070000c4070000;
  *(undefined4 *)(param_1 + 4) = 0x3fe38e39;
  *(undefined8 *)((long)param_1 + 0x14) = 0x447a00003dcccccd;
  puVar3 = PTR_FloatDegree180_04372ce0;
  fVar4 = *(float *)PTR_FloatPi_04372cf0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  *(float *)((long)param_1 + 0x1c) = (fVar4 / *(float *)puVar3) * 50.0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  return;
}


