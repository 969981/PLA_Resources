/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 003787b0; name: FUN_003787b0
 */


undefined8 FUN_003787b0(long param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  char *pcVar9;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  
  uVar5 = FUN_00378994();
  puVar3 = PTR_LAB_04373088;
  if ((uVar5 & 1) == 0) {
LAB_0037893c:
    uVar6 = 0;
  }
  else {
    bVar4 = (*(byte *)(param_1 + 0x30) & 1) == 0;
    uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
    uVar5 = uVar7;
    if (!bVar4) {
      uVar5 = *(ulong *)(param_1 + 0x38);
    }
    if (uVar5 == 1) {
      if (bVar4) goto LAB_0037886c;
      while (**(char **)(param_1 + 0x40) == '.') {
        while( true ) {
                    /* try { // try from 003788b4 to 003788bb has its CatchHandler @ 0037895c */
          local_58 = 0;
          local_60 = 0;
          local_68 = 0x2e02;
          FUN_003a0640(param_1 + 0x28);
          local_60 = 0;
          local_58 = 0;
          local_68 = 0;
                    /* try { // try from 003788c4 to 00378903 has its CatchHandler @ 00378968 */
          uVar5 = FUN_00378994(param_1,&local_68);
          if ((uVar5 & 1) == 0) {
            if ((local_68 & 1) != 0) {
              FUN_002e2ea0(PTR_LAB_04373088,local_58);
            }
            goto LAB_0037893c;
          }
          FUN_002e4094(param_2,&DAT_0389ff53,1);
          uVar5 = local_68 >> 1 & 0x7f;
          uVar7 = (ulong)&local_68 | 1;
          if ((local_68 & 1) != 0) {
            uVar5 = local_60;
            uVar7 = local_58;
          }
          FUN_002e4094(param_2,uVar7,uVar5);
          if ((local_68 & 1) != 0) {
            FUN_002e2ea0(puVar3,local_58);
          }
          bVar4 = (*(byte *)(param_1 + 0x30) & 1) != 0;
          uVar7 = (ulong)(*(byte *)(param_1 + 0x30) >> 1);
          uVar5 = uVar7;
          if (bVar4) {
            uVar5 = *(ulong *)(param_1 + 0x38);
          }
          if (uVar5 != 1) goto LAB_0037891c;
          if (bVar4) break;
LAB_0037886c:
          if (*(char *)(param_1 + 0x31) != '.') goto LAB_0037891c;
          pcVar8 = (char *)((ulong)&local_68 | 2);
          pcVar9 = (char *)(param_1 + 0x32);
          while (uVar7 = uVar7 - 1, uVar7 != 0) {
            cVar1 = *pcVar8;
            cVar2 = *pcVar9;
            pcVar8 = pcVar8 + 1;
            pcVar9 = pcVar9 + 1;
            if (cVar2 != cVar1) goto LAB_0037891c;
          }
        }
      }
    }
LAB_0037891c:
    uVar6 = 1;
  }
  return uVar6;
}


