/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02b5afe0; name: FUN_02b5afe0
 */


void FUN_02b5afe0(long *param_1,long *param_2,uint param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  long lVar10;
  char *pcVar11;
  uint uVar12;
  short *psVar13;
  ulong uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long local_58;
  ulong local_50 [2];
  undefined4 local_40;
  undefined1 auStack_38 [8];
  
  local_58 = *param_2;
  iVar16 = param_3 * 2;
  local_50[0] = (ulong)(uint)((iVar16 + (param_4 + -2) * iVar16) * 6);
  local_40 = 0;
  local_50[1] = 4;
  uVar23 = (ulong)param_3;
  lVar10 = FUN_01b34908(auStack_38,*(undefined8 *)(local_58 + 8),&local_58);
  *param_1 = lVar10;
  if (lVar10 == 0) {
    lVar10 = 0;
  }
  else {
    piVar2 = (int *)(lVar10 + 0x50);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = *piVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    lVar10 = *param_1;
  }
  FUN_02bbfe84(lVar10,local_50,1,0,0);
  uVar15 = *(uint *)(lVar10 + 0xa0);
  uVar14 = *(ulong *)(*(long *)(lVar10 + 0x98) + 0x138);
  uVar12 = (uint)uVar14;
  if (uVar15 < 3) {
    uVar12 = uVar12 & uVar15 - 1;
  }
  else {
    iVar1 = 0;
    if ((ulong)uVar15 != 0) {
      iVar1 = (int)(uVar14 / uVar15);
    }
    uVar12 = uVar12 - iVar1 * uVar15;
  }
  pcVar11 = (char *)FUN_02bc0470((long)(int)uVar12,lVar10 + 0x58);
  if (*pcVar11 != '\0' && *(long *)(pcVar11 + 8) != 0) {
    if (*(long *)(*(long *)(pcVar11 + 8) + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
      nn::diag::detail::AbortImpl("","","",0);
    }
    lVar10 = (*DAT_043f0470)();
    if (lVar10 != 0) {
      sVar9 = (short)param_3;
      if ((int)param_3 < 1) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar15 = 2;
        do {
          sVar8 = sVar9 + (short)uVar14;
          *(short *)(lVar10 + (ulong)(uVar15 - 2) * 2) = (short)uVar14;
          *(short *)(lVar10 + (ulong)(uVar15 - 1) * 2) = sVar8 + 1;
          uVar14 = uVar14 + 1;
          *(short *)(lVar10 + (ulong)uVar15 * 2) = sVar8 + 2;
          uVar15 = uVar15 + 3;
        } while (uVar23 != uVar14);
        uVar14 = uVar23;
      }
      uVar15 = (uint)uVar14;
      param_4 = param_4 + -1;
      if (param_4 < 2) {
        param_4 = 1;
      }
      else {
        if ((int)param_3 < 1) {
          return;
        }
        iVar1 = param_3 + 1;
        iVar16 = iVar16 + 2;
        iVar17 = 1;
        iVar18 = iVar1;
        do {
          iVar19 = (int)uVar14 * 3 + 5;
          uVar20 = uVar23;
          iVar21 = iVar18;
          iVar22 = iVar16;
          do {
            uVar5 = (undefined2)iVar21;
            *(undefined2 *)(lVar10 + (long)(iVar19 + -5) * 2) = uVar5;
            uVar6 = (undefined2)(iVar22 + 1);
            *(undefined2 *)(lVar10 + (long)(iVar19 + -4) * 2) = uVar6;
            iVar21 = iVar21 + 1;
            *(short *)(lVar10 + (long)(iVar19 + -3) * 2) = (short)iVar21;
            *(undefined2 *)(lVar10 + (long)(iVar19 + -2) * 2) = uVar5;
            *(short *)(lVar10 + (long)(iVar19 + -1) * 2) = (short)iVar22;
            uVar15 = (int)uVar14 + 2;
            uVar14 = (ulong)uVar15;
            *(undefined2 *)(lVar10 + (long)iVar19 * 2) = uVar6;
            iVar19 = iVar19 + 6;
            uVar12 = (int)uVar20 - 1;
            uVar20 = (ulong)uVar12;
            iVar22 = iVar22 + 1;
          } while (uVar12 != 0);
          iVar17 = iVar17 + 1;
          iVar16 = iVar16 + iVar1;
          iVar18 = iVar18 + iVar1;
        } while (iVar17 != param_4);
      }
      if (0 < (int)param_3) {
        sVar8 = (short)param_4 * (sVar9 + 1);
        uVar12 = 0;
        psVar13 = (short *)(lVar10 + (long)(int)uVar15 * 6 + 4);
        do {
          sVar7 = sVar8 + (short)uVar12;
          psVar13[-2] = sVar7;
          psVar13[-1] = sVar8 + sVar9 + (short)uVar12 + 1;
          uVar12 = uVar12 + 1;
          *psVar13 = sVar7 + 1;
          psVar13 = psVar13 + 3;
        } while (param_3 != uVar12);
      }
    }
  }
  return;
}


