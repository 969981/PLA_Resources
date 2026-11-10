/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005767f0; name: FUN_005767f0
 */


void FUN_005767f0(long *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  ulong uVar6;
  
  *param_1 = (long)(PTR_DAT_04374dc8 + 0x10);
  puVar2 = (ulong *)(param_1 + 8);
  uVar1 = *puVar2;
  if ((uVar1 & 1) == 0) {
    plVar4 = param_1 + 9;
joined_r0x0057683c:
    if (uVar1 >> 1 != 0) {
      uVar6 = uVar1 >> 1;
      plVar5 = plVar4 + uVar6;
      do {
        plVar5 = plVar5 + -1;
        uVar6 = uVar6 - 1;
        FUN_00576dbc(plVar5);
      } while (uVar6 != 0);
    }
    memset(plVar4,0xab,(uVar1 >> 1) << 3);
    if ((*puVar2 & 1) != 0) {
      lVar3 = param_1[9];
      goto LAB_0057687c;
    }
  }
  else {
    plVar4 = (long *)param_1[9];
    lVar3 = 0;
    if (plVar4 != (long *)0x0) goto joined_r0x0057683c;
LAB_0057687c:
    FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  }
  param_1[8] = 0;
                    /* try { // try from 00576894 to 00576897 has its CatchHandler @ 00576934 */
  FUN_002ef710(param_1 + 3);
  uVar1 = *puVar2;
  if ((uVar1 & 1) == 0) {
    plVar4 = param_1 + 9;
  }
  else {
    plVar4 = (long *)param_1[9];
    if (plVar4 == (long *)0x0) {
      lVar3 = 0;
      goto LAB_00576918;
    }
  }
  if (uVar1 >> 1 != 0) {
    uVar6 = uVar1 >> 1;
    plVar5 = plVar4 + uVar6;
    do {
      plVar5 = plVar5 + -1;
      uVar6 = uVar6 - 1;
      FUN_00576dbc(plVar5);
    } while (uVar6 != 0);
  }
  memset(plVar4,0xab,(uVar1 >> 1) << 3);
  if ((*puVar2 & 1) == 0) {
    return;
  }
  lVar3 = param_1[9];
LAB_00576918:
  FUN_002e2ea0(PTR_LAB_04373088,lVar3);
  return;
}


