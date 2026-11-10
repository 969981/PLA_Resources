/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c00a0; name: FUN_004c00a0
 */


ulong FUN_004c00a0(long param_1,undefined4 param_2,ulong param_3,uint *param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  ulong uVar4;
  int *piVar5;
  long lVar6;
  size_t sVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ushort *puVar11;
  uint local_24;
  
  iVar2 = 0;
  switch(param_2) {
  case 3:
    if (param_4 == (uint *)0x0) {
      uVar10 = 0x43;
      uVar8 = 0xd5c;
    }
    else {
      lVar9 = FUN_004230e0();
      iVar2 = FUN_00423920(lVar9,param_4);
      if (iVar2 < 1) {
        FUN_00423420(lVar9);
      }
      else if (lVar9 != 0) {
        uVar1 = FUN_00422d50(lVar9);
        iVar2 = FUN_004e2fc0(param_1,0x40007,uVar1,0,lVar9);
        if (iVar2 == 0) {
          FUN_004014b0(0x14,0xd5,0x18a,"external/openssl/ssl/s3_lib.c",0xd66);
          FUN_00423420(lVar9);
          return 0;
        }
        FUN_00423420(*(undefined8 *)(*(long *)(param_1 + 0x488) + 8));
        *(long *)(*(long *)(param_1 + 0x488) + 8) = lVar9;
        iVar2 = 1;
        break;
      }
      uVar10 = 0x41;
      uVar8 = 0xd61;
    }
    goto LAB_004c06d0;
  case 4:
    if (param_4 == (uint *)0x0) {
      uVar10 = 0x43;
      uVar8 = 0xd7f;
      goto LAB_004c06d0;
    }
    lVar9 = FUN_0042d4f0(param_4);
    if (lVar9 == 0) {
      uVar8 = 0xd84;
      uVar10 = 0x7c;
      goto LAB_004c06d0;
    }
    local_24 = FUN_0042e3e0();
    if (local_24 == 0) {
      return 0;
    }
    param_4 = &local_24;
    param_3 = 1;
    goto LAB_004c0324;
  case 6:
    uVar10 = 0x42;
    uVar8 = 0xd71;
    goto LAB_004c06d0;
  case 10:
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x10c);
    break;
  case 0xb:
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x10c);
    *(undefined4 *)(*(long *)(param_1 + 0xa8) + 0x10c) = 0;
    break;
  case 0xc:
    iVar2 = *(int *)(*(long *)(param_1 + 0xa8) + 0x108);
    break;
  case 0xd:
    iVar2 = **(int **)(param_1 + 0xa8);
    break;
  case 0x37:
    if (param_3 == 0) {
      FUN_00400420(*(undefined8 *)(param_1 + 0x638),"external/openssl/ssl/s3_lib.c",0xd9d);
      *(undefined8 *)(param_1 + 0x638) = 0;
      if (param_4 != (uint *)0x0) {
        sVar7 = strlen((char *)param_4);
        if (0xfe < sVar7 - 1) {
          uVar10 = 0x13f;
          uVar8 = 0xda5;
          goto LAB_004c06d0;
        }
        lVar9 = FUN_00404f10(param_4,"external/openssl/ssl/s3_lib.c",0xda8);
        *(long *)(param_1 + 0x638) = lVar9;
        if (lVar9 == 0) {
          uVar10 = 0x44;
          uVar8 = 0xda9;
          goto LAB_004c06d0;
        }
      }
      iVar2 = 1;
      break;
    }
    uVar10 = 0x140;
    uVar8 = 0xdad;
LAB_004c06d0:
    FUN_004014b0(0x14,0xd5,uVar10,"external/openssl/ssl/s3_lib.c",uVar8);
    return 0;
  case 0x39:
    *(uint **)(param_1 + 0x630) = param_4;
    iVar2 = 1;
    break;
  case 0x41:
    *(int *)(param_1 + 0x640) = (int)param_3;
    iVar2 = 1;
    break;
  case 0x42:
    uVar10 = *(undefined8 *)(param_1 + 0x660);
    goto LAB_004c0214;
  case 0x43:
    *(uint **)(param_1 + 0x660) = param_4;
    iVar2 = 1;
    break;
  case 0x44:
    uVar10 = *(undefined8 *)(param_1 + 0x658);
