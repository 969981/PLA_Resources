/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 00870f58; name: FUN_00870f58
 */


void FUN_00870f58(long param_1)

{
  undefined2 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long local_88;
  int local_80 [8];
  
  if (*(int *)(param_1 + 0x7b8) == 0 || *(int *)(param_1 + 0x7b8) == 5) {
    return;
  }
  local_88 = 0;
  FUN_007ecf14(&local_88);
  lVar5 = local_88 - *(long *)(param_1 + 0x850);
  plVar3 = (long *)FUN_007ecfa4();
  lVar2 = 0;
  if (*plVar3 != 0) {
    lVar2 = lVar5 / *plVar3;
  }
  if (*(int *)(param_1 + 100) < lVar2) {
    *(long *)(param_1 + 0x850) = local_88;
    if (*(int *)(param_1 + 0x7b8) == 3) {
      uVar1 = *(undefined2 *)(param_1 + 0x60);
      FUN_007e3400(local_80);
      FUN_00874c48(param_1,2,local_80,uVar1,0);
      FUN_007e34a4(local_80);
    }
    else if (((*(int *)(param_1 + 0x7b8) == 2) && (*(char *)(param_1 + 0x74) == '\0')) &&
            ((**(code **)(**(long **)(param_1 + 0x78) + 0x18))
                       (local_80,*(long **)(param_1 + 0x78),0), local_80[0] == 0)) {
      *(undefined1 *)(param_1 + 0x74) = 1;
    }
  }
  lVar5 = 0;
  uVar6 = 0;
  lVar4 = *(long *)(param_1 + 0x860);
  lVar2 = param_1;
  do {
    if (lVar4 == 0) goto switchD_008710b4_default;
    switch(*(undefined4 *)(lVar2 + 0x858)) {
    case 0:
      if (*(int *)(param_1 + 0x7b8) == 4) {
        FUN_00875ad8(param_1,7,lVar4,*(undefined2 *)(lVar2 + 0x868));
LAB_00871078:
        FUN_007ecf14(lVar2 + 0x8f0);
        *(undefined4 *)(lVar2 + 0x858) = 1;
      }
      else if (*(int *)(param_1 + 0x7b8) == 1) {
        *(long *)(param_1 + 0x840) = local_88;
        *(long *)(param_1 + 0x850) = local_88;
        (**(code **)(**(long **)(param_1 + 0x78) + 0x18))(local_80,*(long **)(param_1 + 0x78),0);
        if (local_80[0] == 0) {
          *(undefined1 *)(param_1 + 0x74) = 1;
          *(undefined4 *)(param_1 + 0x7b8) = 2;
          goto joined_r0x00871268;
        }
      }
      break;
    case 1:
      lVar7 = local_88 - *(long *)(lVar2 + 0x8f0);
      plVar3 = (long *)FUN_007ecfa4();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar7 / *plVar3;
      }
      if (*(int *)(param_1 + 100) < lVar4) {
        FUN_00875ad8(param_1,7,*(undefined8 *)(lVar2 + 0x860),*(undefined2 *)(lVar2 + 0x868));
        goto LAB_00871078;
      }
      break;
    case 2:
      lVar7 = local_88 - *(long *)(lVar2 + 0x8f0);
      plVar3 = (long *)FUN_007ecfa4();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar7 / *plVar3;
      }
      if (*(int *)(param_1 + 100) < lVar4) {
        if (*(char *)(lVar2 + 0x8e8) != '\0') {
          FUN_00874c48(param_1,3,lVar2 + 0x870,uVar6 & 0xffffffff,*(undefined2 *)(lVar2 + 0x868));
        }
        if (*(char *)(lVar2 + 0x8e9) != '\0') {
          FUN_00874c48(param_1,4,lVar2 + 0x890,uVar6 & 0xffffffff,*(undefined2 *)(lVar2 + 0x868));
        }
        FUN_007ecf14(lVar2 + 0x8f0);
      }
      if ((*(char *)(lVar2 + 0x8e8) != '\0') || (*(char *)(lVar2 + 0x8e9) != '\0')) break;
      FUN_007ecf14(lVar2 + 0x8f0);
      *(undefined4 *)(lVar2 + 0x858) = 3;
      FUN_007ecf14(param_1 + 0x840);
joined_r0x00871268:
      if (uVar6 == 0x16) {
        return;
      }
      goto LAB_00871090;
    case 3:
      lVar7 = local_88 - *(long *)(lVar2 + 0x8f0);
      plVar3 = (long *)FUN_007ecfa4();
      lVar4 = 0;
      if (*plVar3 != 0) {
        lVar4 = lVar7 / *plVar3;
      }
      if (*(int *)(param_1 + 100) < lVar4) {
        FUN_00874c48(param_1,10,lVar2 + 0x870,*(undefined2 *)(param_1 + 0x60),
                     *(undefined2 *)(lVar2 + 0x868));
        FUN_008749a8(param_1,0xc,lVar2 + 0x890,*(undefined2 *)(lVar2 + 0x868));
        *(long *)(lVar2 + 0x8f0) = local_88;
        goto joined_r0x00871268;
      }
    }
switchD_008710b4_default:
    if (uVar6 == 0x16) {
      return;
    }
LAB_00871090:
    lVar5 = lVar5 + 0xb0;
    uVar6 = uVar6 + 1;
    lVar2 = param_1 + lVar5;
    lVar4 = *(long *)(lVar2 + 0x860);
  } while( true );
}


