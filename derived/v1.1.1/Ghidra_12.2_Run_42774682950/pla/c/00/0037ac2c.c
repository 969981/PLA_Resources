/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037ac2c; name: FUN_0037ac2c
 */


undefined8 FUN_0037ac2c(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulong local_38 [3];
  
  local_38[2] = 0;
  local_38[1] = 0;
  local_38[0] = 0x3c02;
  bVar3 = *(byte *)(param_1 + 0x30);
  uVar6 = (ulong)(bVar3 >> 1);
  uVar4 = uVar6;
  if ((bVar3 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x38);
  }
  if (uVar4 == 1) {
    if ((bVar3 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '<') {
        pcVar7 = (char *)(param_1 + 0x32);
        pcVar8 = (char *)((ulong)local_38 | 2);
        do {
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_0037acb8;
          cVar1 = *pcVar8;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          pcVar8 = pcVar8 + 1;
        } while (cVar2 == cVar1);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '<') {
LAB_0037acb8:
                    /* try { // try from 0037acbc to 0037acbf has its CatchHandler @ 0037ad3c */
      FUN_003a0640(param_1 + 0x28);
      puVar5 = &DAT_0391821c;
      goto LAB_0037ad10;
    }
  }
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[0] = 0x7b02;
                    /* try { // try from 0037ace0 to 0037ace7 has its CatchHandler @ 0037ad48 */
  uVar4 = FUN_003780a4(param_1,local_38);
  if ((local_38[0] & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_38[2]);
  }
  if ((uVar4 & 1) == 0) {
    return 0;
  }
  puVar5 = &DAT_0391817e;
LAB_0037ad10:
  FUN_00291910(param_2,puVar5,1);
  return 1;
}


