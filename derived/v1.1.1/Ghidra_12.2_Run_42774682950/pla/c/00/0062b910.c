/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0062b910; name: FUN_0062b910
 */


undefined1  [16]
FUN_0062b910(byte *param_1,byte *param_2,byte *param_3,byte *param_4,undefined8 param_5,long param_6
            )

{
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  undefined1 auVar9 [16];
  
  if (param_1 != param_2) {
    do {
      if (param_3 == param_4) goto LAB_0062ba50;
      uVar5 = *(ulong *)(param_1 + 0x20);
      uVar8 = *(ulong *)(param_3 + 0x20);
      if (uVar5 == uVar8) {
        bVar2 = *param_3;
        bVar3 = *param_1;
        uVar5 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar5 = *(ulong *)(param_3 + 8);
        }
        uVar8 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar8 = *(ulong *)(param_1 + 8);
        }
        sVar1 = uVar5;
        if (uVar8 <= uVar5) {
          sVar1 = uVar8;
        }
        if (sVar1 == 0) {
LAB_0062ba38:
          if (uVar8 < uVar5) goto LAB_0062b954;
        }
        else {
          pbVar6 = *(byte **)(param_1 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar6 = param_1 + 1;
          }
          pbVar7 = *(byte **)(param_3 + 0x10);
          if ((bVar2 & 1) == 0) {
            pbVar7 = param_3 + 1;
          }
          iVar4 = memcmp(pbVar6,pbVar7,sVar1);
          if (iVar4 == 0) goto LAB_0062ba38;
          if (iVar4 < 0) goto LAB_0062b954;
        }
        sVar1 = uVar8;
        if (uVar5 <= uVar8) {
          sVar1 = uVar5;
        }
        if (sVar1 != 0) {
          pbVar6 = *(byte **)(param_3 + 0x10);
          if ((bVar2 & 1) == 0) {
            pbVar6 = param_3 + 1;
          }
          pbVar7 = *(byte **)(param_1 + 0x10);
          if ((bVar3 & 1) == 0) {
            pbVar7 = param_1 + 1;
          }
          iVar4 = memcmp(pbVar6,pbVar7,sVar1);
          if (iVar4 != 0) {
            if (-1 < iVar4) goto LAB_0062ba24;
            goto LAB_0062ba28;
          }
        }
        if (uVar8 <= uVar5) {
LAB_0062ba24:
          param_1 = param_1 + 0x28;
        }
LAB_0062ba28:
        param_3 = param_3 + 0x28;
      }
      else {
        if (uVar8 <= uVar5) {
          if (uVar5 <= uVar8) goto LAB_0062ba24;
          goto LAB_0062ba28;
        }
LAB_0062b954:
        param_6 = FUN_0062ba94(param_5,param_6,param_1);
        param_6 = param_6 + 0x28;
        param_1 = param_1 + 0x28;
      }
    } while (param_1 != param_2);
  }
LAB_0062ba70:
  auVar9._8_8_ = param_6;
  auVar9._0_8_ = param_5;
  return auVar9;
LAB_0062ba50:
  do {
    param_6 = FUN_0062ba94(param_5,param_6,param_1);
    param_1 = param_1 + 0x28;
    param_6 = param_6 + 0x28;
  } while (param_2 != param_1);
  goto LAB_0062ba70;
}


