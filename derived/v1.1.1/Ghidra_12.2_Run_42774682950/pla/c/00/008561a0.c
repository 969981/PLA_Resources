/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008561a0; name: FUN_008561a0
 */


void FUN_008561a0(int *param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  ErrorResultVariant *this;
  long *plVar4;
  long lVar5;
  int *piVar6;
  undefined4 local_a0 [8];
  int local_80 [6];
  undefined1 auStack_68 [8];
  int local_60 [2];
  int local_58 [2];
  undefined8 local_48;
  
  if (*(long *)(param_2 + 0x48) == 0) {
    if (*(long *)(param_2 + 0x50) != 0) {
      local_48 = 0;
      FUN_007ecf14(&local_48);
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)(local_58 + 8));
      FUN_007ee578(param_1,local_58);
      if (*(int *)(param_2 + 0x10) != 0) {
        do {
          lVar5 = 0;
          if (*(long *)(param_2 + 8) != 0) {
            lVar5 = *(long *)(param_2 + 8) + 0x10;
          }
          if (local_48 <= *(ulong *)(lVar5 + 0x650)) {
            return;
          }
          (**(code **)(**(long **)(param_2 + 0x50) + 0x38))
                    (local_58,*(long **)(param_2 + 0x50),lVar5);
          FUN_007ee660(param_1,local_58);
          FUN_007f07cc(lVar5);
          FUN_007e8fec(param_2,lVar5 + -0x10);
          FUN_007e8fc4(param_2 + 0x18,param_2 + 0x18,lVar5 + -0x10 + (long)*(int *)(param_2 + 0x2c))
          ;
          if (*param_1 != 0) {
            FUN_007ee578(auStack_68,param_1);
            uVar3 = FUN_007ec26c(auStack_68);
            if ((uVar3 & 1) == 0) {
              local_58[0] = 0x4c0d;
              this = (ErrorResultVariant *)((ulong)local_58 | 4);
              nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)(local_58 + 8));
              if (*param_1 != local_58[0]) {
                return;
              }
              local_58[0] = 0;
LAB_00856390:
              nn::err::ErrorResultVariant::ErrorResultVariant(this,(Result *)(local_58 + 8));
              FUN_007ee660(param_1,local_58);
              return;
            }
            if (*(char *)(lVar5 + 0x624) == '\0') {
              local_58[0] = 0xc47f;
              this = (ErrorResultVariant *)((ulong)local_58 | 4);
              goto LAB_00856390;
            }
            local_58[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)(local_58 + 8));
            FUN_007ee660(param_1,local_58);
          }
        } while (*(int *)(param_2 + 0x10) != 0);
      }
      return;
    }
  }
  else if (*(long *)(param_2 + 0x50) == 0) {
    if (*(int *)(param_2 + 0x6f0) == 0) {
      local_80[0] = 0;
      local_a0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
      piVar6 = local_80;
    }
    else {
      local_48 = 0;
      FUN_007ecf14(&local_48);
      local_80[0] = 0;
      local_a0[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
      FUN_007ee578(local_60,local_80);
      if (*(int *)(param_2 + 0x28) != 0) {
        do {
          (**(code **)(**(long **)(param_2 + 0x48) + 0x10))
                    (local_80,*(long **)(param_2 + 0x48),param_2 + 0x88);
          FUN_007ee660(local_60,local_80);
          if (local_60[0] != 0) {
            local_80[0] = 0x2c09;
            local_a0[0] = 0;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
            if (local_60[0] == local_80[0]) {
              local_80[0] = 0;
              local_a0[0] = 0;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_80 | 4),(Result *)local_a0);
              FUN_007ee660(local_60,local_80);
            }
            break;
          }
          FUN_007f0fc8(local_80,param_2 + 0x6b0);
          FUN_007f0fc8(local_a0,param_2 + 0x688);
          iVar2 = FUN_008560fc(param_2,local_80,local_a0);
          plVar4 = (long *)FUN_007ecfa4();
          *(ulong *)(param_2 + 0x6d8) = local_48 + *plVar4 * (long)iVar2;
          FUN_007e34a4(local_a0);
          FUN_007e34a4(local_80);
          if (*(int *)(param_2 + 0x28) == 0) break;
          lVar5 = FUN_007e9088(param_2 + 0x18);
          if (lVar5 == 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = lVar5 - *(int *)(param_2 + 0x2c);
          }
          lVar1 = lVar5 + 0x10;
          FUN_007f065c(lVar1);
          *(undefined8 *)(lVar5 + 0x660) = 0;
          FUN_007f0744(lVar1);
          FUN_007e8fa0(param_2,param_2,lVar5);
          FUN_007f0878(lVar1,param_2 + 0x88);
          *(undefined8 *)(lVar5 + 0x660) = *(undefined8 *)(param_2 + 0x6d8);
        } while (*(int *)(param_2 + 0x28) != 0);
      }
      piVar6 = local_60;
    }
    FUN_007ee578(param_1,piVar6);
    return;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)(local_58 + 0xc) | 4),(Result *)(local_58 + 0x10));
  FUN_007ee578(param_1,local_58 + 0xc);
  return;
}


