/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037b334; name: FUN_0037b334
 */


undefined8 FUN_0037b334(long param_1)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58 [3];
  
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[0] = 0;
                    /* try { // try from 0037b354 to 0037b35b has its CatchHandler @ 0037b4f8 */
  uVar4 = FUN_00378994(param_1,local_58);
  if ((uVar4 & 1) != 0) {
    do {
      uStack_68 = 0;
      local_60 = 0;
      local_70 = 0x2e02;
      bVar3 = *(byte *)(param_1 + 0x30);
      uVar5 = (ulong)(bVar3 >> 1);
      uVar4 = uVar5;
      if ((bVar3 & 1) != 0) {
        uVar4 = *(ulong *)(param_1 + 0x38);
      }
      if (uVar4 != 1) goto LAB_0037b4c8;
      if ((bVar3 & 1) == 0) {
        if (*(char *)(param_1 + 0x31) == '.') {
          pcVar6 = (char *)((ulong)&local_70 | 2);
          pcVar7 = (char *)(param_1 + 0x32);
          uVar4 = uVar5;
          do {
            uVar4 = uVar4 - 1;
            if (uVar4 == 0) goto LAB_0037b3f8;
            cVar1 = *pcVar6;
            cVar2 = *pcVar7;
            pcVar6 = pcVar6 + 1;
            pcVar7 = pcVar7 + 1;
          } while (cVar2 == cVar1);
        }
LAB_0037b404:
        uStack_80 = 0;
        local_78 = 0;
        local_88 = 0x2f02;
        if ((bVar3 & 1) == 0) {
          if (*(char *)(param_1 + 0x31) == '/') {
            pcVar6 = (char *)((ulong)&local_88 | 2);
            pcVar7 = (char *)(param_1 + 0x32);
            while (uVar5 = uVar5 - 1, uVar5 != 0) {
              cVar1 = *pcVar6;
              cVar2 = *pcVar7;
              pcVar6 = pcVar6 + 1;
              pcVar7 = pcVar7 + 1;
              if (cVar2 != cVar1) goto LAB_0037b4c8;
            }
LAB_0037b468:
                    /* try { // try from 0037b468 to 0037b46f has its CatchHandler @ 0037b4e8 */
            FUN_003a0640(param_1 + 0x28);
            goto LAB_0037b470;
          }
        }
        else if (**(char **)(param_1 + 0x40) == '/') goto LAB_0037b468;
LAB_0037b4c8:
        local_78 = 0;
        uStack_80 = 0;
        local_88 = 0x2f02;
        uVar8 = 1;
        if ((local_58[0] & 1) == 0) {
          return 1;
        }
        goto LAB_0037b48c;
      }
      if (**(char **)(param_1 + 0x40) != '.') goto LAB_0037b404;
LAB_0037b3f8:
                    /* try { // try from 0037b3f8 to 0037b3ff has its CatchHandler @ 0037b4d8 */
      FUN_003a0640(param_1 + 0x28);
LAB_0037b470:
                    /* try { // try from 0037b470 to 0037b47b has its CatchHandler @ 0037b508 */
      uVar4 = FUN_00378994(param_1,local_58);
    } while ((uVar4 & 1) != 0);
  }
  uVar8 = 0;
  if ((local_58[0] & 1) != 0) {
LAB_0037b48c:
    FUN_002e2ea0(PTR_LAB_04373088,local_58[2]);
  }
  return uVar8;
}


