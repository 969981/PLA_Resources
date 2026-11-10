/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 031f2adc; name: FUN_031f2adc
 */


void FUN_031f2adc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar15;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  int iVar18;
  undefined8 uVar19;
  float fVar20;
  undefined8 local_70;
  float fStack_68;
  float fStack_64;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  int local_38 [2];
  
  lVar7 = *(long *)(param_1 + 0x160);
  if (lVar7 != 0) {
    lVar7 = *(long *)(lVar7 + 0x18) + ((long)*(int *)(lVar7 + 0x20) + -1) * 0x40;
    if (*(char *)(lVar7 + 0x28) == -1) {
      uVar12 = *(undefined8 *)(lVar7 + 0x10);
      *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)(param_1 + 0x130) = uVar12;
    }
    FUN_031f2da8(*(undefined8 *)(*(long *)(param_1 + 0x108) + 0x130),(undefined8 *)(param_1 + 0x30),
                 param_1 + 0x60,&local_50,local_38);
    if (local_38[0] == -1) {
      FUN_031f2e64(param_1,1,param_2);
      cVar2 = *(char *)(param_1 + 0x118);
    }
    else {
      *(int *)(param_1 + 0x11c) = local_38[0];
      *(undefined8 *)(param_1 + 0x128) = uStack_48;
      *(undefined8 *)(param_1 + 0x120) = local_50;
      cVar2 = *(char *)(param_1 + 0x118);
    }
    if (cVar2 == '\0') {
      lVar7 = param_1 + 0x170;
      iVar5 = FUN_031f4ddc(*(undefined8 *)(param_1 + 0x160),lVar7,local_38[0],&local_50);
      if (iVar5 == 1) {
        FUN_031f2e64(param_1,2,param_2);
        cVar2 = *(char *)(param_1 + 0x118);
      }
      else {
        local_60 = 0x3dc000003c000000;
        local_70 = 0x2000000008;
        fStack_68 = 1.12104e-44;
        fStack_64 = 4.48416e-44;
        FUN_031f4ec0(*(undefined8 *)(param_1 + 0x160),lVar7,&local_70);
        cVar2 = *(char *)(param_1 + 0x118);
      }
      if (cVar2 == '\0') {
        FUN_031f4730(*(undefined8 *)(param_1 + 0x160),lVar7,&local_70);
        auVar17._8_4_ = fStack_68;
        auVar17._0_8_ = local_70;
        auVar13._8_4_ = fStack_68;
        auVar13._0_8_ = local_70;
        fVar8 = (float)local_70;
        fVar9 = (float)((ulong)local_70 >> 0x20);
        fVar10 = fVar8 * fVar8 + fVar9 * fVar9 + fStack_68 * fStack_68;
        fVar15 = fVar8 * fVar8 + fVar9 * fVar9 + fStack_68 * fStack_68;
        uVar12 = CONCAT44(fVar15,fVar10);
        uVar19 = NEON_frsqrte(uVar12,4);
        fVar11 = (float)uVar19;
        fVar20 = (float)((ulong)uVar19 >> 0x20);
        uVar19 = NEON_frsqrts(uVar12,CONCAT44(fVar20 * fVar20,fVar11 * fVar11),4);
        fVar11 = fVar11 * (float)uVar19;
        fVar20 = fVar20 * (float)((ulong)uVar19 >> 0x20);
        auVar16._0_8_ = CONCAT44(-(uint)(0.0 < fVar15),-(uint)(0.0 < fVar10));
        iVar5 = -(uint)(fVar10 <= 0.0);
        iVar18 = -(uint)(fVar15 <= 0.0);
        uVar12 = NEON_frsqrts(uVar12,CONCAT44(fVar20 * fVar20,fVar11 * fVar11),4);
        fVar11 = (float)uVar12 * fVar11;
        fVar20 = (float)((ulong)uVar12 >> 0x20) * fVar20;
        auVar16._8_8_ = auVar16._0_8_;
        fVar10 = (float)CONCAT13((byte)((uint)fVar11 >> 0x18) & ~(byte)((uint)iVar5 >> 0x18),
                                 CONCAT12((byte)((uint)fVar11 >> 0x10) &
                                          ~(byte)((uint)iVar5 >> 0x10),
                                          CONCAT11((byte)((uint)fVar11 >> 8) &
                                                   ~(byte)((uint)iVar5 >> 8),
                                                   SUB41(fVar11,0) & ~(byte)iVar5)));
        auVar14._0_4_ = fVar8 * fVar10;
        fVar8 = (float)(CONCAT17((byte)((uint)fVar20 >> 0x18) & ~(byte)((uint)iVar18 >> 0x18),
                                 CONCAT16((byte)((uint)fVar20 >> 0x10) &
                                          ~(byte)((uint)iVar18 >> 0x10),
                                          CONCAT15((byte)((uint)fVar20 >> 8) &
                                                   ~(byte)((uint)iVar18 >> 8),
                                                   CONCAT14(SUB41(fVar20,0) & ~(byte)iVar18,fVar10))
                                         )) >> 0x20);
        auVar14._4_4_ = fVar9 * fVar8;
        auVar14._8_4_ = fStack_68 * fVar10;
        auVar14._12_4_ = fStack_64 * fVar8;
        auVar13._12_4_ = fStack_64;
        auVar17._12_4_ = fStack_64;
        auVar17 = auVar17 ^ (auVar13 ^ auVar14) & auVar16;
        fStack_68 = auVar17._8_4_;
        fStack_64 = auVar17._12_4_;
        local_70 = auVar17._0_8_;
        *(undefined1 *)(param_1 + 0x50) = 1;
        *(long *)(param_1 + 0x148) = auVar17._8_8_;
        *(undefined8 *)(param_1 + 0x140) = local_70;
        *(long *)(param_1 + 0x48) = auVar17._8_8_;
        *(undefined8 *)(param_1 + 0x40) = local_70;
        iVar5 = FUN_031f4f34(*(undefined4 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x160),lVar7,
                             *(int *)(param_1 + 400) + 1);
        if (-1 < iVar5) {
          FUN_031f2f38(param_1,iVar5);
          *(int *)(param_1 + 400) = iVar5;
        }
      }
    }
    if (*(int *)(param_1 + 0x114) == 8) {
      puVar1 = &local_50;
      if (local_38[0] == -1) {
        puVar1 = (undefined8 *)(param_1 + 0x30);
      }
      fVar8 = (float)*puVar1 - *(float *)(param_1 + 0x130);
      fVar9 = (float)((ulong)*puVar1 >> 0x20) - *(float *)(param_1 + 0x134);
      fVar10 = (float)puVar1[1] - *(float *)(param_1 + 0x138);
      fVar11 = (float)((ulong)puVar1[1] >> 0x20) - *(float *)(param_1 + 0x13c);
      fVar8 = fVar8 * fVar8;
      fVar9 = fVar9 * fVar9;
      fVar10 = fVar10 * fVar10;
      fVar11 = fVar11 * fVar11;
      auVar3._4_4_ = fVar9;
      auVar3._0_4_ = fVar8;
      auVar3._8_4_ = fVar10;
      auVar3._12_4_ = fVar11;
      auVar4._4_4_ = fVar9;
      auVar4._0_4_ = fVar8;
      auVar4._8_4_ = fVar10;
      auVar4._12_4_ = fVar11;
      auVar13 = NEON_ext(auVar3,auVar4,8,1);
      if (*(float *)(param_1 + 0x9c) * *(float *)(param_1 + 0x9c) <= fVar8 + fVar9 + auVar13._0_4_)
      goto LAB_031f2bb8;
      *(undefined8 *)(param_1 + 0x140) = 0;
      *(undefined8 *)(param_1 + 0x148) = 0;
      if (*(char *)(param_1 + 0x158) != '\0') goto LAB_031f2bb8;
      iVar18 = *(int *)(param_1 + 0x1a8);
      iVar5 = iVar18 + 1;
      lVar7 = *(long *)(param_1 + 0x1a0);
      if ((int)(*(uint *)(param_1 + 0x1ac) & 0x3fffffff) <= iVar18) {
        lVar7 = FUN_031f35d8(PTR_PTR_0434a080,iVar5);
        iVar18 = *(int *)(param_1 + 0x1a8);
        *(long *)(param_1 + 0x1a0) = lVar7;
      }
      *(int *)(param_1 + 0x1a8) = iVar5;
      *(undefined4 *)(lVar7 + (long)iVar18 * 0x50) = 6;
      *(undefined1 *)(param_1 + 0x158) = 1;
      cVar2 = *(char *)(param_1 + 0x158);
    }
    else {
LAB_031f2bb8:
      cVar2 = *(char *)(param_1 + 0x158);
    }
    if (cVar2 != '\0') {
      uVar6 = 3;
      goto LAB_031f2bc4;
    }
    if (*(char *)(param_1 + 0x118) == '\0') {
      *(undefined4 *)(param_1 + 0x110) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x50) != '\0') {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined8 *)(param_1 + 0x148) = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x140) = *(undefined8 *)(param_1 + 0x40);
      return;
    }
  }
  if (*(long *)(param_1 + 0x150) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = 2;
  }
LAB_031f2bc4:
  *(undefined4 *)(param_1 + 0x110) = uVar6;
  return;
}


