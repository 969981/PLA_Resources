/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00310270; name: FUN_00310270
 */


/* WARNING: Removing unreachable block (ram,0x00310318) */

undefined1  [16] FUN_00310270(ulong *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [48];
  
  pbVar13 = (byte *)*param_1;
  pbVar4 = (byte *)param_1[1];
  if (((int)pbVar4 - (int)pbVar13 < 10) && (pbVar4 <= pbVar13)) {
    lVar3 = 0;
    uVar9 = 0;
    uVar2 = 1;
    do {
      if (pbVar13 == pbVar4) {
        do {
          uVar5 = FUN_0030fad0(param_1);
          if ((uVar5 & 1) == 0) goto LAB_00310554;
          pbVar13 = (byte *)*param_1;
          pbVar4 = (byte *)param_1[1];
        } while (pbVar13 == pbVar4);
      }
      bVar1 = *pbVar13;
      *param_1 = (ulong)(pbVar13 + 1);
      uVar9 = ((ulong)bVar1 & 0x7f) << (lVar3 * 7 & 0x3fU) | uVar9;
      lVar3 = lVar3 + 1;
      if (-1 < (char)bVar1) goto LAB_0031055c;
      pbVar13 = pbVar13 + 1;
    } while (lVar3 != 10);
LAB_00310554:
    uVar9 = 0;
    uVar2 = 0;
  }
  else {
    if (-1 < (char)*pbVar13) {
      FUN_0030f640(auStack_60,3,
                   "external/com_google_grpc_base/third_party/protobuf/src/google/protobuf/io/coded_stream.cc"
                   ,0x1a1);
                    /* try { // try from 003102c4 to 003102d7 has its CatchHandler @ 0031057c */
      uVar2 = FUN_0030f3ac(auStack_60,"CHECK failed: (buffer[0]) >= (128): ");
                    /* try { // try from 003102d8 to 003102df has its CatchHandler @ 00310578 */
      FUN_0030f41c(auStack_68,uVar2);
      FUN_0030f658(auStack_60);
    }
    uVar9 = (ulong)pbVar13[1];
    if ((char)pbVar13[1] < '\0') {
      uVar5 = (ulong)pbVar13[2];
      if ((char)pbVar13[2] < '\0') {
        uVar7 = (ulong)pbVar13[3];
        if ((char)pbVar13[3] < '\0') {
          uVar8 = (ulong)pbVar13[4];
          if ((char)pbVar13[4] < '\0') {
            uVar10 = (ulong)pbVar13[5];
            if ((char)pbVar13[5] < '\0') {
              uVar11 = (ulong)pbVar13[6];
              if ((char)pbVar13[6] < '\0') {
                uVar12 = (ulong)pbVar13[7];
                if ((char)pbVar13[7] < '\0') {
                  bVar1 = pbVar13[8];
                  if ((char)bVar1 < '\0') {
                    if ((char)pbVar13[9] < '\0') goto LAB_00310554;
                    lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + uVar8 * 0x10000000 +
                            (uVar10 << 0x23) + (uVar11 << 0x2a) + (uVar12 << 0x31) +
                            ((ulong)bVar1 << 0x38 ^ 0x8000000000000000) +
                            ((ulong)pbVar13[9] << 0x3f) + -0x102040810204080;
                    lVar6 = 10;
                  }
                  else {
                    lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + uVar8 * 0x10000000 +
                            (uVar10 << 0x23) + (uVar11 << 0x2a) + (uVar12 << 0x31) +
                            ((ulong)bVar1 << 0x38) + -0x102040810204080;
                    lVar6 = 9;
                  }
                }
                else {
                  lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + uVar8 * 0x10000000 +
                          (uVar10 << 0x23) + (uVar11 << 0x2a) + (uVar12 << 0x31) + -0x2040810204080;
                  lVar6 = 8;
                }
              }
              else {
                lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + uVar8 * 0x10000000 +
                        (uVar10 << 0x23) + (uVar11 << 0x2a) + -0x40810204080;
                lVar6 = 7;
              }
            }
            else {
              lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + uVar8 * 0x10000000 +
                      (uVar10 << 0x23) + -0x810204080;
              lVar6 = 6;
            }
          }
          else {
            lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + uVar8 * 0x10000000 +
                    -0x10204080;
            lVar6 = 5;
          }
        }
        else {
          lVar6 = 4;
          lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + uVar7 * 0x200000 + -0x204080;
        }
      }
      else {
        lVar3 = uVar9 * 0x80 + uVar5 * 0x4000 + -0x4080;
        lVar6 = 3;
      }
    }
    else {
      lVar3 = uVar9 * 0x80 + -0x80;
      lVar6 = 2;
    }
    uVar9 = lVar3 + (ulong)*pbVar13;
    uVar2 = 1;
    *param_1 = (ulong)(pbVar13 + lVar6);
  }
LAB_0031055c:
  auVar14._8_8_ = uVar2;
  auVar14._0_8_ = uVar9;
  return auVar14;
}


