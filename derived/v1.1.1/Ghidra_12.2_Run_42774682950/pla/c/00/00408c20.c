/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00408c20; name: FUN_00408c20
 */


undefined4 FUN_00408c20(undefined8 param_1,char *param_2,char *param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  int iVar9;
  undefined4 local_98 [2];
  char **local_90;
  char *local_88;
  char *local_80;
  
  if (param_2 != (char *)0x0) {
    local_88 = param_2;
    if (DAT_0439e6e8 != 0) {
      local_98[0] = 1;
      local_90 = &local_88;
      lVar6 = FUN_00405c90(DAT_0439e6e8,local_98);
      if (lVar6 != 0) {
        iVar4 = *(int *)(*(long *)(lVar6 + 8) + 0x10);
joined_r0x00408d50:
        if (iVar4 != 0) goto LAB_00408de4;
        goto joined_r0x00408c8c;
      }
    }
    pcVar2 = local_88;
    iVar4 = 0;
    iVar8 = 0x4a2;
    do {
      iVar9 = iVar4 + iVar8;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 >> 1;
      uVar1 = *(uint *)(&DAT_03a012e0 + (long)iVar9 * 4);
      iVar3 = strcmp(pcVar2,(&PTR_s_UNDEF_04157c50)[(ulong)uVar1 * 5]);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          iVar4 = *(int *)(&DAT_04157c60 + (ulong)uVar1 * 0x28);
          goto joined_r0x00408d50;
        }
        iVar4 = iVar9 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
    } while (iVar4 < iVar9);
  }
joined_r0x00408c8c:
  if (param_3 != (char *)0x0) {
    local_80 = param_3;
    if (DAT_0439e6e8 != 0) {
      local_98[0] = 2;
      local_90 = &local_88;
      lVar6 = FUN_00405c90(DAT_0439e6e8,local_98);
      if (lVar6 != 0) {
        iVar4 = *(int *)(*(long *)(lVar6 + 8) + 0x10);
joined_r0x00408cc8:
        if (iVar4 != 0) {
LAB_00408de4:
          FUN_004014b0(8,100,0x66,"external/openssl/crypto/objects/obj_dat.c",0x2ba);
          return 0;
        }
        goto LAB_00408e08;
      }
    }
    pcVar2 = local_80;
    iVar4 = 0;
    iVar8 = 0x4a2;
    do {
      iVar9 = iVar4 + iVar8;
      if (iVar9 < 0) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 >> 1;
      uVar1 = *(uint *)(&DAT_03a00058 + (long)iVar9 * 4);
      iVar3 = strcmp(pcVar2,(&PTR_s_undefined_04157c58)[(ulong)uVar1 * 5]);
      if (-1 < iVar3) {
        if (iVar3 == 0) {
          iVar4 = *(int *)(&DAT_04157c60 + (ulong)uVar1 * 0x28);
          goto joined_r0x00408cc8;
        }
        iVar4 = iVar9 + 1;
        iVar9 = iVar8;
      }
      iVar8 = iVar9;
    } while (iVar4 < iVar9);
  }
LAB_00408e08:
  plVar7 = (long *)FUN_004080c0(param_1,1);
  if (plVar7 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    iVar4 = FUN_00407f40();
    if (iVar4 == 0) {
      iVar4 = DAT_04157c48 + 1;
      *(int *)(plVar7 + 2) = DAT_04157c48;
      DAT_04157c48 = iVar4;
      *plVar7 = (long)param_2;
      plVar7[1] = (long)param_3;
      uVar5 = FUN_00407a50(plVar7);
      *plVar7 = 0;
      plVar7[1] = 0;
    }
    else {
      FUN_004014b0(8,100,0x66,"external/openssl/crypto/objects/obj_dat.c",0x2c5);
      uVar5 = 0;
    }
    FUN_00409be0(plVar7);
  }
  return uVar5;
}


