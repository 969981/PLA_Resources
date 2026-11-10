/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00248248; name: FUN_00248248
 */


void FUN_00248248(long *param_1,long param_2,int param_3,float *param_4,float *param_5)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float __x;
  float local_58;
  float fStack_54;
  float local_48;
  float local_44;
  
  lVar2 = *(long *)(*(long *)(param_2 + 200) + 0x38);
  (**(code **)(*(long *)*param_1 + 0x60))((long *)*param_1,&local_58);
  (**(code **)(*(long *)*param_1 + 0x68))((long *)*param_1,&local_48);
  fVar3 = (float)(**(code **)(*(long *)*param_1 + 0x70))();
  lVar1 = *param_1;
  if ((*(byte *)(lVar1 + 0x5b) & 3) == 2) {
    local_48 = fVar3 + local_48;
  }
  else if ((*(byte *)(lVar1 + 0x5b) & 3) != 0) {
    local_48 = local_48 - fVar3;
  }
  lVar2 = lVar2 + param_3;
  local_48 = local_48 - (*param_5 - local_58) * 0.5;
  local_44 = local_44 + (param_5[1] - fStack_54) * 0.5;
  if (0.0 < param_4[1]) {
    __x = *param_4 * (*(float *)PTR_FloatPi_04372cf0 / *(float *)PTR_FloatDegree180_04372ce0);
    fVar3 = cosf(__x);
    local_48 = local_48 - fVar3 * param_4[1];
    fVar3 = sinf(__x);
    local_44 = local_44 - fVar3 * param_4[1];
    lVar1 = *param_1;
  }
  fVar3 = (float)NEON_ucvtf((uint)*(byte *)(lVar1 + 0x5a));
  *(float *)(lVar2 + 0xdc) = (fVar3 / 255.0) / 255.0;
  FUN_0022d1f0(param_2,lVar2,&local_48,param_5,1,&DAT_039cfc04);
  return;
}


