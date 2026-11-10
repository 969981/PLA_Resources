/* Recovered by Ghidra 12.2, not original Nintendo source.
 * PLA v1.1.1 original ELF SHA256: 260bd03043d6f147723739fe350230f6fac8a9cc49f59ae18e1af0757c4b6794
 * Ghidra function entry: 027f7fe8; name: FUN_027f7fe8
 */


void FUN_027f7fe8(long param_1,char param_2,uint param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char local_7c [4];
  undefined1 auStack_78 [8];
  char *local_70;
  char *pcStack_68;
  undefined8 local_60;
  long *local_58;
  
  pcVar1 = *(char **)(param_1 + 0x118);
  uVar2 = *(ulong *)(param_1 + 0x120);
  local_70 = pcVar1 + uVar2;
  if (uVar2 != 0) {
    cVar5 = *pcVar1;
    pcVar6 = pcVar1;
    uVar8 = uVar2;
    while ((pcVar1 = pcVar6, cVar5 != param_2 && (uVar8 = uVar8 - 1, pcVar1 = local_70, uVar8 != 0))
          ) {
      cVar5 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    }
  }
  if (local_70 == pcVar1) {
    local_7c[0] = param_2;
    if (uVar2 < *(ulong *)(param_1 + 0x128)) {
      FUN_027fb6d0(param_1 + 0xf8,local_70,local_7c);
      *(long *)(param_1 + 0x120) = *(long *)(param_1 + 0x120) + 1;
    }
    else {
      FUN_027fb60c(auStack_78,param_1 + 0xf8,&local_70,1,local_7c);
    }
    cVar5 = local_7c[0];
    lVar9 = *(long *)(param_1 + 200);
    uVar3 = *(undefined4 *)(lVar9 + 0x4e0);
    local_70 = &DAT_753f74378b49da9c;
    pcStack_68 = "View_Top";
    local_60 = 8;
    local_58 = (long *)0x0;
    uVar7 = FUN_027f4740(*(undefined8 *)(lVar9 + 0x4c8),&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    iVar4 = *(int *)(lVar9 + 0x4e0);
    *(int *)(lVar9 + 0x4e0) = iVar4 + 1;
    FUN_02804ebc(uVar7,iVar4,cVar5);
    local_70 = &DAT_753f74378b49da9c;
    pcStack_68 = "View_Top";
    local_60 = 8;
    local_58 = (long *)0x0;
    uVar7 = FUN_027f4740(*(undefined8 *)(*(long *)(param_1 + 200) + 0x4c8),&local_70);
    if (local_58 != (long *)0x0) {
      (**(code **)(*local_58 + 0x20))();
    }
    FUN_02805934(uVar7,uVar3,param_3 & 1);
  }
  return;
}


