/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 007f605c; name: FUN_007f605c
 */


void FUN_007f605c(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_98 [16];
  undefined *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  char local_74;
  undefined8 local_70;
  undefined4 local_68;
  uint local_64;
  
  uVar1 = FUN_007fa1bc();
  if ((uVar1 & 1) != 0) {
    return;
  }
  switch(*(undefined1 *)(param_2 + 2)) {
  case 0x11:
    (**(code **)(*param_1 + 0x370))(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x12:
    FUN_007f8864(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x13:
    FUN_007f892c(param_1,param_2);
    lVar3 = param_1[0x230];
    break;
  default:
    goto switchD_007f60a4_caseD_14;
  case 0x20:
    FUN_007f8c78(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x21:
    if (*(char *)((long)param_1 + 0x284) == '\0') {
      FUN_007fe25c(&local_88,*param_2,*(undefined4 *)((long)param_2 + 0xc),0x21,param_1);
      local_88 = PTR_DAT_043775a0 + 0x10;
      uVar1 = FUN_007fe558(&local_88);
      if ((uVar1 & 1) != 0) {
        if ((((*(int *)((long)param_2 + 0xc) == local_70._4_4_ + (int)local_70) && (local_74 == '!')
             ) && (*(uint *)((long)param_1 + 100) < local_64)) &&
           (uVar1 = (**(code **)(*param_1 + 0x348))(param_1,&local_88), (uVar1 & 1) != 0)) {
          (**(code **)(*param_1 + 0x340))(auStack_98,param_1,&local_88);
          lVar3 = param_1[0x230];
          break;
        }
      }
    }
    goto switchD_007f60a4_caseD_14;
  case 0x30:
    FUN_007f98f0(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x31:
    FUN_007f9ab8(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x32:
    FUN_007f8fa0(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x33:
    FUN_007f943c(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    break;
  case 0x40:
    FUN_007f8ba8(param_1,param_2);
    lVar3 = param_1[0x230];
    break;
  case 0x41:
    FUN_007f9cdc(param_1,param_2);
    lVar3 = param_1[0x230];
    break;
  case 0x50:
    FUN_007f8da8(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    goto joined_r0x007f6294;
  case 0x51:
    FUN_007f8ed8(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    goto joined_r0x007f6294;
  case 0x80:
    FUN_007f9bdc(param_1,param_2,param_3);
    lVar3 = param_1[0x230];
    goto joined_r0x007f6294;
  case 0x81:
    local_78 = *(undefined4 *)((long)param_2 + 0xc);
    uStack_80 = *param_2;
    local_68 = 0;
    local_74 = -0x80;
    local_88 = PTR_DAT_04377598 + 0x10;
    local_70 = 4;
    FUN_007fd53c(&local_88);
switchD_007f60a4_caseD_14:
    lVar3 = param_1[0x230];
joined_r0x007f6294:
    if (lVar3 == 0) {
      return;
    }
    goto LAB_007f62f8;
  }
  if (lVar3 != 0) {
LAB_007f62f8:
    uVar1 = (**(code **)(*param_1 + 0x180))(param_1);
    if (((uVar1 & 1) != 0) && (*(short *)((long)param_1 + 0x114e) != 0)) {
      lVar3 = 0;
      uVar1 = 0;
      do {
        uVar2 = FUN_007f0f48(*(long *)(param_1[0x11] + uVar1 * 8) + 0x10,param_3);
        if ((uVar2 & 1) != 0) {
          if ((short)uVar1 < 0) {
            return;
          }
          uVar1 = FUN_007f0ee4(*(long *)(param_1[0x11] + (lVar3 >> 0x2d)) + 0x10);
          if ((uVar1 & 1) == 0) {
            return;
          }
          local_88 = (undefined *)0x0;
          FUN_007ecf14(&local_88);
          *(undefined **)(param_1[0x230] + (lVar3 >> 0x30) * 8) = local_88;
          return;
        }
        uVar1 = uVar1 + 1;
        lVar3 = lVar3 + 0x1000000000000;
      } while (uVar1 < *(ushort *)((long)param_1 + 0x114e));
    }
  }
  return;
}


