/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02deb5b8; name: FUN_02deb5b8
 */


undefined8 FUN_02deb5b8(long param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  void *__s;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ushort *local_78;
  uint local_70;
  undefined1 local_68;
  
  iVar5 = *(int *)(param_1 + 0x90);
  if (iVar5 < 3) {
    do {
      uVar10 = *(uint *)(param_1 + 0x68);
      if (uVar10 == 0) {
        return 0x3f;
      }
      if (iVar5 < 2) {
        uVar1 = *(uint *)(param_1 + 0x130);
        uVar2 = *(uint *)(param_1 + 0x104);
        uVar4 = uVar2 - uVar1;
        if (uVar2 < uVar1 || uVar4 == 0) {
          if (uVar1 != uVar2) goto LAB_02deb72c;
        }
        else {
          if (uVar4 <= uVar10) {
            uVar10 = uVar4;
          }
          memcpy((void *)(*(long *)(param_1 + 0x128) + (ulong)uVar1),*(void **)(param_1 + 0x60),
                 (ulong)uVar10);
          iVar5 = *(int *)(param_1 + 0x130) + uVar10;
          *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar10;
          *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) - uVar10;
          *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar10;
          *(int *)(param_1 + 0x130) = iVar5;
          if (iVar5 != *(int *)(param_1 + 0x104)) goto LAB_02deb72c;
        }
        *(undefined4 *)(param_1 + 0x90) = 2;
      }
      do {
        iVar5 = FUN_02deacf0(param_1);
        if (iVar5 < 0x2e) {
          if (iVar5 == 2) {
            return 2;
          }
          if (iVar5 == 0x11) {
            return 2;
          }
        }
        else {
          if (iVar5 == 0x34) {
            return 2;
          }
          if (iVar5 == 0x2e) {
            return 0x3f;
          }
        }
        local_78 = *(ushort **)(param_1 + 0x138) + 1;
        local_70 = (uint)**(ushort **)(param_1 + 0x138);
        local_68 = 0;
        lVar6 = FUN_02dec6f8(&DAT_04408fa8,param_1 + 0x88,*(undefined8 *)(param_1 + 0x18),&local_78)
        ;
        *(long *)(param_1 + 0xb0) = lVar6;
        if (lVar6 == 0) {
          return 2;
        }
        *(undefined4 *)(param_1 + 0x90) = 3;
        if ((*(char *)(param_1 + 0x148) == '\0') || (*(long *)(param_1 + 0x138) == 0))
        goto LAB_02deb740;
        (*DAT_0442d158)(5);
        *(undefined1 *)(param_1 + 0x148) = 0;
        *(long *)(param_1 + 0x138) = 0;
        *(undefined8 *)(param_1 + 0x140) = 0;
LAB_02deb72c:
        iVar5 = *(int *)(param_1 + 0x90);
      } while (iVar5 == 2);
    } while (iVar5 < 3);
  }
LAB_02deb740:
  bVar3 = *(byte *)(param_1 + 0xe8);
  *(uint *)(param_1 + 0xa8) = (uint)bVar3;
  puVar7 = (undefined8 *)(*DAT_0442d140)(5,(ulong)bVar3 << 4,0x10);
  *(undefined8 **)(param_1 + 0xb8) = puVar7;
  if (puVar7 != (undefined8 *)0x0) {
    *(undefined8 **)(param_1 + 0xc0) = puVar7 + (uint)bVar3;
    DAT_04408fe0 = &LAB_02def700;
    *puVar7 = 0;
    **(undefined8 **)(param_1 + 0xc0) = 0;
    uVar8 = (long)*(int *)(param_1 + 0xa8) *
            ((long)*(int *)(*(long *)(param_1 + 0xb0) + 4) & 0xfffffffffffffffcU) + 0xf;
    uVar9 = uVar8 & 0xfffffffffffffff0;
    __s = (void *)(*DAT_0442d140)(5,uVar9,0x10);
    **(undefined8 **)(param_1 + 0xc0) = __s;
    if (__s != (void *)0x0) {
      memset(__s,0,uVar8 & 0xfffffff0);
      *(undefined1 *)(param_1 + 0xe0) = 1;
      uVar10 = (uint)bVar3;
      if ((uVar10 != 0) && (**(undefined8 **)(param_1 + 0xc0) = __s, uVar10 != 1)) {
        iVar5 = 0;
        if (uVar10 != 0) {
          iVar5 = (int)uVar9 / (int)uVar10;
        }
        uVar8 = 1;
        do {
          __s = (void *)((long)__s + (long)iVar5);
          *(void **)(*(long *)(param_1 + 0xc0) + uVar8 * 8) = __s;
          uVar8 = uVar8 + 1;
        } while (bVar3 != uVar8);
      }
      *(undefined8 *)(param_1 + 0xd0) = 0;
      return 1;
    }
  }
  return 2;
}


