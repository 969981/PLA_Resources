/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02eb1180; name: FUN_02eb1180
 */


float FUN_02eb1180(long *param_1,long param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_38;
  undefined4 local_34;
  
  if (*(int *)(param_2 + 0x58) == 0) {
    fVar8 = 1.0;
  }
  else {
    lVar6 = *(long *)(param_2 + 0x50);
    fVar8 = 1.0;
    do {
      local_80 = *param_3;
      uStack_78 = param_3[1];
      local_70 = param_3[2];
      uStack_68 = param_3[3];
      local_60 = param_3[4];
      uStack_58 = param_3[5];
      uVar1 = *(uint *)(lVar6 + 4);
      uVar2 = *(uint *)(param_1 + 1);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (puVar5 = *(uint **)(*param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 8);
            puVar5 != (uint *)0x0; puVar5 = *(uint **)(puVar5 + 2)) {
          if (*puVar5 == uVar1) {
            puVar5 = (uint *)FUN_02eb14e4(puVar5 + 8,&local_80);
            if (puVar5 == (uint *)0x0) goto LAB_02eb1278;
            local_38 = *puVar5;
            goto LAB_02eb123c;
          }
        }
      }
      if ((*(int *)(param_2 + 0x48) == 1) ||
         (((*(int *)(param_2 + 8) != 7 && (*(int *)(param_2 + 8) != 0)) ||
          (uVar4 = FUN_02ede97c(uVar1), (uVar4 & 1) == 0)))) {
        uVar4 = FUN_02ede964(uVar1,&local_80,&local_38);
        if ((uVar4 & 1) == 0) {
LAB_02eb1278:
          uVar1 = *(uint *)(param_1 + 1);
          local_38 = 0;
          if (uVar1 != 0) {
            uVar2 = *(uint *)(lVar6 + 4);
            uVar3 = 0;
            if (uVar1 != 0) {
              uVar3 = uVar2 / uVar1;
            }
            local_38 = 0;
            puVar5 = *(uint **)(*param_1 + (ulong)(uVar2 - uVar3 * uVar1) * 8);
            if (puVar5 != (uint *)0x0) {
              do {
                if (*puVar5 == uVar2) {
                  local_38 = puVar5[4];
                  goto LAB_02eb123c;
                }
                puVar5 = *(uint **)(puVar5 + 2);
              } while (puVar5 != (uint *)0x0);
              local_38 = 0;
            }
          }
        }
LAB_02eb123c:
        local_34 = *(undefined4 *)(lVar6 + 0x18);
        fVar7 = (float)FUN_02e74568(local_38,lVar6 + 8,&local_34);
        fVar8 = fVar7 * fVar8;
        *(undefined4 *)(lVar6 + 0x18) = local_34;
      }
      else {
        local_38 = 0x3f800000;
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar6 != *(long *)(param_2 + 0x50) + (ulong)*(uint *)(param_2 + 0x58) * 0x20);
  }
  return fVar8;
}