LAB_004c0214:
    *(undefined8 *)param_4 = uVar10;
    iVar2 = 1;
    break;
  case 0x45:
    *(uint **)(param_1 + 0x658) = param_4;
    iVar2 = 1;
    break;
  case 0x46:
    *(undefined8 *)param_4 = *(undefined8 *)(param_1 + 0x668);
    uVar4 = *(ulong *)(param_1 + 0x670);
    if ((long)uVar4 < 1) {
      uVar4 = 0xffffffffffffffff;
    }
    return uVar4;
  case 0x47:
    FUN_00400420(*(undefined8 *)(param_1 + 0x668),"external/openssl/ssl/s3_lib.c",0xddb);
    *(uint **)(param_1 + 0x668) = param_4;
    iVar2 = 1;
    *(ulong *)(param_1 + 0x670) = param_3;
    break;
  case 0x58:
    if (param_3 == 0) {
      iVar2 = FUN_004e2000(param_1,0,param_4);
    }
    else {
      iVar2 = FUN_004e20e0();
    }
    goto LAB_004c066c;
  case 0x59:
    if (param_3 == 0) {
      iVar2 = FUN_004e2160(param_1,0,param_4);
    }
    else {
      iVar2 = FUN_004e2200();
    }
    goto LAB_004c066c;
  case 0x5a:
    lVar9 = *(long *)(param_1 + 0x508);
    if (lVar9 == 0) {
      return 0;
    }
    lVar6 = *(long *)(lVar9 + 0x240);
    if ((param_4 == (uint *)0x0) || (lVar6 == 0)) {
LAB_004c0300:
      return (long)(int)lVar6;
    }
    puVar11 = *(ushort **)(lVar9 + 0x248);
    puVar3 = (uint *)FUN_004dbff0(*puVar11);
    lVar9 = lVar6;
    if (puVar3 != (uint *)0x0) goto LAB_004c02ec;
    do {
      *param_4 = *puVar11 | 0x1000000;
      while( true ) {
        lVar9 = lVar9 + -1;
        if (lVar9 == 0) goto LAB_004c0300;
        puVar11 = puVar11 + 1;
        param_4 = param_4 + 1;
        puVar3 = (uint *)FUN_004dbff0(*puVar11);
        if (puVar3 == (uint *)0x0) break;
LAB_004c02ec:
        *param_4 = *puVar3;
      }
    } while( true );
  case 0x5b:
LAB_004c0324:
    iVar2 = FUN_004dc3a0(param_1 + 0x698,param_1 + 0x690,param_4,param_3);
    goto LAB_004c066c;
  case 0x5c:
    iVar2 = FUN_004dc4d0(param_1 + 0x698,param_1 + 0x690,param_4);
    goto LAB_004c066c;
  case 0x5d:
    uVar4 = FUN_004dc120(param_1,param_3 & 0xffffffff);
    if (param_3 == 0xffffffffffffffff) {
      return uVar4 & 0xffff;
    }
    piVar5 = (int *)FUN_004dbff0();
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    return (long)*piVar5;
  case 0x61:
    uVar10 = *(undefined8 *)(param_1 + 0x488);
    uVar8 = 0;
    goto LAB_004c03a4;
  case 0x62:
    uVar10 = *(undefined8 *)(param_1 + 0x488);
    uVar8 = 0;
    goto LAB_004c03b8;
  case 0x65:
    uVar10 = *(undefined8 *)(param_1 + 0x488);
    uVar8 = 1;
LAB_004c03a4:
    iVar2 = FUN_004df300(uVar10,param_4,param_3,uVar8);
    goto LAB_004c066c;
  case 0x66:
    uVar10 = *(undefined8 *)(param_1 + 0x488);
    uVar8 = 1;
