/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f12548; name: FUN_02f12548
 */


void FUN_02f12548(int *param_1,long param_2,uint param_3)

{
  float __x;
  float __x_00;
  undefined8 *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_90 [8];
  float local_88;
  float local_84;
  float local_80;
  undefined1 auStack_78 [8];
  float local_68;
  float fStack_64;
  
  if (param_3 != 0) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      local_68 = *(float *)(param_2 + lVar3 + 4);
      fStack_64 = *(float *)(param_2 + lVar3 + 8);
      FUN_02f12728(&local_68);
      __x_00 = fStack_64;
      __x = local_68;
      lVar5 = *(long *)(param_1 + 0x12);
      fVar6 = cosf(fStack_64);
      fVar7 = cosf(__x);
      pfVar2 = (float *)(lVar5 + lVar3);
      *pfVar2 = fVar6 * fVar7;
      fVar7 = sinf(__x);
      pfVar2[1] = fVar6 * fVar7;
      fVar6 = sinf(__x_00);
      pfVar2[2] = fVar6;
      lVar5 = *(long *)(param_1 + 0x14);
      *(float *)(lVar5 + lVar4) = __x;
      ((float *)(lVar5 + lVar4))[1] = __x_00;
      pfVar2 = (float *)(*(long *)(param_1 + 0x12) + lVar3);
      local_88 = -*pfVar2;
      local_84 = pfVar2[2];
      local_80 = -pfVar2[1];
      FUN_02f12298(auStack_78,*(long *)(param_1 + 0x16) + lVar4,&local_88);
      lVar4 = lVar4 + 8;
      lVar3 = lVar3 + 0xc;
    } while ((ulong)param_3 * 8 != lVar4);
  }
  puVar1 = (undefined8 *)(*(long *)(param_1 + 0x12) + (ulong)(*param_1 - 1) * 0xc);
  *puVar1 = 0x80000000b33bbd2e;
  *(undefined4 *)(puVar1 + 1) = 0xbf800000;
  *(undefined8 *)(*(long *)(param_1 + 0x14) + (ulong)(*param_1 - 1) * 8) = 0xbfc90fdb00000000;
  pfVar2 = (float *)(*(long *)(param_1 + 0x12) + (ulong)(*param_1 - 1U) * 0xc);
  local_88 = -*pfVar2;
  local_84 = pfVar2[2];
  local_80 = -pfVar2[1];
  FUN_02f12298(auStack_90,*(long *)(param_1 + 0x16) + (ulong)(*param_1 - 1U) * 8,&local_88);
  FUN_02f11c34(param_1,*(undefined8 *)(param_1 + 0x14),0,0,param_1 + 2,param_1 + 10);
  FUN_02f11c34(param_1,*(undefined8 *)(param_1 + 0x16),param_1 + 2,param_1 + 10,param_1 + 6,
               param_1 + 0xe);
  return;
}


