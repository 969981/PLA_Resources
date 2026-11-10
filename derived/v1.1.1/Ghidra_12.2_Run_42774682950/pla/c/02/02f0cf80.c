/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0cf80; name: FUN_02f0cf80
 */


undefined4 FUN_02f0cf80(long *param_1,uint param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  float fVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = *(uint *)(param_1 + 1);
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = param_2 / uVar1;
    }
    for (puVar4 = *(uint **)(*param_1 + (ulong)(param_2 - uVar2 * uVar1) * 8); puVar4 != (uint *)0x0
        ; puVar4 = *(uint **)(puVar4 + 2)) {
      if (*puVar4 == param_2) {
        local_50 = *param_3;
        uStack_48 = param_3[1];
        local_40 = param_3[2];
        uStack_38 = param_3[3];
        local_30 = param_3[4];
        uStack_28 = param_3[5];
        if (puVar4[8] == 0) {
          puVar3 = (undefined4 *)FUN_02eb14e4(puVar4 + 0xe,&local_50);
          if (puVar3 == (undefined4 *)0x0) {
            return 0;
          }
          return *puVar3;
        }
        fVar5 = (float)FUN_02ee2440(DAT_0440a160,puVar4,&local_50);
        if ((uint)(int)fVar5 < puVar4[6]) {
          return *(undefined4 *)(*(long *)(puVar4 + 4) + (ulong)(uint)(int)fVar5 * 4);
        }
        return 0;
      }
    }
  }
  return 0;
}