LAB_004c03b8:
    iVar2 = FUN_004de9b0(uVar10,param_4,uVar8);
    goto LAB_004c066c;
  case 0x67:
    if (*(int *)(param_1 + 0x38) != 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0xa8);
    if (*(int *)(lVar9 + 0x248) == 0) {
      return 0;
    }
    if (param_4 != (uint *)0x0) {
      *(undefined8 *)param_4 = *(undefined8 *)(lVar9 + 0x250);
      lVar9 = *(long *)(param_1 + 0xa8);
    }
    return *(ulong *)(lVar9 + 600);
  case 0x68:
    if (*(int *)(param_1 + 0x38) == 0) {
      return 0;
    }
    lVar9 = *(long *)(param_1 + 0x488);
    FUN_00400420(*(undefined8 *)(lVar9 + 0x188),"external/openssl/ssl/s3_lib.c",0x1129);
    *(undefined8 *)(lVar9 + 0x188) = 0;
    *(undefined8 *)(lVar9 + 400) = 0;
    if (param_3 == 0) {
      return 1;
    }
    if (param_4 == (uint *)0x0) {
      return 1;
    }
    if (0xff < param_3) {
      return 0;
    }
    lVar6 = FUN_00405020(param_4,param_3,"external/openssl/ssl/s3_lib.c",0x1130);
    *(long *)(lVar9 + 0x188) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    *(ulong *)(lVar9 + 400) = param_3;
    return 1;
  case 0x69:
    iVar2 = FUN_004e2c00(param_1,0,param_3 & 0xffffffff);
    goto LAB_004c066c;
  case 0x6a:
    uVar10 = *(undefined8 *)(param_1 + 0x488);
    uVar8 = 0;
    goto LAB_004c048c;
  case 0x6b:
    uVar10 = *(undefined8 *)(param_1 + 0x488);
    uVar8 = 1;
LAB_004c048c:
    iVar2 = FUN_004e2f60(uVar10,param_4,uVar8,param_3 & 0xffffffff);
    goto LAB_004c066c;
  case 0x6c:
    lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x308);
    goto joined_r0x004c0584;
  case 0x6d:
    if (*(long *)(param_1 + 0x508) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0xa8) + 0x408) == 0) {
      return 0;
    }
    FUN_004231b0();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x408);
    goto LAB_004c05b4;
  case 0x6f:
    lVar9 = *(long *)(param_1 + 0x508);
    if (lVar9 == 0) {
      return 0;
    }
    if (*(long *)(lVar9 + 0x238) == 0) {
      return 0;
    }
    *(long *)param_4 = *(long *)(lVar9 + 0x238);
    return (long)*(int *)(lVar9 + 0x230);
  case 0x73:
    iVar2 = 0;
    *(undefined8 *)param_4 = *(undefined8 *)(**(long **)(param_1 + 0x488) + 0x10);
    break;
  case 0x74:
    iVar2 = FUN_004e22b0(*(undefined8 *)(param_1 + 0x488),param_4);
    goto LAB_004c066c;
  case 0x75:
    if (param_3 == 3) {
      if (*(int *)(param_1 + 0x38) == 0) {
        return 0;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x238);
      if (lVar9 == 0) {
        return 0;
      }
      if ((*(byte *)(lVar9 + 0x20) & 0x44) != 0) {
        return 2;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2e0);
      if (lVar9 == 0) {
        return 0;
      }
      **(long **)(param_1 + 0x488) = lVar9;
      return 1;
    }
    iVar2 = FUN_004e2530(0,*(undefined8 *)(param_1 + 0x488),param_3);
LAB_004c066c:
    return (long)iVar2;
  case 0x76:
    *(int *)(*(long *)(param_1 + 0x488) + 0x18) = (int)param_3;
    return 1;
  case 0x7f:
    iVar2 = *(int *)(param_1 + 0x640);
    break;
  case 0x84:
    lVar9 = *(long *)(*(long *)(param_1 + 0xa8) + 0x2d8);
joined_r0x004c0584:
    if (lVar9 == 0) {
      return 0;
    }
    *param_4 = *(uint *)(lVar9 + 0xc);
    return 1;
  case 0x85:
    if (*(long *)(param_1 + 0x508) == 0) {
      return 0;
    }
    if (*(long *)(*(long *)(param_1 + 0xa8) + 0x240) == 0) {
      return 0;
    }
    FUN_004231b0();
    uVar10 = *(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x240);
LAB_004c05b4:
    *(undefined8 *)param_4 = uVar10;
    return 1;
  }
  return (long)iVar2;
}


