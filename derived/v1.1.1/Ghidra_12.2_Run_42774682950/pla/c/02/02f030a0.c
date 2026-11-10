/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f030a0; name: FUN_02f030a0
 */


void FUN_02f030a0(uint param_1,uint param_2,uint param_3,ushort param_4,uint *param_5,
                 ushort *param_6)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  
  *param_6 = param_4;
  if (((param_4 == 1) || (param_1 <= param_3)) || (param_3 < param_2 || param_3 - param_2 == 0)) {
    *param_5 = param_1;
    return;
  }
  uVar1 = (param_3 - param_2) + 1;
  uVar4 = 0;
  if (uVar1 != 0) {
    uVar4 = (param_1 - param_2) / uVar1;
  }
  uVar2 = (uint)param_4;
  if ((uVar2 != 0) && (uVar2 <= uVar4)) {
    *param_5 = param_1 - (uVar2 - 1) * uVar1;
    *param_6 = 1;
    return;
  }
  uVar3 = 0;
  if (param_4 != 0) {
    uVar3 = param_4 - (short)uVar4;
  }
  *param_6 = uVar3;
  *param_5 = ((param_1 - param_2) - uVar4 * uVar1) + param_2;
  return;
}


