/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00221cb4; name: FUN_00221cb4
 */


undefined8 FUN_00221cb4(long param_1,uint *param_2,ulong param_3,uint param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  byte *pbVar11;
  
  pbVar1 = (byte *)(param_1 + (param_3 & 0xffffffff) + 0x1888);
  bVar2 = *pbVar1;
  uVar6 = (uint)bVar2;
  if (bVar2 == 0) {
LAB_00221dd4:
    uVar4 = 0;
LAB_00221de4:
    *param_2 = uVar6;
    return uVar4;
  }
  pbVar11 = *(byte **)(param_1 + (param_3 & 0xffffffff) * 8 + 0x18a8);
  uVar10 = 0;
  uVar5 = (ulong)*pbVar11;
  uVar9 = *(uint *)(*(long *)(param_1 + 0x1c30) + uVar5 * 4);
  if (uVar9 != 0) goto LAB_00221d38;
LAB_00221d88:
  do {
    if (*(char *)(param_1 + 0x1bd1) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = (**(code **)(param_1 + 0x1bd8))();
      uVar5 = (ulong)pbVar11[uVar10];
    }
    FUN_00222e2c(param_1,uVar5,iVar3);
    uVar5 = nn::fontll::ScalableFontEngine::CheckGlyphExist
                      ((int)*(undefined8 *)(param_1 + 0x10) + iVar3 * 0xb8);
    if ((uVar5 & 1) != 0) {
      uVar6 = (uint)pbVar11[uVar10];
      uVar4 = 1;
      goto LAB_00221de4;
    }
    uVar6 = (uint)*pbVar1;
LAB_00221d1c:
    do {
      do {
        uVar10 = uVar10 + 1;
        if ((byte)uVar6 <= uVar10) {
          uVar6 = 0;
          goto LAB_00221dd4;
        }
        uVar5 = (ulong)pbVar11[uVar10];
        uVar9 = *(uint *)(*(long *)(param_1 + 0x1c30) + uVar5 * 4);
        if (uVar9 == 0) goto LAB_00221d88;
LAB_00221d38:
        uVar7 = (ulong)uVar9;
      } while ((int)uVar9 < 1);
      lVar8 = uVar5 * 0x40;
      uVar9 = *(uint *)(*(long *)(param_1 + 0x1c38) + lVar8);
      if ((uVar9 & 0x7fffffff) <= param_4) goto LAB_00221d74;
      do {
        do {
          uVar7 = uVar7 - 1;
          lVar8 = lVar8 + 4;
          if (uVar7 == 0) goto LAB_00221d1c;
          uVar9 = *(uint *)(*(long *)(param_1 + 0x1c38) + lVar8);
        } while (param_4 < (uVar9 & 0x7fffffff));
LAB_00221d74:
      } while (*(uint *)(*(long *)(param_1 + 0x1c40) + lVar8) < param_4);
    } while ((int)uVar9 < 0);
  } while( true );
}


