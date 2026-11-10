/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 004c5e40; name: FUN_004c5e40
 */


int FUN_004c5e40(long param_1,ulong param_2,ulong param_3,int param_4,int param_5,ulong *param_6)

{
  char *__src;
  ulong uVar1;
  uint uVar2;
  void *__dest;
  int iVar3;
  int *piVar4;
  void *__src_00;
  long lVar5;
  ulong uVar6;
  ulong __n;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  if (param_2 == 0) {
LAB_004c5eec:
    iVar3 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x818);
    if (lVar5 == 0) {
      iVar3 = FUN_004c9590(param_1);
      if (iVar3 == 0) {
        return -1;
      }
      lVar5 = *(long *)(param_1 + 0x818);
    }
    __n = *(ulong *)(param_1 + 0x838);
    uVar2 = ~((int)lVar5 + 4U);
    uVar9 = (ulong)uVar2 & 7;
    if (param_4 == 0) {
      if (__n == 0) {
LAB_004c5f3c:
        *(ulong *)(param_1 + 0x830) = uVar9;
        uVar6 = uVar9;
      }
      else {
        uVar6 = *(ulong *)(param_1 + 0x830);
        if ((4 < __n) && ((uVar2 & 7) != 0)) {
          __src = (char *)(lVar5 + uVar6);
          if ((*__src == '\x17') && (0x7f < CONCAT11(__src[3],__src[4]))) {
            memmove((void *)(lVar5 + uVar9),__src,__n);
            lVar5 = *(long *)(param_1 + 0x818);
            goto LAB_004c5f3c;
          }
        }
      }
      lVar8 = 0;
      __src_00 = (void *)(lVar5 + uVar6);
      *(void **)(param_1 + 0x1740) = __src_00;
      *(undefined8 *)(param_1 + 0x1748) = 0;
    }
    else {
      lVar8 = *(long *)(param_1 + 0x1748);
      __src_00 = *(void **)(param_1 + 0x1740);
    }
    __dest = (void *)(lVar5 + uVar9);
    if ((param_5 == 1) && (__src_00 != __dest)) {
      memmove(__dest,__src_00,lVar8 + __n);
      *(void **)(param_1 + 0x1740) = __dest;
      *(ulong *)(param_1 + 0x830) = lVar8 + uVar9;
    }
    uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60);
    uVar9 = param_2;
    if ((uVar2 >> 3 & 1) != 0) {
      if ((param_4 != 0) && (__n == 0)) goto LAB_004c5eec;
      uVar9 = __n;
      if (param_2 <= __n || __n == 0) {
        uVar9 = param_2;
      }
    }
    if (__n < uVar9) {
      uVar6 = *(long *)(param_1 + 0x828) - *(long *)(param_1 + 0x830);
      if (uVar6 < uVar9) {
        FUN_004c99a0(param_1,0x50,0x95,0x44,"external/openssl/ssl/record/rec_layer_s3.c",0x10b);
        iVar3 = -1;
      }
      else {
        uVar7 = uVar9;
        if (*(int *)(param_1 + 0x800) != 0 || (uVar2 & 8) != 0) {
          uVar1 = uVar9;
          if (uVar9 <= param_3) {
            uVar1 = param_3;
          }
          uVar7 = uVar6;
          if (uVar1 <= uVar6) {
            uVar7 = uVar1;
          }
        }
        do {
          piVar4 = __errno_location();
          *piVar4 = 0;
          if (*(long *)(param_1 + 0x10) == 0) {
            FUN_004c99a0(param_1,0x50,0x95,0xd3,"external/openssl/ssl/record/rec_layer_s3.c",0x12d);
            iVar3 = -1;
LAB_004c60b8:
            *(ulong *)(param_1 + 0x838) = __n;
            if ((*(byte *)(param_1 + 0x5d0) >> 4 & 1) == 0) {
              return iVar3;
            }
            if (lVar8 + __n != 0) {
              return iVar3;
            }
            if ((*(uint *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) >> 3 & 1) == 0) {
              FUN_004c98e0(param_1);
              return iVar3;
            }
            return iVar3;
          }
          *(undefined4 *)(param_1 + 0x28) = 3;
          iVar3 = FUN_00404070(*(long *)(param_1 + 0x10),(long)__dest + __n + lVar8,
                               (int)uVar7 - (int)__n);
          if (iVar3 < 1) goto LAB_004c60b8;
          __n = __n + (long)iVar3;
          uVar6 = __n;
          if (((uint)(__n < uVar9) &
              (*(byte *)(*(long *)(*(long *)(param_1 + 8) + 0xc0) + 0x60) & 8) >> 3) == 0) {
            uVar6 = uVar9;
          }
          uVar9 = uVar6;
        } while (__n < uVar6);
        *(ulong *)(param_1 + 0x838) = __n - uVar6;
        *(ulong *)(param_1 + 0x830) = *(long *)(param_1 + 0x830) + uVar6;
        iVar3 = 1;
        *(undefined4 *)(param_1 + 0x28) = 1;
        *(ulong *)(param_1 + 0x1748) = *(long *)(param_1 + 0x1748) + uVar6;
        *param_6 = uVar6;
      }
    }
    else {
      *(ulong *)(param_1 + 0x1748) = *(long *)(param_1 + 0x1748) + uVar9;
      *(ulong *)(param_1 + 0x838) = __n - uVar9;
      *(ulong *)(param_1 + 0x830) = *(long *)(param_1 + 0x830) + uVar9;
      *param_6 = uVar9;
      iVar3 = 1;
    }
  }
  return iVar3;
}


