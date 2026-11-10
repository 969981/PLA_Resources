/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031bb094; name: FUN_031bb094
 */


undefined8 FUN_031bb094(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar7 = *(long *)(param_1 + 0x40) + (long)param_2 * 0x80;
  uVar16 = *(undefined8 *)(lVar7 + 0x38);
  uVar15 = *(undefined8 *)(lVar7 + 0x30);
  uVar18 = *(undefined8 *)(lVar7 + 0x48);
  uVar17 = *(undefined8 *)(lVar7 + 0x40);
  uStack_38 = uVar18;
  local_40 = uVar17;
  uStack_28 = uVar16;
  local_30 = uVar15;
  lVar8 = (long)*(int *)(param_1 + 0x80) + -1;
  lVar7 = *(long *)(param_1 + 0x78);
  if (*(int *)(lVar7 + lVar8 * 0x30) == param_2) {
    cVar2 = *(char *)(lVar7 + lVar8 * 0x30 + 8);
joined_r0x031bb14c:
    if (cVar2 != '\0') {
LAB_031bb0f4:
      uVar6 = 1;
      uStack_28 = uVar18;
      local_30 = uVar17;
      uStack_38 = uVar16;
      local_40 = uVar15;
      goto LAB_031bb100;
    }
  }
  else {
    lVar9 = (long)*(int *)(param_1 + 0x70);
    if (*(int *)(lVar7 + lVar9 * 0x30) == param_2) {
      cVar2 = *(char *)(lVar7 + lVar9 * 0x30 + 8);
      goto joined_r0x031bb14c;
    }
    iVar5 = *(int *)(param_1 + 0x74);
    if (((int)lVar8 != iVar5) && (*(int *)(param_1 + 0x70) != iVar5)) {
      lVar9 = lVar7 + lVar9 * 0x30;
      lVar7 = lVar7 + lVar8 * 0x30;
      uVar4 = *(undefined8 *)(lVar9 + 0x18);
      uVar6 = *(undefined8 *)(lVar9 + 0x10);
      fVar10 = ((float)uVar17 - (float)uVar15) * ((float)uVar6 - *(float *)(lVar7 + 0x10));
      fVar11 = ((float)((ulong)uVar17 >> 0x20) - (float)((ulong)uVar15 >> 0x20)) *
               ((float)((ulong)uVar6 >> 0x20) - *(float *)(lVar7 + 0x14));
      fVar12 = ((float)uVar18 - (float)uVar16) * ((float)uVar4 - *(float *)(lVar7 + 0x18));
      fVar13 = ((float)((ulong)uVar18 >> 0x20) - (float)((ulong)uVar16 >> 0x20)) *
               ((float)((ulong)uVar4 >> 0x20) - *(float *)(lVar7 + 0x1c));
      auVar14._4_4_ = fVar11;
      auVar14._0_4_ = fVar10;
      auVar14._8_4_ = fVar12;
      auVar14._12_4_ = fVar13;
      auVar3._4_4_ = fVar11;
      auVar3._0_4_ = fVar10;
      auVar3._8_4_ = fVar12;
      auVar3._12_4_ = fVar13;
      auVar14 = NEON_ext(auVar14,auVar3,8,1);
      if (0.0 <= fVar10 + fVar11 + auVar14._0_4_) goto LAB_031bb150;
      goto LAB_031bb0f4;
    }
    iVar5 = FUN_031babf0(param_1,lVar7 + (long)iVar5 * 0x30 + 0x10,&local_30,&local_40);
    if (iVar5 == 0) {
      uStack_28 = uVar18;
      local_30 = uVar17;
      uVar6 = 1;
      uStack_38 = uVar16;
      local_40 = uVar15;
      goto LAB_031bb100;
    }
  }
LAB_031bb150:
  uVar6 = 0;
LAB_031bb100:
  puVar1 = &local_30;
  if (param_3 != 0) {
    puVar1 = &local_40;
  }
  uVar15 = *puVar1;
  param_4[1] = puVar1[1];
  *param_4 = uVar15;
  return uVar6;
}


