/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f2e160; name: FUN_02f2e160
 */


void FUN_02f2e160(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  uVar2 = *(ushort *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xf1) = 0;
  *(uint *)(param_1 + 0x54) = (uint)uVar2;
  fVar7 = (float)(**(code **)(**(long **)(param_1 + 8) + 0x40))();
  uVar1 = *(uint *)(*(long *)(param_1 + 0xe8) + 0x2a3);
  if (*(char *)(param_1 + 0x7e) == '\0') {
    if (*(float *)(param_1 + 0x78) != fVar7) goto LAB_02f2e28c;
LAB_02f2e1bc:
    iVar6 = *(int *)(param_1 + 0x48);
  }
  else {
    fVar9 = *(float *)(param_1 + 0x74);
    fVar8 = exp2f(fVar7 * 0.00083333335);
    fVar8 = fVar9 * fVar8 * 65536.0 + 0.5;
    if (2.1474836e+09 <= fVar8) {
      iVar6 = 0x7fffffff;
    }
    else {
      iVar6 = (int)fVar8;
      if (iVar6 == 0) {
        iVar6 = 1;
      }
    }
    *(int *)(param_1 + 0x44) = iVar6;
    *(int *)(param_1 + 0x48) = iVar6;
    *(undefined4 *)(param_1 + 0x4c) = 0x400;
    *(float *)(param_1 + 0x78) = fVar7;
    *(undefined1 *)(param_1 + 0x7e) = 0;
    if (!NAN(fVar7)) goto LAB_02f2e1bc;
LAB_02f2e28c:
    if (*(int *)(param_1 + 0x70) == 2) {
      iVar4 = (*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44)) * *(int *)(param_1 + 0x4c);
      iVar6 = iVar4 + 0x3ff;
      if (-1 < iVar4) {
        iVar6 = iVar4;
      }
      iVar6 = *(int *)(param_1 + 0x44) + (iVar6 >> 10);
      *(int *)(param_1 + 0x44) = iVar6;
      if (iVar6 == 0) {
        uVar5 = 1;
      }
      else {
        if (-1 < iVar6) goto LAB_02f2e29c;
        uVar5 = 0x7fffffff;
      }
      *(undefined4 *)(param_1 + 0x44) = uVar5;
    }
LAB_02f2e29c:
    fVar9 = *(float *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    fVar8 = exp2f(fVar7 * 0.00083333335);
    fVar8 = fVar9 * fVar8 * 65536.0 + 0.5;
    if (2.1474836e+09 <= fVar8) {
      iVar6 = 0x7fffffff;
    }
    else {
      iVar6 = (int)fVar8;
      if (iVar6 == 0) {
        iVar6 = 1;
      }
    }
    *(int *)(param_1 + 0x48) = iVar6;
    *(float *)(param_1 + 0x78) = fVar7;
    if ((uVar1 & 0x70000000) != 0) {
      *(int *)(param_1 + 0x44) = iVar6;
    }
  }
  if (*(int *)(param_1 + 0x44) == iVar6) {
    if (iVar6 == 0x10000) {
      *(undefined4 *)(param_1 + 0x70) = 0;
      sVar3 = *(short *)(param_1 + 0x92);
      goto joined_r0x02f2e208;
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar5;
  sVar3 = *(short *)(param_1 + 0x92);
joined_r0x02f2e208:
  if (sVar3 != 0) {
    FUN_02f2e36c(param_1,param_2);
    return;
  }
  if (*(char *)(param_1 + 0xf0) != '\0') {
    *(undefined4 *)(param_2 + 0x2c) = 0x11;
  }
  return;
}


