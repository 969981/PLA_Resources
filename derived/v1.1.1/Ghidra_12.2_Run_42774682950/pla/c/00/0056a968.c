/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0056a968; name: FUN_0056a968
 */


ulong FUN_0056a968(long param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  
  uVar7 = 0;
  iVar3 = (int)param_2;
  uVar8 = 0;
  if ((iVar3 != 0) && (iVar4 = (int)param_3, iVar4 != 0)) {
    lVar5 = *(long *)(param_1 + 0x58);
    uVar8 = param_2 >> 0x20;
    uVar7 = param_3 >> 0x20;
    uVar6 = (uint)(param_2 >> 0x20);
    if ((uVar6 != iVar3 * 2) ||
       ((*(uint *)(lVar5 + (-(param_2 >> 0x1f & 1) & 0xfffffff800000000 |
                           (param_2 & 0xffffffff) << 3)) & 0xfffffff7) != 6)) {
      if (*(char *)(param_1 + 0x50) == '\0') {
        if (uVar6 == 0) {
LAB_0056aaec:
          return param_2 & 0xffffffff | uVar7 << 0x20;
        }
        uVar9 = (ulong)(uVar6 >> 1);
        puVar10 = (uint *)(lVar5 + uVar9 * 8);
        uVar6 = *puVar10;
        if ((uVar8 & 1) != 0) goto LAB_0056aad4;
        do {
          uVar2 = uVar6 >> 4;
          *puVar10 = uVar6 & 8 | iVar4 << 4 | uVar6 & 7;
          while( true ) {
            if (uVar2 == 0) goto LAB_0056aaec;
            uVar9 = (ulong)(uVar2 >> 1);
            puVar10 = (uint *)(lVar5 + uVar9 * 8);
            uVar6 = *puVar10;
            if ((uVar2 & 1) == 0) break;
LAB_0056aad4:
            if ((uVar6 & 6) != 0) goto LAB_0056ab04;
            lVar1 = lVar5 + uVar9 * 8;
            uVar2 = *(uint *)(lVar1 + 4);
            *(int *)(lVar1 + 4) = iVar4;
          }
        } while( true );
      }
      uVar6 = (uint)(param_3 >> 0x20);
      if (uVar6 == 0) {
LAB_0056aa7c:
        return param_3 & 0xffffffff | uVar8 << 0x20;
      }
      uVar9 = (ulong)(uVar6 >> 1);
      puVar10 = (uint *)(lVar5 + uVar9 * 8);
      uVar6 = *puVar10;
      if ((uVar7 & 1) != 0) goto LAB_0056aa64;
      do {
        uVar2 = uVar6 >> 4;
        *puVar10 = uVar6 & 8 | iVar3 << 4 | uVar6 & 7;
        while( true ) {
          if (uVar2 == 0) goto LAB_0056aa7c;
          uVar9 = (ulong)(uVar2 >> 1);
          puVar10 = (uint *)(lVar5 + uVar9 * 8);
          uVar6 = *puVar10;
          if ((uVar2 & 1) == 0) break;
LAB_0056aa64:
          if ((uVar6 & 6) != 0) goto LAB_0056ab04;
          lVar1 = lVar5 + uVar9 * 8;
          uVar2 = *(uint *)(lVar1 + 4);
          *(int *)(lVar1 + 4) = iVar3;
        }
      } while( true );
    }
    if (uVar6 != 0) {
      uVar9 = (ulong)(uVar6 >> 1);
      puVar10 = (uint *)(lVar5 + uVar9 * 8);
      uVar6 = *puVar10;
      if ((uVar8 & 1) != 0) goto LAB_0056a9e8;
      do {
        uVar2 = uVar6 >> 4;
        *puVar10 = uVar6 & 8 | iVar4 << 4 | uVar6 & 7;
        while( true ) {
          if (uVar2 == 0) goto LAB_0056aa00;
          uVar9 = (ulong)(uVar2 >> 1);
          puVar10 = (uint *)(lVar5 + uVar9 * 8);
          uVar6 = *puVar10;
          if ((uVar2 & 1) == 0) break;
LAB_0056a9e8:
          if ((uVar6 & 6) != 0) {
LAB_0056ab04:
                    /* WARNING: Subroutine does not return */
            __assert_fail("opcode() == kInstAlt || opcode() == kInstAltMatch",
                          "external/com_github_google_re2\\re2/prog.h",0x55,"out1");
          }
          lVar1 = lVar5 + uVar9 * 8;
          uVar2 = *(uint *)(lVar1 + 4);
          *(int *)(lVar1 + 4) = iVar4;
        }
      } while( true );
    }
LAB_0056aa00:
    uVar8 = param_3;
  }
  return uVar8 & 0xffffffff | uVar7 << 0x20;
}


