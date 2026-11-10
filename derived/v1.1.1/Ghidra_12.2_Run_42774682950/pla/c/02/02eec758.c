/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eec758; name: FUN_02eec758
 */


float FUN_02eec758(long param_1,undefined8 param_2)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x108) - *(float *)(param_1 + 0x104);
  if (fVar3 == 0.0) {
    fVar3 = 0.0;
  }
  else {
    DAT_0440a190 = DAT_0440a190 * 0x5851f42d4c957f2d + 1;
    fVar3 = fVar3 * 4.656613e-10 * (float)(uint)((ulong)DAT_0440a190 >> 0x21);
  }
  fVar3 = *(float *)(param_1 + 0x104) + *(float *)(param_1 + 0x100) + fVar3;
  if (((*(long *)(param_1 + 0x38) != 0) && (*(char *)(*(long *)(param_1 + 0x38) + 1) < '\0')) ||
     (uVar1 = (**(code **)(*(long *)(param_1 + 0x18) + 0x20))((long *)(param_1 + 0x18),0xf),
     (uVar1 & 1) != 0)) {
    fVar2 = (float)FUN_02ed2e94(param_1,0xf,param_2);
    fVar3 = fVar3 + fVar2 * 1000.0;
  }
  return fVar3;
}


