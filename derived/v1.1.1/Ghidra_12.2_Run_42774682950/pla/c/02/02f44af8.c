/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 02f44af8; name: FUN_02f44af8
 */


undefined8 FUN_02f44af8(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 uVar11;
  long lVar12;
  long lVar13;
  undefined **local_98;
  uint local_90;
  undefined4 uStack_8c;
  ulong local_88;
  undefined1 local_80;
  undefined1 local_78;
  undefined8 local_70;
  long *local_68;
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    if (*(long *)(lVar6 + 0x30) == 0) {
      *(long *)(lVar6 + 0x30) = param_1;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      *(long *)(param_1 + 8) = *(long *)(lVar6 + 0x30);
      *(long *)(lVar6 + 0x30) = param_1;
    }
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    if (*(long *)(param_1 + 0x10) != 0) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x60);
      goto LAB_02f44b54;
    }
  }
  uVar4 = FUN_02f37c08(param_1,param_3,param_2,param_4 & 1);
  if ((int)uVar4 != 1) {
    return uVar4;
  }
LAB_02f44b54:
  puVar9 = *(undefined8 **)(param_1 + 0x80);
  if (puVar9 != (undefined8 *)0x0) {
    uVar8 = *(uint *)(param_1 + 0x88);
    if (uVar8 != 0) {
      (**(code **)*puVar9)(puVar9);
      if ((((uVar8 != 1) && ((**(code **)puVar9[3])(puVar9 + 3), uVar8 != 2)) &&
          ((**(code **)puVar9[6])(puVar9 + 6), uVar8 != 3)) &&
         ((**(code **)puVar9[9])(puVar9 + 9), uVar8 != 4)) {
        lVar6 = (ulong)uVar8 * 0x18 + -0x60;
        puVar9 = puVar9 + 0xc;
        do {
          (**(code **)*puVar9)(puVar9);
          lVar6 = lVar6 + -0x18;
          puVar9 = puVar9 + 3;
        } while (lVar6 != 0);
      }
      puVar9 = *(undefined8 **)(param_1 + 0x80);
    }
    *(undefined4 *)(param_1 + 0x88) = 0;
    (*DAT_0442d150)(0,puVar9);
    *(undefined8 *)(param_1 + 0x80) = 0;
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  uVar8 = *(uint *)(*(long *)(param_1 + 0x78) + 0x128);
  uVar10 = (ulong)uVar8;
  if (uVar8 == 0) {
LAB_02f44ccc:
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) | 2;
    if (*(long *)(param_1 + 0x10) == 0) {
      uVar4 = FUN_02f44f28(param_1,1);
      if ((int)uVar4 == 1) {
        local_98 = (undefined **)0x0;
        local_90 = local_90 & 0xffffff00;
        *(byte *)(param_1 + 0xc0) = *(byte *)(param_1 + 0xc0) & 0xfe;
        if ((*(byte *)(param_1 + 0x5a) & 0xe) == 0) {
          uVar3 = FUN_02f4534c(param_1);
          local_68 = (long *)FUN_02f453f0(param_1,uVar3);
          if ((local_68 != (long *)0x0) &&
             (FUN_02f456cc(param_1,uVar3,&local_98,&local_68), local_68 != (long *)0x0)) {
            (**(code **)(*local_68 + 0x80))();
          }
        }
        uVar4 = 1;
      }
    }
    else {
      uVar4 = FUN_02f44f28(param_1,0);
    }
  }
  else {
    lVar6 = (*DAT_0442d138)(0,uVar10 * 0x18);
    *(long *)(param_1 + 0x80) = lVar6;
    if (lVar6 != 0) {
      lVar12 = 0;
      *(uint *)(param_1 + 0x8c) = uVar8;
      lVar6 = 0;
      lVar13 = uVar10 - 1;
      do {
        local_98 = &PTR_LAB_042ae990;
        uStack_8c = 0xffffffff;
        local_88 = 0;
        uVar2 = *(uint *)(param_1 + 0x88);
        uVar8 = (uint)uVar10;
        if (uVar2 < uVar8) {
joined_r0x02f44eb4:
          if (uVar2 < uVar8) {
            uVar8 = *(uint *)(param_1 + 0x88);
            *(uint *)(param_1 + 0x88) = uVar8 + 1;
            puVar9 = (undefined8 *)(*(long *)(param_1 + 0x80) + (ulong)uVar8 * 0x18);
            if (puVar9 != (undefined8 *)0x0) {
              lVar5 = *(long *)(param_1 + 0x80) + (ulong)uVar8 * 0x18;
              *puVar9 = &PTR_LAB_042ae990;
              *(undefined4 *)(lVar5 + 0xc) = 0xffffffff;
              *(undefined8 *)(lVar5 + 0x10) = 0;
              *(ulong *)(lVar5 + 8) = CONCAT44(uStack_8c,local_90);
              *(ulong *)(lVar5 + 0x10) = local_88;
            }
          }
        }
        else {
          iVar1 = uVar8 + (uVar8 >> 1);
          if (uVar8 == 0) {
            iVar1 = 1;
          }
          uVar8 = uVar8 + iVar1;
          lVar5 = (*DAT_0442d148)(0,*(undefined8 *)(param_1 + 0x80),(ulong)uVar8 * 0x18);
          if (lVar5 != 0) {
            *(long *)(param_1 + 0x80) = lVar5;
            *(uint *)(param_1 + 0x8c) = uVar8;
            goto joined_r0x02f44eb4;
          }
        }
        local_98 = &PTR_LAB_042ae990;
        FUN_02f0caf0(DAT_0440a130,&local_98);
        FUN_02f06bf0(DAT_0440a138,&local_98);
        lVar5 = *(long *)(param_1 + 0x80) + lVar12;
        *(undefined4 *)(lVar5 + 8) = 0;
        *(int *)(lVar5 + 0xc) = (int)lVar6;
        *(long *)(lVar5 + 0x10) = param_1;
        lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x148);
        if (lVar7 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(lVar7 + lVar6 * 4);
        }
        lVar7 = *(long *)(*(long *)(param_1 + 0x78) + 0x150);
        if (lVar7 == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(undefined1 *)(lVar7 + lVar6);
        }
        uVar4 = FUN_02f0869c(lVar5,uVar3,uVar11);
        if ((int)uVar4 != 1) {
          return uVar4;
        }
        local_98 = *(undefined ***)(*(long *)(param_1 + 0x60) + 0x30);
        local_90 = *(uint *)(*(long *)(param_1 + 0x60) + 0x2c);
        local_80 = 0xff;
        local_78 = 0xff;
        local_70 = 0;
        local_88 = local_88 & 0xffffffff00000000;
        uVar3 = FUN_02f088a8(lVar5,&local_98,uVar3,uVar11);
        *(undefined4 *)(lVar5 + 8) = uVar3;
        if (lVar13 == lVar6) goto LAB_02f44ccc;
        uVar10 = (ulong)*(uint *)(param_1 + 0x8c);
        lVar6 = lVar6 + 1;
        lVar12 = lVar12 + 0x18;
      } while( true );
    }
    uVar4 = 0x34;
  }
  return uVar4;
}


