/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ed8974; name: FUN_02ed8974
 */


void FUN_02ed8974(long *param_1,undefined8 param_2,ulong *param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  bool bVar10;
  ulong local_68;
  
  uVar7 = 0;
  plVar9 = param_1;
  if ((*(uint *)((long)param_1 + 0xaa) & 0x20000) == 0) {
    plVar9 = (long *)0x0;
  }
  if ((param_1 != (long *)0x0) && ((*(uint *)((long)param_1 + 0xaa) >> 0x11 & 1) == 0)) {
    if ((param_4 & 1) != 0) {
      bVar10 = false;
      uVar7 = 0;
      plVar8 = plVar9;
      do {
        plVar6 = plVar8;
        if ((*param_3 & (uVar7 ^ 0xffffffffffffffff | 0x120df)) == 0) break;
        uVar5 = (ulong)*(uint *)(param_1 + 0x14) << 0x11 | 0x3ffc7e3fffe0000;
        if (param_1[0x10] != 0) {
          uVar5 = (ulong)*(uint *)(param_1 + 0x14) << 0x11;
        }
        local_68 = *param_3 & ~uVar7 & (uVar5 | 0x120df);
        FUN_02ed30dc(param_1 + 6,param_2,&local_68);
        FUN_02ed8e1c(param_1 + 3,param_2,&local_68);
        FUN_02ed30dc(param_1 + 9,param_2,&local_68);
        uVar7 = uVar5 | uVar7;
        if (plVar9 == (long *)0x0) {
          plVar6 = (long *)param_1[0x11];
          if (plVar6 == (long *)0x0) {
            plVar9 = (long *)0x0;
            goto LAB_02ed8a5c;
          }
          lVar4 = plVar6[0xd];
          if ((((lVar4 == 0) ||
               ((((*(int *)(lVar4 + 4) == 0 && (*(int *)(lVar4 + 0xc) == 0)) &&
                 (*(int *)(lVar4 + 0x14) == 0)) && (*(int *)(lVar4 + 0x1c) == 0)))) &&
              (((iVar1 = (**(code **)(*plVar6 + 0x88))(plVar6), iVar1 != 10 &&
                (*(char *)((long)plVar6 + 0xec) == '\0')) &&
               ((*(uint *)((long)plVar6 + 0xaa) & 0x780000) == 0)))) &&
             (((plVar6[0x11] != 0 && ((*(byte *)((long)plVar6 + 0xa2) & 0xe) == 0)) &&
              ((plVar6[0x19] == 0 &&
               (((*(uint *)((long)plVar6 + 0xaa) >> 0x12 & 1) == 0 && (plVar6[0x12] == 0)))))))) {
            bVar2 = 0;
            if ((ulong *)plVar6[7] != (ulong *)0x0) {
              if ((*(ulong *)plVar6[7] & 0x380000000020) != 0) goto LAB_02ed8a80;
              bVar2 = 0;
            }
          }
          else {
LAB_02ed8a80:
            uVar7 = uVar7 | 0x380000000020;
            bVar2 = 1;
          }
          bVar10 = (bool)(bVar10 | bVar2);
          plVar9 = plVar6;
        }
        else {
LAB_02ed8a5c:
          plVar6 = plVar8;
        }
        param_1 = (long *)param_1[0x10];
        plVar8 = plVar6;
      } while (param_1 != (long *)0x0);
      goto joined_r0x02ed8aa0;
    }
    uVar7 = 0;
    do {
      local_68 = *param_3 & (uVar7 ^ 0xffffffffffffffff);
      if (local_68 == 0) break;
      uVar5 = (ulong)*(uint *)(param_1 + 0x14) << 0x11 | 0x3ffc7e3fffe0000;
      if (param_1[0x10] != 0) {
        uVar5 = (ulong)*(uint *)(param_1 + 0x14) << 0x11;
      }
      local_68 = (uVar5 | 0x120df) & local_68;
      FUN_02ed30dc(param_1 + 6,param_2,&local_68);
      FUN_02ed8e1c(param_1 + 3,param_2,&local_68);
      FUN_02ed30dc(param_1 + 9,param_2,&local_68);
      param_1 = (long *)param_1[0x10];
      uVar7 = uVar5 | uVar7;
    } while (param_1 != (long *)0x0);
  }
  bVar10 = false;
  plVar6 = plVar9;
joined_r0x02ed8aa0:
  if (plVar9 != (long *)0x0) {
    uVar3 = *param_3;
    for (uVar5 = uVar3 & ((uVar7 | 0x3800000100bf) ^ 0xffffc7fffffeff40); uVar5 != 0;
        uVar5 = uVar3 & (uVar5 ^ 0xffffc7fffffeff40)) {
      if (bVar10) {
        while( true ) {
          uVar5 = 0;
          if (plVar6[0x11] != 0) {
            uVar5 = (ulong)*(uint *)(plVar6 + 0x14);
          }
          local_68 = (uVar7 ^ 0xffffffffff00bf) & uVar3 & (uVar5 << 0x11 | 0xffff9ffffd00bf);
          FUN_02ed30dc(plVar9 + 6,param_2,&local_68);
          FUN_02ed8e1c(plVar9 + 3,param_2,&local_68);
          FUN_02ed30dc(plVar9 + 0x2e,param_2,&local_68);
          FUN_02ed30dc(plVar6 + 9,param_2,&local_68);
          plVar6 = (long *)plVar6[0x11];
          if (plVar6 == (long *)0x0) break;
          uVar7 = uVar5 << 0x11 | uVar7;
          uVar3 = *param_3;
          plVar9 = plVar6;
          if ((uVar3 & ((uVar7 | 0x3800000100bf) ^ 0xffffc7fffffeff40)) == 0) {
            return;
          }
        }
        return;
      }
      lVar4 = plVar6[0x11];
      while( true ) {
        uVar5 = 0;
        if (lVar4 != 0) {
          uVar5 = (ulong)*(uint *)(plVar6 + 0x14);
        }
        local_68 = (uVar7 & 0xffffc7ffffffffdf ^ 0xffffffffff00bf) & uVar3 &
                   (uVar5 << 0x11 | 0xffff9ffffd00bf);
        FUN_02ed30dc(plVar9 + 6,param_2,&local_68);
        FUN_02ed8e1c(plVar9 + 3,param_2,&local_68);
        FUN_02ed30dc(plVar9 + 0x2e,param_2,&local_68);
        FUN_02ed30dc(plVar6 + 9,param_2,&local_68);
        plVar6 = (long *)plVar6[0x11];
        if (plVar6 == (long *)0x0) {
          return;
        }
        lVar4 = plVar6[0xd];
        uVar7 = uVar5 << 0x11 | uVar7 & 0xffffc7ffffffffdf;
        plVar9 = plVar6;
        if (((lVar4 != 0) &&
            ((((*(int *)(lVar4 + 4) != 0 || (*(int *)(lVar4 + 0xc) != 0)) ||
              (*(int *)(lVar4 + 0x14) != 0)) || (*(int *)(lVar4 + 0x1c) != 0)))) ||
           (((iVar1 = (**(code **)(*plVar6 + 0x88))(plVar6), iVar1 == 10 ||
             (*(char *)((long)plVar6 + 0xec) != '\0')) ||
            (((((*(uint *)((long)plVar6 + 0xaa) & 0x780000) != 0 ||
               ((lVar4 = plVar6[0x11], lVar4 == 0 || ((*(byte *)((long)plVar6 + 0xa2) & 0xe) != 0)))
               ) || (plVar6[0x19] != 0)) ||
             ((((*(uint *)((long)plVar6 + 0xaa) >> 0x12 & 1) != 0 || (plVar6[0x12] != 0)) ||
              (((ulong *)plVar6[7] != (ulong *)0x0 && ((*(ulong *)plVar6[7] & 0x380000000020) != 0))
              )))))))) break;
        uVar3 = *param_3;
        if ((uVar3 & ((uVar7 | 0x3800000100bf) ^ 0xffffc7fffffeff40)) == 0) {
          return;
        }
      }
      uVar5 = uVar7 | 0x3800000100bf;
      uVar7 = uVar7 | 0x380000000020;
      uVar3 = *param_3;
      bVar10 = true;
    }
  }
  return;
}


