/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0092f418; name: FUN_0092f418
 */


void FUN_0092f418(long param_1,long *param_2,long param_3)

{
  char *pcVar1;
  uint uVar2;
  ushort uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  short *psVar10;
  short sVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long *plVar15;
  short *psVar16;
  undefined8 local_78 [2];
  undefined4 local_68;
  
  local_68 = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  psVar16 = *(short **)(*param_2 + 0x58);
  psVar10 = psVar16;
LAB_0092f464:
  sVar11 = *psVar10;
  if (sVar11 != 0) {
    do {
      if (sVar11 == 0x10) {
        uVar3 = psVar10[2];
        if ((byte)((char)(uVar3 >> 8) - 1U) < 2) {
          if ((ushort)psVar10[1] < 2) {
            uVar14 = 0;
          }
          else {
            uVar14 = (ulong)(ushort)psVar10[3];
          }
          if (((uVar3 & 0xff00) == 0x100) &&
             ((((uVar3 & 0xff) == 0xe || ((uVar3 & 0xff) == 0x9e)) && ((uint)uVar14 < 0x13)))) {
            uVar13 = 3 - (uint)uVar14;
            lVar12 = uVar14 + 1;
            uVar7 = (ulong)uVar13 & 3;
            if ((uVar13 & 3) != 0) {
              do {
                *(char *)((long)local_78 + lVar12) = *(char *)((long)local_78 + lVar12) + '\x01';
                lVar12 = lVar12 + 1;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
            if (2 < 0x12 - uVar14) {
              do {
                *(char *)((long)local_78 + lVar12) = *(char *)((long)local_78 + lVar12) + '\x01';
                pcVar1 = (char *)(((ulong)local_78 | 1) + lVar12);
                lVar12 = lVar12 + 4;
                *pcVar1 = *pcVar1 + '\x01';
                pcVar1[1] = pcVar1[1] + '\x01';
                pcVar1[2] = pcVar1[2] + '\x01';
              } while (lVar12 != 0x14);
            }
            if (*psVar10 != 0x10) goto LAB_0092f464;
          }
        }
        lVar12 = (ulong)(ushort)psVar10[1] + 2;
      }
      else {
        lVar12 = 1;
      }
      psVar10 = psVar10 + lVar12;
      sVar11 = *psVar10;
      if (sVar11 == 0) break;
    } while( true );
  }
LAB_0092f518:
  sVar11 = *psVar16;
  do {
    if (sVar11 == 0) {
      return;
    }
    if (sVar11 == 0x10) {
      uVar3 = psVar16[2];
      if ((byte)((char)(uVar3 >> 8) - 1U) < 2) {
        if ((ushort)psVar16[1] < 2) {
          uVar14 = 0;
        }
        else {
          uVar14 = (ulong)(ushort)psVar16[3];
        }
        uVar13 = (uint)uVar14;
        uVar2 = 0;
        if (*(byte *)((long)local_78 + uVar14) <= uVar13) {
          uVar2 = (uint)*(byte *)((long)local_78 + uVar14);
        }
        uVar7 = (ulong)(uVar13 - uVar2);
        if ((uVar3 & 0xff00) == 0x200) {
          FUN_02c395d0(*(undefined8 *)(param_1 + 0x78),uVar14,*(undefined4 *)(param_3 + uVar7 * 4),
                       uVar3 + 1 & 0xff,0,1);
        }
        else {
          switch(uVar3 & 0xff) {
          case 0:
            if (uVar13 < 10) {
              iVar6 = *(int *)(param_3 + uVar7 * 4);
            }
            else {
              uVar13 = *(uint *)(param_3 + (ulong)(uVar13 + (int)(uVar14 / 10) * -10) * 4);
              if ((uVar13 & 0xff) < 6) {
                iVar6 = 0;
              }
              else if ((uVar13 & 0xff) < 0xc) {
                iVar6 = 2;
              }
              else if ((uVar13 & 0xff) < 0x12) {
                iVar6 = 1;
              }
              else if ((uVar13 & 0xff) < 0x18) {
                iVar6 = 3;
              }
              else {
                iVar6 = (uint)((uVar13 & 0xff) < 0x1e) << 2;
              }
            }
            FUN_0092f2e4(param_1,uVar14,iVar6);
            break;
          case 1:
            lVar12 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),
                                  *(undefined4 *)(param_3 + uVar7 * 4));
            uVar5 = FUN_02c6849c(*(undefined8 *)(*(long *)(*(long *)(lVar12 + 0x70) + 0x60) + 0x98))
            ;
            plVar15 = *(long **)(param_1 + 0x78);
            uVar13 = uVar13 & 0xff;
            uVar14 = (**(code **)(*plVar15 + 0x50))(plVar15,plVar15[0xd],uVar5);
            if (uVar13 < *(uint *)(plVar15 + 0x12)) {
              lVar9 = (ulong)uVar13 * 0x18;
              lVar12 = plVar15[0xd];
              *(ulong *)(plVar15[0x13] + lVar9 + 8) = uVar14 & 0xffff | 0x20000;
              lVar8 = plVar15[0x13];
              lVar9 = *(long *)(lVar8 + lVar9);
              if (*(char *)(lVar9 + 0x7c) != '\0') {
                uVar4 = FUN_02c30580(*(undefined8 *)(lVar9 + 0x58),*(undefined8 *)(lVar12 + 0x58),
                                     *(undefined2 *)(lVar9 + 0x78));
                *(undefined2 *)(lVar9 + 0x7a) = uVar4;
                lVar8 = plVar15[0x13];
              }
              lVar12 = (ulong)uVar13 * 0x18;
              *(undefined2 *)(lVar8 + lVar12 + 0x10) = 0;
              lVar12 = plVar15[0x13] + lVar12;
              *(ushort *)(lVar12 + 0x12) = *(ushort *)(lVar12 + 0x12) & 0xfffe;
            }
            break;
          case 2:
            lVar12 = FUN_00933eec(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0xd0),
                                  *(undefined4 *)(param_3 + uVar7 * 4));
            FUN_010c6004(*(undefined8 *)(param_1 + 0x78),uVar14,
                         *(undefined8 *)(*(long *)(lVar12 + 0x70) + 0x60));
            break;
          case 3:
          case 0xf:
            FUN_010c6d2c(*(undefined8 *)(param_1 + 0x78),uVar14,*(undefined4 *)(param_3 + uVar7 * 4)
                        );
            break;
          case 4:
          case 5:
          case 8:
          case 0xd:
            break;
          case 6:
            FUN_010c5e64(*(undefined8 *)(param_1 + 0x78),uVar14,*(undefined4 *)(param_3 + uVar7 * 4)
                        );
            break;
          case 7:
            FUN_010c5d94(*(undefined8 *)(param_1 + 0x78),uVar14,*(undefined4 *)(param_3 + uVar7 * 4)
                        );
            break;
          case 9:
          case 10:
          case 0xb:
          case 0x10:
            FUN_02c3865c(*(undefined8 *)(param_1 + 0x78),uVar14,*(undefined4 *)(param_3 + uVar7 * 4)
                         ,1);
            break;
          case 0xc:
            FUN_0093026c(param_1,*(undefined4 *)(param_3 + uVar7 * 4),uVar14);
            break;
          case 0xe:
            FUN_009301e0(param_1,uVar14,*(undefined4 *)(param_3 + uVar7 * 4));
            break;
          default:
            if ((uVar3 & 0xff) == 0x9e) {
              FUN_00930178(param_1,uVar14,uVar13 + 1,*(undefined4 *)(param_3 + uVar7 * 4));
            }
          }
        }
      }
      if (*psVar16 != 0x10) goto LAB_0092f518;
      lVar12 = (ulong)(ushort)psVar16[1] + 2;
    }
    else {
      lVar12 = 1;
    }
    psVar16 = psVar16 + lVar12;
    sVar11 = *psVar16;
  } while( true );
}


