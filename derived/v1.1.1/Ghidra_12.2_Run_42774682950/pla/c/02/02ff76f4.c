/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02ff76f4; name: FUN_02ff76f4
 */


/* WARNING: Removing unreachable block (ram,0x02ff79c8) */

void FUN_02ff76f4(undefined8 *param_1,long param_2,int param_3,long *param_4)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long local_90;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  
  FUN_02fecc2c();
  *param_1 = &PTR_LAB_042b8af8;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 0x40);
  uVar1 = *(undefined1 *)(param_2 + 0x41);
  plVar7 = param_1 + 9;
  *plVar7 = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)((long)param_1 + 0x41) = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  uVar8 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x13] = *(undefined8 *)(param_2 + 0x98);
  param_1[0x15] = uVar8;
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x12] = uVar8;
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0xb0);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  if (param_3 == 0) {
    local_80 = 0;
    local_78 = -0x8000000000000000;
    FUN_032c2320(auStack_70);
    puVar2 = PTR_PTR_0434a080;
    plVar7 = &local_80;
    if (param_4 != (long *)0x0) {
      plVar7 = param_4;
    }
    lVar10 = 0;
    do {
      plVar11 = (long *)(param_2 + 0x48 + lVar10);
      lVar9 = *plVar11;
      local_88 = 0;
      if (lVar9 != 0) {
        local_88 = lVar9 + (long)plVar11;
      }
      if (local_88 == 0) {
        lVar9 = 0;
LAB_02ff79dc:
        *(undefined8 *)((long)param_1 + lVar10 + 0x48) = 0;
      }
      else {
        lVar9 = FUN_02f79850(plVar7,&local_88);
        if ((lVar9 == 0) ||
           ((int)(*(uint *)(lVar9 + 4) | ((int)lVar9 - (int)plVar7[2]) * 0x20000000) < 0)) {
          (**(code **)(DAT_0442d3b0 + (ulong)*(byte *)(local_88 + 0x18) * 0x200 + 0x50))
                    (&local_90,local_88,0,plVar7);
          lVar9 = local_90;
          uVar4 = FUN_02f798f0(plVar7,&local_88);
          iVar6 = (int)uVar4;
          if ((int)plVar7[1] == iVar6) {
            lVar5 = *plVar7;
            if ((int)(*(uint *)((long)plVar7 + 0xc) & 0x3fffffff) <= iVar6) {
              lVar5 = FUN_02f799f8(puVar2,iVar6 + 1,lVar5,uVar4,(long)plVar7 + 0xc);
              uVar4 = (ulong)*(uint *)(plVar7 + 1);
              *plVar7 = lVar5;
            }
            plVar11 = (long *)(lVar5 + (long)(int)uVar4 * 0x10);
            *plVar11 = local_88;
            plVar11[1] = lVar9;
            if (lVar9 != 0) {
              FUN_032d645c(lVar9);
            }
            *(int *)(plVar7 + 1) = iVar6 + 1;
          }
          else {
            plVar11 = (long *)(*plVar7 + ((long)(uVar4 << 0x20) >> 0x1c) + 8);
            lVar5 = *plVar11;
            if (lVar5 != lVar9) {
              if (lVar9 == 0) {
                *plVar11 = 0;
              }
              else {
                FUN_032d645c(lVar9);
                lVar5 = *plVar11;
                *plVar11 = lVar9;
              }
              if (lVar5 != 0) {
                FUN_032d647c();
              }
            }
          }
        }
        else {
          lVar9 = FUN_02f79850(plVar7,&local_88);
          if ((lVar9 == 0) ||
             (plVar11 = (long *)(*plVar7 + (long)*(int *)(lVar9 + 4) * 0x10 + 8), *plVar11 == 0)) {
            lVar9 = 0;
          }
          else {
            FUN_032d645c();
            lVar9 = *plVar11;
          }
        }
        FUN_032d645c(lVar9);
        if (lVar9 == 0) goto LAB_02ff79dc;
        *(long *)((long)param_1 + lVar10 + 0x48) = lVar9 - ((long)param_1 + lVar10 + 0x48);
      }
      if (lVar9 != 0) {
        FUN_032d647c(lVar9);
      }
      lVar10 = lVar10 + 8;
    } while (lVar10 != 0x40);
    FUN_032c20d0(auStack_70);
    if ((int)local_78 != 0) {
      lVar9 = local_80 + -8;
      lVar10 = (long)(int)local_78 << 4;
      do {
        if (*(long *)(lVar9 + lVar10) != 0) {
          FUN_032d647c();
        }
        lVar10 = lVar10 + -0x10;
      } while (lVar10 != 0);
    }
    lVar10 = local_78;
    uVar3 = local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < lVar10) && (local_80 != 0)) {
      FUN_032cf244(puVar2,local_80,0x10,uVar3 & 0x3fffffff);
    }
  }
  else {
    lVar10 = *(long *)(param_2 + 0x48);
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x48 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar10 = *(long *)(param_2 + 0x50);
    plVar7 = param_1 + 10;
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x50 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar10 = *(long *)(param_2 + 0x58);
    plVar7 = param_1 + 0xb;
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x58 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar10 = *(long *)(param_2 + 0x60);
    plVar7 = param_1 + 0xc;
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x60 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar10 = *(long *)(param_2 + 0x68);
    plVar7 = param_1 + 0xd;
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x68 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar10 = *(long *)(param_2 + 0x70);
    plVar7 = param_1 + 0xe;
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x70 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar10 = *(long *)(param_2 + 0x78);
    plVar7 = param_1 + 0xf;
    if (lVar10 == 0) {
      *plVar7 = 0;
    }
    else {
      lVar10 = param_2 + 0x78 + (lVar10 - (long)plVar7);
      *plVar7 = lVar10;
      if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
        FUN_032d645c();
      }
    }
    lVar9 = *(long *)(param_2 + 0x80);
    plVar7 = param_1 + 0x10;
    lVar10 = 0;
    if (lVar9 != 0) {
      lVar10 = param_2 + 0x80 + (lVar9 - (long)plVar7);
    }
    *plVar7 = lVar10;
    if ((lVar10 != 0) && (lVar10 + (long)plVar7 != 0)) {
      FUN_032d645c();
      return;
    }
  }
  return;
}


