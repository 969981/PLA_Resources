/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f1c270; name: FUN_02f1c270
 */


void FUN_02f1c270(float param_1,long param_2,undefined4 *param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_c0 [128];
  
  bVar1 = *(byte *)(param_2 + 0x6d);
  FUN_02f1c1d0(param_2,auStack_c0 + (0x80 - ((ulong)((uint)bVar1 * 4 + 0xf) & 0x7f0)));
  fVar7 = (float)NEON_ucvtf(*param_3);
  fVar7 = fVar7 / (float)param_5;
  fVar8 = *(float *)(param_2 + 100);
  if (fVar8 == fVar7) {
    if (*(char *)(param_2 + 0x6e) != '\0') {
      fVar7 = fVar8;
      goto LAB_02f1c374;
    }
    if (*(float *)(param_2 + 0x68) == param_1) goto LAB_02f1c2ec;
    if (*(int *)(param_2 + 0x60) == 2) {
      iVar2 = (*(int *)(param_2 + 0x38) - *(int *)(param_2 + 0x34)) * *(int *)(param_2 + 0x3c);
      iVar5 = iVar2 + 0x3ff;
      if (-1 < iVar2) {
        iVar5 = iVar2;
      }
      iVar5 = *(int *)(param_2 + 0x34) + (iVar5 >> 10);
      *(int *)(param_2 + 0x34) = iVar5;
      if (iVar5 == 0) {
        uVar4 = 1;
      }
      else {
        if (-1 < iVar5) goto LAB_02f1c3e0;
        uVar4 = 0x7fffffff;
      }
      *(undefined4 *)(param_2 + 0x34) = uVar4;
    }
LAB_02f1c3e0:
    *(undefined4 *)(param_2 + 0x3c) = 0;
    fVar7 = exp2f(param_1 * 0.00083333335);
    fVar7 = fVar8 * fVar7 * 65536.0 + 0.5;
    if (2.1474836e+09 <= fVar7) {
      iVar5 = 0x7fffffff;
    }
    else {
      iVar5 = (int)fVar7;
      if (iVar5 == 0) {
        iVar5 = 1;
      }
    }
    *(int *)(param_2 + 0x38) = iVar5;
    *(float *)(param_2 + 0x68) = param_1;
  }
  else {
    *(float *)(param_2 + 100) = fVar7;
    *(undefined1 *)(param_2 + 0x6e) = 1;
LAB_02f1c374:
    fVar8 = exp2f(param_1 * 0.00083333335);
    fVar7 = fVar7 * fVar8 * 65536.0 + 0.5;
    if (2.1474836e+09 <= fVar7) {
      iVar5 = 0x7fffffff;
    }
    else {
      iVar5 = (int)fVar7;
      if (iVar5 == 0) {
        iVar5 = 1;
      }
    }
    *(int *)(param_2 + 0x34) = iVar5;
    *(int *)(param_2 + 0x38) = iVar5;
    *(undefined4 *)(param_2 + 0x3c) = 0x400;
    *(float *)(param_2 + 0x68) = param_1;
    *(undefined1 *)(param_2 + 0x6e) = 0;
LAB_02f1c2ec:
    iVar5 = *(int *)(param_2 + 0x38);
  }
  if (*(int *)(param_2 + 0x34) == iVar5) {
    if (iVar5 == 0x10000) {
      *(undefined4 *)(param_2 + 0x60) = 0;
      goto LAB_02f1c30c;
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 2;
  }
  *(undefined4 *)(param_2 + 0x60) = uVar4;
LAB_02f1c30c:
  if ((*(ushort *)(param_3 + 2) & 0x3f) == 0x20) {
    uVar6 = 4;
    if (*(char *)(param_2 + 0x6d) != '\x02') {
      uVar6 = 5;
    }
    uVar3 = 3;
    if (*(char *)(param_2 + 0x6d) != '\x01') {
      uVar3 = uVar6;
    }
  }
  else if ((*(ushort *)(param_3 + 2) & 0x3f) == 0x10) {
    uVar6 = 1;
    if (*(char *)(param_2 + 0x6d) != '\x02') {
      uVar6 = 2;
    }
    uVar3 = 0;
    if (*(char *)(param_2 + 0x6d) != '\x01') {
      uVar3 = uVar6;
    }
  }
  else {
    uVar3 = 0xff;
  }
  *(undefined1 *)(param_2 + 0x6c) = uVar3;
  FUN_02f1c110(param_2,auStack_c0 + (0x80 - ((ulong)((uint)bVar1 * 4 + 0xf) & 0x7f0)));
  return;
}


