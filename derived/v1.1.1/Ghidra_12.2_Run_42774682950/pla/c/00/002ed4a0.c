/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002ed4a0; name: FUN_002ed4a0
 */


char * FUN_002ed4a0(uint param_1,char *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  
  puVar1 = PTR_DAT_04373820;
  if (param_1 < 1000000000) {
    if (param_1 < 100) {
      if (param_1 < 10) {
        *(undefined2 *)param_2 = *(undefined2 *)(&DAT_039f8e3d + (ulong)param_1 * 2);
        return param_2 + 1;
      }
      goto LAB_002ed560;
    }
    if (0x270 < param_1 >> 4) {
      if (999999 < param_1) {
        if (99999999 < param_1) {
          pcVar2 = param_2 + 1;
          *param_2 = (char)(param_1 / 100000000) + '0';
          goto LAB_002ed4d8;
        }
        uVar3 = param_1 / 1000000;
        if (9999999 < param_1) goto LAB_002ed4f0;
        param_1 = param_1 % 1000000;
        *param_2 = (char)uVar3 + '0';
        param_2 = param_2 + 1;
        goto joined_r0x002ed660;
      }
      uVar3 = (uint)((ulong)param_1 * 0xd1b71759 >> 0x20);
      if (0xc34 < param_1 >> 5) goto LAB_002ed51c;
      uVar3 = param_1 / 10000;
      param_1 = param_1 % 10000;
      *param_2 = (char)uVar3 + '0';
      param_2 = param_2 + 1;
      goto joined_r0x002ed624;
    }
    uVar3 = (uint)((ulong)(param_1 & 0xffff) * 0x51eb851f >> 0x20);
    if (999 < param_1) goto LAB_002ed548;
    uVar3 = (param_1 & 0xffff) / 100;
    param_1 = param_1 + uVar3 * -100;
    *param_2 = (char)uVar3 + '0';
    param_2 = param_2 + 1;
  }
  else {
    pcVar2 = param_2 + 2;
    *(undefined2 *)param_2 = *(undefined2 *)(PTR_DAT_04373820 + (ulong)(param_1 / 100000000) * 2);
LAB_002ed4d8:
    param_1 = param_1 % 100000000;
    if (99999999 < param_1) goto LAB_002ed664;
    uVar3 = param_1 / 1000000;
    param_2 = pcVar2;
LAB_002ed4f0:
    param_1 = param_1 + uVar3 * -1000000;
    *(undefined2 *)param_2 = *(undefined2 *)(puVar1 + (ulong)uVar3 * 2);
    param_2 = param_2 + 2;
joined_r0x002ed660:
    if (999999 < param_1) goto LAB_002ed664;
    uVar3 = (uint)((ulong)param_1 * 0xd1b71759 >> 0x20);
LAB_002ed51c:
    param_1 = param_1 + (uVar3 >> 0xd) * -10000;
    *(undefined2 *)param_2 = *(undefined2 *)(puVar1 + (ulong)(uVar3 >> 0xd) * 2);
    param_2 = param_2 + 2;
joined_r0x002ed624:
    if (0x270 < param_1 >> 4) goto LAB_002ed664;
    uVar3 = (uint)((ulong)param_1 * 0x51eb851f >> 0x20);
LAB_002ed548:
    param_1 = param_1 + (uVar3 >> 5) * -100;
    *(undefined2 *)param_2 = *(undefined2 *)(puVar1 + (ulong)(uVar3 >> 5) * 2);
    param_2 = param_2 + 2;
  }
  if (param_1 < 100) {
LAB_002ed560:
    *(undefined2 *)param_2 = *(undefined2 *)(puVar1 + (ulong)param_1 * 2);
    param_2[2] = '\0';
    return param_2 + 2;
  }
LAB_002ed664:
                    /* WARNING: Subroutine does not return */
  __assert_fail("i < 100","external/com_google_absl\\absl/strings/numbers.h",0x7b,"PutTwoDigits");
}


