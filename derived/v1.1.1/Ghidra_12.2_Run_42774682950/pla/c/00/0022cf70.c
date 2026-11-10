/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0022cf70; name: FUN_0022cf70
 */


void FUN_0022cf70(byte *param_1,uint param_2)

{
  undefined8 *puVar1;
  
  if ((int)(uint)*param_1 < (int)param_2) {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_00232674();
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0] = 0;
      param_1[1] = 0;
    }
    puVar1 = (undefined8 *)FUN_00232654((ulong)param_2 << 5);
    *puVar1 = 0;
    *(undefined8 **)(param_1 + 8) = puVar1;
    if (puVar1 != (undefined8 *)0x0) {
      *param_1 = (byte)param_2;
    }
  }
  return;
}


