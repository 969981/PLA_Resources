/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056b698; name: FUN_0056b698
 */


void FUN_0056b698(long param_1,undefined1 param_2,undefined1 param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint *puVar9;
  
  uVar3 = FUN_0056b1a8(param_1,param_2,param_3,param_4 & 1);
  lVar4 = *(long *)(param_1 + 0x58);
  uVar5 = (uint)(uVar3 >> 0x20);
  if (param_5 != 0) {
    if (uVar5 == 0) {
      return;
    }
    uVar6 = (ulong)(uVar5 >> 1);
    puVar9 = (uint *)(lVar4 + uVar6 * 8);
    uVar5 = *puVar9;
    if ((uVar3 >> 0x20 & 1) != 0) goto LAB_0056b708;
    do {
      uVar2 = uVar5 >> 4;
      *puVar9 = uVar5 & 8 | param_5 << 4 | uVar5 & 7;
      while( true ) {
        if (uVar2 == 0) {
          return;
        }
        uVar6 = (ulong)(uVar2 >> 1);
        puVar9 = (uint *)(lVar4 + uVar6 * 8);
        uVar5 = *puVar9;
        if ((uVar2 & 1) == 0) break;
LAB_0056b708:
        if ((uVar5 & 6) != 0) goto LAB_0056b7d0;
        lVar7 = lVar4 + uVar6 * 8;
        uVar2 = *(uint *)(lVar7 + 4);
        *(int *)(lVar7 + 4) = param_5;
      }
    } while( true );
  }
  uVar2 = *(uint *)(param_1 + 0xa4);
  if (uVar2 == 0) {
    *(uint *)(param_1 + 0xa4) = uVar5;
    return;
  }
  if (uVar5 != 0) {
    uVar1 = uVar2;
    do {
      while( true ) {
        uVar8 = uVar1;
        uVar1 = *(uint *)(lVar4 + (ulong)(uVar8 >> 1) * 8);
        if ((uVar8 & 1) == 0) break;
        if ((uVar1 & 6) != 0) {
LAB_0056b7d0:
                    /* WARNING: Subroutine does not return */
          __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                        "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
        }
        uVar1 = *(uint *)(lVar4 + (ulong)(uVar8 >> 1) * 8 + 4);
        if (uVar1 == 0) goto LAB_0056b774;
      }
      uVar1 = uVar1 >> 4;
    } while (uVar1 != 0);
LAB_0056b774:
    if ((uVar8 & 1) != 0) {
      *(uint *)(lVar4 + (ulong)(uVar8 >> 1) * 8 + 4) = uVar5;
      *(uint *)(param_1 + 0xa4) = uVar2;
      return;
    }
    lVar7 = (ulong)(uVar8 >> 1) * 8;
    uVar1 = *(uint *)(lVar4 + lVar7);
    *(uint *)(lVar4 + lVar7) = uVar1 & 8 | uVar5 << 4 | uVar1 & 7;
  }
  *(uint *)(param_1 + 0xa4) = uVar2;
  return;
}


