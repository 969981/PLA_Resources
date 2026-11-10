/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02deacf0; name: FUN_02deacf0
 */


int FUN_02deacf0(long param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong __n;
  uint uVar9;
  
  do {
    if (*(int *)(param_1 + 0x68) == 0) {
      bVar1 = *(byte *)(param_1 + 0x82);
      if ((bVar1 & 1) != 0) {
        return 0x11;
      }
      if ((bVar1 >> 1 & 1) == 0) {
        (**(code **)(**(long **)(param_1 + 0x58) + 0x90))();
      }
      else {
        *(byte *)(param_1 + 0x82) = bVar1 & 0xfd;
      }
      iVar3 = FUN_02f20cc4(param_1);
      if (iVar3 != 0x2d) {
        return iVar3;
      }
    }
    uVar5 = *(uint *)(param_1 + 0x144);
    uVar6 = (ulong)uVar5;
    if (uVar5 < 2) {
      uVar7 = *(uint *)(param_1 + 0x68);
      if (uVar7 != 0) {
        __n = (ulong)uVar7;
        if (2 - uVar6 <= (ulong)uVar7) {
          __n = 2 - uVar6;
        }
        if (__n == 2) {
          lVar8 = *(long *)(param_1 + 0x60);
          *(long *)(param_1 + 0x138) = lVar8;
        }
        else {
          if (*(char *)(param_1 + 0x148) == '\0') {
            lVar8 = (*DAT_0442d140)(5,(ulong)*(ushort *)(param_1 + 0x10c) + 2,8);
            *(long *)(param_1 + 0x138) = lVar8;
            if (lVar8 == 0) {
              return 0x34;
            }
            uVar6 = (ulong)*(uint *)(param_1 + 0x144);
            *(undefined1 *)(param_1 + 0x148) = 1;
          }
          else {
            lVar8 = *(long *)(param_1 + 0x138);
          }
          memcpy((void *)(lVar8 + uVar6),*(void **)(param_1 + 0x60),__n);
          uVar5 = *(uint *)(param_1 + 0x144);
          lVar8 = *(long *)(param_1 + 0x60);
          uVar7 = *(uint *)(param_1 + 0x68);
        }
        iVar3 = (int)__n;
        *(uint *)(param_1 + 0x68) = uVar7 - iVar3;
        *(uint *)(param_1 + 0x144) = uVar5 + iVar3;
        *(ulong *)(param_1 + 0x60) = lVar8 + __n;
        *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + iVar3;
        if (uVar5 + iVar3 == 2) goto LAB_02dead94;
      }
    }
    else {
LAB_02dead94:
      uVar5 = *(uint *)(param_1 + 0x140);
      if (uVar5 == 0) {
        puVar4 = *(ushort **)(param_1 + 0x138);
        if ((*(uint *)(param_1 + 0x68) < *puVar4 + 8) && (*(char *)(param_1 + 0x148) == '\0')) {
          puVar4 = (ushort *)(*DAT_0442d140)(5,(ulong)*puVar4 + 10,8);
          if (puVar4 == (ushort *)0x0) {
            return 0x34;
          }
          *puVar4 = **(ushort **)(param_1 + 0x138);
          uVar5 = *(uint *)(param_1 + 0x140);
          *(ushort **)(param_1 + 0x138) = puVar4;
          *(undefined1 *)(param_1 + 0x148) = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        puVar4 = *(ushort **)(param_1 + 0x138);
      }
      if ((uVar5 < *puVar4) && (uVar7 = *(uint *)(param_1 + 0x68), uVar7 != 0)) {
        uVar2 = *puVar4 - uVar5;
        uVar9 = uVar7;
        if (uVar2 <= uVar7) {
          uVar9 = uVar2;
        }
        if (*(char *)(param_1 + 0x148) != '\0') {
          memcpy((void *)((long)puVar4 + (ulong)uVar5 + 2),*(void **)(param_1 + 0x60),(ulong)uVar9);
          uVar5 = *(uint *)(param_1 + 0x140);
          uVar7 = *(uint *)(param_1 + 0x68);
        }
        *(uint *)(param_1 + 0x140) = uVar5 + uVar9;
        *(ulong *)(param_1 + 0x60) = *(long *)(param_1 + 0x60) + (ulong)uVar9;
        *(uint *)(param_1 + 0x68) = uVar7 - uVar9;
        *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + uVar9;
      }
    }
    if ((*(int *)(param_1 + 0x144) == 2) &&
       (*(uint *)(param_1 + 0x140) == (uint)**(ushort **)(param_1 + 0x138))) {
      *(undefined8 *)(param_1 + 0x140) = 0;
      return 0x2d;
    }
  } while( true );
}


