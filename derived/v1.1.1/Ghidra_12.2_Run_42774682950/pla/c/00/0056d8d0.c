/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056d8d0; name: FUN_0056d8d0
 */


undefined8 FUN_0056d8d0(undefined8 *param_1,int param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  char *pcVar7;
  ulong uVar8;
  undefined8 local_38;
  
  if (3 < param_2) {
    return 0;
  }
  pcVar7 = (char *)*param_1;
  if (pcVar7 == (char *)0x0) {
    return 0;
  }
  cVar1 = *pcVar7;
  if (cVar1 == '\x12') {
    uVar4 = FUN_0055eafc(0,0,*(undefined2 *)(pcVar7 + 2));
LAB_0056d998:
    *param_1 = uVar4;
    FUN_0055de34(pcVar7);
LAB_0056d9a4:
    uVar4 = 1;
  }
  else {
    if (cVar1 == '\v') {
      plVar5 = (long *)(pcVar7 + 8);
      if (1 < *(ushort *)(pcVar7 + 6)) {
        plVar5 = (long *)*plVar5;
      }
      local_38 = FUN_0055dbac(*plVar5);
      uVar2 = FUN_0056d8d0(&local_38,param_2 + 1);
      if ((uVar2 & 1) != 0) {
        if (*pcVar7 != '\v') {
                    /* WARNING: Subroutine does not return */
          __assert_fail("(op_) == (kRegexpCapture)","external/com_github_google_re2\\re2/regexp.h",
                        0x152,"cap");
        }
        uVar4 = FUN_0055ea20(local_38,*(undefined2 *)(pcVar7 + 2),*(undefined4 *)(pcVar7 + 0x18));
        goto LAB_0056d998;
      }
LAB_0056da60:
      FUN_0055de34(local_38);
    }
    else if ((cVar1 == '\x05') && (*(short *)(pcVar7 + 6) != 0)) {
      plVar5 = (long *)(pcVar7 + 8);
      if (*(short *)(pcVar7 + 6) == 1) {
        plVar6 = plVar5;
      }
      else {
        plVar6 = (long *)*plVar5;
      }
      local_38 = FUN_0055dbac(*plVar6);
      uVar2 = FUN_0056d8d0(&local_38,param_2 + 1);
      if ((uVar2 & 1) == 0) goto LAB_0056da60;
      puVar3 = (undefined8 *)FUN_002e2e80(PTR_FUN_04373078,(ulong)*(ushort *)(pcVar7 + 6) << 3);
      *puVar3 = local_38;
      uVar2 = (ulong)*(ushort *)(pcVar7 + 6);
      if (1 < *(ushort *)(pcVar7 + 6)) {
        uVar8 = 1;
        do {
          plVar6 = plVar5;
          if (1 < (uint)uVar2) {
            plVar6 = (long *)*plVar5;
          }
                    /* try { // try from 0056da14 to 0056da17 has its CatchHandler @ 0056daa8 */
          uVar4 = FUN_0055dbac(plVar6[uVar8]);
          puVar3[uVar8] = uVar4;
          uVar2 = (ulong)*(ushort *)(pcVar7 + 6);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar2);
      }
                    /* try { // try from 0056da30 to 0056da43 has its CatchHandler @ 0056da9c */
      uVar4 = FUN_0055e9f0(puVar3,uVar2,*(undefined2 *)(pcVar7 + 2));
      *param_1 = uVar4;
      FUN_0055de34(pcVar7);
      if (puVar3 != (undefined8 *)0x0) {
        FUN_002e2ea0(PTR_LAB_04373088,puVar3);
      }
      goto LAB_0056d9a4;
    }
    uVar4 = 0;
  }
  return uVar4;
}


