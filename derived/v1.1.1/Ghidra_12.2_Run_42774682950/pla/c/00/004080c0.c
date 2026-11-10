/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004080c0; name: FUN_004080c0
 */


undefined ** FUN_004080c0(char *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  char *local_98;
  char *local_90;
  uint local_88;
  char *local_70;
  char **local_68;
  
  if (param_2 == 0) {
    local_98 = param_1;
    if (DAT_0439e6e8 != 0) {
      local_70 = (char *)CONCAT44(local_70._4_4_,1);
      local_68 = &local_98;
      lVar6 = FUN_00405c90(DAT_0439e6e8,&local_70);
      if (lVar6 == 0) goto LAB_004081f8;
      uVar10 = *(uint *)(*(long *)(lVar6 + 8) + 0x10);
      if (uVar10 == 0) goto LAB_0040826c;
LAB_004082a8:
      if (uVar10 < 0x4ab) {
        if (*(int *)(&DAT_04157c60 + (long)(int)uVar10 * 0x28) != 0) {
          return &PTR_s_UNDEF_04157c50 + (long)(int)uVar10 * 5;
        }
        uVar7 = 0x67;
        uVar8 = 0x65;
        uVar9 = 0xe3;
      }
      else {
        if (DAT_0439e6e8 == 0) {
          return (undefined **)0x0;
        }
        local_70 = (char *)CONCAT44(local_70._4_4_,3);
        local_68 = &local_98;
        local_88 = uVar10;
        lVar6 = FUN_00405c90(DAT_0439e6e8,&local_70);
        if (lVar6 != 0) {
          return *(undefined ***)(lVar6 + 8);
        }
        uVar7 = 0x67;
        uVar8 = 0x65;
        uVar9 = 0xf1;
      }
      goto LAB_004083b4;
    }
LAB_004081f8:
    pcVar4 = local_98;
    iVar1 = 0;
    iVar2 = 0x4a2;
    do {
      iVar11 = iVar1 + iVar2;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 1;
      }
      iVar11 = iVar11 >> 1;
      uVar10 = *(uint *)(&DAT_03a012e0 + (long)iVar11 * 4);
      iVar3 = strcmp(pcVar4,(&PTR_s_UNDEF_04157c50)[(ulong)uVar10 * 5]);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          uVar10 = *(uint *)(&DAT_04157c60 + (ulong)uVar10 * 0x28);
          if (uVar10 != 0) goto LAB_004082a8;
          break;
        }
        iVar1 = iVar11 + 1;
        iVar11 = iVar2;
      }
      iVar2 = iVar11;
    } while (iVar1 < iVar11);
LAB_0040826c:
    local_90 = param_1;
    if (DAT_0439e6e8 != 0) {
      local_70 = (char *)CONCAT44(local_70._4_4_,2);
      local_68 = &local_98;
      lVar6 = FUN_00405c90(DAT_0439e6e8,&local_70);
      if (lVar6 != 0) {
        uVar10 = *(uint *)(*(long *)(lVar6 + 8) + 0x10);
        if (uVar10 == 0) goto LAB_004080e4;
        goto LAB_004082a8;
      }
    }
    pcVar4 = local_90;
    iVar1 = 0;
    iVar2 = 0x4a2;
    do {
      iVar11 = iVar1 + iVar2;
      if (iVar11 < 0) {
        iVar11 = iVar11 + 1;
      }
      iVar11 = iVar11 >> 1;
      uVar10 = *(uint *)(&DAT_03a00058 + (long)iVar11 * 4);
      iVar3 = strcmp(pcVar4,(&PTR_s_undefined_04157c58)[(ulong)uVar10 * 5]);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          uVar10 = *(uint *)(&DAT_04157c60 + (ulong)uVar10 * 0x28);
          if (uVar10 != 0) goto LAB_004082a8;
          break;
        }
        iVar1 = iVar11 + 1;
        iVar11 = iVar2;
      }
      iVar2 = iVar11;
    } while (iVar1 < iVar11);
  }
LAB_004080e4:
  iVar1 = FUN_00409130(0,0,param_1,0xffffffff);
  if (iVar1 < 1) {
    return (undefined **)0x0;
  }
  iVar2 = FUN_0040a0e0(0,iVar1,6);
  if (iVar2 < 0) {
    return (undefined **)0x0;
  }
  pcVar4 = (char *)FUN_00400260((long)iVar2,"external/openssl/crypto/objects/obj_dat.c",0x17b);
  if (pcVar4 != (char *)0x0) {
    local_98 = pcVar4;
    FUN_00409f20(&local_98,0,iVar1,6,0);
    FUN_00409130(local_98,iVar1,param_1,0xffffffff);
    local_70 = pcVar4;
    ppuVar5 = (undefined **)FUN_004097f0(0,&local_70,(long)iVar2);
    FUN_00400420(pcVar4,"external/openssl/crypto/objects/obj_dat.c",0x188);
    return ppuVar5;
  }
  uVar7 = 0x6c;
  uVar8 = 0x41;
  uVar9 = 0x17c;
LAB_004083b4:
  FUN_004014b0(8,uVar7,uVar8,"external/openssl/crypto/objects/obj_dat.c",uVar9);
  return (undefined **)0x0;
}


