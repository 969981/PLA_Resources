/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02c2d3fc; name: FUN_02c2d3fc
 */


void FUN_02c2d3fc(uint param_1,ushort *param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_3 != 0) {
    uVar5 = (ulong)param_3;
    do {
      param_1 = FUN_02c2d3b0(param_1,param_2);
      if (((param_1 & 1) == 0) && (param_1 = FUN_02c2d4f0(param_1,param_2), (param_1 & 1) == 0)) {
        uVar2 = (uint)*param_2;
        uVar4 = (ulong)(uVar2 - 0xf5);
        if (uVar2 - 0xf5 < 0x37) {
          if ((1L << (uVar4 & 0x3f) & 0x40004040001000U) != 0) goto LAB_02c2d454;
          if (uVar4 == 0) {
            lVar3 = 0;
          }
          else {
            if (uVar4 != 10) goto LAB_02c2d490;
            lVar3 = 1;
          }
LAB_02c2d4d0:
          uVar1 = (&DAT_03a8479a)[lVar3 * 2];
        }
        else {
LAB_02c2d490:
          if ((0x3c < uVar2 - 0x142) ||
             ((1L << ((ulong)(uVar2 - 0x142) & 0x3f) & 0x1000220080000801U) == 0)) {
            if (uVar2 == 0x451) {
              lVar3 = 2;
              goto LAB_02c2d4d0;
            }
            goto LAB_02c2d45c;
          }
LAB_02c2d454:
          uVar1 = *param_2 - 1;
        }
        *param_2 = uVar1;
      }
LAB_02c2d45c:
      uVar5 = uVar5 - 1;
      param_2 = param_2 + 1;
    } while (uVar5 != 0);
  }
  return;
}


