/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f0ffbc; name: FUN_02f0ffbc
 */


/* WARNING: Type propagation algorithm not settling */

int FUN_02f0ffbc(long *param_1,long param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  char local_ac [4];
  undefined4 local_a8 [6];
  undefined4 local_90;
  int local_8c;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  long *local_70;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  uint local_5c;
  long *local_58;
  
  lVar11 = *(long *)(param_3 + 2);
  plVar7 = param_1;
  if ((*(byte *)((long)param_1 + 0xab) >> 4 & 1) == 0) {
    do {
      plVar10 = (long *)plVar7[0x10];
      if (plVar10 == (long *)0x0) break;
      plVar7 = plVar10;
    } while ((*(byte *)((long)plVar10 + 0xab) >> 4 & 1) == 0);
  }
  bVar13 = *(byte *)((long)plVar7 + 0xc1) & 0xf;
  local_88 = param_2;
  bVar12 = bVar13;
  if (bVar13 == 3) {
    if ((lVar11 == 0) || (iVar5 = (**(code **)(*param_1 + 0x20))(param_1), iVar5 == 9)) {
      bVar13 = 2;
      bVar12 = 2;
    }
    else {
      uVar8 = (**(code **)(*param_1 + 0x230))(param_1,lVar11);
      bVar12 = 1;
      if ((uVar8 & 1) != 0) {
        bVar12 = 2;
      }
      bVar13 = 2;
    }
  }
  FUN_02f0fb64(local_a8,param_1,*(undefined8 *)(param_3 + 4),&local_90);
  local_8c = 0x21;
  iVar5 = FUN_02f10e60(local_a8[0]);
  if (iVar5 == 2) {
    return 3;
  }
  if (*(short *)(param_2 + 0x1a) == 8) {
    iVar6 = FUN_02f11a50(&local_88,param_3);
    local_ac[0] = '\0';
    if (iVar6 == 1) {
      bVar4 = true;
      param_2 = local_88;
      goto LAB_02f1006c;
    }
    plVar7 = (long *)0x0;
    bVar4 = false;
LAB_02f1053c:
    if (plVar7 == (long *)0x0) {
      if (bVar4) {
        local_78 = *(undefined8 *)(param_3 + 4);
        local_68 = 1;
        local_80 = local_80 & 0xffffffff00000000;
        local_64 = CONCAT22(local_64._2_2_,0x100);
        local_70 = (long *)0x0;
        (**(code **)(*param_1 + 0x128))(param_1,&local_80);
      }
      goto LAB_02f10404;
    }
    if (!bVar4) {
LAB_02f103bc:
      *(uint *)((long)plVar7 + 0x2a3) = *(uint *)((long)plVar7 + 0x2a3) | 0x100000;
    }
  }
  else {
    bVar4 = false;
LAB_02f1006c:
    local_ac[0] = '\0';
    plVar7 = (long *)(**(code **)(**(long **)(param_3 + 2) + 0x28))
                               (*(long **)(param_3 + 2),param_1,param_2,param_3,local_a8);
    if (plVar7 == (long *)0x0) {
      if (bVar4) {
        if (param_2 != 0) {
          FUN_02ef63b4(param_2);
          (*DAT_0442d150)(0,param_2);
        }
        plVar7 = (long *)0x0;
        bVar4 = false;
        local_88 = 0;
        iVar6 = 2;
      }
      else {
        plVar7 = (long *)0x0;
        bVar4 = false;
        iVar6 = 2;
      }
      goto LAB_02f1053c;
    }
    plVar10 = plVar7 + 3;
    if (*param_3 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(*(long *)(param_3 + 0x22) + 0x10);
    }
    iVar6 = FUN_02e9c220(local_90,plVar10,uVar9,bVar12 != 1,&local_8c,param_3 + 0x2a,local_ac);
    if (iVar6 != 1) {
      bVar4 = false;
      plVar10 = DAT_0440a170;
joined_r0x02f10318:
      DAT_0440a170 = plVar10;
      if ((plVar7 == (long *)0x0) || (uVar1 = param_3[0xd], uVar1 == 0)) goto LAB_02f1053c;
      nn::os::LockMutex((MutexType *)(plVar10 + 3));
      uVar2 = *(uint *)(plVar10 + 1);
      if (uVar2 != 0) {
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = uVar1 / uVar2;
        }
        for (lVar11 = *(long *)(*plVar10 + (ulong)(uVar1 - uVar3 * uVar2) * 8); lVar11 != 0;
            lVar11 = *(long *)(lVar11 + 0x68)) {
          if (*(uint *)(lVar11 + 0x4c) == uVar1) {
            *(int *)(lVar11 + 0x20) = *(int *)(lVar11 + 0x20) + 1;
            break;
          }
        }
      }
      nn::os::UnlockMutex((MutexType *)(plVar10 + 3));
      if (bVar4) goto LAB_02f103cc;
      goto LAB_02f103bc;
    }
    local_78 = *(undefined8 *)(param_3 + 4);
    local_68 = 1;
    local_80 = CONCAT44(local_80._4_4_,local_a8[0]);
    local_64 = (uint)CONCAT21((short)((uint)local_64 >> 0x10),
                              (bVar13 == 0 || local_ac[0] == '\0') &&
                              (*(uint *)((long)plVar7 + 0x2a3) & 0x2000000) == 0) << 8;
    if ((*(byte *)(plVar7 + 0x33) >> 6 & 1) == 0) {
      local_70 = plVar7 + 0x5c;
    }
    else {
      local_70 = (long *)0x0;
    }
    iVar6 = (**(code **)(*param_1 + 0x120))(param_1,&local_80,1,0);
    if ((iVar6 == 2) ||
       (((iVar5 == 0x50 || (iVar6 == 0x50)) &&
        (*(ushort *)(plVar7 + 0x33) = *(ushort *)(plVar7 + 0x33) | 0x100, bVar12 == 1)))) {
      iVar6 = 3;
      local_8c = 0x20;
joined_r0x02f1035c:
      bVar4 = true;
      plVar10 = DAT_0440a170;
      goto joined_r0x02f10318;
    }
    iVar6 = (**(code **)(*plVar7 + 0x18))(plVar7);
    if (iVar6 != 1) goto joined_r0x02f1035c;
    if ((*(ushort *)(plVar7 + 0x33) & 1) == 0) {
      (**(code **)(*plVar10 + 0x50))(plVar10,param_3 + 0x2a);
      lVar11 = plVar7[0xd];
joined_r0x02f10280:
      if (lVar11 != 0) goto LAB_02f10284;
LAB_02f1018c:
      if (param_3[0x9a] != 0) goto LAB_02f10290;
LAB_02f10194:
      lVar11 = *(long *)(param_3 + 0x22);
    }
    else {
      if ((*(ushort *)(plVar7 + 0x33) >> 4 & 1) != 0) {
        (**(code **)(*plVar10 + 0x58))(plVar10);
        lVar11 = plVar7[0xd];
        goto joined_r0x02f10280;
      }
      if (plVar7[0xd] == 0) goto LAB_02f1018c;
LAB_02f10284:
      FUN_02ec6df4();
      if (param_3[0x9a] == 0) goto LAB_02f10194;
LAB_02f10290:
      local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)((long)plVar7 + 0x2d4));
      local_70 = (long *)plVar7[0x5b];
      local_68 = (undefined4)plVar7[7];
      local_80 = plVar7[5];
      local_60 = (undefined4)plVar7[0x58];
      local_64 = (int)plVar7[0x42];
      local_5c = *(uint *)((long)plVar7 + 0x2a3) >> 0x1f;
      local_58 = plVar7;
      FUN_02ec5034(DAT_0440a180,param_3 + 0x58,&local_80,plVar7 + 0xd);
      lVar11 = *(long *)(param_3 + 0x22);
    }
    if (lVar11 != 0) {
      if (plVar7[0xd] != 0) {
        FUN_02ec708c(plVar7[0xd],1,lVar11 + 0x28);
        lVar11 = *(long *)(param_3 + 0x22);
      }
      *(long **)(lVar11 + 0x10) = plVar7 + 0x21;
    }
    uVar9 = *(undefined8 *)(param_3 + 6);
    iVar5 = param_3[0x20];
    FUN_02ecc0d0(plVar7);
    iVar6 = FUN_02ecc620(plVar7,uVar9,iVar5 == 1,0);
    if (iVar6 == 1) {
      plVar7[0x39] = 0;
      plVar10 = &DAT_0440ad48;
      if (DAT_0440ad48 != 0) {
        plVar10 = DAT_0440ad40 + 0x39;
      }
      *plVar10 = (long)plVar7;
      DAT_0440ad38 = DAT_0440ad38 + 1;
      DAT_0440ad40 = plVar7;
    }
    if (*(long *)(param_3 + 0x22) != 0) {
      *(long *)(*(long *)(param_3 + 0x22) + 8) = plVar7[0x44];
      **(long **)(param_3 + 0x22) = plVar7[0x43];
    }
    if (iVar6 == 1) {
      return 1;
    }
  }
LAB_02f103cc:
  (**(code **)(*plVar7 + 0x20))(plVar7,1);
  (**(code **)(*plVar7 + 8))(plVar7);
  (*DAT_0442d150)(0,plVar7);
LAB_02f10404:
  if (iVar6 == 3) {
    DAT_0440a170 = DAT_0440a170;
    DAT_0440a180 = DAT_0440a180;
    DAT_0440ad38 = DAT_0440ad38;
    DAT_0440ad40 = DAT_0440ad40;
    DAT_0440ad48 = DAT_0440ad48;
    DAT_0442d150 = DAT_0442d150;
    return 3;
  }
  return iVar6;
}


