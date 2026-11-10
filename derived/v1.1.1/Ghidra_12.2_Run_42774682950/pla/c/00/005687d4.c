/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 005687d4; name: FUN_005687d4
 */


long FUN_005687d4(char *param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (*param_1 != '\x14') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("(op_) == (kRegexpCharClass)","external/com_github_google_re2\\re2/regexp.h",0x151
                  ,"cc");
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0x110000) {
    uVar1 = *(undefined2 *)(param_1 + 2);
    lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = 0xc;
  }
  else {
    if (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0) {
      lVar2 = FUN_0055dbac();
      return lVar2;
    }
    uVar1 = *(undefined2 *)(param_1 + 2);
    lVar2 = FUN_002e2e80(PTR_FUN_04373078,0x28);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = 1;
  }
  FUN_0055da3c(lVar2,uVar3,uVar1);
  return lVar2;
}


