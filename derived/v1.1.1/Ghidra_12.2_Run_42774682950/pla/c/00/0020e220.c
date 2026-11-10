/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0020e220; name: FUN_0020e220
 */


ulong FUN_0020e220(long *param_1,long *param_2,uint *param_3,byte *param_4,long param_5,int param_6)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  long lVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long *plVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  byte *pbVar14;
  long lVar15;
  int local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  local_68 = 0;
  if (*(char *)((long)param_1 + 0x3c) == '\0') {
    lVar15 = param_1[4];
    FUN_00210478(param_1[0x16]);
    FUN_00210478(param_1[0x15]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    *param_3 = 0;
    pbVar14 = param_4;
    if (param_5 != 0) {
      pbVar14 = param_4 + param_5;
      pbVar11 = param_4;
      do {
        pbVar12 = pbVar11;
        switch(*(int *)((long)param_1 + 0xe4)) {
        case 0:
          bVar1 = *pbVar11;
          if ((bVar1 & 0xe0) == 0x20) goto LAB_0020e300;
          goto LAB_0020e7b4;
        case 1:
        case 2:
          bVar1 = *pbVar11;
LAB_0020e300:
          if ((bVar1 & 0xe0) == 0x20) {
            if (*(int *)((long)param_1 + 0xe4) == 2) goto LAB_0020e7b4;
            lVar6 = 0x300000001;
LAB_0020e580:
            param_1[0x1c] = lVar6;
          }
          else {
            if ((char)bVar1 < '\0') {
              lVar6 = 0x400000001;
              goto LAB_0020e580;
            }
            bVar5 = true;
            uVar8 = 2;
            if ((bVar1 == 0) || (bVar1 == 0x10)) {
              uVar9 = 5;
            }
            else {
              uVar9 = 5;
              if (bVar1 != 0x40) {
                bVar5 = false;
                uVar9 = 4;
                uVar8 = 3;
              }
            }
            *(undefined4 *)(param_1 + 0x1c) = uVar8;
            *(undefined4 *)((long)param_1 + 0xe4) = uVar9;
            *(byte *)((long)param_1 + 0xe9) = *pbVar11 >> 6 & 1;
            pbVar12 = pbVar11 + 1;
            if (!bVar5) {
              pbVar12 = pbVar11;
            }
            *(bool *)((long)param_1 + 0xea) = (*pbVar11 & 0xf0) == 0x10;
          }
          bVar5 = false;
          param_1[0x17] = 0;
          param_1[0x1b] = 0;
          break;
        case 3:
          local_68 = 0;
          uVar13 = param_1[0x1a];
          if ((ulong)param_1[0x19] <= (ulong)param_1[0x1a]) {
            uVar13 = param_1[0x19];
          }
          uVar13 = FUN_0020e878(param_1,&local_68,pbVar11,pbVar14,5,uVar13);
          if ((long)uVar13 < 0) goto LAB_0020e7b8;
          pbVar12 = pbVar11 + uVar13;
          if (local_68 == 0) goto LAB_0020e7b0;
          param_1[0x1a] = 0xffffffff;
          param_1[6] = param_1[0x17];
          FUN_0020da6c(param_1,0);
          bVar5 = false;
          *(undefined4 *)((long)param_1 + 0xe4) = 1;
          break;
        case 4:
          if ((int)param_1[0x1c] == 1) {
            uVar4 = 7;
          }
          else {
            uVar4 = 4;
            if (*(char *)((long)param_1 + 0xe9) != '\0') {
              uVar4 = 6;
            }
          }
          local_68 = 0;
          uVar13 = FUN_0020e878(param_1,&local_68,pbVar11,pbVar14,uVar4,param_1[3] + 0x3d);
          if (-1 < (long)uVar13) {
            pbVar12 = pbVar11 + uVar13;
            if (local_68 == 0) goto LAB_0020e7b0;
            lVar6 = param_1[0x17];
            if (lVar6 != 0) {
              uVar13 = lVar6 - 1;
              param_1[0x18] = uVar13;
              if ((int)param_1[0x1c] != 1) goto LAB_0020e668;
              if (uVar13 < 0x3d) {
                lVar15 = uVar13 * 0x80;
                lVar6 = lVar15 + 0x411d870;
                uVar8 = *(undefined4 *)(&DAT_0411d8e8 + lVar15);
                uVar7 = 0;
                lVar15 = lVar15 + 0x411d898;
              }
              else {
                plVar10 = *(long **)(*param_1 + ((lVar6 + param_1[2]) - 0x3eU & param_1[1]) * 8);
                uVar8 = (undefined4)plVar10[2];
                lVar6 = *plVar10;
                lVar15 = plVar10[1];
                uVar7 = *(undefined1 *)((long)plVar10 + 0x14);
                local_64 = *(undefined2 *)((long)plVar10 + 0x15);
                local_62 = *(undefined1 *)((long)plVar10 + 0x17);
              }
              *param_2 = lVar6;
              param_2[1] = lVar15;
              *(undefined4 *)(param_2 + 2) = uVar8;
              *(undefined1 *)((long)param_2 + 0x14) = uVar7;
              *(undefined1 *)((long)param_2 + 0x17) = local_62;
              *(undefined2 *)((long)param_2 + 0x15) = local_64;
              goto LAB_0020e85c;
            }
            goto LAB_0020e7b4;
          }
          goto LAB_0020e7b8;
        case 5:
          bVar1 = *pbVar11;
          param_1[0x17] = 0;
          param_1[0x1b] = 0;
          *(byte *)(param_1 + 0x1d) = bVar1 >> 7;
          *(undefined4 *)((long)param_1 + 0xe4) = 6;
        case 6:
          local_68 = 0;
          uVar13 = FUN_0020e878(param_1,&local_68,pbVar11,pbVar14,7,0x10000);
          if ((long)uVar13 < 0) goto LAB_0020e7b8;
          pbVar12 = pbVar11 + uVar13;
          if (local_68 == 0) goto LAB_0020e7b0;
          if ((char)param_1[0x1d] == '\0') {
            *(undefined4 *)((long)param_1 + 0xe4) = 8;
            uVar13 = param_1[0x17] + 1;
          }
          else {
            FUN_00210284(param_1 + 8);
            *(undefined4 *)((long)param_1 + 0xe4) = 7;
            uVar13 = param_1[0x17] << 1 | 1;
          }
          iVar2 = FUN_0021037c(param_1 + 0x13,uVar13,lVar15);
          if (iVar2 != 0) {
LAB_0020e7a0:
            uVar13 = (ulong)iVar2;
            goto LAB_0020e7b8;
          }
          lVar6 = param_1[0x13];
          FUN_0020c25c(param_1 + 9,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18));
LAB_0020e5c0:
          bVar5 = false;
          break;
        case 7:
          uVar13 = FUN_0020e8ec(param_1,param_1 + 9,pbVar11,pbVar14);
          if ((long)uVar13 < 0) goto LAB_0020e7b8;
          pbVar12 = pbVar11 + uVar13;
          if (param_1[0x17] != 0) goto LAB_0020e7b0;
          *(undefined1 *)param_1[0xc] = 0;
          *(long *)(param_1[0x13] + 0x18) = param_1[0xc] - param_1[0xb];
LAB_0020e668:
          bVar5 = false;
          *(undefined4 *)((long)param_1 + 0xe4) = 9;
          break;
        case 8:
          uVar13 = (long)pbVar14 - (long)pbVar11;
          if ((ulong)param_1[0x17] <= (ulong)((long)pbVar14 - (long)pbVar11)) {
            uVar13 = param_1[0x17];
          }
          puVar3 = (undefined1 *)FUN_00205b90(param_1[0xc],pbVar11,uVar13);
          lVar6 = param_1[0x17];
          param_1[0xc] = (long)puVar3;
          param_1[0x17] = lVar6 - uVar13;
          if (-1 < (long)uVar13) {
            pbVar12 = pbVar11 + uVar13;
            if (lVar6 - uVar13 != 0) goto LAB_0020e7b0;
            *puVar3 = 0;
            *(long *)(param_1[0x13] + 0x18) = param_1[0xc] - param_1[0xb];
            *(undefined4 *)((long)param_1 + 0xe4) = 9;
            goto LAB_0020e5c0;
          }
          goto LAB_0020e7b8;
        case 9:
          bVar1 = *pbVar11;
          param_1[0x17] = 0;
          param_1[0x1b] = 0;
          *(byte *)(param_1 + 0x1d) = bVar1 >> 7;
          *(undefined4 *)((long)param_1 + 0xe4) = 10;
        case 10:
          local_68 = 0;
          uVar13 = FUN_0020e878(param_1,&local_68,pbVar11,pbVar14,7,0x10000);
          if (-1 < (long)uVar13) {
            pbVar12 = pbVar11 + uVar13;
            if (local_68 == 0) goto LAB_0020e7b0;
            if ((char)param_1[0x1d] == '\0') {
              *(undefined4 *)((long)param_1 + 0xe4) = 0xc;
              uVar13 = param_1[0x17] + 1;
            }
            else {
              FUN_00210284(param_1 + 8);
              *(undefined4 *)((long)param_1 + 0xe4) = 0xb;
              uVar13 = param_1[0x17] << 1 | 1;
            }
            iVar2 = FUN_0021037c(param_1 + 0x14,uVar13,lVar15);
            if (iVar2 == 0) {
              lVar6 = param_1[0x14];
              FUN_0020c25c(param_1 + 0xe,*(undefined8 *)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 0x18)
                          );
              bVar5 = true;
              break;
            }
            goto LAB_0020e7a0;
          }
          goto LAB_0020e7b8;
        case 0xb:
          uVar13 = FUN_0020e8ec(param_1,param_1 + 0xe,pbVar11,pbVar14);
          if (-1 < (long)uVar13) {
            pbVar12 = pbVar11 + uVar13;
            if (param_1[0x17] != 0) goto LAB_0020e7b0;
            *(undefined1 *)param_1[0x11] = 0;
LAB_0020e764:
            *(long *)(param_1[0x14] + 0x18) = param_1[0x11] - param_1[0x10];
            if ((int)param_1[0x1c] != 2) {
              iVar2 = FUN_0020e9dc(param_1,param_2);
              if (iVar2 != 0) goto LAB_0020e7a0;
LAB_0020e85c:
              *(undefined4 *)((long)param_1 + 0xe4) = 2;
              *param_3 = *param_3 | 2;
              goto LAB_0020e870;
            }
            iVar2 = FUN_0020e93c(param_1,param_2);
            if (iVar2 == 0) goto LAB_0020e85c;
            goto LAB_0020e7a0;
          }
          goto LAB_0020e7b8;
        case 0xc:
          uVar13 = (long)pbVar14 - (long)pbVar11;
          if ((ulong)param_1[0x17] <= (ulong)((long)pbVar14 - (long)pbVar11)) {
            uVar13 = param_1[0x17];
          }
          puVar3 = (undefined1 *)FUN_00205b90(param_1[0x11],pbVar11,uVar13);
          lVar15 = param_1[0x17];
          param_1[0x11] = (long)puVar3;
          param_1[0x17] = lVar15 - uVar13;
          if ((long)uVar13 < 0) goto LAB_0020e7b8;
          pbVar12 = pbVar11 + uVar13;
          if (lVar15 - uVar13 == 0) {
            *puVar3 = 0;
            goto LAB_0020e764;
          }
LAB_0020e7b0:
          if (param_6 == 0) {
LAB_0020e870:
            return (long)pbVar12 - (long)param_4;
          }
          goto LAB_0020e7b4;
        default:
          bVar5 = false;
        }
        pbVar11 = pbVar12;
      } while ((pbVar12 != pbVar14) || (bVar5));
    }
    if (param_6 != 0) {
      if (1 < *(int *)((long)param_1 + 0xe4) - 1U) {
LAB_0020e7b4:
        uVar13 = 0xfffffffffffffdf5;
LAB_0020e7b8:
        *(undefined1 *)((long)param_1 + 0x3c) = 1;
        return uVar13;
      }
      *param_3 = *param_3 | 1;
    }
    uVar13 = (long)pbVar14 - (long)param_4;
  }
  else {
    uVar13 = 0xfffffffffffffdf5;
  }
  return uVar13;
}


