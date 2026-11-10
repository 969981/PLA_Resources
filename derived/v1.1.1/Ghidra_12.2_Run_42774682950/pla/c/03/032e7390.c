/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 032e7390; name: FUN_032e7390
 */


/* WARNING: Removing unreachable block (ram,0x032e8014) */
/* WARNING: Removing unreachable block (ram,0x032e7efc) */
/* WARNING: Removing unreachable block (ram,0x032e7f00) */
/* WARNING: Removing unreachable block (ram,0x032e7f20) */
/* WARNING: Removing unreachable block (ram,0x032e8020) */
/* WARNING: Removing unreachable block (ram,0x032e7f40) */
/* WARNING: Removing unreachable block (ram,0x032e7f88) */
/* WARNING: Removing unreachable block (ram,0x032e7f4c) */
/* WARNING: Removing unreachable block (ram,0x032e7f98) */
/* WARNING: Removing unreachable block (ram,0x032e7f68) */
/* WARNING: Removing unreachable block (ram,0x032e7fa4) */
/* WARNING: Removing unreachable block (ram,0x032e7f70) */
/* WARNING: Removing unreachable block (ram,0x032e7fb4) */
/* WARNING: Removing unreachable block (ram,0x032e7fc0) */
/* WARNING: Removing unreachable block (ram,0x032e7f74) */
/* WARNING: Removing unreachable block (ram,0x032e7f7c) */
/* WARNING: Removing unreachable block (ram,0x032e7e6c) */
/* WARNING: Removing unreachable block (ram,0x032e7e80) */
/* WARNING: Removing unreachable block (ram,0x032e7e8c) */
/* WARNING: Removing unreachable block (ram,0x032e7e98) */
/* WARNING: Removing unreachable block (ram,0x032e7ea8) */
/* WARNING: Removing unreachable block (ram,0x032e7eb4) */
/* WARNING: Removing unreachable block (ram,0x032e7ef4) */
/* WARNING: Removing unreachable block (ram,0x032e7fe0) */

int FUN_032e7390(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auStack_d0 [16];
  ulong local_c0;
  undefined1 auStack_b8 [16];
  ulong local_a8;
  long *local_a0;
  long *local_98;
  long *local_80;
  long *local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  pbVar6 = (byte *)param_2[1];
  bVar1 = *pbVar6;
  while ((bVar1 & 1) == 0) {
    pbVar6 = *(byte **)(pbVar6 + 8);
    bVar1 = *pbVar6;
  }
  switch(*(uint *)(pbVar6 + 0x10) & 0x1f) {
  case 0:
  case 1:
    return 0;
  case 2:
    goto LAB_032e74a0;
  case 3:
    pbVar6 = (byte *)param_3[1];
    if (pbVar6 == (byte *)0x0) {
      uVar10 = 0;
      uVar11 = 0;
    }
    else {
      pbVar7 = pbVar6;
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar6 + 8);
        bVar1 = *pbVar7;
        while ((bVar1 & 1) == 0) {
          pbVar7 = *(byte **)(pbVar7 + 8);
          bVar1 = *pbVar7;
        }
      }
      if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 3) {
        uVar10 = *param_3;
        uVar11 = param_3[2];
        if ((uVar11 & 1) != 0) {
          FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
          uVar11 = param_3[2];
        }
      }
      else {
        uVar10 = 0;
        pbVar6 = (byte *)0x0;
        uVar11 = 0;
      }
    }
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],auStack_b8 + 0x80);
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,pbVar6,auStack_b8 + 0x80);
    iVar2 = FUN_032e47ac(auStack_b8 + 0x78,0);
    if ((uVar11 & 1) != 0) {
      FUN_032e0c40(plVar9);
    }
    return iVar2;
  case 4:
    pbVar6 = (byte *)param_3[1];
    if (pbVar6 != (byte *)0x0) {
      pbVar7 = pbVar6;
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar6 + 8);
        bVar1 = *pbVar7;
        while ((bVar1 & 1) == 0) {
          pbVar7 = *(byte **)(pbVar7 + 8);
          bVar1 = *pbVar7;
        }
      }
      if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 4) {
        uVar10 = *param_3;
        uVar11 = param_3[2];
        if ((uVar11 & 1) != 0) {
          FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
          uVar11 = param_3[2];
        }
        goto LAB_032e7754;
      }
      pbVar6 = (byte *)0x0;
    }
    uVar11 = 0;
    uVar10 = 0;
