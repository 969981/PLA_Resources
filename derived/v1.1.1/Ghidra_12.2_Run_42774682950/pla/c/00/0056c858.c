/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056c858; name: FUN_0056c858
 */


void FUN_0056c858(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  if ((0xff < (int)param_2) || ((int)param_3 < (int)param_2)) {
    return;
  }
  if (0xfe < (int)param_3) {
    param_3 = 0xff;
  }
  uVar3 = FUN_0056b1a8(param_1,param_2 & 0xff,param_3 & 0xff,param_4 & 1);
  uVar1 = *(uint *)(param_1 + 0xa4);
  iVar4 = (int)((ulong)uVar3 >> 0x20);
  if (uVar1 == 0) {
    *(int *)(param_1 + 0xa4) = iVar4;
    FUN_0056bd14(param_1,uVar3);
    return;
  }
  if (iVar4 != 0) {
    lVar5 = *(long *)(param_1 + 0x58);
    uVar2 = uVar1;
    do {
      while( true ) {
        uVar7 = uVar2;
        uVar2 = *(uint *)(lVar5 + (ulong)(uVar7 >> 1) * 8);
        if ((uVar7 & 1) == 0) break;
        if ((uVar2 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                        "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
        }
        uVar2 = *(uint *)(lVar5 + (ulong)(uVar7 >> 1) * 8 + 4);
        if (uVar2 == 0) goto LAB_0056c8e0;
      }
      uVar2 = uVar2 >> 4;
    } while (uVar2 != 0);
LAB_0056c8e0:
    if ((uVar7 & 1) != 0) {
      *(int *)(lVar5 + (ulong)(uVar7 >> 1) * 8 + 4) = iVar4;
      *(uint *)(param_1 + 0xa4) = uVar1;
      FUN_0056bd14(param_1,uVar3);
      return;
    }
    lVar6 = (ulong)(uVar7 >> 1) * 8;
    uVar2 = *(uint *)(lVar5 + lVar6);
    *(uint *)(lVar5 + lVar6) = uVar2 & 8 | iVar4 << 4 | uVar2 & 7;
  }
  *(uint *)(param_1 + 0xa4) = uVar1;
  FUN_0056bd14(param_1,uVar3);
  return;
}


