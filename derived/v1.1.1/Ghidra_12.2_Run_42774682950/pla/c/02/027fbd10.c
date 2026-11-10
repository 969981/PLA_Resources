/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027fbd10; name: FUN_027fbd10
 */


void FUN_027fbd10(float param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  long *local_80;
  long local_78;
  
  local_98 = 0x757527f9d900520e;
  pcStack_90 = "Global";
  local_88 = 0x1f;
  local_80 = (long *)0x0;
  lVar1 = FUN_02b1f8b0(DAT_043ef5b0,&local_98);
  local_78 = lVar1;
  if (local_80 != (long *)0x0) {
    (**(code **)(*local_80 + 0x20))();
  }
  uVar2 = FUN_02b21278(DAT_043ef5b0,&local_78);
  if ((uVar2 & 1) != 0) {
    fVar11 = 1.0 - param_1;
    local_98 = 0x8f457f2507b3ad8e;
    pcStack_90 = "BlurRadius";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x68);
    fVar8 = *(float *)(param_2 + 0x68);
    lVar1 = lVar1 >> 0x20;
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0x92ca7a8db907e0f3;
    pcStack_90 = "TMMaxBrightness";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x6c);
    fVar8 = *(float *)(param_2 + 0x6c);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0xb32127682c6356aa;
    pcStack_90 = "Gamma";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x70);
    fVar8 = *(float *)(param_2 + 0x70);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0x44b34656e5a1e1f7;
    pcStack_90 = "ContrastMid";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x74);
    fVar8 = *(float *)(param_2 + 0x74);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0x6c0b5b566ae36454;
    pcStack_90 = "ContrastVol";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x78);
    fVar8 = *(float *)(param_2 + 0x78);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0x173ee12172cc7935;
    pcStack_90 = "CbCrScale";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x7c);
    fVar8 = *(float *)(param_2 + 0x7c);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0x67636b6fd0116193;
    pcStack_90 = "CbOffset";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x80);
    fVar8 = *(float *)(param_2 + 0x80);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0xa3e290d7c5634fe3;
    pcStack_90 = "CrOffset";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    fVar7 = *(float *)(param_3 + 0x84);
    fVar8 = *(float *)(param_2 + 0x84);
    pfVar3 = (float *)FUN_00aef474(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x70,&local_98);
    *pfVar3 = fVar11 * fVar7 + fVar8 * param_1;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
    local_98 = 0x996fcf3eddb52bd4;
    pcStack_90 = "NoiseColor";
    local_88 = 0x1f;
    local_80 = (long *)0x0;
    fVar7 = *(float *)(param_3 + 0x88);
    fVar8 = *(float *)(param_2 + 0x88);
    uVar10 = *(undefined8 *)(param_3 + 0x98);
    uVar9 = *(undefined8 *)(param_3 + 0x90);
    uVar2 = (*(long *)(DAT_043ef5b0 + 0xa8) + *(long *)(DAT_043ef5b0 + 0xa0)) - 1;
    lVar5 = *(long *)(*(long *)(DAT_043ef5b0 + 0x68) + (uVar2 / 0x12) * 8);
    lVar6 = (uVar2 % 0x12) * 0xd8;
    puVar4 = (undefined8 *)FUN_00aefbe4(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0xd8,&local_98);
    puVar4[1] = CONCAT44(fVar11 * fVar7 + fVar8 * param_1,(int)uVar10);
    *puVar4 = uVar9;
    *(undefined1 *)(*(long *)(lVar5 + lVar6) + lVar1 * 0x1b0 + 0x1a9) = 1;
    if (local_80 != (long *)0x0) {
      (**(code **)(*local_80 + 0x20))();
    }
  }
  return;
}


