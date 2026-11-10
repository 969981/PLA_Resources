/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02dfff38; name: FUN_02dfff38
 */


undefined8 FUN_02dfff38(int *param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  *param_3 = (short)param_2;
  if ((short)param_1[3] != 0) {
    uVar1 = *param_1 * (int)(short)param_1[3];
    uVar2 = uVar1 - param_1[1];
    if (uVar1 < (uint)param_1[1] || uVar2 == 0) {
      uVar2 = 0;
      uVar3 = 0x11;
      *param_3 = 0;
      goto LAB_02dfff60;
    }
    if (uVar2 <= (param_2 & 0xffff)) {
      *param_3 = (short)uVar2;
      uVar3 = 0x11;
      goto LAB_02dfff60;
    }
  }
  uVar3 = 0x2d;
  uVar2 = param_2;
LAB_02dfff60:
  param_1[1] = param_1[1] + (uVar2 & 0xffff);
  return uVar3;
}


