/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0055e314; name: FUN_0055e314
 */


void FUN_0055e314(char *param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  uint uVar8;
  
  if (*param_1 != '\x04') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("op_ == kRegexpLiteralString","external/com_github_google_re2/re2/regexp.cc",0xac,
                  "AddRuneToString");
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 0) {
    uVar4 = FUN_002e2ec0(PTR_FUN_04373078,0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
  }
  else if ((7 < iVar2) &&
          (uVar8 = CONCAT13(POPCOUNT((char)((uint)iVar2 >> 0x18)),
                            CONCAT12(POPCOUNT((char)((uint)iVar2 >> 0x10)),
                                     CONCAT11(POPCOUNT((char)((uint)iVar2 >> 8)),
                                              POPCOUNT((char)iVar2)))),
          uVar7 = NEON_uaddlv((ulong)uVar8,1), CONCAT22((short)(uVar8 >> 0x10),uVar7) < 2)) {
    puVar6 = *(undefined4 **)(param_1 + 0x20);
    puVar3 = (undefined4 *)FUN_002e2ec0(PTR_FUN_04373078,(long)iVar2 << 3);
    *(undefined4 **)(param_1 + 0x20) = puVar3;
    if (*(int *)(param_1 + 0x18) < 1) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_0055e3f0;
    }
    else {
      *puVar3 = *puVar6;
      if (1 < *(int *)(param_1 + 0x18)) {
        lVar5 = 1;
        do {
          lVar1 = lVar5 + 1;
          *(undefined4 *)(*(long *)(param_1 + 0x20) + lVar5 * 4) = puVar6[lVar5];
          lVar5 = lVar1;
        } while (lVar1 < *(int *)(param_1 + 0x18));
      }
    }
    FUN_002e2f10(puVar6);
    FUN_002e2ef0(PTR_LAB_04373088,puVar6);
  }
LAB_0055e3f0:
  iVar2 = *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x18) = iVar2 + 1;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)iVar2 * 4) = param_2;
  return;
}


