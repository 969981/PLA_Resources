/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111daac; name: FUN_0111daac
 */


undefined8 FUN_0111daac(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  short *psVar7;
  undefined1 auStack_40 [16];
  
  FUN_02c4fb44(auStack_40);
  iVar2 = FUN_02c4fc60(auStack_40,0xe);
  if (iVar2 == 0) {
    iVar2 = 6;
    uVar3 = *(uint *)(param_1 + 0x530);
    do {
      if (uVar3 < 6) {
        uVar5 = (ulong)(uVar3 * 0x1e);
        if (*(ushort *)(param_1 + uVar5 * 4 + 0x68) == param_2) {
LAB_0111df78:
          puVar4 = (ushort *)(param_1 + (uVar5 & 0xffffffff) * 4 + 0x6a);
          uVar3 = (uint)*puVar4 + param_3;
          if (uVar3 < 1000) {
            *puVar4 = (ushort)uVar3;
            return 1;
          }
          return 0;
        }
        uVar6 = uVar5 | 1;
        if (((((((*(ushort *)(param_1 + (uVar5 | 1) * 4 + 0x68) == param_2) ||
                (uVar6 = uVar5 + 2, *(ushort *)(param_1 + (uVar5 + 2) * 4 + 0x68) == param_2)) ||
               (uVar6 = uVar5 + 3, *(ushort *)(param_1 + (uVar5 + 3) * 4 + 0x68) == param_2)) ||
              ((uVar6 = uVar5 + 4, *(ushort *)(param_1 + (uVar5 + 4) * 4 + 0x68) == param_2 ||
               (uVar6 = uVar5 + 5, *(ushort *)(param_1 + (uVar5 + 5) * 4 + 0x68) == param_2)))) ||
             (uVar6 = uVar5 + 6, *(ushort *)(param_1 + (uVar5 + 6) * 4 + 0x68) == param_2)) ||
            (((((uVar6 = uVar5 + 7, *(ushort *)(param_1 + (uVar5 + 7) * 4 + 0x68) == param_2 ||
                (uVar6 = uVar5 + 8, *(ushort *)(param_1 + (uVar5 + 8) * 4 + 0x68) == param_2)) ||
               ((uVar6 = uVar5 + 9, *(ushort *)(param_1 + (uVar5 + 9) * 4 + 0x68) == param_2 ||
                (((uVar6 = uVar5 + 10, *(ushort *)(param_1 + (uVar5 + 10) * 4 + 0x68) == param_2 ||
                  (uVar6 = uVar5 + 0xb, *(ushort *)(param_1 + (uVar5 + 0xb) * 4 + 0x68) == param_2))
                 || (uVar6 = uVar5 + 0xc, *(ushort *)(param_1 + (uVar5 + 0xc) * 4 + 0x68) == param_2
                    )))))) ||
              ((uVar6 = uVar5 + 0xd, *(ushort *)(param_1 + (uVar5 + 0xd) * 4 + 0x68) == param_2 ||
               (uVar6 = uVar5 + 0xe, *(ushort *)(param_1 + (uVar5 + 0xe) * 4 + 0x68) == param_2))))
             || (uVar6 = uVar5 + 0xf, *(ushort *)(param_1 + (uVar5 + 0xf) * 4 + 0x68) == param_2))))
           || ((((uVar6 = uVar5 + 0x10, *(ushort *)(param_1 + (uVar5 + 0x10) * 4 + 0x68) == param_2
                 || (uVar6 = uVar5 + 0x11,
                    *(ushort *)(param_1 + (uVar5 + 0x11) * 4 + 0x68) == param_2)) ||
                ((uVar6 = uVar5 + 0x12, *(ushort *)(param_1 + (uVar5 + 0x12) * 4 + 0x68) == param_2
                 || (((uVar6 = uVar5 + 0x13,
                      *(ushort *)(param_1 + (uVar5 + 0x13) * 4 + 0x68) == param_2 ||
                      (uVar6 = uVar5 + 0x14,
                      *(ushort *)(param_1 + (uVar5 + 0x14) * 4 + 0x68) == param_2)) ||
                     (uVar6 = uVar5 + 0x15,
                     *(ushort *)(param_1 + (uVar5 + 0x15) * 4 + 0x68) == param_2)))))) ||
               (((uVar6 = uVar5 + 0x16, *(ushort *)(param_1 + (uVar5 + 0x16) * 4 + 0x68) == param_2
                 || (uVar6 = uVar5 + 0x17,
                    *(ushort *)(param_1 + (uVar5 + 0x17) * 4 + 0x68) == param_2)) ||
                ((uVar6 = uVar5 + 0x18, *(ushort *)(param_1 + (uVar5 + 0x18) * 4 + 0x68) == param_2
                 || (((uVar6 = uVar5 + 0x19,
                      *(ushort *)(param_1 + (uVar5 + 0x19) * 4 + 0x68) == param_2 ||
                      (uVar6 = uVar5 + 0x1a,
                      *(ushort *)(param_1 + (uVar5 + 0x1a) * 4 + 0x68) == param_2)) ||
                     ((uVar6 = uVar5 + 0x1b,
                      *(ushort *)(param_1 + (uVar5 + 0x1b) * 4 + 0x68) == param_2 ||
                      (uVar6 = uVar5 + 0x1c,
                      *(ushort *)(param_1 + (uVar5 + 0x1c) * 4 + 0x68) == param_2)))))))))))) {
          uVar5 = uVar6;
          goto LAB_0111df78;
        }
        uVar5 = uVar5 + 0x1d;
        if (*(ushort *)(param_1 + uVar5 * 4 + 0x68) == param_2) goto LAB_0111df78;
      }
      uVar1 = 0;
      if (uVar3 + 1 < 6) {
        uVar1 = uVar3 + 1;
      }
      iVar2 = iVar2 + -1;
      uVar3 = uVar1;
    } while (iVar2 != 0);
    iVar2 = 6;
    uVar3 = *(uint *)(param_1 + 0x530);
    do {
      if (uVar3 < 6) {
        uVar5 = (ulong)(uVar3 * 0x1e);
        psVar7 = (short *)(param_1 + uVar5 * 4 + 0x68);
        if (*psVar7 == 0) {
          uVar6 = uVar5;
LAB_0111dfac:
          *psVar7 = (short)param_2;
          *(short *)(param_1 + (uVar6 & 0xffffffff) * 4 + 0x6a) = (short)param_3;
          param_1 = param_1 + (ulong)(param_2 >> 3);
          *(byte *)(param_1 + 0x434) =
               *(byte *)(param_1 + 0x434) | (byte)(1 << (ulong)(param_2 & 7));
          return 1;
        }
        psVar7 = (short *)(param_1 + (uVar5 | 1) * 4 + 0x68);
        uVar6 = uVar5 | 1;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 2) * 4 + 0x68);
        uVar6 = uVar5 + 2;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 3) * 4 + 0x68);
        uVar6 = uVar5 + 3;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 4) * 4 + 0x68);
        uVar6 = uVar5 + 4;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 5) * 4 + 0x68);
        uVar6 = uVar5 + 5;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 6) * 4 + 0x68);
        uVar6 = uVar5 + 6;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 7) * 4 + 0x68);
        uVar6 = uVar5 + 7;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 8) * 4 + 0x68);
        uVar6 = uVar5 + 8;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 9) * 4 + 0x68);
        uVar6 = uVar5 + 9;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 10) * 4 + 0x68);
        uVar6 = uVar5 + 10;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0xb) * 4 + 0x68);
        uVar6 = uVar5 + 0xb;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0xc) * 4 + 0x68);
        uVar6 = uVar5 + 0xc;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0xd) * 4 + 0x68);
        uVar6 = uVar5 + 0xd;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0xe) * 4 + 0x68);
        uVar6 = uVar5 + 0xe;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0xf) * 4 + 0x68);
        uVar6 = uVar5 + 0xf;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x10) * 4 + 0x68);
        uVar6 = uVar5 + 0x10;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x11) * 4 + 0x68);
        uVar6 = uVar5 + 0x11;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x12) * 4 + 0x68);
        uVar6 = uVar5 + 0x12;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x13) * 4 + 0x68);
        uVar6 = uVar5 + 0x13;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x14) * 4 + 0x68);
        uVar6 = uVar5 + 0x14;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x15) * 4 + 0x68);
        uVar6 = uVar5 + 0x15;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x16) * 4 + 0x68);
        uVar6 = uVar5 + 0x16;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x17) * 4 + 0x68);
        uVar6 = uVar5 + 0x17;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x18) * 4 + 0x68);
        uVar6 = uVar5 + 0x18;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x19) * 4 + 0x68);
        uVar6 = uVar5 + 0x19;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x1a) * 4 + 0x68);
        uVar6 = uVar5 + 0x1a;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x1b) * 4 + 0x68);
        uVar6 = uVar5 + 0x1b;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x1c) * 4 + 0x68);
        uVar6 = uVar5 + 0x1c;
        if (*psVar7 == 0) goto LAB_0111dfac;
        psVar7 = (short *)(param_1 + (uVar5 + 0x1d) * 4 + 0x68);
        uVar6 = uVar5 + 0x1d;
        if (*psVar7 == 0) goto LAB_0111dfac;
      }
      uVar1 = 0;
      if (uVar3 + 1 < 6) {
        uVar1 = uVar3 + 1;
      }
      iVar2 = iVar2 + -1;
      uVar3 = uVar1;
    } while (iVar2 != 0);
  }
  return 0;
}