LAB_032e7754:
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],auStack_b8 + 0x68);
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,pbVar6,auStack_b8 + 0x68);
    if ((uVar11 & 1) != 0) {
      FUN_032e0c40(plVar9);
    }
    return 0;
  case 5:
    pbVar6 = (byte *)param_3[1];
    if (pbVar6 != (byte *)0x0) {
      pbVar7 = pbVar6;
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar6 + 8);
        bVar1 = *pbVar7;
        while ((bVar1 & 1) == 0) {
          pbVar7 = *(byte **)(pbVar7 + 8);
          bVar1 = *pbVar7;
        }
      }
      if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 5) {
        uVar10 = *param_3;
        uVar11 = param_3[2];
        if ((uVar11 & 1) != 0) {
          FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
          uVar11 = param_3[2];
        }
        goto LAB_032e78a8;
      }
      pbVar6 = (byte *)0x0;
    }
    uVar11 = 0;
    uVar10 = 0;
LAB_032e78a8:
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],auStack_b8 + 0x80);
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,pbVar6,auStack_b8 + 0x80);
    if ((uVar11 & 1) != 0) {
      FUN_032e0c40(plVar9);
    }
    return 0;
  case 6:
    pbVar6 = (byte *)param_3[1];
    if (pbVar6 != (byte *)0x0) {
      pbVar7 = pbVar6;
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar6 + 8);
        bVar1 = *pbVar7;
        while ((bVar1 & 1) == 0) {
          pbVar7 = *(byte **)(pbVar7 + 8);
          bVar1 = *pbVar7;
        }
      }
      if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 6) {
        uVar10 = *param_3;
        uVar11 = param_3[2];
        if ((uVar11 & 1) != 0) {
          FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
          uVar11 = param_3[2];
        }
        goto LAB_032e79b8;
      }
      pbVar6 = (byte *)0x0;
    }
    uVar10 = 0;
    uVar11 = 0;
LAB_032e79b8:
    lVar3 = (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x60))
                      ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1]);
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    lVar4 = (**(code **)(*plVar9 + 0x60))(plVar9,uVar10,pbVar6);
    if ((uVar11 & 1) != 0) {
      FUN_032e0c40(plVar9);
    }
    return (uint)(0 < lVar3 - lVar4) + (int)(lVar3 - lVar4 >> 0x3f);
  case 7:
    pbVar6 = (byte *)param_3[1];
    if (pbVar6 == (byte *)0x0) {
      uVar11 = 0;
    }
    else {
      pbVar7 = pbVar6;
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar6 + 8);
        bVar1 = *pbVar7;
        while ((bVar1 & 1) == 0) {
          pbVar7 = *(byte **)(pbVar7 + 8);
          bVar1 = *pbVar7;
        }
      }
      if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 7) {
        uVar11 = param_3[2];
        if ((uVar11 & 1) != 0) {
          FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
          uVar11 = param_3[2];
        }
      }
      else {
        uVar11 = 0;
        pbVar6 = (byte *)0x0;
      }
    }
    FUN_032e2dd4(&local_80,param_2[1],0);
    FUN_032e2dd4(&local_a0,pbVar6,0);
