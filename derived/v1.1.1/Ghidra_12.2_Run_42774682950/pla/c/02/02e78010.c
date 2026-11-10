/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e78010; name: FUN_02e78010
 */


/* WARNING: Removing unreachable block (ram,0x02e781c8) */

undefined8
FUN_02e78010(undefined4 param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
            undefined8 param_5)

{
  byte bVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  size_t sVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  byte *pbVar9;
  char *pcVar10;
  ulong uVar11;
  undefined4 local_16c;
  
  if (param_3 == 0) {
    uVar3 = 0x1f;
  }
  else if (param_3 == 1) {
    pcVar10 = (char *)*param_2;
    if (pcVar10 == (char *)0x0) {
      local_16c = 0;
    }
    else {
      sVar2 = strlen(pcVar10);
      uVar11 = sVar2 + 1;
      if (0x102 < uVar11) {
        uVar11 = 0x103;
      }
      strncpy((char *)&local_16c,pcVar10,uVar11);
      *(undefined1 *)((long)&local_16c + uVar11) = 0;
      sVar2 = strlen(pcVar10);
      if (sVar2 != 0) {
        pbVar7 = (byte *)&local_16c;
        sVar5 = sVar2;
        do {
          if (*pbVar7 - 0x41 < 0x1a) {
            *pbVar7 = *pbVar7 + 0x20;
          }
          sVar5 = sVar5 - 1;
          pbVar7 = pbVar7 + 1;
        } while (sVar5 != 0);
      }
      local_16c = 0x811c9dc5;
      if ((int)sVar2 != 0) {
        pbVar7 = (byte *)&local_16c;
        do {
          pbVar9 = pbVar7 + 1;
          local_16c = local_16c * 0x1000193 ^ (uint)*pbVar7;
          pbVar7 = pbVar9;
        } while (pbVar9 < (byte *)((long)&local_16c + (sVar2 & 0xffffffff)));
      }
    }
    uVar3 = FUN_02e77c30(param_1,param_4,param_5,&local_16c,1,1);
  }
  else {
    lVar4 = (*DAT_0442d138)(0,(ulong)param_3 << 2);
    if (lVar4 == 0) {
      uVar3 = 0x34;
    }
    else {
      uVar11 = 0;
      do {
        pcVar10 = (char *)param_2[uVar11];
        if (pcVar10 == (char *)0x0) {
          uVar6 = 0;
        }
        else {
          sVar5 = strlen(pcVar10);
          sVar2 = 0x103;
          if (sVar5 + 1 < 0x103) {
            sVar2 = sVar5 + 1;
          }
          strncpy((char *)&local_16c,pcVar10,sVar2);
          *(undefined1 *)((long)&local_16c + sVar2) = 0;
          sVar2 = strlen(pcVar10);
          if (sVar2 != 0) {
            if (sVar2 == 1) {
              lVar8 = 0;
            }
            else {
              lVar8 = 0;
              do {
                if (*(byte *)((long)&local_16c + lVar8) - 0x41 < 0x1a) {
                  *(byte *)((long)&local_16c + lVar8) = *(byte *)((long)&local_16c + lVar8) + 0x20;
                }
                bVar1 = *(byte *)((long)&local_16c + lVar8 + 1);
                if (bVar1 - 0x41 < 0x1a) {
                  *(byte *)((long)&local_16c + lVar8 + 1) = bVar1 + 0x20;
                }
                lVar8 = lVar8 + 2;
              } while (sVar2 - (sVar2 & 1) != lVar8);
              if ((sVar2 & 1) == 0) goto LAB_02e78230;
            }
            if (*(byte *)((long)&local_16c + lVar8) - 0x41 < 0x1a) {
              *(byte *)((long)&local_16c + lVar8) = *(byte *)((long)&local_16c + lVar8) + 0x20;
            }
          }
LAB_02e78230:
          uVar6 = 0x811c9dc5;
          if ((int)sVar2 != 0) {
            uVar6 = 0x811c9dc5;
            pbVar7 = (byte *)&local_16c;
            do {
              pbVar9 = pbVar7 + 1;
              uVar6 = uVar6 * 0x1000193 ^ (uint)*pbVar7;
              pbVar7 = pbVar9;
            } while (pbVar9 < (byte *)((long)&local_16c + (sVar2 & 0xffffffff)));
          }
        }
        *(uint *)(lVar4 + uVar11 * 4) = uVar6;
        uVar11 = uVar11 + 1;
      } while (uVar11 != param_3);
      uVar3 = FUN_02e77c30(param_1,param_4,param_5,lVar4,param_3,0);
    }
  }
  return uVar3;
}


