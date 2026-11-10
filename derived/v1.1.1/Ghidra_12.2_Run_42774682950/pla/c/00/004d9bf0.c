/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004d9bf0; name: FUN_004d9bf0
 */


undefined8 FUN_004d9bf0(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long lVar6;
  ulong *puVar7;
  uint uVar8;
  ulong __n;
  
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x748) != 4) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) == 0) &&
         (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (uVar2 = FUN_004d9e80(param_1), (int)uVar2 == 0)) {
      return uVar2;
    }
  }
  piVar5 = *(int **)(param_1 + 8);
  uVar8 = *(uint *)(*(long *)(piVar5 + 0x30) + 0x60);
  if ((((uVar8 >> 3 & 1) == 0) && (0x303 < *piVar5)) && (*piVar5 != 0x10000)) {
    iVar1 = FUN_004c5d60(param_1 + 0x7f8);
    if (iVar1 != 0) {
      uVar2 = 10;
      uVar3 = 0xb6;
      uVar4 = 0x30e;
      goto LAB_004d9d4c;
    }
    piVar5 = *(int **)(param_1 + 8);
    uVar8 = *(uint *)(*(long *)(piVar5 + 0x30) + 0x60);
  }
  if ((((uVar8 >> 3 & 1) == 0) && (0x303 < *piVar5)) && (*piVar5 != 0x10000)) {
    lVar6 = *(long *)(param_1 + 0xa8);
  }
  else {
    lVar6 = *(long *)(param_1 + 0xa8);
    if (*(int *)(lVar6 + 0xf0) == 0) {
      uVar2 = 10;
      uVar3 = 0x9a;
      uVar4 = 0x315;
      goto LAB_004d9d4c;
    }
  }
  *(undefined4 *)(lVar6 + 0xf0) = 0;
  __n = *(ulong *)(lVar6 + 0x220);
  if (__n == param_2[1]) {
    iVar1 = FUN_00404df0(*param_2,lVar6 + 0x1a0,__n);
    if (iVar1 == 0) {
      if (0x40 < __n) {
                    /* WARNING: Subroutine does not return */
        FUN_00404dd0("Assertion failed: md_len <= EVP_MAX_MD_SIZE",
                     "external/openssl/ssl/statem/statem_lib.c",0x32c);
      }
      lVar6 = *(long *)(param_1 + 0xa8);
      if (*(int *)(param_1 + 0x38) == 0) {
        memcpy((void *)(lVar6 + 0x390),(void *)(lVar6 + 0x1a0),__n);
        puVar7 = (ulong *)(*(long *)(param_1 + 0xa8) + 0x3d0);
      }
      else {
        memcpy((void *)(lVar6 + 0x348),(void *)(lVar6 + 0x1a0),__n);
        puVar7 = (ulong *)(*(long *)(param_1 + 0xa8) + 0x388);
      }
      *puVar7 = __n;
      lVar6 = *(long *)(*(int **)(param_1 + 8) + 0x30);
      if ((((*(byte *)(lVar6 + 0x60) >> 3 & 1) != 0) ||
          (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
        return 1;
      }
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar2 = (**(code **)(lVar6 + 0x18))
                          (param_1,param_1 + 0x1b4,param_1 + 0x174,0,*(long *)(param_1 + 0x508) + 8)
        ;
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = (**(code **)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x20))(param_1,0x111);
        if ((int)uVar2 == 0) {
          return uVar2;
        }
        uVar2 = FUN_004f0810(param_1);
        iVar1 = (int)uVar2;
      }
      else {
        if (*(int *)(param_1 + 0x748) == 4) {
          return 1;
        }
        uVar2 = (**(code **)(lVar6 + 0x20))(param_1,0x121);
        iVar1 = (int)uVar2;
      }
      if (iVar1 == 0) {
        return uVar2;
      }
      return 1;
    }
    uVar2 = 0x33;
    uVar3 = 0x95;
    uVar4 = 0x325;
  }
  else {
    uVar2 = 0x32;
    uVar3 = 0x6f;
    uVar4 = 0x31e;
  }
LAB_004d9d4c:
  FUN_004c99a0(param_1,uVar2,0x16c,uVar3,"external/openssl/ssl/statem/statem_lib.c",uVar4);
  return 0;
}


