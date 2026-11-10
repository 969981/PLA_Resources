/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013620fc; name: FUN_013620fc
 */


void FUN_013620fc(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = FUN_01362160();
  *(undefined4 *)(param_3 + 0xb8) = uVar1;
  fVar2 = (float)FUN_01362160(param_2);
  *(float *)(param_3 + 0xbc) = fVar2;
  if (fVar2 < 0.0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x42b40000;
    if (fVar2 <= 90.0) goto LAB_0136214c;
  }
  *(undefined4 *)(param_3 + 0xbc) = uVar1;
LAB_0136214c:
  FUN_013634c4(param_3);
  return;
}


