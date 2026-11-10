/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ee13f4; name: FUN_02ee13f4
 */


undefined8
FUN_02ee13f4(float param_1,undefined1 param_2 [16],long param_3,long *param_4,int *param_5,
            byte param_6)

{
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  undefined8 *local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  int local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  fVar13 = param_2._0_4_;
  plVar12 = (long *)(param_3 + 0x40);
  puVar5 = (undefined8 *)*plVar12;
  if (puVar5 != (undefined8 *)0x0) {
    puVar9 = (undefined8 *)0x0;
    puVar8 = puVar5;
    do {
      if (((((puVar8[4] == *param_4) && (*(int *)(puVar8 + 5) == (int)param_4[1])) &&
           (*(int *)(puVar8 + 6) == (int)param_4[2])) &&
          ((*(char *)(puVar8 + 7) == (char)param_4[3] && (*(char *)(puVar8 + 8) == (char)param_4[4])
           ))) && (puVar8[9] == param_4[5])) {
        if (param_1 != fVar13) {
          FUN_02f0f0a8(param_2._0_8_,DAT_0440a150,puVar8[2],0x10000000,*param_5,param_5[1],0);
          *(byte *)(puVar8 + 10) = param_6 & 1;
          return 1;
        }
        if (puVar5 != puVar8) {
          plVar12 = puVar9 + 1;
        }
        *plVar12 = puVar8[1];
        lVar7 = puVar8[2];
        *puVar8 = &PTR_LAB_042aaa60;
        if (lVar7 == 0) goto LAB_02ee1648;
        puVar9 = *(undefined8 **)(lVar7 + 0x28);
        uVar6 = *(uint *)(lVar7 + 0x30);
        puVar5 = puVar9 + uVar6;
        if ((uVar6 == 0) || ((undefined8 *)*puVar9 == puVar8)) goto joined_r0x02ee1674;
        lVar11 = (ulong)uVar6 * 8;
        puVar10 = puVar9;
        goto LAB_02ee16bc;
      }
      puVar10 = puVar8 + 1;
      puVar9 = puVar8;
      puVar8 = (undefined8 *)*puVar10;
    } while ((undefined8 *)*puVar10 != (undefined8 *)0x0);
  }
  if (param_1 == fVar13) {
    return 0;
  }
  puVar5 = (undefined8 *)(*DAT_0442d138)(0,0x58);
  if (puVar5 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar5 = &PTR_LAB_042aaa60;
  puVar5[2] = 0;
  puVar5[3] = param_3;
  lVar7 = param_4[1];
  puVar5[4] = *param_4;
  puVar5[5] = lVar7;
  lVar7 = param_4[2];
  lVar3 = param_4[3];
  lVar11 = param_4[4];
  lVar4 = param_4[5];
  *(undefined1 *)(puVar5 + 10) = 0;
  puVar5[8] = lVar11;
  puVar5[9] = lVar4;
  puVar5[6] = lVar7;
  puVar5[7] = lVar3;
  local_60 = *param_5;
  iStack_5c = param_5[1];
  uStack_70 = 0x10000000;
  local_58 = 7;
  local_54 = 0;
  local_52 = 0;
  lVar7 = puVar5[3];
  if ((*(int *)(lVar7 + 0x14) == 2) && ((char)param_5[2] == '\0')) {
    local_52 = 1;
    pfVar2 = (float *)(lVar7 + 0x1c);
    if (param_1 <= fVar13) {
      pfVar2 = (float *)(lVar7 + 0x18);
    }
    *param_5 = (int)(*pfVar2 * 1000.0);
  }
  *(byte *)(puVar5 + 10) = param_6 & 1;
  local_78 = puVar5;
  local_68 = param_1;
  fStack_64 = fVar13;
  lVar7 = FUN_02f0ed58(DAT_0440a150,&local_78,1,0);
  puVar5[2] = lVar7;
  if (lVar7 == 0) {
    return 0;
  }
  if (*plVar12 == 0) {
    *plVar12 = (long)puVar5;
    puVar5[1] = 0;
    return 1;
  }
  puVar5[1] = *plVar12;
  *plVar12 = (long)puVar5;
  return 1;
  while (puVar9 = puVar10 + 1, puVar1 = puVar10 + 1, puVar10 = puVar9,
        (undefined8 *)*puVar1 != puVar8) {
LAB_02ee16bc:
    lVar11 = lVar11 + -8;
    if (lVar11 == 0) goto LAB_02ee1648;
  }
joined_r0x02ee1674:
  if (puVar5 != puVar9) {
    if (1 < uVar6) {
      *puVar9 = puVar5[-1];
      uVar6 = *(uint *)(lVar7 + 0x30);
    }
    *(uint *)(lVar7 + 0x30) = uVar6 - 1;
    if (uVar6 - 1 == 0) {
      *(undefined4 *)(lVar7 + 0x3c) = 6;
    }
  }
LAB_02ee1648:
  (*DAT_0442d150)(0);
  return 0;
}


