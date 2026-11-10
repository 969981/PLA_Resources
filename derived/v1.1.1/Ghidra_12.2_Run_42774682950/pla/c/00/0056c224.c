/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056c224; name: FUN_0056c224
 */


ulong FUN_0056c224(long param_1,ulong param_2,ulong param_3)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  undefined1 auStack_130 [8];
  undefined1 auStack_128 [264];
  
  lVar4 = *(long *)(param_1 + 0x58);
  uVar6 = *(uint *)(lVar4 + (-(param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                            (param_2 & 0xffffffff) << 3));
  if ((uVar6 & 7) == 2) {
    if ((*(uint *)(lVar4 + (-(param_3 >> 0x1f & 1) & 0xfffffff800000000 |
                           (param_3 & 0xffffffff) << 3)) & 7) != 2) {
LAB_0056c3f4:
                    /* WARNING: Subroutine does not return */
      __assert_fail("(opcode()) == (kInstByteRange)","external/com_github_google_re2\\re2/prog.h",
                    0x57,"lo");
    }
    lVar7 = lVar4 + (long)(int)param_2 * 8;
    lVar4 = lVar4 + (long)(int)param_3 * 8;
    if (((*(char *)(lVar7 + 4) == *(char *)(lVar4 + 4)) &&
        (*(char *)(lVar7 + 5) == *(char *)(lVar4 + 5))) &&
       (((*(ushort *)(lVar4 + 6) ^ *(ushort *)(lVar7 + 6)) & 1) == 0)) {
      uVar5 = 0;
    }
    else {
LAB_0056c3c8:
      uVar5 = 0;
      param_2 = 0;
    }
LAB_0056c3d0:
    return param_2 & 0xffffffff | uVar5 << 0x20;
  }
  if ((uVar6 & 7) == 0) {
    puVar1 = (uint *)(lVar4 + (long)(int)param_3 * 8);
    do {
      if ((uVar6 & 6) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                      "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
      }
      uVar3 = (uint)param_2;
      lVar7 = (long)*(int *)(lVar4 + (long)(int)uVar3 * 8 + 4);
      if (((*(uint *)(lVar4 + lVar7 * 8) & 7) != 2) || ((*puVar1 & 7) != 2)) goto LAB_0056c3f4;
      lVar7 = lVar4 + lVar7 * 8;
      if ((*(char *)(lVar7 + 4) == (char)puVar1[1]) &&
         ((*(char *)(lVar7 + 5) == *(char *)((long)puVar1 + 5) &&
          (((*(ushort *)((long)puVar1 + 6) ^ *(ushort *)(lVar7 + 6)) & 1) == 0)))) {
        uVar5 = (ulong)(uVar3 << 1 | 1);
        goto LAB_0056c3d0;
      }
      if (*(char *)(param_1 + 0x50) == '\0') goto LAB_0056c3c8;
      param_2 = (ulong)(uVar6 >> 4);
      uVar6 = *(uint *)(lVar4 + param_2 * 8) & 7;
      if (uVar6 == 2) {
        lVar4 = lVar4 + param_2 * 8;
        if ((*(char *)(lVar4 + 4) != (char)puVar1[1]) ||
           (*(char *)(lVar4 + 5) != *(char *)((long)puVar1 + 5))) goto LAB_0056c3c8;
        uVar6 = uVar3 << 1;
        bVar2 = ((*(ushort *)((long)puVar1 + 6) ^ *(ushort *)(lVar4 + 6)) & 1) != 0;
        if (bVar2) {
          uVar6 = 0;
        }
        uVar5 = (ulong)uVar6;
        if (bVar2) {
          uVar3 = 0;
        }
        param_2 = (ulong)uVar3;
        goto LAB_0056c3d0;
      }
      if (uVar6 != 0) goto LAB_0056c3f4;
      uVar6 = *(uint *)(lVar4 + param_2 * 8);
    } while ((uVar6 & 7) == 0);
  }
  FUN_0054f038(auStack_130,"external/com_github_google_re2/re2/compile.cc",0x275);
                    /* try { // try from 0056c374 to 0056c37f has its CatchHandler @ 0056c434 */
  FUN_00551750(auStack_128,"should never happen");
                    /* WARNING: Subroutine does not return */
  FUN_005503fc(auStack_130);
}


