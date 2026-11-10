/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 01461fb0; name: FUN_01461fb0
 */


void FUN_01461fb0(float param_1,float param_2,undefined8 param_3,long *param_4,byte param_5)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  
  bVar2 = 1 < param_5;
  *(byte *)(param_4 + 0x38) = param_5;
  plVar1 = param_4 + 0x30;
  uVar4 = param_4[0x1a] | 0x10;
  if (bVar2) {
    uVar4 = param_4[0x1a] & 0xffffffffffffffef;
  }
  uVar6 = 0x43e60000;
  if (bVar2) {
    uVar6 = 0;
  }
  uVar8 = 0xc3ff0000;
  if (bVar2) {
    uVar8 = 0;
  }
  param_4[0x1a] = uVar4;
  *(undefined4 *)(param_4 + 0x18) = uVar6;
  *(undefined4 *)((long)param_4 + 0xc4) = uVar8;
  if (*(char *)param_4[0x31] != '\0') {
    FUN_0283b1e8(param_4[0x14],plVar1);
  }
  if (*(char *)param_4[0x31] != '\0') {
    fVar9 = *(float *)(&DAT_038893a0 + (long)(char)param_5 * 4);
    fVar7 = (float)FUN_0283b914(param_4[0x14],plVar1);
    if (fVar9 <= fVar7) {
      fVar7 = fVar9;
    }
    FUN_0283b748(fVar7,param_4[0x14],plVar1);
  }
  param_2 = 540.0 - param_2;
  *(float *)(param_4 + 0x15) = param_1 + -960.0;
  *(float *)((long)param_4 + 0xac) = param_2;
  if ((*(byte *)(param_4 + 0x1a) >> 4 & 1) == 0) goto LAB_014620bc;
  if (*(float *)(param_4 + 0x18) < param_2) {
    *(float *)((long)param_4 + 0xac) = *(float *)(param_4 + 0x18);
    if ((char)param_4[0x19] != '\0') goto LAB_014620bc;
    pcVar5 = *(code **)(*param_4 + 0x30);
  }
  else {
    if (*(float *)((long)param_4 + 0xc4) <= param_2) {
      if ((char)param_4[0x19] != '\0') {
        (**(code **)(*param_4 + 0x40))(param_4);
        *(undefined1 *)(param_4 + 0x19) = 0;
      }
      goto LAB_014620bc;
    }
    *(float *)((long)param_4 + 0xac) = *(float *)((long)param_4 + 0xc4);
    if ((char)param_4[0x19] != '\0') goto LAB_014620bc;
    pcVar5 = *(code **)(*param_4 + 0x38);
  }
  (*pcVar5)(param_4);
  *(undefined1 *)(param_4 + 0x19) = 1;
LAB_014620bc:
  lVar3 = param_4[0xb];
  uVar6 = *(undefined4 *)((long)param_4 + 0xac);
  *(int *)(lVar3 + 0x30) = (int)param_4[0x15];
  *(undefined4 *)(lVar3 + 0x34) = uVar6;
  *(undefined4 *)(lVar3 + 0x38) = 0;
  *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 0x10;
  FUN_014621d8(param_3,param_4);
  uVar4 = param_4[0x1a];
  if (((uVar4 & 5) == 4) && (param_4[0x1a] = uVar4 | 1, (char)param_4[0x1b] == '\0')) {
    param_4[0x1a] = uVar4 | 0x21;
    *(byte *)(param_4[0xb] + 0x58) = *(byte *)(param_4[0xb] + 0x58) | 1;
    if (*(char *)param_4[0x11] != '\0') {
      FUN_0283b430(param_4[0x14],param_4 + 0x10);
    }
    if (*(char *)param_4[0xd] != '\0') {
      FUN_0283b1e8(param_4[0x14],param_4 + 0xc);
      return;
    }
  }
  return;
}


