/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee0d64; name: FUN_02ee0d64
 */


undefined8
FUN_02ee0d64(ulong param_1,long *param_2,uint param_3,undefined8 param_4,long param_5,int param_6,
            ulong param_7)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  float fVar6;
  undefined1 local_5c [4];
  undefined8 local_58;
  
  local_58 = 0;
  local_5c[0] = 0;
  uVar3 = *(uint *)(param_2 + 1);
  if (uVar3 != 0) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = param_3 / uVar3;
    }
    for (puVar5 = *(uint **)(*param_2 + (ulong)(param_3 - uVar1 * uVar3) * 8); puVar5 != (uint *)0x0
        ; puVar5 = *(uint **)(puVar5 + 2)) {
      if (*puVar5 == param_3) {
        lVar4 = FUN_02ee3a38(puVar5 + 8,param_4,&local_58,local_5c);
        if ((lVar4 == 0) && ((param_7 & 1) != 0)) {
          lVar4 = 0;
          *(undefined1 *)(param_5 + 8) = 1;
        }
        goto LAB_02ee0eb8;
      }
    }
  }
  puVar5 = (uint *)(*DAT_0442d138)(0,0x68);
  if (puVar5 == (uint *)0x0) {
    return 2;
  }
  *puVar5 = param_3;
  *(undefined ***)(puVar5 + 8) = &PTR_LAB_042aaa98;
  puVar5[10] = 0;
  *(undefined1 *)(puVar5 + 0xb) = 0;
  puVar5[0x18] = 0;
  puVar5[0x19] = 0;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[4] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[0x10] = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x17] = 0;
  uVar3 = *(uint *)(param_2 + 1);
  if ((uVar3 == 0) || (fVar6 = (float)NEON_ucvtf((int)param_2[2]), 0.9 < fVar6 / (float)uVar3)) {
    FUN_02ee56ac(param_2);
    uVar3 = *(uint *)(param_2 + 1);
    if (uVar3 == 0) goto LAB_02ee0e7c;
    param_3 = *puVar5;
  }
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = param_3 / uVar3;
  }
  lVar4 = (ulong)(param_3 - uVar1 * uVar3) * 8;
  *(undefined8 *)(puVar5 + 2) = *(undefined8 *)(*param_2 + lVar4);
  *(uint **)(*param_2 + lVar4) = puVar5;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
LAB_02ee0e7c:
  FUN_02ee3a38(puVar5 + 8,param_4,&local_58,local_5c);
  lVar4 = 0;
LAB_02ee0eb8:
  uVar2 = local_58;
  if (param_6 == 2) {
    fVar6 = (float)FUN_02ee0f5c(puVar5,lVar4,local_58,param_4);
    param_1 = (ulong)(uint)(fVar6 + (float)param_1);
  }
  FUN_02ee0fe0(param_1,puVar5,lVar4,uVar2,param_4,param_5,0,local_5c[0]);
  return 1;
}


