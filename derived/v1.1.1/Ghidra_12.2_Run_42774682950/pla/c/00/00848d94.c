/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00848d94; name: FUN_00848d94
 */


void FUN_00848d94(long param_1,void *param_2)

{
  uint uVar1;
  char cVar2;
  undefined7 uVar3;
  short sVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  char *pcVar15;
  byte bVar16;
  undefined4 local_a0 [5];
  uint local_8c;
  uint local_88 [4];
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  if (param_2 != (void *)0x0) {
    local_88[0] = 0;
    local_70 = 0;
    local_68 = 0;
    local_78 = PTR_DAT_04378008 + 0x10;
    local_a0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_88 | 4),(Result *)local_a0);
    if (*(int *)(param_1 + 0x768) != 0) {
      uVar14 = 0;
      pcVar15 = (char *)(param_1 + 0x3f1);
      do {
        local_68 = *(long *)(pcVar15 + -0x11);
        local_70 = CONCAT44(*(undefined4 *)(param_1 + 0x3cc),
                            CONCAT22((short)*(undefined4 *)(param_1 + 0x3c8),
                                     CONCAT11(pcVar15[-3] | pcVar15[-2] << 1 | pcVar15[-1] << 2 |
                                              *pcVar15 << 3 | pcVar15[-5] << 4 | pcVar15[-4] << 5 |
                                              (*(int *)(pcVar15 + -9) == 1) << 6 |
                                              (*(int *)(pcVar15 + -9) == 2) << 7,
                                              (undefined1)local_70)));
        iVar7 = FUN_008490c0(param_1,*(undefined8 *)(pcVar15 + -0x21));
        lVar13 = local_68;
        uVar3 = local_70._1_7_;
        iVar5 = local_70._4_4_;
        cVar2 = local_70._1_1_;
        sVar4 = local_70._2_2_;
        if (iVar7 < 0) {
          bVar6 = true;
          local_70 = CONCAT71(uVar3,1);
          lVar11 = *(long *)(pcVar15 + -0x21);
          uVar8 = FUN_008490c0(param_1,lVar11);
        }
        else {
          lVar11 = param_1 + (long)iVar7 * 0x28;
          bVar6 = local_70._1_1_ != *(char *)(lVar11 + 0x19);
          bVar16 = bVar6;
          if (local_70._2_2_ != *(short *)(lVar11 + 0x1a)) {
            bVar16 = 2;
          }
          if (local_70._4_4_ != *(int *)(lVar11 + 0x1c)) {
            bVar16 = bVar16 | 4;
          }
          if (local_68 != *(long *)(lVar11 + 0x20)) {
            bVar16 = bVar16 | 8;
          }
          local_70 = CONCAT71(uVar3,bVar6);
          iVar7 = 1;
          if (bVar6) {
            iVar7 = 2;
          }
          if ((bVar16 & 2) != 0) {
            iVar7 = iVar7 + 2;
          }
          lVar11 = *(long *)(pcVar15 + -0x21);
          if ((bVar16 & 4) != 0) {
            iVar7 = iVar7 + 4;
          }
          if ((bVar16 & 8) != 0) {
            iVar7 = iVar7 + 8;
          }
          uVar1 = (*(int *)(lVar11 + 0x5f8) + iVar7) - 0x10;
          uVar8 = 0;
          if (uVar1 < 0x5c1) {
            uVar8 = uVar1;
          }
          *(uint *)(lVar11 + 0x5f8) = uVar8;
          uVar8 = FUN_008490c0(param_1,lVar11);
        }
        if ((int)uVar8 < 0) {
          uVar8 = (uint)*(ushort *)(param_1 + 0x3c0);
          *(short *)(param_1 + 0x3c0) = (short)((uVar8 + 1) % 0x18);
        }
        puVar9 = (undefined1 *)(param_1 + (long)(int)uVar8 * 0x28);
        *puVar9 = 1;
        *(long *)(puVar9 + 8) = lVar11;
        puVar9[0x18] = bVar6;
        puVar9[0x19] = cVar2;
        *(short *)(puVar9 + 0x1a) = sVar4;
        *(int *)(puVar9 + 0x1c) = iVar5;
        *(long *)(puVar9 + 0x20) = lVar13;
        FUN_00848914(local_a0,&local_78,*(undefined8 *)(pcVar15 + -0x19),&local_8c,0x10);
        FUN_007ee660(local_88,local_a0);
        memcpy((void *)(*(long *)(pcVar15 + -0x19) + (ulong)local_8c),param_2,
               (ulong)*(uint *)(param_1 + 0x3c8));
        uVar10 = (ulong)*(uint *)(param_1 + 0x768);
        uVar14 = uVar14 + 1;
        pcVar15 = pcVar15 + 0x28;
      } while (uVar14 < uVar10);
      bVar16 = *(byte *)(param_1 + 0x76c);
      if ((bVar16 != 0) && (*(uint *)(param_1 + 0x768) != 0)) {
        plVar12 = (long *)(param_1 + 0x3d0);
        lVar13 = *plVar12;
        if (*(byte *)(lVar13 + 0x620) < bVar16) goto LAB_00849054;
        while (uVar10 = uVar10 - 1, uVar10 != 0) {
          while( true ) {
            plVar12 = plVar12 + 5;
            lVar13 = *plVar12;
            if (bVar16 <= *(byte *)(lVar13 + 0x620)) break;
LAB_00849054:
            *(byte *)(lVar13 + 0x620) = bVar16;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_00849064;
          }
        }
      }
    }
LAB_00849064:
    *(undefined4 *)(param_1 + 0x768) = 0;
  }
  return;
}


