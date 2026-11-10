/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 002e8830; name: FUN_002e8830
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_002e8830(char *param_1,ulong param_2,int param_3,undefined8 *param_4)

{
  ulong uVar1;
  void *pvVar2;
  int iVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong __n;
  ulong uVar12;
  ulong uVar13;
  undefined1 *__src;
  undefined *__src_00;
  ulong uVar14;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar11 = (ulong)iVar3;
  if (iVar3 < 0) {
LAB_002e8d28:
                    /* WARNING: Subroutine does not return */
    __assert_fail("false && \"len <= kMaxSize\"",
                  "external/com_google_absl\\absl/strings/string_view.h",0x20a,"operator()");
  }
  uVar8 = (long)param_2 >> 0x20;
  if ((long)param_2 < 0) {
    uVar8 = 0;
  }
  uVar13 = 0;
  if (uVar11 <= uVar8) {
    uVar13 = uVar8 - uVar11;
  }
  bVar4 = (param_2 & 0xfe) == 4;
  uVar8 = (ulong)bVar4;
  __src = (undefined1 *)0x0;
  uVar9 = (uint)param_2;
  if ((bVar4) && (__src = &DAT_038d0274, *param_1 == '\0')) {
    if ((uVar9 >> 10 & 1) == 0) {
      __src = (undefined1 *)((long)(param_2 << 0x34) >> 0x3f & 0x38bdc00);
      uVar8 = param_2 >> 0xb & 1;
    }
    else {
      uVar8 = 1;
      __src = &DAT_039408ce;
    }
  }
  param_1 = param_1 + (0x33 - uVar11);
  uVar12 = 0;
  if (uVar8 <= uVar13) {
    uVar12 = uVar13 - uVar8;
  }
  if (((uVar9 & 0xff) < 0x14) && ((1 << (ulong)(uVar9 & 0x1f) & 0xb0300U) != 0)) {
    uVar13 = 0;
    if (((param_2 & 0x1000) == 0 && (uVar9 & 0xff) != 0x13) || (iVar3 == 0)) {
      __src_00 = (undefined *)0x0;
    }
    else if (((uVar9 & 0xff) < 0x12) && ((1 << (ulong)(uVar9 & 0x1f) & 0x2aa00U) != 0)) {
      uVar13 = 2;
      __src_00 = &DAT_03896975;
    }
    else {
      uVar13 = 2;
      __src_00 = &DAT_039494c9;
    }
  }
  else {
    uVar13 = 0;
    __src_00 = (undefined *)0x0;
  }
  uVar1 = 0;
  if (uVar13 <= uVar12) {
    uVar1 = uVar12 - uVar13;
  }
  iVar7 = param_3;
  if (param_3 < 0) {
    iVar7 = 1;
  }
  if (((((param_2 & 0x1000) != 0) && ((uVar9 & 0xff) == 6)) && ((iVar3 == 0 || (*param_1 != '0'))))
     && (iVar7 < iVar3 + 1)) {
    iVar7 = iVar3 + 1;
  }
  uVar12 = 0;
  if (uVar11 <= (ulong)(long)iVar7) {
    uVar12 = (long)iVar7 - uVar11;
  }
  uVar10 = 0;
  if (uVar12 <= uVar1) {
    uVar10 = uVar1 - uVar12;
  }
  uVar1 = uVar10;
  if ((param_2 & 0x200) != 0) {
    uVar1 = 0;
  }
  if ((param_3 < 0) && ((uVar9 >> 0xd & 1) != 0)) {
    uVar12 = uVar1 + uVar12;
  }
  else if (uVar1 != 0) {
    puVar5 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + uVar1;
    __n = (long)param_4 + (0x420 - (long)puVar5);
    uVar14 = uVar10;
    if (__n < uVar1) {
      puVar6 = param_4 + 4;
      do {
        if (__n != 0) {
          memset(puVar5,0x20,__n);
          puVar5 = (undefined8 *)(param_4[3] + __n);
          param_4[3] = puVar5;
        }
        if ((long)puVar5 - (long)puVar6 < 0) goto LAB_002e8d28;
        uVar14 = uVar14 - __n;
        (*(code *)param_4[1])(*param_4,puVar6,(long)puVar5 - (long)puVar6);
        param_4[3] = puVar6;
        __n = 0x400;
        puVar5 = puVar6;
      } while (0x400 < uVar14);
    }
    else {
      puVar6 = puVar5;
    }
    memset(puVar6,0x20,uVar14);
    param_4[3] = param_4[3] + uVar14;
  }
  if (uVar8 != 0) {
    pvVar2 = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar8;
    if (uVar8 < (ulong)((long)param_4 + (0x420 - (long)pvVar2))) {
      memcpy(pvVar2,__src,uVar8);
      param_4[3] = param_4[3] + uVar8;
    }
    else {
      puVar5 = param_4 + 4;
      if ((long)pvVar2 - (long)puVar5 < 0) goto LAB_002e8d28;
      (*(code *)param_4[1])(*param_4,puVar5,(long)pvVar2 - (long)puVar5);
      param_4[3] = puVar5;
      (*(code *)param_4[1])(*param_4,__src,uVar8);
    }
  }
  if (uVar13 != 0) {
    pvVar2 = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar13;
    if (uVar13 < (ulong)((long)param_4 + (0x420 - (long)pvVar2))) {
      memcpy(pvVar2,__src_00,uVar13);
      param_4[3] = param_4[3] + uVar13;
    }
    else {
      puVar5 = param_4 + 4;
      if ((long)pvVar2 - (long)puVar5 < 0) goto LAB_002e8d28;
      (*(code *)param_4[1])(*param_4,puVar5,(long)pvVar2 - (long)puVar5);
      param_4[3] = puVar5;
      (*(code *)param_4[1])(*param_4,__src_00,uVar13);
    }
  }
  if (uVar12 != 0) {
    puVar6 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + uVar12;
    uVar8 = (long)param_4 + (0x420 - (long)puVar6);
    puVar5 = puVar6;
    if (uVar8 < uVar12) {
      puVar5 = param_4 + 4;
      do {
        if (uVar8 != 0) {
          memset(puVar6,0x30,uVar8);
          puVar6 = (undefined8 *)(param_4[3] + uVar8);
          param_4[3] = puVar6;
        }
        if ((long)puVar6 - (long)puVar5 < 0) goto LAB_002e8d28;
        uVar12 = uVar12 - uVar8;
        (*(code *)param_4[1])(*param_4,puVar5,(long)puVar6 - (long)puVar5);
        param_4[3] = puVar5;
        uVar8 = 0x400;
        puVar6 = puVar5;
      } while (0x400 < uVar12);
    }
    memset(puVar5,0x30,uVar12);
    param_4[3] = param_4[3] + uVar12;
  }
  if (iVar3 != 0) {
    pvVar2 = (void *)param_4[3];
    param_4[2] = param_4[2] + uVar11;
    if (uVar11 < (ulong)((long)param_4 + (0x420 - (long)pvVar2))) {
      memcpy(pvVar2,param_1,uVar11);
      param_4[3] = param_4[3] + uVar11;
    }
    else {
      puVar5 = param_4 + 4;
      if ((long)pvVar2 - (long)puVar5 < 0) goto LAB_002e8d28;
      (*(code *)param_4[1])(*param_4,puVar5,(long)pvVar2 - (long)puVar5);
      param_4[3] = puVar5;
      (*(code *)param_4[1])(*param_4,param_1,uVar11);
    }
  }
  uVar10 = uVar10 & (long)(param_2 << 0x36) >> 0x3f;
  if (uVar10 != 0) {
    puVar6 = (undefined8 *)param_4[3];
    param_4[2] = param_4[2] + uVar10;
    uVar11 = (long)param_4 + (0x420 - (long)puVar6);
    puVar5 = puVar6;
    if (uVar11 < uVar10) {
      puVar5 = param_4 + 4;
      do {
        if (uVar11 != 0) {
          memset(puVar6,0x20,uVar11);
          puVar6 = (undefined8 *)(param_4[3] + uVar11);
          param_4[3] = puVar6;
        }
        if ((long)puVar6 - (long)puVar5 < 0) goto LAB_002e8d28;
        uVar10 = uVar10 - uVar11;
        (*(code *)param_4[1])(*param_4,puVar5,(long)puVar6 - (long)puVar5);
        param_4[3] = puVar5;
        uVar11 = 0x400;
        puVar6 = puVar5;
      } while (0x400 < uVar10);
    }
    memset(puVar5,0x20,uVar10);
    param_4[3] = param_4[3] + uVar10;
  }
  return;
}


