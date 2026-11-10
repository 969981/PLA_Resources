/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00347438; name: FUN_00347438
 */


void FUN_00347438(char *param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  byte local_68 [8];
  ulong local_60;
  ulong local_58;
  
  puVar3 = PTR_LAB_04373088;
  if (*param_1 != '\0') {
    lVar4 = *(long *)(param_1 + 0x48);
    if (*(long *)(param_1 + 0x50) != lVar4) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        FUN_00364e80(local_68,param_1,lVar4 + lVar5);
        uVar1 = (ulong)(local_68[0] >> 1);
        uVar2 = (ulong)local_68 | 1;
        if ((local_68[0] & 1) != 0) {
          uVar1 = local_60;
          uVar2 = local_58;
        }
                    /* try { // try from 003474f0 to 003474f7 has its CatchHandler @ 003475a8 */
        FUN_002e4094(param_2,uVar2,uVar1);
        if ((local_68[0] & 1) != 0) {
          FUN_002e2ea0(puVar3,local_58);
        }
        FUN_002e4094(param_2,&DAT_0396725e,1);
        lVar4 = *(long *)(param_1 + 0x48);
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x18;
      } while (uVar6 < (ulong)((*(long *)(param_1 + 0x50) - lVar4 >> 3) * -0x5555555555555555));
    }
    if ((param_1[0x18] & 1U) == 0) {
      if ((byte)param_1[0x18] >> 1 == 0) {
        return;
      }
    }
    else if (*(long *)(param_1 + 0x20) == 0) {
      return;
    }
    FUN_00364e80(local_68,param_1);
    uVar6 = (ulong)(local_68[0] >> 1);
    uVar1 = (ulong)local_68 | 1;
    if ((local_68[0] & 1) != 0) {
      uVar6 = local_60;
      uVar1 = local_58;
    }
                    /* try { // try from 0034755c to 00347563 has its CatchHandler @ 00347598 */
    FUN_002e4094(param_2,uVar1,uVar6);
    if ((local_68[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_58);
    }
  }
  return;
}


