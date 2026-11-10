/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ffbe18; name: FUN_02ffbe18
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02ffbe18(float param_1,long param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (0.0 < param_1) {
    fVar1 = param_1 * 4.1887903 * param_1 * param_1;
    *param_4 = fVar1;
    fVar3 = *(float *)(param_2 + 0x20);
    fVar1 = -(fVar1 * fVar3);
    if (0.0 <= fVar3) {
      fVar1 = fVar3;
    }
    param_4[1] = fVar1;
    fVar1 = *(float *)(param_2 + 0x1c) * param_1 * param_1 * 0.4 * fVar1;
    *(ulong *)(param_4 + 10) = CONCAT44(fVar1,fVar1);
    *(ulong *)(param_4 + 8) = CONCAT44(fVar1,fVar1);
    uVar2 = *param_3;
    *(ulong *)(param_4 + 6) = param_3[1] & 0xffffffff;
    *(undefined8 *)(param_4 + 4) = uVar2;
    uVar2 = _DAT_0388a130;
    *(undefined8 *)(param_4 + 0xe) = _UNK_0388a138;
    *(undefined8 *)(param_4 + 0xc) = uVar2;
    return 0;
  }
  return 0x80040200;
}


