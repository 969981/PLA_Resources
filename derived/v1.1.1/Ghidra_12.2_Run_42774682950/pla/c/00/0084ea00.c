/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 0084ea00; name: FUN_0084ea00
 */


/* WARNING: Type propagation algorithm not settling */

void FUN_0084ea00(undefined8 param_1,long *param_2,int *param_3,undefined8 param_4,
                 undefined4 *param_5,uint param_6,uint param_7)

{
  size_t __n;
  undefined *puVar1;
  ulong uVar2;
  ulong *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined *local_a48;
  undefined8 local_a40;
  byte local_a38;
  uint local_a34;
  undefined1 auStack_a30 [9];
  undefined1 auStack_a27 [1431];
  int local_490 [4];
  undefined4 local_480 [2];
  byte local_478;
  byte local_477;
  undefined1 auStack_274 [508];
  ulong local_78 [2];
  undefined4 local_68 [2];
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((char)param_2[0x97] != '\0') {
    if (*param_3 != 0) {
      FUN_008428d0(local_480);
      if ((param_7 & 1) != 0) {
        local_478 = local_478 | 1;
      }
      (**(code **)(*param_2 + 0x60))(local_490,param_2,local_480,auStack_274);
      if (local_490[0] == 0) {
        local_a48 = PTR_DAT_04377fb0 + 0x10;
        memset(&local_a34,0,4);
        local_a40 = 0;
        local_a38 = 0;
        memset(&local_a34,0,4);
        local_a60 = local_a60 & 0xffffffffffff0000;
        local_a58 = 0;
        local_a50 = 0;
        local_a40 = 0;
        local_a38 = 0;
        memset(&local_a34,0,4);
        puVar1 = PTR_DAT_043773c0;
        local_a40 = CONCAT26(local_a40._6_2_,0xffff00000000);
        bVar8 = true;
        local_a40 = (ulong)CONCAT61(CONCAT42((int)((ulong)local_a40 >> 0x20),
                                             (ushort)local_477 * 0x15 + 2),
                                    *(undefined1 *)((long)param_2 + 0x36)) << 8;
        lVar5 = param_2[0x7f];
        uVar6 = 0;
        do {
          if (lVar5 != 0) {
            lVar5 = FUN_008551bc(*(undefined8 *)puVar1);
            plVar7 = *(long **)(lVar5 + 0x10);
            uVar2 = (**(code **)(*plVar7 + 0x48))(plVar7);
            if (((uVar2 & 1) == 0) ||
               (uVar2 = (**(code **)(*plVar7 + 0x50))(plVar7), (uVar2 & 1) == 0)) {
              uVar2 = uVar6 >> 5 & 7;
              uVar4 = 1 << (ulong)((uint)uVar6 & 0x1f);
              if ((param_3[uVar2] & uVar4) == 0) {
                bVar8 = false;
                goto joined_r0x0084ec34;
              }
            }
            else {
              uVar4 = 1 << (ulong)((uint)uVar6 & 0x1f);
              uVar2 = uVar6 >> 5 & 7;
            }
            *(uint *)(auStack_a30 + uVar2 * 4 + -4) =
                 *(uint *)(auStack_a30 + uVar2 * 4 + -4) | uVar4;
          }
joined_r0x0084ec34:
          if (uVar6 == 0x17) goto LAB_0084ec38;
          lVar5 = param_2[uVar6 + 0x80];
          uVar6 = uVar6 + 1;
        } while( true );
      }
      puVar3 = (ulong *)local_490;
      goto LAB_0084eadc;
    }
    *(undefined1 *)(param_2 + 0x97) = 0;
    local_a60 = 0;
    FUN_007ecf14(&local_a60);
    param_2[0x98] = local_a60;
  }
  local_a60 = local_a60 & 0xffffffff00000000;
  local_480[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)&local_a60 | 4),(Result *)local_480);
  puVar3 = &local_a60;
  goto LAB_0084eadc;
LAB_0084ec38:
  if (local_a34 == 0) {
    if (*param_3 == 0xffffff) {
LAB_0084ed6c:
      *(undefined1 *)(param_2 + 0x97) = 0;
      local_78[0] = 0;
      FUN_007ecf14(local_78);
      param_2[0x98] = local_78[0];
    }
LAB_0084ed84:
    local_78[0] = local_78[0] & 0xffffffff00000000;
  }
  else {
    local_a38 = (**(code **)(*param_2 + 0x38))(param_2);
    local_68[0] = 0;
    local_a40 = CONCAT26((short)param_2[6],(undefined6)local_a40);
    FUN_00843160(local_78,&local_a48,auStack_a30,local_68,0x5a0);
    uVar6 = (ulong)local_477;
    __n = uVar6 * 0x15 + 2;
    uVar2 = (ulong)(local_a38 + 0x1f >> 3) & 0x3c;
    if ((uint)__n <= 0x597U - (int)uVar2) {
      memcpy(auStack_a27 + uVar2,auStack_274,__n);
      uVar6 = (ulong)local_477;
      uVar2 = (ulong)(local_a38 + 0x1f >> 3 & 0x3c);
    }
    local_a50 = CONCAT44(local_a50._4_4_,(int)uVar6 + (uint)local_477 * 0x14 + (int)uVar2 + 0xb);
    if (*(char *)((long)param_2 + 0x51c) != '\0') {
      FUN_00846d20(local_78,param_2[0x9a],auStack_a30);
      FUN_007ee660(local_490,local_78);
      if (local_490[0] == 0) {
        uVar4 = *(uint *)(param_2[0x9a] + 0x30);
        local_a50 = CONCAT44(local_a50._4_4_,uVar4);
        memcpy(auStack_a30,*(void **)(param_2[0x9a] + 0x28),(ulong)uVar4);
        local_a60._0_2_ = CONCAT11(1,(undefined1)local_a60);
      }
    }
    if (param_6 < (uint)local_a50) {
      local_78[0] = CONCAT44(local_78[0]._4_4_,0x4c0d);
    }
    else {
      memset(local_78,0,4);
      memset(local_78,0xff,4);
      local_78[0] = local_78[0] & 0xffffffff00ffffff;
      uVar6 = (**(code **)(*param_2 + 0x50))(param_2,local_78,param_4,&local_a60,2);
      if ((uVar6 & 1) != 0) {
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = (uint)local_a50;
        }
        if (bVar8) goto LAB_0084ed6c;
        goto LAB_0084ed84;
      }
      local_78[0] = CONCAT44(local_78[0]._4_4_,0x4c0d);
    }
  }
  puVar3 = local_78;
  local_68[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)puVar3 | 4),(Result *)local_68);
LAB_0084eadc:
  FUN_007ee578(param_1,puVar3);
  return;
}


