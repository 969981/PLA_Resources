/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02848634; name: FUN_02848634
 */


undefined8 FUN_02848634(undefined8 param_1,long param_2,uint *param_3)

{
  char *pcVar1;
  ushort uVar2;
  uint uVar3;
  short *psVar4;
  short *psVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  char local_8 [8];
  
  local_8[0] = '\0';
  local_8[1] = '\0';
  local_8[2] = '\0';
  local_8[3] = '\0';
  local_8[4] = '\0';
  local_8[5] = '\0';
  local_8[6] = '\0';
  local_8[7] = '\0';
  psVar4 = *(short **)(param_2 + 0x58);
  psVar5 = psVar4;
  do {
    for (; *psVar5 != 0x10; psVar5 = psVar5 + 1) {
      if (*psVar5 == 0) {
        while( true ) {
          for (; *psVar4 == 0x10; psVar4 = psVar4 + (ulong)(ushort)psVar4[1] + 2) {
            if (psVar4[2] == 0x114) {
              if ((ushort)psVar4[1] < 2) {
                uVar3 = 0;
              }
              else {
                uVar3 = (uint)(ushort)psVar4[3];
              }
              *param_3 = uVar3;
              return 1;
            }
          }
          if (*psVar4 == 0) break;
          psVar4 = psVar4 + 1;
        }
        return 0;
      }
    }
    uVar2 = psVar5[2];
    if (1 < (byte)((char)(uVar2 >> 8) - 1U)) goto LAB_02848670;
    if ((ushort)psVar5[1] < 2) {
      uVar7 = 0;
    }
    else {
      uVar7 = (ulong)(ushort)psVar5[3];
    }
    if (((uVar2 & 0xff00) != 0x100) ||
       ((((uVar2 & 0xff) != 0xe && ((uVar2 & 0xff) != 0x9e)) || (6 < (uint)uVar7))))
    goto LAB_02848670;
    uVar3 = 3 - (uint)uVar7;
    lVar6 = uVar7 + 1;
    uVar8 = (ulong)uVar3 & 3;
    if ((uVar3 & 3) != 0) {
      do {
        local_8[lVar6] = local_8[lVar6] + '\x01';
        lVar6 = lVar6 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if (2 < 6 - uVar7) {
      do {
        local_8[lVar6] = local_8[lVar6] + '\x01';
        pcVar1 = (char *)(((ulong)local_8 | 1) + lVar6);
        lVar6 = lVar6 + 4;
        *pcVar1 = *pcVar1 + '\x01';
        pcVar1[1] = pcVar1[1] + '\x01';
        pcVar1[2] = pcVar1[2] + '\x01';
      } while (lVar6 != 8);
    }
    if (*psVar5 == 0x10) {
LAB_02848670:
      psVar5 = psVar5 + (ulong)(ushort)psVar5[1] + 2;
    }
  } while( true );
}


