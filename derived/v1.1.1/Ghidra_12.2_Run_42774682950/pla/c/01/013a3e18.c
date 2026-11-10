/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013a3e18; name: FUN_013a3e18
 */


void FUN_013a3e18(undefined1 *param_1,char *param_2)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  if (*param_2 != '\0') {
    uVar1 = *(undefined4 *)(param_2 + 8);
    param_1[0xc] = param_2[0xc];
    *(undefined4 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    FUN_013a3ec0(param_1 + 0x18,param_2 + 0x18);
    *(undefined2 *)(param_1 + 0x50) = *(undefined2 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
    FUN_01396868(param_1 + 0x60,param_2 + 0x60);
    param_1[0x98] = 0;
    if (param_2[0x98] != '\0') {
      memcpy(param_1 + 0xa0,param_2 + 0xa0,0x2c8);
      param_1[0x98] = 1;
    }
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x370);
    *param_1 = 1;
  }
  return;
}


