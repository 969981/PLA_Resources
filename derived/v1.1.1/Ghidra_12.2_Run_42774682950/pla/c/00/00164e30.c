/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00164e30; name: FUN_00164e30
 */


void FUN_00164e30(long param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [16];
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  
  lVar7 = *(long *)(param_1 + 0x30);
  FUN_0016a400();
  FUN_00165360(param_1,auStack_80,0);
  if (*(int *)(param_1 + 0x10) != 0x113) {
    FUN_00166920(param_1,0x113);
                    /* WARNING: Does not return */
    pcVar2 = (code *)UndefinedInstructionException(0,0x16501c);
    (*pcVar2)();
  }
  FUN_0016a400(param_1);
  if ((*(uint *)(param_1 + 0x10) | 8) == 0x10a) {
    FUN_00168c20(*(undefined8 *)(param_1 + 0x30),auStack_80);
    local_56 = 0;
    local_58 = *(undefined1 *)(lVar7 + 0x3a);
    lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x58);
    local_60 = *(undefined4 *)(lVar6 + 0x28);
    uStack_5c = *(undefined4 *)(lVar6 + 0x18);
    local_57 = 0;
    local_68 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 **)(lVar7 + 0x18) = &local_68;
    FUN_00164c80(param_1,local_70);
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 < 0x120) goto LAB_00164f04;
    while (iVar5 == 0x120) {
      while( true ) {
        FUN_00163c30(param_1);
        iVar5 = *(int *)(param_1 + 0x10);
        if (0x11f < iVar5) break;
LAB_00164f04:
        if (iVar5 != 0x3b) {
          if (2 < iVar5 - 0x104U) goto LAB_00164f74;
          goto LAB_00164f18;
        }
      }
    }
    if (iVar5 == 0x121) {
LAB_00164f18:
      FUN_00165020(lVar7);
      return;
    }
LAB_00164f74:
    uVar3 = FUN_001670f0(lVar7);
  }
  else {
    FUN_00168820(*(undefined8 *)(param_1 + 0x30),auStack_80);
    local_56 = 0;
    local_58 = *(undefined1 *)(lVar7 + 0x3a);
    lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x58);
    local_60 = *(undefined4 *)(lVar6 + 0x28);
    uStack_5c = *(undefined4 *)(lVar6 + 0x18);
    local_57 = 0;
    local_68 = *(undefined8 *)(lVar7 + 0x18);
    *(undefined8 **)(lVar7 + 0x18) = &local_68;
    uVar3 = local_6c;
  }
  do {
    iVar5 = *(int *)(param_1 + 0x10);
    uVar1 = iVar5 - 0x104;
    if (uVar1 < 0x1e && (1 << (ulong)(uVar1 & 0x1f) & 0x20020007U) != 0) break;
    FUN_00163c30(param_1);
  } while (iVar5 != 0x112);
  FUN_00165020(lVar7);
  if ((*(uint *)(param_1 + 0x10) & 0xfffffffe) == 0x104) {
    uVar4 = FUN_001670f0(lVar7);
    FUN_00167050(lVar7,param_2,uVar4);
  }
  FUN_00167200(lVar7,uVar3);
  return;
}


