/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02e34f40; name: FUN_02e34f40
 */


void FUN_02e34f40(long *param_1,long param_2,long param_3)

{
  void *__s;
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong __n;
  long lVar15;
  long lVar16;
  uint uVar17;
  uint local_74;
  
  if (*(int *)((long)param_1 + 0xc) == 0x11) {
    uVar12 = *(uint *)(param_2 + 0x1a0);
    uVar1 = *(int *)(param_2 + 0x14c) * 0xc;
    if (uVar12 == 0xffffffff) {
LAB_02e35138:
      *(uint *)(param_2 + 0x1a0) = uVar1;
      uVar12 = uVar1;
LAB_02e35144:
      *(uint *)(param_2 + 0x1a4) = uVar1;
    }
    else {
      if (uVar12 == 0) {
        if (*(short *)((long)param_1 + 0x12) == 0) {
          return;
        }
        goto LAB_02e35138;
      }
      if (*(short *)((long)param_1 + 0x12) != 0) goto LAB_02e35138;
      if (*(uint *)(param_2 + 0x1a4) < uVar1) {
        uVar12 = (uVar12 + uVar1) - *(uint *)(param_2 + 0x1a4);
        *(uint *)(param_2 + 0x1a0) = uVar12;
        goto LAB_02e35144;
      }
    }
    uVar11 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
    uVar1 = uVar12;
    if (uVar11 <= uVar12) {
      uVar1 = uVar11;
    }
    iVar8 = uVar12 - uVar1;
    *(int *)(param_2 + 0x1a0) = iVar8;
    uVar13 = (ulong)*(ushort *)((long)param_1 + 0x12);
    iVar5 = (uint)*(ushort *)(param_1 + 2) - (uint)*(ushort *)((long)param_1 + 0x12);
    if (iVar5 != 0) {
      bVar3 = *(byte *)(param_1 + 1);
      if (bVar3 == 0) {
        uVar13 = (ulong)(uint)*(ushort *)(param_1 + 2);
      }
      else {
        __n = (ulong)(uint)(iVar5 * 4);
        memset((void *)(*param_1 + uVar13 * 4),0,__n);
        uVar13 = (ulong)*(ushort *)(param_1 + 2);
        if (bVar3 != 1) {
          memset((void *)(*param_1 + uVar13 * 4 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,
                 __n);
          uVar13 = (ulong)*(ushort *)(param_1 + 2);
          if (bVar3 != 2) {
            memset((void *)(*param_1 + uVar13 * 8 + (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,
                   __n);
            uVar13 = (ulong)*(ushort *)(param_1 + 2);
            if (bVar3 != 3) {
              lVar16 = (ulong)bVar3 - 3;
              lVar15 = 0xc;
              do {
                memset((void *)(*param_1 + lVar15 * uVar13 +
                               (ulong)*(ushort *)((long)param_1 + 0x12) * 4),0,__n);
                uVar13 = (ulong)*(ushort *)(param_1 + 2);
                lVar15 = lVar15 + 4;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
        }
      }
      *(short *)((long)param_1 + 0x12) = (short)uVar13;
      iVar8 = *(int *)(param_2 + 0x1a0);
    }
    if (iVar8 != 0) {
      *(undefined4 *)((long)param_1 + 0xc) = 0x2d;
      uVar12 = (uint)uVar13;
      goto joined_r0x02e35128;
    }
  }
  else {
    *(undefined4 *)(param_2 + 0x1a0) = 0xffffffff;
    uVar13 = (ulong)*(ushort *)((long)param_1 + 0x12);
  }
  uVar12 = (uint)uVar13;
joined_r0x02e35128:
  if (0x1f < uVar12) {
    uVar1 = *(uint *)(param_1 + 1);
    uVar12 = uVar1 & 0xff;
    if (uVar12 != 0) {
      __s = (void *)(param_3 + uVar13 * 4);
      lVar15 = param_3 + (ulong)(uint)((int)uVar13 << 1) * 4;
      uVar2 = *(uint *)(param_2 + 0x1a8);
      uVar14 = 0;
      iVar8 = 0;
      uVar17 = 0;
      uVar11 = 0;
      uVar4 = uVar1 >> 0xc;
      local_74 = 0;
      uVar10 = 1;
      uVar9 = uVar1;
      if (uVar4 != 0) goto LAB_02e351a8;
      do {
        if ((uVar4 == 0) || (uVar17 != 3)) {
          uVar12 = local_74;
          local_74 = local_74 + 1;
LAB_02e351dc:
          lVar16 = *param_1 + (ulong)uVar12 * (ulong)*(ushort *)(param_1 + 2) * 4;
        }
        else {
          if ((uVar9 >> 0xf & 1) != 0) {
            uVar12 = uVar12 - 1;
            goto LAB_02e351dc;
          }
          lVar16 = 0;
        }
        bVar6 = uVar2 == uVar1;
        bVar7 = (uVar10 & *(uint *)(param_2 + 0x1a8) >> 0xc) != 0;
        if ((*(char *)(param_2 + 0x1b4) != '\0') && (bVar6 || bVar7)) {
          memset(__s,0,(ulong)(uint)((int)uVar13 << 2));
          FUN_02e34c70(*(undefined4 *)(param_2 + 0x118),lVar16,param_2,iVar8,0,param_3,__s,uVar13,
                       *(int *)((long)param_1 + 0xc) == 0x11,lVar15);
          FUN_02e34c70(*(undefined4 *)(param_2 + 0x134),lVar16,param_2,iVar8,1,param_3,__s,uVar13,
                       *(int *)((long)param_1 + 0xc) == 0x11,lVar15);
          iVar8 = iVar8 + 1;
        }
        if (*(char *)(param_2 + 0x151) != '\0') {
          FUN_02e253a0(*(long *)(param_2 + 0x100) + (ulong)uVar14 * 0x18,lVar16,uVar13);
          uVar14 = uVar14 + 1;
        }
        if ((*(char *)(param_2 + 0x1b4) != '\0' && (bVar6 || bVar7)) ||
           ((((uVar1 >> 0xd & 1) != 0 && (uVar17 == 1)) && (*(int *)(param_2 + 0x140) == 6)))) {
          FUN_02e0add0(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x144),
                       *(undefined4 *)(param_2 + 0x194),*(undefined4 *)(param_2 + 0x148),lVar16,__s,
                       uVar13);
        }
        else {
          FUN_02e35380(*(undefined4 *)(param_2 + 400),*(undefined4 *)(param_2 + 0x144),lVar16,uVar13
                      );
        }
        uVar11 = uVar11 + 1;
        uVar9 = *(uint *)(param_1 + 1);
        do {
          uVar12 = uVar9 & 0xff;
          uVar17 = uVar17 + 1;
          if (uVar12 <= uVar11) goto LAB_02e35318;
          uVar10 = 1 << (ulong)(uVar17 & 0x1f);
          if (uVar4 == 0) break;
LAB_02e351a8:
        } while ((uVar10 & uVar4) == 0);
      } while( true );
    }
LAB_02e35318:
    *(undefined8 *)(param_2 + 0x154) = *(undefined8 *)(param_2 + 0x108);
    *(undefined8 *)(param_2 + 0x15c) = *(undefined8 *)(param_2 + 0x110);
    *(undefined8 *)(param_2 + 0x174) = *(undefined8 *)(param_2 + 0x128);
    *(undefined8 *)(param_2 + 0x17c) = *(undefined8 *)(param_2 + 0x130);
    *(undefined8 *)(param_2 + 0x164) = *(undefined8 *)(param_2 + 0x118);
    *(undefined8 *)(param_2 + 0x16c) = *(undefined8 *)(param_2 + 0x120);
    *(undefined2 *)(param_2 + 0x19c) = *(undefined2 *)(param_2 + 0x150);
    *(undefined8 *)(param_2 + 0x18c) = *(undefined8 *)(param_2 + 0x140);
    *(undefined8 *)(param_2 + 0x194) = *(undefined8 *)(param_2 + 0x148);
    *(undefined8 *)(param_2 + 0x184) = *(undefined8 *)(param_2 + 0x138);
  }
  return;
}


