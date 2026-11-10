/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5780; name: FUN_004c5780
 */


undefined8
FUN_004c5780(undefined8 param_1,long *param_2,long *param_3,long *param_4,int param_5,int param_6)

{
  ulong __n;
  ulong uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  void *pvVar10;
  char local_64 [4];
  
  uVar9 = param_2[1];
  if (uVar9 == 0) {
    if (param_6 == 0) {
      FUN_004014b0(0x14,0x207,0xb7,"external/openssl/ssl/ssl_lib.c",0x14d8);
      return 0;
    }
    uVar6 = 0x2f;
    uVar7 = 0xb7;
    uVar8 = 0x14d6;
LAB_004c5804:
    FUN_004c99a0(param_1,uVar6,0x207,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
    return 0;
  }
  __n = 2;
  if (param_5 != 0) {
    __n = 3;
  }
  uVar1 = 0;
  if (__n != 0) {
    uVar1 = uVar9 / __n;
  }
  if (uVar9 != uVar1 * __n) {
    if (param_6 == 0) {
      FUN_004014b0(0x14,0x207,0x97,"external/openssl/ssl/ssl_lib.c",0x14e2);
      return 0;
    }
    uVar6 = 0x32;
    uVar7 = 0x97;
    uVar8 = 0x14df;
    goto LAB_004c5804;
  }
  lVar3 = FUN_004071e0();
  lVar4 = FUN_004071e0();
  if ((lVar3 == 0) || (lVar4 == 0)) {
    if (param_6 != 0) {
      uVar6 = 0x50;
      uVar7 = 0x41;
      uVar8 = 0x14eb;
      goto LAB_004c5a38;
    }
    uVar6 = 0x41;
    uVar7 = 0x14ed;
  }
  else {
    uVar9 = param_2[1];
    if (__n <= uVar9) {
      if (param_5 == 0) {
        do {
          pvVar10 = (void *)*param_2;
          memcpy(local_64,pvVar10,__n);
          *param_2 = (long)pvVar10 + __n;
          param_2[1] = uVar9 - __n;
          piVar5 = (int *)FUN_004bf700(param_1,local_64,1);
          if (piVar5 != (int *)0x0) {
            if (*piVar5 != 0) {
              iVar2 = FUN_00407800(lVar3,piVar5);
              if (iVar2 == 0) goto LAB_004c5a1c;
              if (*piVar5 != 0) goto LAB_004c5868;
            }
            iVar2 = FUN_00407800(lVar4,piVar5);
            if (iVar2 == 0) goto LAB_004c5a1c;
          }
LAB_004c5868:
          uVar9 = param_2[1];
        } while (__n <= uVar9);
      }
      else {
        do {
          pvVar10 = (void *)*param_2;
          memcpy(local_64,pvVar10,__n);
          *param_2 = (long)pvVar10 + __n;
          param_2[1] = uVar9 - __n;
          if ((local_64[0] == '\0') &&
             (piVar5 = (int *)FUN_004bf700(param_1,(ulong)local_64 | 1,1), piVar5 != (int *)0x0)) {
            if (*piVar5 != 0) {
              iVar2 = FUN_00407800(lVar3,piVar5);
              if (iVar2 == 0) goto LAB_004c5a1c;
              if (*piVar5 != 0) goto LAB_004c5920;
            }
            iVar2 = FUN_00407800(lVar4,piVar5);
            if (iVar2 == 0) goto LAB_004c5a1c;
          }
LAB_004c5920:
          uVar9 = param_2[1];
        } while (__n <= uVar9);
      }
    }
    if (uVar9 == 0) {
      if (param_3 == (long *)0x0) {
        FUN_00407010(lVar3);
      }
      else {
        *param_3 = lVar3;
      }
      if (param_4 == (long *)0x0) {
        FUN_00407010(lVar4);
        return 1;
      }
      *param_4 = lVar4;
      return 1;
    }
    if (param_6 != 0) {
      uVar6 = 0x32;
      uVar7 = 0x10f;
      uVar8 = 0x150b;
LAB_004c5a38:
      FUN_004c99a0(param_1,uVar6,0x207,uVar7,"external/openssl/ssl/ssl_lib.c",uVar8);
      goto LAB_004c5a88;
    }
    uVar6 = 0x10f;
    uVar7 = 0x150d;
  }
LAB_004c5a84:
  FUN_004014b0(0x14,0x207,uVar6,"external/openssl/ssl/ssl_lib.c",uVar7);
LAB_004c5a88:
  FUN_00407010(lVar3);
  FUN_00407010(lVar4);
  return 0;
LAB_004c5a1c:
  if (param_6 != 0) {
    uVar6 = 0x50;
    uVar7 = 0x41;
    uVar8 = 0x1501;
    goto LAB_004c5a38;
  }
  uVar6 = 0x41;
  uVar7 = 0x1503;
  goto LAB_004c5a84;
}


