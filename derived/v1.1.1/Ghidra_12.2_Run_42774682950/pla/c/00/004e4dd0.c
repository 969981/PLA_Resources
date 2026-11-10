/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e4dd0; name: FUN_004e4dd0
 */


undefined8
FUN_004e4dd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,long *param_6,long param_7,int param_8,int param_9)

{
  long lVar1;
  char *pcVar2;
  ulong uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long local_168;
  long local_160 [8];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  
  iVar5 = FUN_0041ccc0(param_2);
  if (iVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: hashsizei >= 0","external/openssl/ssl/statem/extensions.c",0x5b4
                );
  }
  if (((param_9 == 0) || (*(int *)(param_1 + 0x84) != 2)) ||
     (*(int *)(*(long *)(param_1 + 0x508) + 0x26c) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = *(int *)(param_7 + 0x26c) != 0;
  }
  pcVar2 = "ext binder";
  if (param_9 == 0) {
    pcVar2 = "res binder";
  }
  lVar8 = param_1 + 0x134;
  if ((*(int *)(param_1 + 0x38) == 0 && param_9 != 0) && !bVar4) {
    lVar8 = param_7 + 0x10;
  }
  iVar6 = FUN_004e6530(param_1,param_2,0,param_7 + 0x50,*(undefined8 *)(param_7 + 8),lVar8);
  if (iVar6 == 0) {
    lVar7 = 0;
LAB_004e5018:
    lVar8 = 0;
  }
  else {
    lVar7 = FUN_00444930();
    if (((lVar7 == 0) || (iVar6 = FUN_004449b0(lVar7,param_2,0), iVar6 < 1)) ||
       (iVar6 = FUN_00444b90(lVar7,auStack_a0,0), iVar6 < 1)) {
      uVar9 = 0x44;
      uVar10 = 0x5e5;
      goto LAB_004e5008;
    }
    lVar12 = (long)iVar5;
    iVar5 = FUN_004e6200(param_1,param_2,lVar8,pcVar2,10,auStack_a0,lVar12,auStack_e0,lVar12,1);
    if ((iVar5 == 0) ||
       (iVar5 = FUN_004e64f0(param_1,param_2,auStack_e0,auStack_120,lVar12), iVar5 == 0))
    goto LAB_004e5018;
    iVar5 = FUN_004449b0(lVar7,param_2,0);
    if (iVar5 < 1) {
      uVar9 = 0x44;
      uVar10 = 0x5f8;
LAB_004e5008:
      FUN_004c99a0(param_1,0x50,0x1fa,uVar9,"external/openssl/ssl/statem/extensions.c",uVar10);
      goto LAB_004e5018;
    }
    if (*(int *)(param_1 + 0x4d8) == 1) {
      lVar8 = FUN_00404920(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0xe0),3,0,local_160);
      if (lVar8 < 1) {
        uVar9 = 0x14c;
        uVar10 = 0x60a;
      }
      else if (*(int *)(param_1 + 0x38) == 0) {
        iVar5 = FUN_00444ad0(lVar7,local_160[0]);
joined_r0x004e50c4:
        if (0 < iVar5) goto LAB_004e50c8;
        uVar9 = 0x44;
        uVar10 = 0x624;
      }
      else {
        if (2 < lVar8 - 1U) {
          uVar11 = (ulong)*(byte *)(local_160[0] + 1) << 0x10 |
                   (ulong)*(byte *)(local_160[0] + 2) << 8 | (ulong)*(byte *)(local_160[0] + 3);
          uVar3 = (lVar8 - 4U) - uVar11;
          if ((uVar11 <= lVar8 - 4U) && (3 < uVar3)) {
            lVar1 = local_160[0] + uVar11;
            uVar11 = (ulong)*(byte *)(lVar1 + 5) << 0x10 | (ulong)*(byte *)(lVar1 + 6) << 8 |
                     (ulong)*(byte *)(lVar1 + 7);
            if (uVar11 <= uVar3 - 4) {
              iVar5 = FUN_00444ad0(lVar7,local_160[0],(lVar8 - uVar3) + uVar11 + 4);
              goto joined_r0x004e50c4;
            }
          }
        }
        uVar9 = 0x44;
        uVar10 = 0x61c;
      }
      goto LAB_004e5008;
    }
LAB_004e50c8:
    iVar5 = FUN_00444ad0(lVar7,param_3,param_4);
    if ((iVar5 < 1) || (iVar5 = FUN_00444b90(lVar7,auStack_a0,0), iVar5 < 1)) {
      uVar9 = 0x44;
      uVar10 = 0x62c;
      goto LAB_004e5008;
    }
    lVar8 = FUN_00423200(0x357,0,auStack_120,lVar12);
    if (lVar8 == 0) {
      uVar9 = 0x634;
    }
    else {
      if (param_8 == 0) {
        param_6 = local_160;
      }
      local_168 = lVar12;
      iVar5 = FUN_00464b70(lVar7,0,param_2,0,lVar8);
      if ((((0 < iVar5) && (iVar5 = FUN_00444ad0(lVar7,auStack_a0,lVar12), 0 < iVar5)) &&
          (iVar5 = FUN_00464d60(lVar7,param_6,&local_168), 0 < iVar5)) && (local_168 == lVar12)) {
        if ((param_8 == 0) && (iVar5 = FUN_00404df0(param_5,param_6,lVar12), iVar5 != 0)) {
          FUN_004c99a0(param_1,0x2f,0x1fa,0xfd,"external/openssl/ssl/statem/extensions.c",0x64c);
          uVar9 = 0;
        }
        else {
          uVar9 = 1;
        }
        goto LAB_004e5020;
      }
      uVar9 = 0x641;
    }
    FUN_004c99a0(param_1,0x50,0x1fa,0x44,"external/openssl/ssl/statem/extensions.c",uVar9);
  }
  uVar9 = 0xffffffff;
LAB_004e5020:
  FUN_004006a0(auStack_e0,0x40);
  FUN_004006a0(auStack_120,0x40);
  FUN_00423420(lVar8);
  FUN_00444950(lVar7);
  return uVar9;
}


