/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0180ed2c; name: FUN_0180ed2c
 */


undefined8 FUN_0180ed2c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  
  iVar1 = (int)param_1[0xd];
  if (iVar1 == 3) {
LAB_0180ed4c:
    (**(code **)(*param_1 + 0x48))(param_1);
    uVar2 = 1;
  }
  else {
    if (iVar1 == 2) {
      uVar3 = (*(code *)param_1[0x14])(param_1 + 0x18);
      if ((uVar3 & 1) != 0) {
        pcVar4 = (code *)param_1[0x15];
        if (pcVar4 != (code *)0x0) {
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          (*pcVar4)(param_1 + 0x18);
        }
        *(undefined4 *)(param_1 + 0xd) = 3;
        goto LAB_0180ed4c;
      }
    }
    else if (iVar1 == 1) {
      uVar3 = (*(code *)param_1[0x14])(param_1 + 0x18);
      if ((uVar3 & 1) != 0) {
        pcVar4 = (code *)param_1[0x15];
        if (pcVar4 != (code *)0x0) {
          param_1[0x16] = 0;
          param_1[0x17] = 0;
          param_1[0x14] = 0;
          param_1[0x15] = 0;
          (*pcVar4)(param_1 + 0x18);
        }
        param_1[0x14] = (long)&LAB_0180f7e8;
        param_1[0x15] = (long)&LAB_0180f81c;
        param_1[0x16] = (long)&LAB_0180f820;
        param_1[0x17] = (long)&LAB_0180f82c;
        param_1[0x18] = (long)param_1;
        *(undefined4 *)(param_1 + 0xd) = 2;
        return 0;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


