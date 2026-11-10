/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00aad61c; name: FUN_00aad61c
 */


void FUN_00aad61c(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if ((param_2 & 0xff) < 0x12) {
    uVar3 = -(((ulong)param_2 & 0x80) >> 7) & 0xfffffffffffff800 | ((ulong)param_2 & 0xff) << 3;
    uVar1 = *(undefined8 *)(&DAT_03a77870 + uVar3);
    pcVar2 = *(char **)((long)&PTR_s_00_normal_041d1dd0 + uVar3);
    uVar4 = *(undefined8 *)(&DAT_03a77900 + uVar3);
  }
  else {
    uVar1 = 0xc87791e4d2a7a745;
    uVar4 = 9;
    pcVar2 = "00_normal";
  }
  *param_1 = uVar1;
  param_1[1] = pcVar2;
  param_1[2] = uVar4;
  param_1[3] = 0;
  return;
}


