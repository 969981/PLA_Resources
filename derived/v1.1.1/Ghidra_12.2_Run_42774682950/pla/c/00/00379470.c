/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00379470; name: FUN_00379470
 */


uint FUN_00379470(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58 [3];
  
  local_58[2] = 0;
  local_58[0] = 0;
  local_58[1] = 0;
                    /* try { // try from 0037948c to 00379493 has its CatchHandler @ 00379604 */
  uVar6 = FUN_0037ac2c(param_1,local_58);
  if ((uVar6 & 1) != 0) {
    do {
      uStack_68 = 0;
      local_60 = 0;
      local_70 = 0x3e02;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar7 = (ulong)(bVar3 >> 1);
      uVar6 = uVar7;
      if ((bVar3 & 1) != 0) {
        uVar6 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar6 == 1) {
        if ((bVar3 & 1) != 0) {
          if (**(char **)(param_1 + 0x40) != '>') goto LAB_00379540;
LAB_003795e8:
                    /* try { // try from 003795e8 to 003795f3 has its CatchHandler @ 00379604 */
          uVar5 = FUN_003780a4(param_1,local_58);
          uVar4 = uVar5;
          if ((local_58[0] & 1) == 0) goto LAB_003795cc;
          goto LAB_003795bc;
        }
        if (*(char *)(param_1 + 0x31) == '>') {
          pcVar8 = (char *)((ulong)&local_70 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          uVar6 = uVar7;
          do {
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_003795e8;
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
          } while (cVar2 == cVar1);
        }
LAB_00379540:
        uStack_80 = 0;
        local_78 = 0;
        local_88 = 0x7d02;
        if ((bVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '}') {
            pcVar8 = (char *)((ulong)&local_88 | 2);
            pcVar9 = (char *)(param_1 + 0x32);
            do {
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_003795e8;
              cVar1 = *pcVar8;
              cVar2 = *pcVar9;
              pcVar8 = pcVar8 + 1;
              pcVar9 = pcVar9 + 1;
            } while (cVar2 == cVar1);
          }
        }
        else if (**(char **)(param_1 + 0x40) == '}') goto LAB_003795e8;
      }
      local_78 = 0;
      uStack_80 = 0;
                    /* try { // try from 003795a4 to 003795ab has its CatchHandler @ 00379614 */
      local_88 = 0x7d02;
      uVar6 = FUN_0037aef8(param_1);
    } while ((uVar6 & 1) != 0);
  }
  uVar5 = 0;
  uVar4 = 0;
  if ((local_58[0] & 1) != 0) {
LAB_003795bc:
    uVar5 = uVar4;
    FUN_002e2ea0(PTR_LAB_04373088,local_58[2]);
  }
LAB_003795cc:
  return uVar5 & 1;
}


