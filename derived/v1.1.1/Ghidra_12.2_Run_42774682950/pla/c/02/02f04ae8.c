/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f04ae8; name: FUN_02f04ae8
 */


int FUN_02f04ae8(long *param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  undefined4 *puVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 auStack_70 [2];
  long *local_68;
  
  puVar15 = auStack_70;
  uVar4 = (**(code **)(*param_1 + 0x78))();
  if ((uVar4 & 1) == 0) {
    return 0x34;
  }
  plVar5 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
  lVar6 = *plVar5;
  if (lVar6 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    lVar8 = lVar6;
    do {
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar12 = uVar12 + 1;
    } while (lVar8 != 0);
    if (uVar12 != 0) {
      puVar15 = (undefined4 *)((long)auStack_70 - ((ulong)uVar12 * 4 + 0xf & 0x7fffffff0));
      puVar9 = puVar15;
      do {
        puVar13 = puVar9 + 1;
        *puVar9 = *(undefined4 *)(lVar6 + 0x38);
        lVar6 = *(long *)(lVar6 + 0x10);
        puVar9 = puVar13;
      } while (lVar6 != 0);
      puVar13 = puVar13 + -(ulong)uVar12;
      goto LAB_02f04bbc;
    }
  }
  puVar13 = (undefined4 *)0x0;
LAB_02f04bbc:
  bVar1 = false;
  iVar11 = 1;
  if (param_2 != 0) {
    local_68 = param_1;
    param_1 = local_68;
    do {
      uVar4 = 0;
      if ((puVar13 != (undefined4 *)0x0) && (uVar4 = 0, uVar12 != 0)) {
        uVar4 = 0;
        do {
          if (puVar13[uVar4] == *param_3) break;
          uVar4 = uVar4 + 1;
        } while (uVar12 != uVar4);
      }
      local_68 = param_1;
      if ((uint)uVar4 == uVar12) {
        bVar1 = true;
        lVar6 = (**(code **)(*param_1 + 0x60))(param_1,*param_3,1);
        if (lVar6 == 0) {
          iVar11 = 0x34;
          break;
        }
        uVar7 = (undefined1)param_3[2];
        bVar2 = 1;
      }
      else {
        uVar12 = uVar12 - 1;
        puVar13[uVar4 & 0xffffffff] = puVar13[uVar12];
        iVar3 = *param_3;
        plVar5 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
        do {
          lVar6 = *plVar5;
          plVar5 = (long *)(lVar6 + 0x10);
        } while (*(int *)(lVar6 + 0x38) != iVar3);
        uVar7 = (undefined1)param_3[2];
        bVar2 = bVar1 | (uint)*(byte *)(lVar6 + 0x40) != (param_3[2] & 0xffU);
      }
      *(undefined1 *)(lVar6 + 0x40) = uVar7;
      puVar15 = (undefined4 *)
                ((long)puVar15 - ((ulong)*(uint *)(lVar6 + 0x34) * 4 + 0xf & 0x7fffffff0));
      if (*(int *)(lVar6 + 0x30) == 0) {
        uVar4 = 0;
        iVar3 = param_3[1];
      }
      else {
        lVar8 = *(long *)(lVar6 + 0x28);
        uVar4 = 0;
        do {
          plVar5 = (long *)(lVar8 + 8);
          lVar8 = lVar8 + 0x10;
          puVar15[uVar4] = *(undefined4 *)(*plVar5 + 0x10);
          uVar4 = uVar4 + 1;
        } while (lVar8 != *(long *)(lVar6 + 0x28) + (ulong)*(uint *)(lVar6 + 0x30) * 0x10);
        iVar3 = param_3[1];
      }
      if (iVar3 != 0) {
        uVar14 = 0;
        if ((int)uVar4 != 0) goto LAB_02f04d38;
LAB_02f04d74:
        uVar10 = 0;
        iVar3 = (int)uVar4;
        if (iVar3 != 0) goto LAB_02f04d64;
LAB_02f04d04:
        iVar3 = FUN_02f048a4(lVar6,*param_4,param_4[1],0);
        if (iVar3 != 1) {
          iVar11 = iVar3;
        }
        bVar2 = 1;
        do {
          uVar14 = uVar14 + 1;
          param_4 = param_4 + 2;
          if ((uint)param_3[1] <= uVar14) break;
          if ((int)uVar4 == 0) goto LAB_02f04d74;
LAB_02f04d38:
          iVar3 = (int)uVar4;
          uVar10 = 0;
          do {
            if (puVar15[uVar10] == *param_4) break;
            uVar10 = uVar10 + 1;
          } while ((uVar4 & 0xffffffff) != uVar10);
          if ((int)uVar10 == iVar3) goto LAB_02f04d04;
LAB_02f04d64:
          uVar4 = (ulong)(iVar3 - 1);
          puVar15[uVar10 & 0xffffffff] = puVar15[uVar4];
        } while( true );
      }
      bVar1 = (bool)(bVar2 | (int)uVar4 != 0);
      if ((int)uVar4 != 0) {
        uVar4 = uVar4 & 0xffffffff;
        puVar9 = puVar15;
        do {
          FUN_02f04728(lVar6,*puVar9);
          uVar4 = uVar4 - 1;
          puVar9 = puVar9 + 1;
        } while (uVar4 != 0);
      }
      param_2 = param_2 + -1;
      param_3 = param_3 + 3;
      param_1 = local_68;
    } while (param_2 != 0);
  }
  if (uVar12 != 0) {
    uVar4 = (ulong)uVar12;
    do {
      (**(code **)(*param_1 + 0x58))(param_1,*puVar13,0);
      uVar4 = uVar4 - 1;
      puVar13 = puVar13 + 1;
    } while (uVar4 != 0);
  }
  if (uVar12 != 0 || bVar1) {
    FUN_02f04094(param_1);
  }
  return iVar11;
}


