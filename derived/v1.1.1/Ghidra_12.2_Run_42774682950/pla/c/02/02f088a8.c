/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f088a8; name: FUN_02f088a8
 */


undefined4 FUN_02f088a8(undefined8 param_1,undefined8 *param_2,uint param_3,int param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  float fVar9;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (param_4 == 1) {
    puVar8 = (uint *)*DAT_0440a138;
    uVar2 = *(uint *)(DAT_0440a138 + 1);
    if ((uVar2 == 0) || (*puVar8 == param_3)) {
      puVar6 = puVar8;
    }
    else {
      lVar5 = (ulong)uVar2 * 0x10;
      puVar7 = puVar8;
      do {
        lVar5 = lVar5 + -0x10;
        if (lVar5 == 0) {
          return 0;
        }
        puVar1 = puVar7 + 4;
        puVar6 = puVar7 + 4;
        puVar7 = puVar7 + 4;
      } while (*puVar1 != param_3);
    }
    if (puVar6 != puVar8 + (ulong)uVar2 * 4) {
      return *(undefined4 *)(*(long *)(puVar6 + 2) + 4);
    }
  }
  else {
    uVar2 = *(uint *)(DAT_0440a130 + 1);
    if (uVar2 != 0) {
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = param_3 / uVar2;
      }
      for (puVar8 = *(uint **)(*DAT_0440a130 + (ulong)(param_3 - uVar3 * uVar2) * 8);
          puVar8 != (uint *)0x0; puVar8 = *(uint **)(puVar8 + 2)) {
        if (*puVar8 == param_3) {
          local_50 = *param_2;
          uStack_48 = param_2[1];
          local_40 = param_2[2];
          uStack_38 = param_2[3];
          local_30 = param_2[4];
          uStack_28 = param_2[5];
          if (puVar8[8] == 0) {
            puVar4 = (undefined4 *)FUN_02eb14e4(puVar8 + 0xe,&local_50);
            if (puVar4 == (undefined4 *)0x0) {
              return 0;
            }
            return *puVar4;
          }
          fVar9 = (float)FUN_02ee2440(DAT_0440a160,puVar8,&local_50);
          if ((uint)(int)fVar9 < puVar8[6]) {
            return *(undefined4 *)(*(long *)(puVar8 + 4) + (ulong)(uint)(int)fVar9 * 4);
          }
          return 0;
        }
      }
    }
  }
  return 0;
}