LAB_032e7ae0:
    do {
      do {
        if (local_80 + 1 < local_78) {
          local_80 = local_80 + 1;
        }
        else {
          uVar5 = FUN_032e2de0(&local_80);
          if ((uVar5 & 1) == 0) {
LAB_032e7c28:
            iVar2 = -1;
            goto LAB_032e7c30;
          }
        }
        uVar8 = (uint)*(undefined8 *)*local_80;
      } while (((uVar8 >> 0x11 & 1) == 0) ||
              (uVar8 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555),
              uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
              (*(ushort *)
                (*local_80 +
                (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) >> 5 & 1
              ) == 0));
      do {
        if (local_a0 + 1 < local_98) {
          local_a0 = local_a0 + 1;
        }
        else {
          uVar5 = FUN_032e2de0(&local_a0);
          if ((uVar5 & 1) == 0) goto LAB_032e7c28;
        }
        uVar8 = (uint)*(undefined8 *)*local_a0;
      } while (((uVar8 >> 0x11 & 1) == 0) ||
              (uVar8 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555),
              uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
              (*(ushort *)
                (*local_a0 +
                (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) >> 5 & 1
              ) == 0));
      FUN_032e4868(auStack_b8,param_2,*local_80);
      FUN_032e4868(auStack_d0,param_3,*local_a0);
      iVar2 = FUN_032e64a8(param_1,auStack_b8,auStack_d0);
      if ((local_c0 & 1) != 0) {
        FUN_032e0c40(local_c0 & 0xfffffffffffffffe);
        if ((local_a8 & 1) == 0) goto LAB_032e7c20;
LAB_032e7d78:
        FUN_032e0c40(local_a8 & 0xfffffffffffffffe);
        if (iVar2 != 0) break;
        goto LAB_032e7ae0;
      }
      if ((local_a8 & 1) != 0) goto LAB_032e7d78;
LAB_032e7c20:
    } while (iVar2 == 0);
    goto LAB_032e7d2c;
  case 8:
    pbVar6 = (byte *)param_3[1];
    if (pbVar6 == (byte *)0x0) {
      uVar11 = 0;
      uVar10 = 0;
    }
    else {
      pbVar7 = pbVar6;
      if ((*pbVar6 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar6 + 8);
        bVar1 = *pbVar7;
        while ((bVar1 & 1) == 0) {
          pbVar7 = *(byte **)(pbVar7 + 8);
          bVar1 = *pbVar7;
        }
      }
      if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 8) {
        uVar10 = *param_3;
        uVar11 = param_3[2];
        if ((uVar11 & 1) != 0) {
          FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
          uVar11 = param_3[2];
        }
      }
      else {
        uVar11 = 0;
        pbVar6 = (byte *)0x0;
        uVar10 = 0;
      }
    }
    (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x50))
              ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],auStack_b8 + 0x58);
    local_70 = 0;
    local_68 = 0;
    plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    (**(code **)(*plVar9 + 0x50))(plVar9,uVar10,pbVar6,&local_80);
    iVar2 = -(int)local_70;
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    if ((local_68 & 1) != 0) {
      FUN_032e0c40(local_68 & 0xfffffffffffffffe);
    }
    if ((uVar11 & 1) != 0) {
      FUN_032e0c40(plVar9);
    }
    return iVar2;
  default:
    FUN_03320b50(0x261011c5,"../..\\Common/Base/Reflect/Visitor/Detail/hkReflectVisitorDetail.h",
                 0x3b,"Bad var visitor switch",(long)register0x00000008 + -0x28);
    return 0;
  }
  while( true ) {
    uVar8 = (uint)*(undefined8 *)*local_a0;
    if (((uVar8 >> 0x11 & 1) != 0) &&
       (uVar8 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555),
       uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
       (*(ushort *)
         (*local_a0 + (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) >>
        5 & 1) != 0)) break;
LAB_032e7c30:
    if (local_a0 + 1 < local_98) {
      local_a0 = local_a0 + 1;
    }
    else {
      uVar5 = FUN_032e2de0(&local_a0);
      if ((uVar5 & 1) == 0) {
        iVar2 = 1;
        goto LAB_032e7cb0;
      }
    }
  }
  goto LAB_032e7d2c;
LAB_032e74a0:
  pbVar6 = (byte *)param_3[1];
  if (pbVar6 != (byte *)0x0) {
    pbVar7 = pbVar6;
    if ((*pbVar6 & 1) == 0) {
      pbVar7 = *(byte **)(pbVar6 + 8);
      bVar1 = *pbVar7;
      while ((bVar1 & 1) == 0) {
        pbVar7 = *(byte **)(pbVar7 + 8);
        bVar1 = *pbVar7;
      }
    }
    if ((*(ulong *)(pbVar7 + 0x10) & 0x1f) == 2) {
      uVar10 = *param_3;
      uVar11 = param_3[2];
      if ((uVar11 & 1) != 0) {
        FUN_032e0c28(uVar11 & 0xfffffffffffffffe);
        uVar11 = param_3[2];
      }
      goto LAB_032e752c;
    }
    pbVar6 = (byte *)0x0;
  }
  uVar11 = 0;
  uVar10 = 0;
LAB_032e752c:
  (**(code **)(*(long *)(param_2[2] & 0xfffffffffffffffe) + 0x38))
            ((long *)(param_2[2] & 0xfffffffffffffffe),*param_2,param_2[1],auStack_b8 + 0x70);
  plVar9 = (long *)(uVar11 & 0xfffffffffffffffe);
  (**(code **)(*plVar9 + 0x38))(plVar9,uVar10,pbVar6,auStack_b8 + 0x80);
  if ((uVar11 & 1) != 0) {
    FUN_032e0c40(plVar9);
  }
  return 0;
  while( true ) {
    uVar8 = (uint)*(undefined8 *)*local_80;
    if (((uVar8 >> 0x11 & 1) != 0) &&
       (uVar8 = (uVar8 & 0x1ffff) - (uVar8 >> 1 & 0x5555),
       uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
       (*(ushort *)
         (*local_80 + (ulong)((uVar8 + (uVar8 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) * 8 + 0x12) >>
        5 & 1) != 0)) break;
LAB_032e7cb0:
    if (local_80 + 1 < local_78) {
      local_80 = local_80 + 1;
    }
    else {
      uVar5 = FUN_032e2de0(&local_80);
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
        break;
      }
    }
  }
LAB_032e7d2c:
  if ((uVar11 & 1) != 0) {
    FUN_032e0c40(uVar11 & 0xfffffffffffffffe);
  }
  return iVar2;
}


