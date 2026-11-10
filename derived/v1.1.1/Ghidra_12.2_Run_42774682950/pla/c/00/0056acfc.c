/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056acfc; name: FUN_0056acfc
 */


ulong FUN_0056acfc(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  void *__dest;
  long lVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  
  if ((*(char *)(param_1 + 0x48) == '\0') &&
     (uVar6 = *(uint *)(param_1 + 0x68), (int)uVar6 < *(int *)(param_1 + 0x6c))) {
    uVar7 = *(uint *)(param_1 + 0x60);
    if ((int)uVar7 <= (int)uVar6) {
      uVar1 = 8;
      if (uVar7 != 0) {
        uVar1 = uVar7;
      }
      do {
        uVar7 = uVar1;
        uVar1 = uVar7 << 1;
      } while ((int)uVar7 <= (int)uVar6);
      __dest = (void *)FUN_002e2e80(PTR_FUN_04373078,
                                    -(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3
                                   );
      if (*(void **)(param_1 + 0x58) != (void *)0x0) {
        memmove(__dest,*(void **)(param_1 + 0x58),(long)*(int *)(param_1 + 0x68) << 3);
      }
      uVar6 = uVar7 - *(int *)(param_1 + 0x68);
      memset((void *)((long)__dest + (long)*(int *)(param_1 + 0x68) * 8),0,
             -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3);
      lVar2 = *(long *)(param_1 + 0x58);
      *(void **)(param_1 + 0x58) = __dest;
      if (lVar2 != 0) {
        FUN_002e2ea0(PTR_LAB_04373088);
      }
      uVar6 = *(uint *)(param_1 + 0x68);
      *(uint *)(param_1 + 0x60) = uVar7;
    }
    *(uint *)(param_1 + 0x68) = uVar6 + 1;
    if (-1 < (int)uVar6) {
      FUN_00552a88(*(long *)(param_1 + 0x58) + (long)(int)uVar6 * 8,0,0);
      lVar2 = *(long *)(param_1 + 0x58);
      uVar7 = (uint)(param_2 >> 0x20);
      if (uVar7 != 0) {
        uVar5 = (ulong)(uVar7 >> 1);
        puVar4 = (uint *)(lVar2 + uVar5 * 8);
        uVar7 = *puVar4;
        if ((param_2 >> 0x20 & 1) != 0) goto LAB_0056ae20;
        do {
          uVar1 = uVar7 >> 4;
          *puVar4 = uVar7 & 8 | uVar6 << 4 | uVar7 & 7;
          while( true ) {
            if (uVar1 == 0) {
              lVar2 = *(long *)(param_1 + 0x58);
              goto LAB_0056ae3c;
            }
            uVar5 = (ulong)(uVar1 >> 1);
            puVar4 = (uint *)(lVar2 + uVar5 * 8);
            uVar7 = *puVar4;
            if ((uVar1 & 1) == 0) break;
LAB_0056ae20:
            if ((uVar7 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
              __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                            "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
            }
            lVar3 = lVar2 + uVar5 * 8;
            uVar1 = *(uint *)(lVar3 + 4);
            *(uint *)(lVar3 + 4) = uVar6;
          }
        } while( true );
      }
LAB_0056ae3c:
      if ((param_3 & 1) == 0) {
        lVar3 = (long)(int)uVar6 * 8;
        uVar7 = *(uint *)(lVar2 + lVar3);
        *(uint *)(lVar2 + lVar3) = uVar7 & 8 | (int)param_2 << 4 | uVar7 & 7;
        uVar5 = (ulong)(uVar6 << 1 | 1);
      }
      else {
        *(int *)(lVar2 + (long)(int)uVar6 * 8 + 4) = (int)param_2;
        uVar5 = (ulong)(uVar6 << 1);
      }
      goto LAB_0056ae64;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  uVar5 = 0;
  uVar6 = 0;
LAB_0056ae64:
  return (ulong)uVar6 | uVar5 << 0x20;
}


