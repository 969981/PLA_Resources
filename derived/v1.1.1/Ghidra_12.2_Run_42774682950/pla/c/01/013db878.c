/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 013db878; name: FUN_013db878
 */


void FUN_013db878(long param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 *param_5,undefined1 *param_6)

{
  bool bVar1;
  short *psVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  char local_40 [4];
  char local_3c [4];
  char local_38 [4];
  short local_34 [2];
  
  *param_4 = 0;
  *param_5 = 0;
  *param_6 = 0;
  local_34[0] = 0;
  local_38[0] = '\0';
  local_3c[0] = '\0';
  local_40[0] = '\0';
  FUN_013db190(param_2,param_3,*(undefined4 *)(param_1 + 0x52c),local_34,local_38,local_3c,local_40)
  ;
  uVar6 = (ulong)*(uint *)(param_1 + 0x528);
  if (*(uint *)(param_1 + 0x528) != 0) {
    bVar4 = local_40[0] == '\0';
    bVar5 = local_3c[0] == '\0';
    bVar1 = !bVar5;
    bVar3 = bVar1 && bVar4;
    if (local_38[0] == '\0') {
      uVar7 = 0;
      pbVar8 = (byte *)(param_1 + 0xb);
      do {
        if (uVar7 == 0x6e) {
LAB_013dbb08:
                    /* WARNING: Subroutine does not return */
          FUN_013dd720();
        }
        if (*(short *)(pbVar8 + -0xb) == local_34[0]) {
          if ((*(int *)(pbVar8 + -7) - 2U < 3) || (*(int *)(pbVar8 + -7) == 0)) {
            if ((*pbVar8 & ((bVar5 || bVar4) ^ 0xffU) & 1) != 0) {
LAB_013dbaf4:
              *param_4 = (int)uVar7;
              *param_5 = 1;
              *param_6 = 1;
              return;
            }
            if ((pbVar8[-1] & bVar3) != 0) goto LAB_013dbae4;
            if ((pbVar8[-2] & ((bVar1 || bVar4) ^ 0xffU) & 1) != 0) {
LAB_013dbad0:
              *param_4 = (int)uVar7;
              *param_5 = 0;
              *param_6 = 1;
              return;
            }
            if ((local_40[0] == '\0' && local_3c[0] == '\0') && ((pbVar8[-3] & 1) != 0))
            goto LAB_013dba04;
          }
        }
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 0xc;
      } while (uVar6 != uVar7);
    }
    else if (bVar5 || bVar4) {
      uVar7 = 0;
      pbVar8 = (byte *)(param_1 + 10);
      do {
        if (uVar7 == 0x6e) goto LAB_013dbb08;
        if (((*(short *)(pbVar8 + -10) == local_34[0]) && (*(uint *)(pbVar8 + -6) < 6)) &&
           ((1 << (ulong)(*(uint *)(pbVar8 + -6) & 0x1f) & 0x2aU) != 0)) {
          if ((*pbVar8 & bVar3) != 0) goto LAB_013dbae4;
          if ((pbVar8[-1] & ((bVar1 || bVar4) ^ 0xffU) & 1) != 0) goto LAB_013dbad0;
          if ((local_40[0] == '\0' && local_3c[0] == '\0') && ((pbVar8[-2] & 1) != 0))
          goto LAB_013dba04;
        }
        uVar7 = uVar7 + 1;
        pbVar8 = pbVar8 + 0xc;
      } while (uVar6 != uVar7);
    }
    else {
      lVar9 = 0;
      uVar7 = 0;
      do {
        if (lVar9 == 0x528) goto LAB_013dbb08;
        psVar2 = (short *)(param_1 + lVar9);
        if (((*psVar2 == local_34[0]) && (*(uint *)(psVar2 + 2) < 6)) &&
           ((1 << (ulong)(*(uint *)(psVar2 + 2) & 0x1f) & 0x2aU) != 0)) {
          if ((*(byte *)((long)psVar2 + 0xb) & 1) != 0) goto LAB_013dbaf4;
          if ((*(byte *)(psVar2 + 5) & 1) != 0 && bVar3) goto LAB_013dbae4;
          if ((!bVar1 && !bVar4) && (*(byte *)((long)psVar2 + 9) & 1) != 0) goto LAB_013dbad0;
          if ((local_40[0] == '\0' && local_3c[0] == '\0') && ((*(byte *)(psVar2 + 4) & 1) != 0))
          goto LAB_013dba04;
        }
        lVar9 = lVar9 + 0xc;
        uVar7 = uVar7 + 1;
      } while (uVar6 * 0xc != lVar9);
    }
  }
  return;
LAB_013dbae4:
  *param_4 = (int)uVar7;
  *param_5 = 1;
  goto LAB_013dba0c;
LAB_013dba04:
  *param_4 = (int)uVar7;
  *param_5 = 0;
LAB_013dba0c:
  *param_6 = 0;
  return;
}


