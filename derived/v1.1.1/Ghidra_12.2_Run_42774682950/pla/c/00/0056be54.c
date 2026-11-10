/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056be54; name: FUN_0056be54
 */


int FUN_0056be54(long param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  int iVar12;
  
  param_2 = param_2 & 0xffffffff;
  if ((*(uint *)(*(long *)(param_1 + 0x58) +
                (-(param_2 >> 0x1f) & 0xfffffff800000000 | param_2 << 3)) & 7 | 2) != 2) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("inst_[root].opcode() == kInstAlt || inst_[root].opcode() == kInstByteRange",
                  "external/com_github_google_re2/re2/compile.cc",0x21b,"AddSuffixRecursive");
  }
  uVar10 = (ulong)param_3;
  uVar5 = FUN_0056c224(param_1,param_2);
  iVar4 = (int)uVar5;
  if (iVar4 == 0) {
    if ((*(char *)(param_1 + 0x48) == '\0') &&
       (iVar4 = *(int *)(param_1 + 0x68), iVar4 < *(int *)(param_1 + 0x6c))) {
      uVar2 = *(uint *)(param_1 + 0x60);
      if ((int)uVar2 <= iVar4) {
        uVar1 = 8;
        if (uVar2 != 0) {
          uVar1 = uVar2;
        }
        do {
          uVar2 = uVar1;
          uVar1 = uVar2 << 1;
        } while ((int)uVar2 <= iVar4);
        pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                      -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar2 << 3);
        if (*(void **)(param_1 + 0x58) != (void *)0x0) {
          memmove(pvVar7,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
        }
        uVar1 = uVar2 - *(int *)(param_1 + 0x68);
        memset((void *)((long)pvVar7 + (long)*(int *)(param_1 + 0x68) * 8),0,
               -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3);
        lVar8 = *(long *)(param_1 + 0x58);
        *(void **)(param_1 + 0x58) = pvVar7;
        if (lVar8 != 0) {
          FUN_002e2ea0(PTR_LAB_04373088);
        }
        iVar4 = *(int *)(param_1 + 0x68);
        *(uint *)(param_1 + 0x60) = uVar2;
      }
      *(int *)(param_1 + 0x68) = iVar4 + 1;
      if (iVar4 < 0) {
        return 0;
      }
      FUN_00552a88(*(long *)(param_1 + 0x58) + (long)iVar4 * 8,param_2,uVar10);
      return iVar4;
    }
    goto LAB_0056c0a8;
  }
  iVar12 = (int)(uVar5 >> 0x20);
  uVar11 = param_2;
  if (iVar12 == 0) {
LAB_0056bec0:
    uVar6 = FUN_0056bba4(param_1,uVar11);
  }
  else {
    uVar2 = *(uint *)(*(long *)(param_1 + 0x58) +
                     (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3));
    if ((uVar5 & 0x100000000) == 0) {
      uVar11 = (ulong)(uVar2 >> 4);
      goto LAB_0056bec0;
    }
    if ((uVar2 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                    "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
    }
    uVar11 = (ulong)*(uint *)(*(long *)(param_1 + 0x58) + (long)iVar4 * 8 + 4);
    uVar6 = FUN_0056bba4(param_1,uVar11);
  }
  if ((uVar6 & 1) != 0) {
    if ((*(char *)(param_1 + 0x48) != '\0') ||
       (uVar2 = *(uint *)(param_1 + 0x68), *(int *)(param_1 + 0x6c) <= (int)uVar2)) {
LAB_0056c0a8:
      *(undefined1 *)(param_1 + 0x48) = 1;
      return 0;
    }
    uVar1 = *(uint *)(param_1 + 0x60);
    if ((int)uVar1 <= (int)uVar2) {
      uVar3 = 8;
      if (uVar1 != 0) {
        uVar3 = uVar1;
      }
      do {
        uVar1 = uVar3;
        uVar3 = uVar1 << 1;
      } while ((int)uVar1 <= (int)uVar2);
      pvVar7 = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                    -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(pvVar7,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar2 = uVar1 - *(int *)(param_1 + 0x68);
      memset((void *)((long)pvVar7 + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
      lVar8 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = pvVar7;
      if (lVar8 != 0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      uVar2 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar1;
    }
    uVar6 = (ulong)uVar2;
    *(uint *)(param_1 + 0x68) = uVar2 + 1;
    if ((int)uVar2 < 0) {
      return 0;
    }
    lVar8 = *(long *)(param_1 + 0x58);
    uVar1 = *(uint *)(lVar8 + (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3));
    if ((uVar1 & 7) != 2) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",
                    0x57,"lo");
    }
    lVar9 = lVar8 + (long)(int)uVar11 * 8;
    FUN_00552ac4(lVar8 + (long)(int)uVar2 * 8,*(undefined1 *)(lVar9 + 4),*(undefined1 *)(lVar9 + 5),
                 *(ushort *)(lVar9 + 6) & 1,uVar1 >> 4);
    uVar11 = uVar6;
    if (iVar12 == 0) {
      param_2 = uVar6;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x58);
      if ((uVar5 & 0x100000000) == 0) {
        lVar9 = (long)iVar4 * 8;
        uVar1 = *(uint *)(lVar8 + lVar9);
        *(uint *)(lVar8 + lVar9) = uVar1 & 8 | uVar2 << 4 | uVar1 & 7;
      }
      else {
        *(uint *)(lVar8 + (long)iVar4 * 8 + 4) = uVar2;
      }
    }
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x58) +
                   (-(ulong)(param_3 >> 0x1f) & 0xfffffff800000000 | uVar10 << 3));
  uVar5 = FUN_0056bba4(param_1,uVar10);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(param_1 + 0x68) - 1U != param_3) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("(id) == (ninst_-1)","external/com_github_google_re2/re2/compile.cc",0x245,
                    "AddSuffixRecursive");
    }
    *(undefined8 *)(*(long *)(param_1 + 0x58) + (long)(int)param_3 * 8) = 0;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -1;
  }
  iVar4 = FUN_0056be54(param_1,*(uint *)(*(long *)(param_1 + 0x58) +
                                        (-(uVar11 >> 0x1f) & 0xfffffff800000000 | uVar11 << 3)) >> 4
                       ,uVar2 >> 4);
  if (iVar4 == 0) {
    return 0;
  }
  lVar8 = (long)(int)uVar11 * 8;
  uVar2 = *(uint *)(*(long *)(param_1 + 0x58) + lVar8);
  *(uint *)(*(long *)(param_1 + 0x58) + lVar8) = uVar2 & 8 | iVar4 << 4 | uVar2 & 7;
  return (int)param_2;
}


