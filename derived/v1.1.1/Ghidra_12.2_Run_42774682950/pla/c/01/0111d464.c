/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0111d464; name: FUN_0111d464
 */


undefined8 FUN_0111d464(long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  short *psVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x6a);
  do {
    if (((ushort)psVar3[-1] == param_2) && (*psVar3 != 0)) {
      uVar4 = 0;
      goto LAB_0111d498;
    }
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 2;
  } while (lVar2 != 0x1e);
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0xe2);
  do {
    if (((ushort)psVar3[-1] == param_2) && (*psVar3 != 0)) {
      uVar4 = 1;
      goto LAB_0111d498;
    }
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 2;
  } while (lVar2 != 0x1e);
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x15a);
  do {
    if (((ushort)psVar3[-1] == param_2) && (*psVar3 != 0)) {
      uVar4 = 2;
      goto LAB_0111d498;
    }
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 2;
  } while (lVar2 != 0x1e);
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x1d2);
  do {
    if (((ushort)psVar3[-1] == param_2) && (*psVar3 != 0)) {
      uVar4 = 3;
      goto LAB_0111d498;
    }
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 2;
  } while (lVar2 != 0x1e);
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x24a);
  do {
    if (((ushort)psVar3[-1] == param_2) && (*psVar3 != 0)) {
      uVar4 = 4;
      goto LAB_0111d498;
    }
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 2;
  } while (lVar2 != 0x1e);
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x2c2);
  uVar5 = 6;
  do {
    if (((ushort)psVar3[-1] == param_2) && (uVar4 = 5, *psVar3 != 0)) goto LAB_0111d498;
    lVar2 = lVar2 + 1;
    uVar1 = 0;
    psVar3 = psVar3 + 2;
    uVar4 = 0x1e;
  } while (lVar2 != 0x1e);
LAB_0111d4a4:
  *param_3 = uVar5;
  *param_4 = uVar4;
  return uVar1;
LAB_0111d498:
  uVar5 = uVar4;
  uVar1 = 1;
  uVar4 = (undefined4)lVar2;
  goto LAB_0111d4a4;
}


