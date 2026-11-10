/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00377df8; name: FUN_00377df8
 */


uint FUN_00377df8(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  byte local_90 [8];
  ulong local_88;
  ulong local_80;
  ulong local_78 [3];
  
  uVar6 = FUN_00378994(param_1,param_3);
  puVar3 = PTR_LAB_04373088;
  if ((uVar6 & 1) != 0) {
    bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    uVar6 = uVar7;
    if (!bVar4) {
      uVar6 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar6 == 1) {
      if (bVar4) goto LAB_00377ec4;
      while (**(char **)(param_1 + 0x40) == '.') {
        while( true ) {
                    /* try { // try from 00377f0c to 00377f13 has its CatchHandler @ 00378098 */
          local_78[2] = 0;
          local_78[1] = 0;
          local_78[0] = 0x2e02;
          FUN_003a0640(param_1 + 0x28);
          local_78[1] = 0;
          local_78[2] = 0;
          local_78[0] = 0;
                    /* try { // try from 00377f1c to 00377f27 has its CatchHandler @ 00378074 */
          uVar6 = FUN_00378994(param_1,local_78);
          if ((uVar6 & 1) == 0) {
            if ((local_78[0] & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_78[2]);
            }
            goto LAB_00378004;
          }
                    /* try { // try from 00377f2c to 00377f3b has its CatchHandler @ 00378064 */
          FUN_0034b2f0(local_90,&DAT_0389ff53,local_78);
          uVar6 = (ulong)(local_90[0] >> 1);
          uVar7 = (ulong)local_90 | 1;
          if ((local_90[0] & 1) != 0) {
            uVar6 = local_88;
            uVar7 = local_80;
          }
                    /* try { // try from 00377f54 to 00377f5b has its CatchHandler @ 0037803c */
          FUN_002e4094(param_3,uVar7,uVar6);
          if ((local_90[0] & 1) != 0) {
            FUN_002e2ea0(puVar3,local_80);
          }
          if ((local_78[0] & 1) != 0) {
            FUN_002e2ea0(puVar3,local_78[2]);
          }
          bVar4 = (*(byte *)(param_1 + 0x30) & 1) != 0;
          uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
          uVar6 = uVar7;
          if (bVar4) {
            uVar6 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar6 != 1) goto LAB_00377f88;
          if (bVar4) break;
LAB_00377ec4:
          if (*(char *)(param_1 + 0x31) != '.') goto LAB_00377f88;
          pcVar8 = (char *)((ulong)local_78 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          while (uVar7 = uVar7 - 1, uVar7 != 0) {
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            if (cVar2 != cVar1) goto LAB_00377f88;
          }
        }
      }
    }
LAB_00377f88:
    local_78[1] = 0;
    local_78[2] = 0;
    local_78[0] = 0x2f02;
                    /* try { // try from 00377f9c to 00377fa7 has its CatchHandler @ 0037802c */
    uVar6 = FUN_003780a4(param_1,local_78);
    if ((local_78[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_78[2]);
    }
    if ((uVar6 & 1) != 0) {
      FUN_002e4094(param_3,&DAT_0389ffa9,1);
      uVar5 = FUN_003787b0(param_1,param_2);
      goto LAB_00378008;
    }
  }
LAB_00378004:
  uVar5 = 0;
LAB_00378008:
  return uVar5 & 1;
}


