/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056c964; name: FUN_0056c964
 */


void FUN_0056c964(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  
  if (*(char *)(param_1 + 0x50) == '\0') {
    uVar5 = FUN_0056b1a8(param_1,0x80,0xbf,0);
    uVar1 = *(uint *)(param_1 + 0xa4);
    uVar8 = (uint)(uVar5 >> 0x20);
    uVar7 = uVar8;
    if ((uVar1 != 0) && (uVar7 = uVar1, uVar8 != 0)) {
      lVar9 = *(long *)(param_1 + 0x58);
      do {
        while( true ) {
          uVar11 = uVar1;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8);
          if ((uVar11 & 1) == 0) break;
          if ((uVar1 & 6) != 0) goto LAB_0056cd44;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4);
          if (uVar1 == 0) goto LAB_0056ca6c;
        }
        uVar1 = uVar1 >> 4;
      } while (uVar1 != 0);
LAB_0056ca6c:
      if ((uVar11 & 1) == 0) {
        lVar10 = (ulong)(uVar11 >> 1) * 8;
        uVar1 = *(uint *)(lVar9 + lVar10);
        *(uint *)(lVar9 + lVar10) = uVar1 & 8 | uVar8 << 4 | uVar1 & 7;
      }
      else {
        *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4) = uVar8;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar7;
    uVar2 = FUN_0056b698(param_1,0xc2,0xdf,0,uVar5 & 0xffffffff);
    FUN_0056bd14(param_1,uVar2);
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar5 & 0xffffffff);
    uVar3 = FUN_0056b698(param_1,0xe0,0xef,0,uVar2);
    FUN_0056bd14(param_1,uVar3);
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar2);
    uVar6 = 0xf4;
    uVar4 = 0xf0;
  }
  else {
    uVar4 = FUN_0056b1a8(param_1,0xc2,0xdf,0);
    uVar1 = *(uint *)(param_1 + 0xa4);
    uVar8 = (uint)((ulong)uVar4 >> 0x20);
    uVar7 = uVar8;
    if ((uVar1 != 0) && (uVar7 = uVar1, uVar8 != 0)) {
      lVar9 = *(long *)(param_1 + 0x58);
      do {
        while( true ) {
          uVar11 = uVar1;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8);
          if ((uVar11 & 1) == 0) break;
          if ((uVar1 & 6) != 0) goto LAB_0056cd44;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4);
          if (uVar1 == 0) goto LAB_0056c9e0;
        }
        uVar1 = uVar1 >> 4;
      } while (uVar1 != 0);
LAB_0056c9e0:
      if ((uVar11 & 1) == 0) {
        lVar10 = (ulong)(uVar11 >> 1) * 8;
        uVar1 = *(uint *)(lVar9 + lVar10);
        *(uint *)(lVar9 + lVar10) = uVar1 & 8 | uVar8 << 4 | uVar1 & 7;
      }
      else {
        *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4) = uVar8;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar7;
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar4);
    FUN_0056bd14(param_1,uVar2);
    uVar4 = FUN_0056b1a8(param_1,0xe0,0xef,0);
    uVar1 = *(uint *)(param_1 + 0xa4);
    uVar8 = (uint)((ulong)uVar4 >> 0x20);
    uVar7 = uVar8;
    if ((uVar1 != 0) && (uVar7 = uVar1, uVar8 != 0)) {
      lVar9 = *(long *)(param_1 + 0x58);
      do {
        while( true ) {
          uVar11 = uVar1;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8);
          if ((uVar11 & 1) == 0) break;
          if ((uVar1 & 6) != 0) goto LAB_0056cd44;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4);
          if (uVar1 == 0) goto LAB_0056cb34;
        }
        uVar1 = uVar1 >> 4;
      } while (uVar1 != 0);
LAB_0056cb34:
      if ((uVar11 & 1) == 0) {
        lVar10 = (ulong)(uVar11 >> 1) * 8;
        uVar1 = *(uint *)(lVar9 + lVar10);
        *(uint *)(lVar9 + lVar10) = uVar1 & 8 | uVar8 << 4 | uVar1 & 7;
      }
      else {
        *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4) = uVar8;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar7;
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar4);
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar2);
    FUN_0056bd14(param_1,uVar2);
    uVar4 = FUN_0056b1a8(param_1,0xf0,0xf4,0);
    uVar1 = *(uint *)(param_1 + 0xa4);
    uVar8 = (uint)((ulong)uVar4 >> 0x20);
    uVar7 = uVar8;
    if ((uVar1 != 0) && (uVar7 = uVar1, uVar8 != 0)) {
      lVar9 = *(long *)(param_1 + 0x58);
      do {
        while( true ) {
          uVar11 = uVar1;
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8);
          if ((uVar11 & 1) == 0) break;
          if ((uVar1 & 6) != 0) {
LAB_0056cd44:
                    /* WARNING: Subroutine does not return */
            __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                          "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
          }
          uVar1 = *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4);
          if (uVar1 == 0) goto LAB_0056cc10;
        }
        uVar1 = uVar1 >> 4;
      } while (uVar1 != 0);
LAB_0056cc10:
      if ((uVar11 & 1) == 0) {
        lVar10 = (ulong)(uVar11 >> 1) * 8;
        uVar1 = *(uint *)(lVar9 + lVar10);
        *(uint *)(lVar9 + lVar10) = uVar1 & 8 | uVar8 << 4 | uVar1 & 7;
      }
      else {
        *(uint *)(lVar9 + (ulong)(uVar11 >> 1) * 8 + 4) = uVar8;
      }
    }
    *(uint *)(param_1 + 0xa4) = uVar7;
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar4);
    uVar2 = FUN_0056b698(param_1,0x80,0xbf,0,uVar2);
    uVar4 = 0x80;
    uVar6 = 0xbf;
  }
  uVar2 = FUN_0056b698(param_1,uVar4,uVar6,0,uVar2);
  FUN_0056bd14(param_1,uVar2);
  return;
}


