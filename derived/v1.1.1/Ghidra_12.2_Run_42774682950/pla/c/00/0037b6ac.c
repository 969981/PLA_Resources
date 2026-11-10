/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0037b6ac; name: FUN_0037b6ac
 */


/* WARNING: Type propagation algorithm not settling */

uint FUN_0037b6ac(long param_1,double *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  ulong *puVar13;
  void *__src;
  uint uVar14;
  double dVar15;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  undefined8 uVar16;
  char cVar23;
  byte local_88 [16];
  undefined8 local_78;
  ulong local_70;
  ulong uStack_68;
  byte *local_60;
  
  uStack_68 = 0;
  local_60 = (byte *)0x0;
  uVar14 = 0;
  local_70 = 0x2d02;
  puVar13 = (ulong *)(param_1 + 0x30);
  bVar2 = *(byte *)puVar13;
  uVar5 = (ulong)(bVar2 >> 1);
  uVar7 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar7 = *(ulong *)(param_1 + 0x38);
  }
  lVar12 = param_1 + 0x28;
  if (uVar7 == 1) {
    if ((bVar2 & 1) == 0) {
      if (*(char *)(param_1 + 0x31) == '-') {
        pcVar6 = (char *)(param_1 + 0x32);
        pcVar9 = (char *)((ulong)&local_70 | 2);
        do {
          uVar5 = uVar5 - 1;
          if (uVar5 == 0) goto LAB_0037b758;
          cVar17 = *pcVar9;
          cVar18 = *pcVar6;
          pcVar6 = pcVar6 + 1;
          pcVar9 = pcVar9 + 1;
        } while (cVar18 == cVar17);
      }
    }
    else if (**(char **)(param_1 + 0x40) == '-') {
LAB_0037b758:
                    /* try { // try from 0037b758 to 0037b75f has its CatchHandler @ 0037bbec */
      FUN_003a0640(lVar12);
      uVar14 = 1;
      goto LAB_0037b764;
    }
    uVar14 = 0;
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 2) goto LAB_0037b7ac;
LAB_0037b770:
    if (iVar1 == 3) {
      uVar3 = FUN_0037bc0c(param_1,param_2,0xffffffffffffffff);
      if ((uVar14 & uVar3) == 0) goto LAB_0037bb50;
LAB_0037b850:
      *param_2 = -*param_2;
      goto LAB_0037b85c;
    }
    if (iVar1 == 4) {
      dVar15 = (double)FUN_003a0c3c(puVar13);
      *param_2 = dVar15;
      FUN_003a0640(lVar12);
      goto joined_r0x0037bb98;
    }
    FUN_0034b2f0(&local_70,"Expected double, got: ",puVar13);
                    /* try { // try from 0037b87c to 0037b887 has its CatchHandler @ 0037bbf8 */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),&local_70);
  }
  else {
LAB_0037b764:
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 != 2) goto LAB_0037b770;
LAB_0037b7ac:
    uStack_68 = 0;
    local_60 = (byte *)0x0;
    local_70 = 0;
    if ((*(byte *)puVar13 & 1) == 0) {
      uStack_68 = *(ulong *)(param_1 + 0x38);
      local_70 = *puVar13;
      local_60 = *(byte **)(param_1 + 0x40);
      uVar7 = local_70 & 0xff;
      if ((local_70 & 1) == 0) goto LAB_0037b7d4;
LAB_0037ba24:
      pbVar4 = local_60 + uStack_68;
      pbVar11 = local_60;
      if (local_60 != pbVar4) goto LAB_0037b7e8;
    }
    else {
      uVar7 = *(ulong *)(param_1 + 0x38);
      if (0xffffffffffffffef < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      __src = *(void **)(param_1 + 0x40);
      if (uVar7 < 0x17) {
        local_70 = (ulong)(byte)((int)uVar7 << 1);
        pbVar11 = (byte *)((ulong)&local_70 | 1);
        if (uVar7 != 0) goto LAB_0037ba08;
      }
      else {
        uVar5 = uVar7 + 0x10 & 0xfffffffffffffff0;
        pbVar11 = (byte *)FUN_002e2e80(PTR_FUN_04373078,uVar5);
        local_70 = uVar5 | 1;
        uStack_68 = uVar7;
        local_60 = pbVar11;
LAB_0037ba08:
        memcpy(pbVar11,__src,uVar7);
      }
      pbVar11[uVar7] = 0;
      uVar7 = local_70 & 0xff;
      if ((local_70 & 1) != 0) goto LAB_0037ba24;
LAB_0037b7d4:
      pbVar11 = (byte *)((ulong)&local_70 | 1);
      pbVar4 = pbVar11 + (uVar7 >> 1);
      if (pbVar11 != pbVar4) {
LAB_0037b7e8:
        uVar7 = (long)pbVar4 - (long)pbVar11;
        if (uVar7 < 8) {
          bVar2 = *pbVar11;
          goto joined_r0x0037b804;
        }
        uVar10 = uVar7 & 0xfffffffffffffff8;
        pbVar8 = pbVar11 + uVar10;
        pbVar11 = pbVar11 + 3;
        uVar5 = uVar10;
        do {
          uVar16 = *(undefined8 *)(pbVar11 + -3);
          cVar17 = (char)((ulong)uVar16 >> 8);
          cVar18 = (char)((ulong)uVar16 >> 0x10);
          cVar19 = (char)((ulong)uVar16 >> 0x18);
          cVar20 = (char)((ulong)uVar16 >> 0x20);
          cVar21 = (char)((ulong)uVar16 >> 0x28);
          cVar22 = (char)((ulong)uVar16 >> 0x30);
          cVar23 = (char)((ulong)uVar16 >> 0x38);
          if ((byte)((char)uVar16 + 0xbfU) < 0x1a) {
            pbVar11[-3] = (char)uVar16 + 0x20;
          }
          if ((byte)(cVar17 + 0xbfU) < 0x1a) {
            pbVar11[-2] = cVar17 + 0x20;
          }
          if ((byte)(cVar18 + 0xbfU) < 0x1a) {
            pbVar11[-1] = cVar18 + 0x20;
          }
          if ((byte)(cVar19 + 0xbfU) < 0x1a) {
            *pbVar11 = cVar19 + 0x20;
          }
          if ((byte)(cVar20 + 0xbfU) < 0x1a) {
            pbVar11[1] = cVar20 + 0x20;
          }
          if ((byte)(cVar21 + 0xbfU) < 0x1a) {
            pbVar11[2] = cVar21 + 0x20;
          }
          if ((byte)(cVar22 + 0xbfU) < 0x1a) {
            pbVar11[3] = cVar22 + 0x20;
          }
          if ((byte)(cVar23 + 0xbfU) < 0x1a) {
            pbVar11[4] = cVar23 + 0x20;
          }
          uVar5 = uVar5 - 8;
          pbVar11 = pbVar11 + 8;
        } while (uVar5 != 0);
        if (uVar10 != uVar7) {
          do {
            while( true ) {
              bVar2 = *pbVar8;
              pbVar11 = pbVar8;
joined_r0x0037b804:
              if (bVar2 - 0x41 < 0x1a) break;
              pbVar8 = pbVar11 + 1;
              if (pbVar4 == pbVar8) goto LAB_0037b9d8;
            }
            pbVar8 = pbVar11 + 1;
            *pbVar11 = bVar2 + 0x20;
          } while (pbVar4 != pbVar8);
        }
LAB_0037b9d8:
        uVar7 = local_70 & 0xff;
      }
    }
    uVar5 = uVar7 >> 1;
    if ((uVar7 & 1) != 0) {
      uVar5 = uStack_68;
    }
    if (uVar5 == 8) {
      pbVar11 = (byte *)((ulong)&local_70 | 1);
      if ((uVar7 & 1) != 0) {
        pbVar11 = local_60;
      }
      if (*(long *)pbVar11 == 0x7974696e69666e69) {
LAB_0037bb70:
        *param_2 = INFINITY;
                    /* try { // try from 0037bb78 to 0037bb7f has its CatchHandler @ 0037bba8 */
        FUN_003a0640(lVar12);
LAB_0037bb80:
        if ((local_70 & 1) != 0) {
          FUN_002e2ea0(PTR_LAB_04373088,local_60);
        }
joined_r0x0037bb98:
        if (uVar14 != 0) goto LAB_0037b850;
LAB_0037b85c:
        uVar3 = 1;
        goto LAB_0037bb50;
      }
    }
    else if (uVar5 == 3) {
      pbVar11 = (byte *)((ulong)&local_70 | 1);
      if ((uVar7 & 1) != 0) {
        pbVar11 = local_60;
      }
      if (*(short *)pbVar11 == 0x6e69 && pbVar11[2] == 0x66) goto LAB_0037bb70;
      if (*(short *)pbVar11 == 0x616e && pbVar11[2] == 0x6e) {
        *param_2 = NAN;
                    /* try { // try from 0037babc to 0037bac3 has its CatchHandler @ 0037bba8 */
        FUN_003a0640(lVar12);
        goto LAB_0037bb80;
      }
    }
                    /* try { // try from 0037baf8 to 0037bb0b has its CatchHandler @ 0037bbe8 */
    FUN_0034b2f0(local_88,"Expected double, got: ",&local_70);
                    /* try { // try from 0037bb10 to 0037bb1b has its CatchHandler @ 0037bbac */
    FUN_0037196c(param_1,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),local_88);
    if ((local_88[0] & 1) != 0) {
      FUN_002e2ea0(PTR_LAB_04373088,local_78);
    }
  }
  if ((local_70 & 1) != 0) {
    FUN_002e2ea0(PTR_LAB_04373088,local_60);
  }
  uVar3 = 0;
LAB_0037bb50:
  return uVar3 & 1;
}


