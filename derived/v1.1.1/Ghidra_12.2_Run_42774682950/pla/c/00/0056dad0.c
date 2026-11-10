/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056dad0; name: FUN_0056dad0
 */


undefined8 FUN_0056dad0(undefined8 *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 local_38;
  
  if (3 < param_2) {
    return 0;
  }
  pcVar9 = (char *)*param_1;
  if (pcVar9 == (char *)0x0) {
    return 0;
  }
  cVar2 = *pcVar9;
  if (cVar2 == '\x13') {
    uVar6 = FUN_0055eafc(0,0,*(undefined2 *)(pcVar9 + 2));
LAB_0056db98:
    *param_1 = uVar6;
    FUN_0055de34(pcVar9);
LAB_0056dba4:
    uVar6 = 1;
  }
  else {
    if (cVar2 == '\v') {
      plVar7 = (long *)(pcVar9 + 8);
      if (1 < *(ushort *)(pcVar9 + 6)) {
        plVar7 = (long *)*plVar7;
      }
      local_38 = FUN_0055dbac(*plVar7);
      uVar4 = FUN_0056dad0(&local_38,param_2 + 1);
      if ((uVar4 & 1) != 0) {
        if (*pcVar9 != '\v') {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(op_) == (kRegexpCapture)","external/com_github_google_re2\\re2/regexp.h",
                        0x152,"cap");
        }
        uVar6 = FUN_0055ea20(local_38,*(undefined2 *)(pcVar9 + 2),*(undefined4 *)(pcVar9 + 0x18));
        goto LAB_0056db98;
      }
LAB_0056dc6c:
      FUN_0055de34(local_38);
    }
    else if (cVar2 == '\x05') {
      uVar3 = *(ushort *)(pcVar9 + 6);
      if ((ulong)uVar3 != 0) {
        pcVar1 = pcVar9 + 8;
        if (uVar3 == 1) {
          pcVar8 = pcVar1;
        }
        else {
          pcVar8 = *(char **)pcVar1;
        }
        local_38 = FUN_0055dbac(*(undefined8 *)(pcVar8 + (ulong)uVar3 * 8 + -8));
        uVar4 = FUN_0056dad0(&local_38,param_2 + 1);
        if ((uVar4 & 1) == 0) goto LAB_0056dc6c;
        lVar5 = FUN_002e2e80(PTR_FUN_04373078,(ulong)*(ushort *)(pcVar9 + 6) << 3);
        uVar4 = (ulong)*(ushort *)(pcVar9 + 6);
        *(undefined8 *)(lVar5 + uVar4 * 8 + -8) = local_38;
        if (1 < uVar4) {
          lVar10 = 0;
          do {
            pcVar8 = pcVar1;
            if (1 < (uint)uVar4) {
              pcVar8 = *(char **)pcVar1;
            }
                    /* try { // try from 0056dc1c to 0056dc1f has its CatchHandler @ 0056dcb4 */
            uVar6 = FUN_0055dbac(*(undefined8 *)(pcVar8 + lVar10 * 8));
            *(undefined8 *)(lVar5 + lVar10 * 8) = uVar6;
            uVar4 = (ulong)*(ushort *)(pcVar9 + 6);
            lVar10 = lVar10 + 1;
          } while (lVar10 < (long)(uVar4 - 1));
        }
                    /* try { // try from 0056dc3c to 0056dc4f has its CatchHandler @ 0056dca8 */
        uVar6 = FUN_0055e9f0(lVar5,uVar4,*(undefined2 *)(pcVar9 + 2));
        *param_1 = uVar6;
        FUN_0055de34(pcVar9);
        if (lVar5 != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,lVar5);
        }
        goto LAB_0056dba4;
      }
    }
    uVar6 = 0;
  }
  return uVar6;
}


