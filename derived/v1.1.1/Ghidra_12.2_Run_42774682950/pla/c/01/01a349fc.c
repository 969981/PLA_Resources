/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01a349fc; name: FUN_01a349fc
 */


void FUN_01a349fc(long param_1)

{
  long lVar1;
  undefined4 extraout_s0;
  float fVar2;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  float fVar3;
  
  FUN_01a4b7e0();
  lVar1 = *(long *)(param_1 + 0xe2b0);
  *(undefined8 *)(lVar1 + 0xe4) = 0;
  *(undefined8 *)(lVar1 + 0x44) = 0;
  *(undefined8 *)(lVar1 + 0x94) = 0;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 0;
  *(undefined8 *)(lVar1 + 0xf0) = 0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  if (*(char *)(lVar1 + 0x140) != '\0') {
    *(undefined1 *)(lVar1 + 0x140) = 0;
  }
  lVar1 = *(long *)(param_1 + 0xe2d0);
  *(undefined4 *)(lVar1 + 0x74) = 0;
  *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar1 + 0x50);
  *(undefined4 *)(lVar1 + 0x38) = *(undefined4 *)(lVar1 + 0x40);
  *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar1 + 0x40);
  *(undefined8 *)(lVar1 + 0x18) = extraout_var_00;
  *(ulong *)(lVar1 + 0x10) = CONCAT44(extraout_var,extraout_s0);
  *(undefined8 *)(lVar1 + 0x28) = extraout_var_00;
  *(ulong *)(lVar1 + 0x20) = CONCAT44(extraout_var,extraout_s0);
  fVar2 = 0.0;
  fVar3 = 0.0;
  if (0 < *(int *)(lVar1 + 0x58)) {
    fVar3 = ABS(1.0 / (float)*(int *)(lVar1 + 0x58));
  }
  *(float *)(lVar1 + 0x78) = fVar3;
  *(undefined4 *)(lVar1 + 0x7c) = 0;
  if (0 < *(int *)(lVar1 + 0x6c)) {
    fVar2 = ABS(1.0 / (float)*(int *)(lVar1 + 0x6c));
  }
  *(float *)(lVar1 + 0x80) = fVar2;
  return;
}


