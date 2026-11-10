/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00253dfc; name: FUN_00253dfc
 */


void FUN_00253dfc(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  
  local_2c = (float)NEON_ucvtf((uint)*(ushort *)(param_1 + 0xdc));
  fVar2 = *(float *)(param_1 + 0x50);
  local_28 = 0;
  local_30 = fVar2 - local_2c;
  uVar1 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0xde));
  *(undefined4 *)(param_1 + 0x54) = uVar1;
  *(byte *)(param_1 + 0x58) = *(byte *)(param_1 + 0x58) | 0x10;
  local_38 = FUN_00242da4();
  fStack_34 = fVar2;
  if (*(char *)(param_1 + 0x109) == '\x02') {
    FUN_00256048(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30,
                 *(undefined1 *)(param_1 + 0x5a));
    return;
  }
  if (*(char *)(param_1 + 0x109) == '\x01') {
    FUN_00255c18(param_1,param_2,&local_38,*(undefined8 *)(param_1 + 0x110),&local_30,
                 *(undefined1 *)(param_1 + 0x5a));
  }
  return;
}


