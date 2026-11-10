/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 010db1d8; name: FUN_010db1d8
 */


undefined8 FUN_010db1d8(long param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  short *psVar5;
  ushort *puVar6;
  ulong uVar7;
  undefined1 auStack_50 [16];
  
  if (param_2 == 0) {
    return 0;
  }
  if (param_3 == 0) {
    return 0;
  }
  FUN_02c4fb44(auStack_50);
  uVar2 = FUN_02c4fc60(auStack_50,0x1b);
  if (param_3 <= uVar2) {
    FUN_02c4fb44(auStack_50,param_2);
    uVar4 = FUN_02c4fc60(auStack_50,0xe);
    iVar1 = (int)uVar4;
    uVar3 = FUN_010dac08(uVar4,uVar4 & 0xffffffff);
    if (iVar1 == 0) {
      psVar5 = (short *)(param_1 + 0x68);
    }
    else if (iVar1 == 1) {
      psVar5 = (short *)(param_1 + 0xaf4);
    }
    else {
      if (iVar1 != 2) {
        return 0;
      }
      psVar5 = (short *)(param_1 + 0xc84);
    }
    uVar4 = (ulong)uVar3;
    if (uVar3 != 0) {
      uVar7 = 0;
      puVar6 = (ushort *)(psVar5 + 1);
      do {
        if (puVar6[-1] == param_2) {
          if ((param_4 < uVar3) && (param_4 != (uint)uVar7)) {
            return 0;
          }
          if (uVar2 < *puVar6 + param_3) {
            return 0;
          }
          *puVar6 = (ushort)(*puVar6 + param_3);
          goto LAB_010db2d0;
        }
        uVar7 = uVar7 + 1;
        puVar6 = puVar6 + 2;
      } while (uVar4 != uVar7);
    }
    if (param_4 < uVar3) {
      if (psVar5[(ulong)param_4 * 2] == 0) {
        psVar5[(ulong)param_4 * 2] = (short)param_2;
        psVar5 = psVar5 + (ulong)param_4 * 2;
LAB_010db308:
        psVar5[1] = (short)param_3;
LAB_010db2d0:
        FUN_010da924(param_2);
        if (*(code **)(param_1 + 0xda0) != (code *)0x0) {
          (**(code **)(param_1 + 0xda0))(param_1 + 0xdc0);
        }
        return 1;
      }
    }
    else if (uVar3 != 0) {
      do {
        if (*psVar5 == 0) {
          *psVar5 = (short)param_2;
          goto LAB_010db308;
        }
        psVar5 = psVar5 + 2;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return 0;
}


