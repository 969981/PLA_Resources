/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f3fb18; name: FUN_02f3fb18
 */


void FUN_02f3fb18(long param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined8 local_70;
  char *local_68;
  
  bVar3 = *(byte *)(param_1 + 0x17c);
  if ((bVar3 & 1) == 0) {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    uVar2 = *(uint *)(param_1 + 0x174);
    *(undefined4 *)(param_1 + 0x174) = 0;
    fVar7 = (float)NEON_ucvtf(DAT_042ab258);
    uVar4 = *(uint *)(param_1 + 0x178);
    uVar1 = 0;
    if (uVar2 <= uVar4) {
      uVar1 = uVar4 - uVar2;
    }
    if (uVar4 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    if ((float)(int)(param_3 - uVar2) / (fVar7 * 0.001) != 0.0) {
      local_70 = 0;
      local_68 = (char *)0x0;
      FUN_02f40604(param_1 + 0xf0,&local_70);
      if (local_68 != (char *)0x0) {
        if (uVar1 == 0xffffffff) {
          pcVar5 = *(char **)(local_68 + 0x10);
          pcVar6 = local_68;
          if (pcVar5 != (char *)0x0) goto LAB_02f3fd00;
          do {
            local_70 = 0;
            local_68 = (char *)0x0;
            while( true ) {
              dVar8 = (double)NEON_ucvtf((ulong)DAT_042ab258);
              dVar8 = (double)*(float *)(pcVar6 + 4) * 0.001 * dVar8;
              dVar9 = 0.5;
              if (dVar8 <= 0.0) {
                dVar9 = -0.5;
              }
              if (((*pcVar6 != -0x70) || ((bVar3 >> 1 & 1) == 0)) || (pcVar6[3] == '\0')) {
                FUN_02e7c1ac(param_1,param_2,pcVar6,uVar2 + (int)(dVar9 + dVar8),
                             *(undefined4 *)(pcVar6 + 8),*(byte *)(param_1 + 0x17c) >> 1 & 1,
                             *(byte *)(param_1 + 0x17c) >> 2 & 1);
                *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfb;
              }
              FUN_02f59e60(0,pcVar6);
              if (local_68 == (char *)0x0) goto LAB_02f3fd4c;
              pcVar5 = *(char **)(local_68 + 0x10);
              pcVar6 = local_68;
              if (pcVar5 == (char *)0x0) break;
LAB_02f3fd00:
              pcVar6 = local_68;
              local_68 = pcVar5;
            }
          } while( true );
        }
        pcVar5 = *(char **)(local_68 + 0x10);
        pcVar6 = local_68;
        if (pcVar5 != (char *)0x0) goto LAB_02f3fc30;
        do {
          local_70 = 0;
          local_68 = (char *)0x0;
          while( true ) {
            dVar8 = (double)NEON_ucvtf((ulong)DAT_042ab258);
            dVar8 = (double)*(float *)(pcVar6 + 4) * 0.001 * dVar8;
            dVar9 = 0.5;
            if (dVar8 <= 0.0) {
              dVar9 = -0.5;
            }
            uVar4 = (uint)(dVar9 + dVar8);
            if ((*pcVar6 != -0x70) || (uVar4 < uVar1 || pcVar6[3] == '\0')) {
              FUN_02e7c1ac(param_1,param_2,pcVar6,uVar2 + uVar4,*(undefined4 *)(pcVar6 + 8),
                           *(byte *)(param_1 + 0x17c) >> 1 & 1,*(byte *)(param_1 + 0x17c) >> 2 & 1);
              *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) & 0xfb;
            }
            FUN_02f59e60(0,pcVar6);
            if (local_68 == (char *)0x0) goto LAB_02f3fd4c;
            pcVar5 = *(char **)(local_68 + 0x10);
            pcVar6 = local_68;
            if (pcVar5 == (char *)0x0) break;
LAB_02f3fc30:
            pcVar6 = local_68;
            local_68 = pcVar5;
          }
        } while( true );
      }
    }
LAB_02f3fd4c:
    if (uVar1 != 0xffffffff) {
      *(undefined4 *)(param_1 + 0x178) = 0;
      if ((*(byte *)(param_1 + 0x17c) >> 1 & 1) == 0) {
        *(byte *)(param_1 + 0x17c) = *(byte *)(param_1 + 0x17c) | 2;
        FUN_02e7c354(param_1);
      }
    }
    FUN_02e7c354(param_1);
  }
  return;
}


