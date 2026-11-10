/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e77d50; name: FUN_02e77d50
 */


/* WARNING: Removing unreachable block (ram,0x02e77eec) */

undefined8 FUN_02e77d50(undefined4 param_1,undefined8 *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  byte *pbVar8;
  long lVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 local_170;
  
  if (param_3 == 0) {
    uVar4 = 0x1f;
  }
  else if (param_3 == 1) {
    pcVar11 = (char *)*param_2;
    if (pcVar11 == (char *)0x0) {
      local_170 = 0;
    }
    else {
      sVar3 = strlen(pcVar11);
      uVar12 = sVar3 + 1;
      if (0x102 < uVar12) {
        uVar12 = 0x103;
      }
      strncpy((char *)&local_170,pcVar11,uVar12);
      *(undefined1 *)((long)&local_170 + uVar12) = 0;
      sVar3 = strlen(pcVar11);
      if (sVar3 != 0) {
        pbVar8 = (byte *)&local_170;
        sVar6 = sVar3;
        do {
          if (*pbVar8 - 0x41 < 0x1a) {
            *pbVar8 = *pbVar8 + 0x20;
          }
          sVar6 = sVar6 - 1;
          pbVar8 = pbVar8 + 1;
        } while (sVar6 != 0);
      }
      local_170 = 0x811c9dc5;
      if ((int)sVar3 != 0) {
        pbVar8 = (byte *)&local_170;
        do {
          pbVar10 = pbVar8 + 1;
          local_170 = local_170 * 0x1000193 ^ (uint)*pbVar8;
          pbVar8 = pbVar10;
        } while (pbVar10 < (byte *)((long)&local_170 + (sVar3 & 0xffffffff)));
      }
    }
    uVar4 = FUN_02e77ba0(param_1,&local_170);
  }
  else {
    lVar5 = (*DAT_0442d138)(0,(ulong)param_3 << 2);
    if (lVar5 == 0) {
      uVar4 = 0x34;
    }
    else {
      uVar12 = 0;
      do {
        pcVar11 = (char *)param_2[uVar12];
        if (pcVar11 == (char *)0x0) {
          uVar7 = 0;
        }
        else {
          sVar6 = strlen(pcVar11);
          sVar3 = 0x103;
          if (sVar6 + 1 < 0x103) {
            sVar3 = sVar6 + 1;
          }
          strncpy((char *)&local_170,pcVar11,sVar3);
          *(undefined1 *)((long)&local_170 + sVar3) = 0;
          sVar3 = strlen(pcVar11);
          if (sVar3 != 0) {
            if (sVar3 == 1) {
              lVar9 = 0;
            }
            else {
              lVar9 = 0;
              do {
                if (*(byte *)((long)&local_170 + lVar9) - 0x41 < 0x1a) {
                  *(byte *)((long)&local_170 + lVar9) = *(byte *)((long)&local_170 + lVar9) + 0x20;
                }
                bVar1 = *(byte *)((long)&local_170 + lVar9 + 1);
                if (bVar1 - 0x41 < 0x1a) {
                  *(byte *)((long)&local_170 + lVar9 + 1) = bVar1 + 0x20;
                }
                lVar9 = lVar9 + 2;
              } while (sVar3 - (sVar3 & 1) != lVar9);
              if ((sVar3 & 1) == 0) goto LAB_02e77f54;
            }
            if (*(byte *)((long)&local_170 + lVar9) - 0x41 < 0x1a) {
              *(byte *)((long)&local_170 + lVar9) = *(byte *)((long)&local_170 + lVar9) + 0x20;
            }
          }
LAB_02e77f54:
          uVar7 = 0x811c9dc5;
          if ((int)sVar3 != 0) {
            pbVar8 = (byte *)&local_170;
            do {
              pbVar10 = pbVar8 + 1;
              uVar7 = uVar7 * 0x1000193 ^ (uint)*pbVar8;
              pbVar8 = pbVar10;
            } while (pbVar10 < (byte *)((long)&local_170 + (sVar3 & 0xffffffff)));
          }
        }
        *(uint *)(lVar5 + uVar12 * 4) = uVar7;
        uVar12 = uVar12 + 1;
      } while (uVar12 != param_3);
      uVar4 = (**(code **)(*DAT_0440a148 + 0x28))(DAT_0440a148,&local_170);
      if ((int)uVar4 == 1) {
        uVar2 = FUN_02e77c30(param_1,DAT_0440a2f8,&local_170,lVar5,param_3,0);
        uVar4 = (**(code **)(*DAT_0440a148 + 0x30))(DAT_0440a148,&local_170,uVar2);
      }
    }
  }
  return uVar4;
}


