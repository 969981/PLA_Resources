/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056aec8; name: FUN_0056aec8
 */


ulong FUN_0056aec8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  
  if ((int)param_2 == 0) {
    uVar6 = FUN_0056b0ac(param_1);
    uVar8 = uVar6 >> 0x20;
  }
  else if ((*(char *)(param_1 + 0x48) == '\0') &&
          (uVar3 = *(uint *)(param_1 + 0x68), (int)uVar3 < *(int *)(param_1 + 0x6c))) {
    uVar4 = *(uint *)(param_1 + 0x60);
    if ((int)uVar4 <= (int)uVar3) {
      uVar1 = 8;
      if (uVar4 != 0) {
        uVar1 = uVar4;
      }
      do {
        uVar4 = uVar1;
        uVar1 = uVar4 << 1;
      } while ((int)uVar4 <= (int)uVar3);
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                    -(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar4 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar3 = uVar4 - *(int *)(param_1 + 0x68);
      memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3);
      lVar2 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __dest;
      if (lVar2 != 0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      uVar3 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar4;
    }
    uVar6 = (ulong)uVar3;
    *(uint *)(param_1 + 0x68) = uVar3 + 1;
    if ((int)uVar3 < 0) {
      uVar8 = 0;
      uVar6 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + 0x58) + (long)(int)uVar3 * 8;
      uVar8 = param_2 >> 0x20;
      if ((param_3 & 1) == 0) {
        FUN_00552a88(lVar2,param_2 & 0xffffffff,0);
        uVar3 = uVar3 << 1 | 1;
      }
      else {
        FUN_00552a88(lVar2,0,param_2 & 0xffffffff);
        uVar3 = uVar3 << 1;
        if (uVar3 == 0) goto LAB_0056afe0;
      }
      uVar8 = (ulong)uVar3;
      iVar7 = (int)(param_2 >> 0x20);
      if (iVar7 != 0) {
        lVar2 = *(long *)(param_1 + 0x58);
        do {
          while( true ) {
            uVar4 = uVar3;
            uVar3 = *(uint *)(lVar2 + (ulong)(uVar4 >> 1) * 8);
            if ((uVar4 & 1) == 0) break;
            if ((uVar3 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                            "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
            }
            uVar3 = *(uint *)(lVar2 + (ulong)(uVar4 >> 1) * 8 + 4);
            if (uVar3 == 0) goto LAB_0056b05c;
          }
          uVar3 = uVar3 >> 4;
        } while (uVar3 != 0);
LAB_0056b05c:
        if ((uVar4 & 1) == 0) {
          lVar5 = (ulong)(uVar4 >> 1) * 8;
          uVar3 = *(uint *)(lVar2 + lVar5);
          *(uint *)(lVar2 + lVar5) = uVar3 & 8 | iVar7 << 4 | uVar3 & 7;
        }
        else {
          *(int *)(lVar2 + (ulong)(uVar4 >> 1) * 8 + 4) = iVar7;
        }
      }
    }
  }
  else {
    uVar8 = 0;
    *(undefined1 *)(param_1 + 0x48) = 1;
    uVar6 = 0;
  }
LAB_0056afe0:
  return uVar6 & 0xffffffff | uVar8 << 0x20;
}


