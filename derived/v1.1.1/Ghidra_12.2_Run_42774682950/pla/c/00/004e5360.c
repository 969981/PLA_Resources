/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004e5360; name: FUN_004e5360
 */


undefined8 FUN_004e5360(long param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_24;
  
  local_24 = 0x70;
  uVar4 = FUN_004c5320();
  lVar10 = *(long *)(param_1 + 0x598);
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: s->ctx != NULL","external/openssl/ssl/statem/extensions.c",0x3a2
                );
  }
  lVar11 = *(long *)(param_1 + 0x728);
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00404dd0("Assertion failed: s->session_ctx != NULL",
                 "external/openssl/ssl/statem/extensions.c",0x3a2);
  }
  if (*(code **)(lVar10 + 0x1e0) == (code *)0x0) {
    if (*(code **)(lVar11 + 0x1e0) == (code *)0x0) {
      iVar5 = 3;
      iVar6 = *(int *)(param_1 + 0x38);
      goto joined_r0x004e548c;
    }
    iVar5 = (**(code **)(lVar11 + 0x1e0))(param_1,&local_24,*(undefined8 *)(lVar11 + 0x1e8));
    if (*(int *)(param_1 + 0x38) != 0) goto LAB_004e53e0;
LAB_004e5490:
    lVar10 = *(long *)(param_1 + 0xa8);
    if (*(long *)(lVar10 + 0x198) == 0) goto LAB_004e54a4;
LAB_004e549c:
    if (*(long *)(lVar10 + 0x220) == 0) goto LAB_004e54a4;
  }
  else {
    iVar5 = (**(code **)(lVar10 + 0x1e0))(param_1,&local_24,*(undefined8 *)(lVar10 + 0x1e8));
    iVar6 = *(int *)(param_1 + 0x38);
joined_r0x004e548c:
    if (iVar6 == 0) goto LAB_004e5490;
LAB_004e53e0:
    if (((param_3 == 0) || (iVar5 != 0)) ||
       ((*(int *)(param_1 + 200) != 0 &&
        ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0 ||
          (iVar6 = **(int **)(param_1 + 8), iVar6 < 0x304)) || (iVar6 == 0x10000))))))
    goto LAB_004e5490;
    FUN_00400420(*(undefined8 *)(*(long *)(param_1 + 0x508) + 0x228),
                 "external/openssl/ssl/statem/extensions.c",0x3bb);
    lVar10 = FUN_00404f10(*(undefined8 *)(param_1 + 0x638),
                          "external/openssl/ssl/statem/extensions.c",0x3bc);
    *(long *)(*(long *)(param_1 + 0x508) + 0x228) = lVar10;
    if ((lVar10 != 0) || (*(long *)(param_1 + 0x638) == 0)) goto LAB_004e5490;
    FUN_004c99a0(param_1,0x50,0x22e,0x44,"external/openssl/ssl/statem/extensions.c",0x3bf);
    lVar10 = *(long *)(param_1 + 0xa8);
    if (*(long *)(lVar10 + 0x198) != 0) goto LAB_004e549c;
LAB_004e54a4:
    if (*(long *)(param_1 + 0x598) != *(long *)(param_1 + 0x728)) {
      piVar1 = (int *)(*(long *)(param_1 + 0x598) + 0x7c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + 1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      piVar1 = (int *)(*(long *)(param_1 + 0x728) + 0x7c);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  switch(iVar5) {
  case 0:
    if ((uVar4 >> 0xe & 1) != 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x678) == 0) {
      return 1;
    }
    uVar4 = FUN_004c5320(param_1);
    if (((uVar4 >> 0xe & 1) != 0) &&
       (*(undefined4 *)(param_1 + 0x678) = 0, *(int *)(param_1 + 200) == 0)) {
      lVar10 = FUN_003feaf0(param_1);
      if (lVar10 == 0) {
        uVar7 = 0x50;
        uVar8 = 0x44;
        uVar9 = 999;
      }
      else {
        FUN_00400420(*(undefined8 *)(lVar10 + 0x250),"external/openssl/ssl/statem/extensions.c",
                     0x3db);
        *(undefined8 *)(lVar10 + 600) = 0;
        *(undefined8 *)(lVar10 + 0x250) = 0;
        *(undefined4 *)(lVar10 + 0x268) = 0;
        *(undefined8 *)(lVar10 + 0x260) = 0;
        iVar6 = FUN_003ff080(param_1,lVar10);
        if (iVar6 != 0) {
          return 1;
        }
        uVar7 = 0x50;
        uVar8 = 0x44;
        uVar9 = 0x3e2;
      }
      goto LAB_004e55a4;
    }
    break;
  case 1:
    if ((((*(byte *)(*(long *)(*(int **)(param_1 + 8) + 0x30) + 0x60) >> 3 & 1) != 0) ||
        (iVar6 = **(int **)(param_1 + 8), iVar6 < 0x304)) || (iVar6 == 0x10000)) {
      FUN_004e6030(param_1,1,local_24);
      return 1;
    }
    break;
  case 2:
    uVar8 = 0xea;
    uVar9 = 0x3ef;
    uVar7 = local_24;
LAB_004e55a4:
    FUN_004c99a0(param_1,uVar7,0x22e,uVar8,"external/openssl/ssl/statem/extensions.c",uVar9);
    return 0;
  case 3:
    *(undefined4 *)(param_1 + 0x720) = 0;
  }
  return 1;
}


