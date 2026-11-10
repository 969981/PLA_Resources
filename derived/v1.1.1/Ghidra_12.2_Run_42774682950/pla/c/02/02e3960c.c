/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e3960c; name: FUN_02e3960c
 */


undefined8 FUN_02e3960c(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = *(uint *)(param_2 + 8);
  if (*(char *)(param_1 + 0x6e) == '\0') {
    uVar2 = uVar7 >> 0xc & 0xfffffff7;
    uVar7 = uVar7 & 0xf00 | uVar2 << 0xc | uVar7 - ((uVar7 >> 0xc) - uVar2 >> 3) & 0xff;
  }
  if ((~uVar7 & 0x7000) == 0) {
    uVar2 = uVar7 >> 0xc & 0xffffb;
    if (*(char *)(param_1 + 0x6d) == '\0') {
      uVar7 = uVar2 << 0xc | uVar7 & 0xf00 | uVar7 - ((uVar7 >> 0xc) - uVar2 >> 2) & 0xff;
    }
  }
  uVar8 = *(uint *)(param_1 + 0xb8);
  uVar2 = uVar7 & 0xff;
  cVar3 = *(char *)(param_1 + 0x6c);
  if ((uVar2 != uVar8) || (*(char *)(param_1 + 0xac) != cVar3)) {
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 != (long *)0x0) {
      if (*plVar9 != 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
        *plVar9 = 0;
      }
      *(undefined4 *)(plVar9 + 1) = 0;
      if (*(long *)(param_1 + 0x10) != 0) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
      }
      cVar3 = *(char *)(param_1 + 0x6c);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    if (((uVar7 & 0xff) != 0) && (cVar3 != '\0')) {
      puVar4 = (undefined8 *)
               (**(code **)(**(long **)(param_1 + 0x20) + 0x10))(*(long **)(param_1 + 0x20),0x10);
      if (puVar4 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x10) = 0;
        return 0x34;
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined8 **)(param_1 + 0x10) = puVar4;
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar5 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
      uVar6 = FUN_02e3907c(puVar4,uVar6,uVar5,uVar7,*(undefined4 *)(param_1 + 0xbc),param_1 + 0x40);
      if ((int)uVar6 != 1) {
        return uVar6;
      }
    }
  }
  if ((uVar2 != uVar8) || (*(float *)(param_1 + 0xa8) != *(float *)(param_1 + 0x68))) {
    lVar10 = *(long *)(param_1 + 8);
    if (lVar10 != 0) {
      uVar8 = *(uint *)(param_1 + 0xb8);
      if (uVar8 != 0) {
        if (*(long *)(lVar10 + 0x10) != 0) {
          (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
          *(undefined8 *)(lVar10 + 0x10) = 0;
          *(undefined4 *)(lVar10 + 8) = 0;
          uVar8 = *(uint *)(param_1 + 0xb8);
        }
        if (1 < uVar8) {
          lVar10 = *(long *)(param_1 + 8);
          if (*(long *)(lVar10 + 0x48) != 0) {
            (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
            *(undefined8 *)(lVar10 + 0x48) = 0;
            *(undefined4 *)(lVar10 + 0x40) = 0;
            uVar8 = *(uint *)(param_1 + 0xb8);
          }
          if (2 < uVar8) {
            lVar10 = *(long *)(param_1 + 8);
            if (*(long *)(lVar10 + 0x80) != 0) {
              (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
              *(undefined8 *)(lVar10 + 0x80) = 0;
              *(undefined4 *)(lVar10 + 0x78) = 0;
              uVar8 = *(uint *)(param_1 + 0xb8);
            }
            if (3 < uVar8) {
              lVar10 = 0;
              uVar12 = 3;
              do {
                lVar11 = *(long *)(param_1 + 8) + lVar10;
                if (*(long *)(lVar11 + 0xb8) != 0) {
                  (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
                  *(undefined8 *)(lVar11 + 0xb8) = 0;
                  *(undefined4 *)(lVar11 + 0xb0) = 0;
                  uVar8 = *(uint *)(param_1 + 0xb8);
                }
                uVar12 = uVar12 + 1;
                lVar10 = lVar10 + 0x38;
              } while (uVar12 < uVar8);
            }
          }
        }
        lVar10 = *(long *)(param_1 + 8);
      }
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar10);
      *(undefined8 *)(param_1 + 8) = 0;
    }
    uVar6 = FUN_02e38eb0(param_1,uVar7);
    if ((int)uVar6 != 1) {
      return uVar6;
    }
    if ((uVar2 != 0) && (lVar10 = *(long *)(param_1 + 8), lVar10 != 0)) {
      if (*(void **)(lVar10 + 0x10) != (void *)0x0) {
        memset(*(void **)(lVar10 + 0x10),0,(ulong)(uint)(*(int *)(lVar10 + 8) << 2));
      }
      *(undefined4 *)(lVar10 + 0x18) = 0;
      if (uVar2 != 1) {
        lVar10 = *(long *)(param_1 + 8);
        if (*(void **)(lVar10 + 0x48) != (void *)0x0) {
          memset(*(void **)(lVar10 + 0x48),0,(ulong)(uint)(*(int *)(lVar10 + 0x40) << 2));
        }
        *(undefined4 *)(lVar10 + 0x50) = 0;
        if (uVar2 != 2) {
          lVar10 = *(long *)(param_1 + 8);
          if (*(void **)(lVar10 + 0x80) != (void *)0x0) {
            memset(*(void **)(lVar10 + 0x80),0,(ulong)(uint)(*(int *)(lVar10 + 0x78) << 2));
          }
          *(undefined4 *)(lVar10 + 0x88) = 0;
          if (uVar2 != 3) {
            lVar10 = 0;
            lVar11 = (ulong)uVar2 - 3;
            do {
              lVar1 = *(long *)(param_1 + 8) + lVar10;
              if (*(void **)(lVar1 + 0xb8) != (void *)0x0) {
                memset(*(void **)(lVar1 + 0xb8),0,(ulong)(uint)(*(int *)(lVar1 + 0xb0) << 2));
              }
              lVar10 = lVar10 + 0x38;
              lVar11 = lVar11 + -1;
              *(undefined4 *)(lVar1 + 0xc0) = 0;
            } while (lVar11 != 0);
          }
        }
      }
    }
  }
  *(uint *)(param_1 + 0xb8) = uVar2;
  return 1;
}


