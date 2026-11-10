/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00541fa0; name: FUN_00541fa0
 */


ulong FUN_00541fa0(long *param_1,double *param_2,long *param_3,int *param_4,uint param_5)

{
  void *__src;
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  double dVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  size_t sVar11;
  float fVar12;
  undefined8 local_38;
  
  switch(*(undefined1 *)((long)param_4 + 10)) {
  case 1:
    dVar7 = *param_2;
    if ((dVar7 != 0.0) || ((param_5 & 1) == 0)) {
      lVar4 = param_1[1];
      lVar6 = param_1[2];
      if ((ulong)(lVar6 - lVar4) < 8) {
        uVar2 = 0x80;
        do {
          uVar9 = uVar2;
          uVar2 = uVar9 << 1;
        } while (uVar9 < (param_1[3] - lVar6) + 8U);
        puVar3 = (undefined8 *)*param_1;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00542558;
        sVar11 = param_1[3] - lVar4;
        lVar4 = (*(code *)*puVar3)(puVar3,lVar4,sVar11,uVar9);
        uVar1 = 0;
        if (lVar4 == 0) goto LAB_00542284;
        if (sVar11 != 0) {
          memmove((void *)((lVar4 + uVar9) - sVar11),(void *)param_1[1],sVar11);
        }
        param_1[1] = lVar4;
        lVar6 = lVar4 + uVar9 + (param_1[2] - param_1[3]);
        param_1[2] = lVar6;
        param_1[3] = lVar4 + uVar9;
      }
      param_1[2] = lVar6 + -8;
      *(double *)(lVar6 + -8) = dVar7;
LAB_00542190:
      iVar5 = *param_4;
      uVar1 = 1;
LAB_005421d0:
      uVar1 = uVar1 | iVar5 << 3;
      goto LAB_005421d8;
    }
    break;
  case 2:
    fVar12 = *(float *)param_2;
    if ((fVar12 != 0.0) || ((param_5 & 1) == 0)) {
      lVar4 = param_1[1];
      lVar6 = param_1[2];
      if ((ulong)(lVar6 - lVar4) < 4) {
        uVar2 = 0x80;
        do {
          uVar9 = uVar2;
          uVar2 = uVar9 << 1;
        } while (uVar9 < (param_1[3] - lVar6) + 4U);
        puVar3 = (undefined8 *)*param_1;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00542558;
        sVar11 = param_1[3] - lVar4;
        lVar4 = (*(code *)*puVar3)(puVar3,lVar4,sVar11,uVar9);
        uVar1 = 0;
        if (lVar4 == 0) goto LAB_00542284;
        if (sVar11 != 0) {
          memmove((void *)((lVar4 + uVar9) - sVar11),(void *)param_1[1],sVar11);
        }
        param_1[1] = lVar4;
        lVar6 = lVar4 + uVar9 + (param_1[2] - param_1[3]);
        param_1[2] = lVar6;
        param_1[3] = lVar4 + uVar9;
      }
      param_1[2] = lVar6 + -4;
      *(float *)(lVar6 + -4) = fVar12;
LAB_005421c8:
      iVar5 = *param_4;
      uVar1 = 5;
      goto LAB_005421d0;
    }
    break;
  case 3:
  case 4:
    if (*param_2 != 0.0) goto LAB_0054206c;
    goto LAB_00541fec;
  case 5:
  case 0xe:
    fVar12 = *(float *)param_2;
    goto joined_r0x0054215c;
  case 6:
  case 0x10:
    dVar7 = *param_2;
    if ((dVar7 != 0.0) || ((param_5 & 1) == 0)) {
      lVar4 = param_1[1];
      lVar6 = param_1[2];
      if ((ulong)(lVar6 - lVar4) < 8) {
        uVar2 = 0x80;
        do {
          uVar9 = uVar2;
          uVar2 = uVar9 << 1;
        } while (uVar9 < (param_1[3] - lVar6) + 8U);
        puVar3 = (undefined8 *)*param_1;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00542558;
        sVar11 = param_1[3] - lVar4;
        lVar4 = (*(code *)*puVar3)(puVar3,lVar4,sVar11,uVar9);
        uVar1 = 0;
        if (lVar4 == 0) goto LAB_00542284;
        if (sVar11 != 0) {
          memmove((void *)((lVar4 + uVar9) - sVar11),(void *)param_1[1],sVar11);
        }
        param_1[1] = lVar4;
        lVar6 = lVar4 + uVar9 + (param_1[2] - param_1[3]);
        param_1[2] = lVar6;
        param_1[3] = lVar4 + uVar9;
      }
      param_1[2] = lVar6 + -8;
      *(double *)(lVar6 + -8) = dVar7;
      goto LAB_00542190;
    }
    break;
  case 7:
  case 0xf:
    fVar12 = *(float *)param_2;
    if ((fVar12 != 0.0) || ((param_5 & 1) == 0)) {
      lVar4 = param_1[1];
      lVar6 = param_1[2];
      if ((ulong)(lVar6 - lVar4) < 4) {
        uVar2 = 0x80;
        do {
          uVar9 = uVar2;
          uVar2 = uVar9 << 1;
        } while (uVar9 < (param_1[3] - lVar6) + 4U);
        puVar3 = (undefined8 *)*param_1;
        if (puVar3 == (undefined8 *)0x0) goto LAB_00542558;
        sVar11 = param_1[3] - lVar4;
        lVar4 = (*(code *)*puVar3)(puVar3,lVar4,sVar11,uVar9);
        uVar1 = 0;
        if (lVar4 == 0) goto LAB_00542284;
        if (sVar11 != 0) {
          memmove((void *)((lVar4 + uVar9) - sVar11),(void *)param_1[1],sVar11);
        }
        param_1[1] = lVar4;
        lVar6 = lVar4 + uVar9 + (param_1[2] - param_1[3]);
        param_1[2] = lVar6;
        param_1[3] = lVar4 + uVar9;
      }
      param_1[2] = lVar6 + -4;
      *(float *)(lVar6 + -4) = fVar12;
      goto LAB_005421c8;
    }
    break;
  case 8:
    if (*(char *)param_2 == '\0') goto LAB_00541fec;
    goto LAB_0054206c;
  case 9:
  case 0xc:
    __src = (void *)*param_2;
    dVar7 = param_2[1];
    if ((param_5 & 1) == 0) {
      if (dVar7 != 0.0) {
        lVar4 = param_1[1];
        lVar6 = param_1[2];
        if ((ulong)(lVar6 - lVar4) < (ulong)dVar7) {
          lVar8 = param_1[3];
          uVar2 = 0x80;
          do {
            uVar9 = uVar2;
            uVar2 = uVar9 << 1;
          } while (uVar9 < (ulong)(((long)dVar7 - lVar6) + lVar8));
          goto LAB_005423cc;
        }
        goto LAB_0054212c;
      }
    }
    else {
      if (dVar7 == 0.0) break;
      lVar4 = param_1[1];
      lVar6 = param_1[2];
      if ((ulong)(lVar6 - lVar4) < (ulong)dVar7) {
        lVar8 = param_1[3];
        uVar2 = 0x80;
        do {
          uVar9 = uVar2;
          uVar2 = uVar9 << 1;
        } while (uVar9 < (ulong)(((long)dVar7 - lVar6) + lVar8));
LAB_005423cc:
        puVar3 = (undefined8 *)*param_1;
        if (puVar3 == (undefined8 *)0x0) {
LAB_00542558:
                    /* WARNING: Subroutine does not return */
          __assert_fail("alloc","external/upb\\upb/upb.h",0x5f,"upb_realloc");
        }
        sVar11 = lVar8 - lVar4;
        lVar4 = (*(code *)*puVar3)(puVar3,lVar4,sVar11,uVar9);
        uVar1 = 0;
        if (lVar4 == 0) goto LAB_00542284;
        if (sVar11 != 0) {
          memmove((void *)((lVar4 + uVar9) - sVar11),(void *)param_1[1],sVar11);
        }
        param_1[1] = lVar4;
        lVar6 = lVar4 + uVar9 + (param_1[2] - param_1[3]);
        param_1[2] = lVar6;
        param_1[3] = lVar4 + uVar9;
      }
LAB_0054212c:
      param_1[2] = lVar6 - (long)dVar7;
      memcpy((void *)(lVar6 - (long)dVar7),__src,(size_t)dVar7);
    }
    uVar2 = FUN_00542620(param_1,dVar7);
    if ((uVar2 & 1) != 0) {
      iVar5 = *param_4;
      uVar1 = 2;
      goto LAB_005421d0;
    }
    goto LAB_00542280;
  case 10:
    dVar7 = *param_2;
    if (dVar7 != 0.0) {
      uVar10 = *(undefined8 *)(*param_3 + (ulong)*(ushort *)(param_4 + 2) * 8);
      uVar2 = FUN_00542620(param_1,(long)(int)(*param_4 << 3 | 4));
      if (((uVar2 & 1) != 0) &&
         (uVar2 = FUN_00540fb0(param_1,dVar7,uVar10,&local_38), (uVar2 & 1) != 0)) {
        iVar5 = *param_4;
        uVar1 = 3;
LAB_00542264:
        uVar1 = FUN_00542620(param_1,(long)(int)(uVar1 | iVar5 << 3));
        goto LAB_00542284;
      }
      goto LAB_00542280;
    }
    break;
  case 0xb:
    if (*param_2 != 0.0) {
      uVar2 = FUN_00540fb0(param_1,*param_2,
                           *(undefined8 *)(*param_3 + (ulong)*(ushort *)(param_4 + 2) * 8),&local_38
                          );
      if (((uVar2 & 1) != 0) && (uVar2 = FUN_00542620(param_1,local_38), (uVar2 & 1) != 0)) {
        iVar5 = *param_4;
        uVar1 = 2;
        goto LAB_00542264;
      }
      goto LAB_00542280;
    }
    break;
  case 0xd:
    fVar12 = *(float *)param_2;
joined_r0x0054215c:
    if (fVar12 == 0.0) {
LAB_00541fec:
      if ((param_5 & 1) != 0) break;
    }
LAB_0054206c:
    uVar2 = FUN_00542620(param_1);
joined_r0x0054220c:
    if ((uVar2 & 1) != 0) {
LAB_00542078:
      uVar1 = *param_4 << 3;
LAB_005421d8:
      uVar2 = FUN_00542620(param_1,(long)(int)uVar1);
      return uVar2;
    }
LAB_00542280:
    uVar1 = 0;
    goto LAB_00542284;
  case 0x11:
    fVar12 = *(float *)param_2;
    if ((fVar12 == 0.0) && ((param_5 & 1) != 0)) break;
    uVar2 = FUN_00542620(param_1,(int)fVar12 << 1 ^ (int)fVar12 >> 0x1f);
    if ((uVar2 & 1) == 0) goto LAB_00542280;
    goto LAB_00542078;
  case 0x12:
    dVar7 = *param_2;
    if ((dVar7 == 0.0) && ((param_5 & 1) != 0)) break;
    uVar2 = FUN_00542620(param_1,(long)dVar7 << 1 ^ (long)dVar7 >> 0x3f);
    goto joined_r0x0054220c;
  default:
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","external/upb/upb/encode.c",0xd3,"upb_encode_scalarfield");
  }
  uVar1 = 1;
LAB_00542284:
  return (ulong)(uVar1 & 1);
}


