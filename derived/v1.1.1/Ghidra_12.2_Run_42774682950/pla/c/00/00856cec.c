/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00856cec; name: FUN_00856cec
 */


void FUN_00856cec(long param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  int *piVar10;
  float fVar11;
  float fVar12;
  char acStack_1c0 [64];
  char acStack_180 [64];
  char acStack_140 [64];
  char acStack_100 [64];
  char acStack_c0 [64];
  
  FUN_008459b0("[Analysis] --------- BEGIN(Pia Connection Info, %d.%03d sec. passed) ---------",
               *(int *)(param_1 + 0x480) / 1000,*(int *)(param_1 + 0x480) % 1000);
  FUN_008459b0(
              "[Analysis] StationIndex,  RTT[ms],  RTTMin[ms],  RTTMax[ms],  UnicastPacketLoss[%%],  BroadcastPacketLoss[%%]"
              );
  uVar9 = 0;
  piVar10 = (int *)(param_1 + 0x18);
  if (*(char *)(param_1 + 0x2c) != '\0') goto LAB_00856de8;
  do {
    do {
      uVar9 = uVar9 + 1;
      piVar2 = piVar10 + 0xc;
      if (uVar9 == 0x18) {
        FUN_008459b0(
                    "[Analysis] ------------------------------- END -------------------------------"
                    );
        return;
      }
      piVar1 = piVar10 + 0x11;
      piVar10 = piVar2;
    } while ((char)*piVar1 == '\0');
LAB_00856de8:
    uVar7 = piVar10[-2] - piVar10[-3];
    iVar3 = piVar10[-1];
    iVar5 = *piVar10;
    fVar12 = -1.0;
    if (uVar7 != 0) {
      fVar12 = ((float)(uint)(iVar5 - iVar3) * 100.0) / (float)uVar7;
    }
    uVar8 = piVar10[2] - piVar10[1];
    iVar4 = piVar10[3];
    iVar6 = piVar10[4];
    fVar11 = -1.0;
    if (uVar8 != 0) {
      fVar11 = ((float)(uint)(iVar6 - iVar4) * 100.0) / (float)uVar8;
    }
    if (piVar10[-6] < 0) {
      nn::util::SNPrintf(acStack_c0,0x40,"      ---,");
      if (piVar10[-5] < 0) goto LAB_00856ed0;
LAB_00856e64:
      nn::util::SNPrintf(acStack_100,0x40,"        %4d,");
      if (-1 < piVar10[-4]) goto LAB_00856e7c;
LAB_00856ee8:
      nn::util::SNPrintf(acStack_140,0x40,"         ---,");
      if (0.0 <= fVar12) goto LAB_00856f00;
LAB_00856e94:
      nn::util::SNPrintf(acStack_180,0x40,"        ---");
      if (fVar11 < 0.0) goto LAB_00856f20;
LAB_00856d88:
      nn::util::SNPrintf(acStack_1c0,0x40,"       %6.2f",(double)fVar11);
    }
    else {
      nn::util::SNPrintf(acStack_c0,0x40,"     %4d,");
      if (-1 < piVar10[-5]) goto LAB_00856e64;
LAB_00856ed0:
      nn::util::SNPrintf(acStack_100,0x40,"         ---,");
      if (piVar10[-4] < 0) goto LAB_00856ee8;
LAB_00856e7c:
      nn::util::SNPrintf(acStack_140,0x40,"        %4d,");
      if (fVar12 < 0.0) goto LAB_00856e94;
LAB_00856f00:
      nn::util::SNPrintf(acStack_180,0x40,"     %6.2f",(double)fVar12);
      if (0.0 <= fVar11) goto LAB_00856d88;
LAB_00856f20:
      nn::util::SNPrintf(acStack_1c0,0x40,"          ---");
    }
    FUN_008459b0("[Analysis]         0x%02x,%s%s%s%s(%4d/%4d),%s(%4d/%4d)",uVar9 & 0xffffffff,
                 acStack_c0,acStack_100,acStack_140,acStack_180,iVar5 - iVar3,uVar7,acStack_1c0,
                 iVar6 - iVar4,uVar8);
  } while( true );
}


