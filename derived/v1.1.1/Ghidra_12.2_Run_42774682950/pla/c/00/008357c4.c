/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 008357c4; name: FUN_008357c4
 */


void FUN_008357c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_88 [16];
  undefined4 local_78 [2];
  long local_70;
  long local_68;
  
  lVar1 = FUN_00855004(*(undefined8 *)PTR_DAT_043773c0);
  lVar7 = *(long *)(lVar1 + 0x20);
  if (lVar7 != lVar1 + 0x18) {
    if (*(int *)(param_1 + 0x784) == 0) {
      do {
        lVar8 = *(long *)(lVar7 + 0x10);
        if (*(char *)(lVar8 + 0x78) == '\0') {
LAB_00835830:
          lVar7 = *(long *)(lVar7 + 8);
        }
        else {
          lVar2 = FUN_008473ec(param_1);
          if (lVar2 != 0) {
            lVar2 = FUN_008473ec(param_1);
            lVar3 = FUN_00847388(param_1);
            if (lVar2 == lVar3) {
              *(undefined4 *)(lVar8 + 0x3c) = 3;
              *(undefined1 *)(lVar8 + 0x78) = 0;
              FUN_0083ce28(*(undefined8 *)(param_1 + 200),*(undefined8 *)(lVar8 + 0x30));
              uVar4 = FUN_00839e9c(param_1 + 0x860,*(undefined8 *)(lVar8 + 0x30),
                                   *(undefined2 *)(lVar8 + 0x38));
              if ((uVar4 & 1) == 0) {
                FUN_0083a0ec(param_1 + 0x860,*(undefined8 *)(lVar8 + 0x30),
                             *(undefined2 *)(lVar8 + 0x38));
                if (*(code **)(param_1 + 0x778) != (code *)0x0) {
                  local_70 = CONCAT44(local_70._4_4_,1);
                  local_68 = lVar8;
                  (**(code **)(param_1 + 0x778))(&local_70);
                }
              }
              *(undefined1 *)(param_1 + 0x792) = 1;
              goto LAB_00835830;
            }
          }
          lVar2 = FUN_008473ec(param_1);
          if ((lVar2 == 0) || (lVar2 = FUN_00847388(param_1), lVar2 == 0)) goto LAB_00835830;
          lVar2 = FUN_008473ec(param_1);
          lVar3 = FUN_00847388(param_1);
          if (lVar2 == lVar3) goto LAB_00835830;
          uVar4 = FUN_007e5f0c(*(undefined8 *)(param_1 + 0xc0));
          if ((uVar4 & 1) != 0) {
            return;
          }
          local_70 = 0;
          FUN_007ecf14(&local_70);
          lVar2 = local_70 - *(long *)(lVar8 + 0x88);
          plVar5 = (long *)FUN_007ecfa4();
          lVar8 = 0;
          if (*plVar5 != 0) {
            lVar8 = lVar2 / *plVar5;
          }
          if (lVar8 < 0x2329) goto LAB_00835830;
          local_70 = CONCAT44(local_70._4_4_,0x8c52);
          uVar6 = *(undefined8 *)PTR_DAT_04377550;
          local_78[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&local_70 | 4),(Result *)local_78);
          FUN_007ee578(auStack_88,&local_70);
          FUN_0082a7d4(uVar6,auStack_88,3);
          lVar7 = *(long *)(lVar7 + 8);
        }
        if (lVar7 == lVar1 + 0x18) {
          return;
        }
        if (*(int *)(param_1 + 0x784) != 0) {
          return;
        }
      } while( true );
    }
  }
  return;
}


