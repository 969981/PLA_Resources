/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 001f378c; name: FUN_001f378c
 */


ulong FUN_001f378c(long param_1,uint param_2,int param_3)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  ushort *puVar7;
  ushort uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar9 = (ulong)param_2;
    lVar6 = 0;
    do {
      if (*(int *)(param_1 + lVar6) != -1) {
        if (param_3 < 1) {
          iVar4 = 0;
          auVar11 = ZEXT816(0);
        }
        else {
          auVar11 = FUN_001f8fb4();
          iVar4 = param_3;
        }
        iVar5 = 0;
        if (param_3 != 0) {
          iVar5 = iVar4;
        }
        if (param_3 < 0) {
          iVar5 = -1;
        }
        uVar3 = nnsocketPoll(param_1,uVar9,iVar5);
        puVar2 = PTR_DAT_04372740;
        do {
          if (uVar3 != 0xffffffff) {
            uVar10 = (ulong)uVar3;
            if ((int)uVar3 < 0) {
              uVar10 = 0xffffffff;
            }
            else if (uVar3 != 0) {
              puVar7 = (ushort *)(param_1 + 6);
              do {
                if (*(int *)(puVar7 + -3) != -1) {
                  uVar1 = *puVar7;
                  if ((uVar1 & 0x18) != 0) {
                    uVar8 = (ushort)((uVar1 & 0x10) >> 4);
                    if ((uVar1 & 8) != 0) {
                      uVar8 = 5;
                    }
                    *puVar7 = uVar1 | uVar8;
                  }
                }
                puVar7 = puVar7 + 4;
                uVar9 = uVar9 - 1;
              } while (uVar9 != 0);
            }
            return uVar10;
          }
          iVar4 = nnsocketGetLastErrno();
          if (iVar4 != 0) {
            if (iVar4 != 4) {
              return 0xffffffff;
            }
            if (*(int *)puVar2 != 0) {
              return 0xffffffff;
            }
          }
          if (0 < param_3) {
            auVar12 = FUN_001f8fb4();
            iVar5 = FUN_001f8fe0(auVar12._0_8_,auVar12._8_8_,auVar11._0_8_,auVar11._8_8_);
            iVar5 = param_3 - iVar5;
            if (iVar5 < 1) {
              return 0;
            }
          }
          iVar4 = 0;
          if (param_3 != 0) {
            iVar4 = iVar5;
          }
          if (param_3 < 0) {
            iVar4 = -1;
          }
          uVar3 = nnsocketPoll(param_1,uVar9,iVar4);
          iVar5 = iVar4;
        } while( true );
      }
      lVar6 = lVar6 + 8;
    } while (uVar9 * 8 != lVar6);
  }
  uVar9 = FUN_001f3494(param_3);
  return uVar9;
}


